add_library(IOPoolStreamerPlugins SHARED ${IOPoolStreamerPlugins_EXTRA_SOURCES}
  Module.cc
  ParameterSetBlobProducer.cc
)

set_target_properties(IOPoolStreamerPlugins PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_LIBS IOPoolStreamerPlugins)

set_target_properties(IOPoolStreamerPlugins PROPERTIES PREFIX "plugin")

add_dependencies( ALL_PLUGINS IOPoolStreamerPlugins)

edm_write_config( IOPoolStreamerPlugins IOPool/Streamer)

target_include_directories(IOPoolStreamerPlugins PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(IOPoolStreamerPlugins PUBLIC
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
${XZ_INCLUDE_DIR}
${ZLIB_INCLUDE_DIR}
/usr/include
)

add_compile_options("-D_FILE_OFFSET_BITS=64")

target_link_libraries(IOPoolStreamerPlugins PUBLIC
FWCoreFramework
IOPoolStreamer
)


add_python_rules(IOPool/Streamer/plugins/)

add_script_rules(IOPool/Streamer/plugins/)

install( TARGETS IOPoolStreamerPlugins DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

