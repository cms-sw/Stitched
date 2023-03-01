add_library(UtilitiesXrdAdaptorPlugin SHARED ${UtilitiesXrdAdaptorPlugin_EXTRA_SOURCES}
  XrdStorageMaker.cc
)

set_target_properties(UtilitiesXrdAdaptorPlugin PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_LIBS UtilitiesXrdAdaptorPlugin)

set_target_properties(UtilitiesXrdAdaptorPlugin PROPERTIES PREFIX "plugin")

add_dependencies( ALL_PLUGINS UtilitiesXrdAdaptorPlugin)

edm_write_config( UtilitiesXrdAdaptorPlugin Utilities/XrdAdaptor)

target_include_directories(UtilitiesXrdAdaptorPlugin PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(UtilitiesXrdAdaptorPlugin PUBLIC
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

target_link_libraries(UtilitiesXrdAdaptorPlugin PUBLIC
UtilitiesStorageFactory
UtilitiesXrdAdaptor
)


add_python_rules(Utilities/XrdAdaptor/plugins/)

add_script_rules(Utilities/XrdAdaptor/plugins/)

install( TARGETS UtilitiesXrdAdaptorPlugin DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

