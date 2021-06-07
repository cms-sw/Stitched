add_executable(edmPluginDump
  dump.cc
)

set_target_properties( edmPluginDump PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

add_dependencies( ALL_BINS edmPluginDump)

target_include_directories(edmPluginDump PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(edmPluginDump PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(edmPluginDump PUBLIC
Boost::program_options
FWCorePluginManager
Threads::Threads
crypt
dl
nsl
rt
)


add_python_rules(FWCore/PluginManager/bin/)

add_script_rules(FWCore/PluginManager/bin/)

install( TARGETS edmPluginDump DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_BINDIR}  EXPORT stitched::)

add_executable(edmPluginRefresh
  refresh.cc
)

set_target_properties( edmPluginRefresh PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

add_dependencies( ALL_BINS edmPluginRefresh)

target_include_directories(edmPluginRefresh PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(edmPluginRefresh PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(edmPluginRefresh PUBLIC
Boost::program_options
FWCorePluginManager
Threads::Threads
crypt
dl
nsl
rt
)


add_python_rules(FWCore/PluginManager/bin/)

add_script_rules(FWCore/PluginManager/bin/)

install( TARGETS edmPluginRefresh DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_BINDIR}  EXPORT stitched::)

