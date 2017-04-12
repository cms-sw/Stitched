add_subdirectory(bin)
if(BUILDTEST)
add_subdirectory(test)
endif()
add_subdirectory(plugins)
add_library(UtilitiesStorageFactory SHARED 
  src/IOInput.cc
  src/StorageMaker.cc
  src/StatisticsSenderService.cc
  src/StorageAccountProxy.cc
  src/File.cc
  src/UnixFile.cc
  src/UnixIOChannel.cc
  src/StorageAccount.cc
  src/RemoteFile.cc
  src/IOChannel.cc
  src/Throw.cc
  src/Storage.cc
  src/LocalFileSystem.cc
  src/StorageMakerFactory.cc
  src/IOOutput.cc
  src/LocalCacheFile.cc
  src/StorageFactory.cc
)

target_include_directories(UtilitiesStorageFactory PUBLIC ${Boost_INCLUDE_DIR})
target_include_directories(UtilitiesStorageFactory PUBLIC ${TBB_INCLUDE_DIRS})
target_compile_options(UtilitiesStorageFactory PUBLIC -D_FILE_OFFSET_BITS=64)
target_link_libraries(UtilitiesStorageFactory PUBLIC
  ${Boost_REGEX_LIBRARY_RELEASE}
  dl
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  FWCoreMessageLogger
  ${PYTHON_LIBRARY}
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  FWCoreUtilities
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  FWCoreServiceRegistry
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  FWCorePluginManager
  ${TBB_LIBRARIES}
  ${Boost_PYTHON_LIBRARY_RELEASE}
)

install( TARGETS UtilitiesStorageFactory EXPORT UtilitiesStorageFactory DESTINATION  lib )

