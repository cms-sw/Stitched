add_library(IOPoolTFileAdaptorPlugins SHARED ${IOPoolTFileAdaptorPlugins_EXTRA_SOURCES}
  module.cc
)

set_target_properties(IOPoolTFileAdaptorPlugins PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_LIBS IOPoolTFileAdaptorPlugins)

set_target_properties(IOPoolTFileAdaptorPlugins PROPERTIES PREFIX "plugin")

add_dependencies( ALL_PLUGINS IOPoolTFileAdaptorPlugins)

edm_write_config( IOPoolTFileAdaptorPlugins IOPool/TFileAdaptor)

target_include_directories(IOPoolTFileAdaptorPlugins PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(IOPoolTFileAdaptorPlugins PUBLIC
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

target_link_libraries(IOPoolTFileAdaptorPlugins PUBLIC
IOPoolTFileAdaptor
)


add_python_rules(IOPool/TFileAdaptor/plugins/)

add_script_rules(IOPool/TFileAdaptor/plugins/)

install( TARGETS IOPoolTFileAdaptorPlugins DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

