add_executable(testDataFormatsFWLiteMakeInput
  TestRunnerDataFormatsFWLite.cpp
)

add_test(NAME testDataFormatsFWLiteMakeInput_CTest COMMAND /bin/bash -x ${CMAKE_CURRENT_SOURCE_DIR}/RefTest.sh)

add_test_properties(testDataFormatsFWLiteMakeInput_CTest)

set_target_properties(testDataFormatsFWLiteMakeInput PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS testDataFormatsFWLiteMakeInput)

add_dependencies( testDataFormatsFWLiteMakeInput ALL_PLUGINS)

target_include_directories(testDataFormatsFWLiteMakeInput PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(testDataFormatsFWLiteMakeInput PUBLIC
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

target_link_libraries(testDataFormatsFWLiteMakeInput PUBLIC
DataFormatsFWLite
FWCoreUtilities
cppunit
)


add_executable(testDataFormatsFWLite
  format_type_name.cppunit.cpp
  test.cppunit.cpp
)

add_test(NAME testDataFormatsFWLite_CTest COMMAND testDataFormatsFWLite)

add_test_properties(testDataFormatsFWLite_CTest)

set_target_properties(testDataFormatsFWLite PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS testDataFormatsFWLite)

add_dependencies( testDataFormatsFWLite ALL_PLUGINS)

target_include_directories(testDataFormatsFWLite PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(testDataFormatsFWLite PUBLIC
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

target_link_libraries(testDataFormatsFWLite PUBLIC
DataFormatsFWLite
DataFormatsTestObjects
FWCoreFWLite
cppunit
)


add_executable(TestRunnerDataFormatsFWLite
  TestRunnerDataFormatsFWLite.cpp
)

add_test(NAME TestRunnerDataFormatsFWLite_CTest COMMAND /bin/bash -x ${CMAKE_CURRENT_SOURCE_DIR}/run_all_t.sh)

add_test_properties(TestRunnerDataFormatsFWLite_CTest)

set_tests_properties(TestRunnerDataFormatsFWLite_CTest PROPERTIES DEPENDS testDataFormatsFWLite)

set_target_properties(TestRunnerDataFormatsFWLite PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS TestRunnerDataFormatsFWLite)

add_dependencies( TestRunnerDataFormatsFWLite ALL_PLUGINS)

target_include_directories(TestRunnerDataFormatsFWLite PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestRunnerDataFormatsFWLite PUBLIC
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

target_link_libraries(TestRunnerDataFormatsFWLite PUBLIC
DataFormatsFWLite
FWCoreUtilities
cppunit
)


