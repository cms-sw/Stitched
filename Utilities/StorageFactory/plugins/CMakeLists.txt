add_library(UtilitiesStorageFactoryPlugins SHARED ${UtilitiesStorageFactoryPlugins_EXTRA_SOURCES}
  GsiFTPStorageMaker.cc
  HttpStorageMaker.cc
  LocalStorageMaker.cc
  StatisticsSenderServiceMaker.cc
  StormLCGStorageMaker.cc
  StormStorageMaker.cc
)

set_target_properties(UtilitiesStorageFactoryPlugins PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_LIBS UtilitiesStorageFactoryPlugins)

set_target_properties(UtilitiesStorageFactoryPlugins PROPERTIES PREFIX "plugin")

add_dependencies( ALL_PLUGINS UtilitiesStorageFactoryPlugins)

edm_write_config( UtilitiesStorageFactoryPlugins Utilities/StorageFactory)

target_include_directories(UtilitiesStorageFactoryPlugins PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(UtilitiesStorageFactoryPlugins PUBLIC
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

target_link_libraries(UtilitiesStorageFactoryPlugins PUBLIC
UtilitiesStorageFactory
XrdCl
XrdUtils
)


add_python_rules(Utilities/StorageFactory/plugins/)

add_script_rules(Utilities/StorageFactory/plugins/)

install( TARGETS UtilitiesStorageFactoryPlugins DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

