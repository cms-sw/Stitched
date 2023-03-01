add_executable(TestRunnerFWCoreTFWLiteSelector
  TestRunnerFWCoreTFWLiteSelector.cpp
)

add_test(NAME TestRunnerFWCoreTFWLiteSelector_CTest COMMAND /bin/bash -x ${CMAKE_CURRENT_SOURCE_DIR}/run_all_t.sh)

add_test_properties(TestRunnerFWCoreTFWLiteSelector_CTest)

set_target_properties(TestRunnerFWCoreTFWLiteSelector PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS TestRunnerFWCoreTFWLiteSelector)

add_dependencies( TestRunnerFWCoreTFWLiteSelector ALL_PLUGINS)

target_include_directories(TestRunnerFWCoreTFWLiteSelector PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestRunnerFWCoreTFWLiteSelector PUBLIC
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

target_link_libraries(TestRunnerFWCoreTFWLiteSelector PUBLIC
FWCoreFWLite
FWCoreTFWLiteSelector
FWCoreUtilities
)


