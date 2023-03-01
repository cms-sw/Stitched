add_subdirectory(bin)
if(BUILDTEST)
  add_subdirectory(test)
endif()

add_subdirectory(plugins)

add_library(UtilitiesStorageFactory SHARED ${UtilitiesStorageFactory_EXTRA_SOURCES}
  src/File.cc
  src/LocalCacheFile.cc
  src/LocalFileSystem.cc
  src/RemoteFile.cc
  src/StatisticsSenderService.cc
  src/Storage.cc
  src/StorageAccount.cc
  src/StorageAccountProxy.cc
  src/StorageFactory.cc
  src/StorageMaker.cc
  src/StorageMakerFactory.cc
  src/Throw.cc
  src/UnixFile.cc
)

set_target_properties(UtilitiesStorageFactory PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_LIBS UtilitiesStorageFactory)

target_include_directories(UtilitiesStorageFactory PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(UtilitiesStorageFactory PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${OPENSSL_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
/usr/include
)

add_compile_options("-D_FILE_OFFSET_BITS=64")

target_link_libraries(UtilitiesStorageFactory PUBLIC
${OPENSSL_CRYPTO_LIBRARY}
${OPENSSL_SSL_LIBRARY}
${TBB_LIBRARIES}
FWCoreMessageLogger
FWCorePluginManager
FWCoreServiceRegistry
FWCoreUtilities
FWCoreVersion
Threads::Threads
XrdCl
XrdUtils
crypt
dl
nsl
rt
)


add_python_rules(Utilities/StorageFactory)

add_script_rules(Utilities/StorageFactory)

install( TARGETS UtilitiesStorageFactory DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

