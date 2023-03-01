add_executable(testFWCoreFWLite
  ref_t.cppunit.cpp
)

add_test(NAME testFWCoreFWLite_CTest COMMAND testFWCoreFWLite)

add_test_properties(testFWCoreFWLite_CTest)

set_target_properties(testFWCoreFWLite PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS testFWCoreFWLite)

add_dependencies( testFWCoreFWLite ALL_PLUGINS)

target_include_directories(testFWCoreFWLite PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(testFWCoreFWLite PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${CPPUNIT_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(testFWCoreFWLite PUBLIC
DataFormatsTestObjects
FWCoreFWLite
cppunit
)


add_executable(TestRunnerFWCoreFWLite
  TestRunnerFWCoreFWLite.cpp
)

add_test(NAME TestRunnerFWCoreFWLite_CTest COMMAND /bin/bash -x ${CMAKE_CURRENT_SOURCE_DIR}/run_all_t.sh)

add_test_properties(TestRunnerFWCoreFWLite_CTest)

set_target_properties(TestRunnerFWCoreFWLite PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS TestRunnerFWCoreFWLite)

add_dependencies( TestRunnerFWCoreFWLite ALL_PLUGINS)

target_include_directories(TestRunnerFWCoreFWLite PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestRunnerFWCoreFWLite PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${CPPUNIT_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(TestRunnerFWCoreFWLite PUBLIC
FWCoreFWLite
FWCoreUtilities
cppunit
)


