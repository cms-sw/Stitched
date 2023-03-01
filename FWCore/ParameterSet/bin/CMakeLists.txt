add_executable(edmPluginHelp
  edmPluginHelp.cpp
)

set_target_properties( edmPluginHelp PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

add_dependencies( ALL_BINS edmPluginHelp)

target_include_directories(edmPluginHelp PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(edmPluginHelp PUBLIC
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

target_link_libraries(edmPluginHelp PUBLIC
Boost::program_options
FWCoreParameterSet
FWCorePluginManager
FWCoreUtilities
Threads::Threads
crypt
dl
nsl
rt
)


add_python_rules(FWCore/ParameterSet/bin/)

add_script_rules(FWCore/ParameterSet/bin/)

install( TARGETS edmPluginHelp DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_BINDIR}  EXPORT stitched::)

add_executable(edmWriteConfigs
  edmWriteConfigs.cpp
)

set_target_properties( edmWriteConfigs PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

add_dependencies( ALL_BINS edmWriteConfigs)

target_include_directories(edmWriteConfigs PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(edmWriteConfigs PUBLIC
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

target_link_libraries(edmWriteConfigs PUBLIC
Boost::program_options
FWCoreParameterSet
FWCorePluginManager
FWCoreUtilities
Threads::Threads
crypt
dl
nsl
rt
)


add_python_rules(FWCore/ParameterSet/bin/)

add_script_rules(FWCore/ParameterSet/bin/)

install( TARGETS edmWriteConfigs DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_BINDIR}  EXPORT stitched::)

