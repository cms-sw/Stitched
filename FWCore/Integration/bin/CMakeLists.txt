add_executable(cmsTestInterProcess
  interprocess.cc
)

set_target_properties( cmsTestInterProcess PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

add_dependencies( ALL_BINS cmsTestInterProcess)

target_include_directories(cmsTestInterProcess PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(cmsTestInterProcess PUBLIC
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

target_link_libraries(cmsTestInterProcess PUBLIC
Boost::program_options
FWCoreIntegration
FWCoreSharedMemory
FWCoreTestProcessor
Threads::Threads
crypt
dl
nsl
rt
)


add_python_rules(FWCore/Integration/bin/)

add_script_rules(FWCore/Integration/bin/)

install( TARGETS cmsTestInterProcess DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_BINDIR}  EXPORT stitched::)

add_executable(cmsTestInterProcessRandom
  interprocess_random.cc
)

set_target_properties( cmsTestInterProcessRandom PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

add_dependencies( ALL_BINS cmsTestInterProcessRandom)

target_include_directories(cmsTestInterProcessRandom PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(cmsTestInterProcessRandom PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CLHEP_INCLUDE_DIR}
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(cmsTestInterProcessRandom PUBLIC
Boost::program_options
FWCoreIntegration
FWCoreServices
FWCoreSharedMemory
FWCoreTestProcessor
Threads::Threads
crypt
dl
nsl
rt
)


add_python_rules(FWCore/Integration/bin/)

add_script_rules(FWCore/Integration/bin/)

install( TARGETS cmsTestInterProcessRandom DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_BINDIR}  EXPORT stitched::)

