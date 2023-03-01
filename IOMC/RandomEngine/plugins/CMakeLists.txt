add_library(IOMCRandomEnginePlugins SHARED ${IOMCRandomEnginePlugins_EXTRA_SOURCES}
  Module.cc
  RandomEngineStateProducer.cc
  RandomFilter.cc
  RandomNumberGeneratorService.cc
)

set_target_properties(IOMCRandomEnginePlugins PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_LIBS IOMCRandomEnginePlugins)

set_target_properties(IOMCRandomEnginePlugins PROPERTIES PREFIX "plugin")

add_dependencies( ALL_PLUGINS IOMCRandomEnginePlugins)

edm_write_config( IOMCRandomEnginePlugins IOMC/RandomEngine)

target_include_directories(IOMCRandomEnginePlugins PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(IOMCRandomEnginePlugins PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CLHEP_INCLUDE_DIR}
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${GSL_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(IOMCRandomEnginePlugins PUBLIC
FWCoreFramework
FWCoreServiceRegistry
IOMCRandomEngine
)


add_python_rules(IOMC/RandomEngine/plugins/)

add_script_rules(IOMC/RandomEngine/plugins/)

install( TARGETS IOMCRandomEnginePlugins DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

