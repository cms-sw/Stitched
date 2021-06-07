add_executable(testParameterSet
  ps_t.cppunit.cc
)

add_test(NAME testParameterSet_CTest COMMAND testParameterSet)

add_test_properties(testParameterSet_CTest)

set_target_properties(testParameterSet PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS testParameterSet)

add_dependencies( testParameterSet ALL_PLUGINS)

target_include_directories(testParameterSet PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(testParameterSet PUBLIC
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

target_link_libraries(testParameterSet PUBLIC
FWCoreParameterSet
FWCoreUtilities
cppunit
)


add_executable(TestFWCoreParameterSetDescription
  parameterSetDescription_t.cc
)

add_test(NAME TestFWCoreParameterSetDescription_CTest COMMAND TestFWCoreParameterSetDescription)

add_test_properties(TestFWCoreParameterSetDescription_CTest)

set_target_properties(TestFWCoreParameterSetDescription PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS TestFWCoreParameterSetDescription)

add_dependencies( TestFWCoreParameterSetDescription ALL_PLUGINS)

target_include_directories(TestFWCoreParameterSetDescription PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestFWCoreParameterSetDescription PUBLIC
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

target_link_libraries(TestFWCoreParameterSetDescription PUBLIC
DataFormatsProvenance
FWCoreParameterSet
FWCoreUtilities
Threads::Threads
crypt
dl
nsl
rt
)


add_executable(TestFWCoreParameterSetDriver
  TestFWCoreParameterSetDriver.cpp
)

add_test(NAME TestFWCoreParameterSetDriver_CTest COMMAND /bin/bash -x ${CMAKE_CURRENT_SOURCE_DIR}/runPythonTests.sh)

add_test_properties(TestFWCoreParameterSetDriver_CTest)

set_target_properties(TestFWCoreParameterSetDriver PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS TestFWCoreParameterSetDriver)

add_dependencies( TestFWCoreParameterSetDriver ALL_PLUGINS)

target_include_directories(TestFWCoreParameterSetDriver PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestFWCoreParameterSetDriver PUBLIC
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

target_link_libraries(TestFWCoreParameterSetDriver PUBLIC
FWCoreParameterSet
FWCoreUtilities
)


add_executable(testDefaultModuleLabel
  defaultModuleLabel_t.cc
)

add_test(NAME testDefaultModuleLabel_CTest COMMAND testDefaultModuleLabel)

add_test_properties(testDefaultModuleLabel_CTest)

set_target_properties(testDefaultModuleLabel PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS testDefaultModuleLabel)

add_dependencies( testDefaultModuleLabel ALL_PLUGINS)

target_include_directories(testDefaultModuleLabel PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(testDefaultModuleLabel PUBLIC
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

target_link_libraries(testDefaultModuleLabel PUBLIC
FWCoreParameterSet
cppunit
)


