add_library(IOPoolOutputPlugins SHARED ${IOPoolOutputPlugins_EXTRA_SOURCES}
  Module.cc
)

set_target_properties(IOPoolOutputPlugins PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_LIBS IOPoolOutputPlugins)

set_target_properties(IOPoolOutputPlugins PROPERTIES PREFIX "plugin")

add_dependencies( ALL_PLUGINS IOPoolOutputPlugins)

edm_write_config( IOPoolOutputPlugins IOPool/Output)

target_include_directories(IOPoolOutputPlugins PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(IOPoolOutputPlugins PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(IOPoolOutputPlugins PUBLIC
IOPoolOutput
)


add_python_rules(IOPool/Output/plugins/)

add_script_rules(IOPool/Output/plugins/)

install( TARGETS IOPoolOutputPlugins DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

