add_executable(Standalone
  Standalone.cpp
)

set_target_properties( Standalone PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

add_dependencies( ALL_BINS Standalone)

target_include_directories(Standalone PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(Standalone PUBLIC
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

target_link_libraries(Standalone PUBLIC
Boost::program_options
FWCoreMessageLogger
FWCoreMessageService
FWCoreParameterSetReader
FWCorePluginManager
FWCoreServiceRegistry
FWCoreUtilities
Threads::Threads
crypt
dl
nsl
rt
)


add_python_rules(FWCore/MessageService/bin/)

add_script_rules(FWCore/MessageService/bin/)

install( TARGETS Standalone DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_BINDIR}  EXPORT stitched::)

