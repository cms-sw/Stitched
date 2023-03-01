add_executable(testFWCoreTestProcessor
  testprocessor_t.cppunit.cc
)

add_test(NAME testFWCoreTestProcessor_CTest COMMAND testFWCoreTestProcessor)

add_test_properties(testFWCoreTestProcessor_CTest)

set_target_properties(testFWCoreTestProcessor PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS testFWCoreTestProcessor)

add_dependencies( testFWCoreTestProcessor ALL_PLUGINS)

target_include_directories(testFWCoreTestProcessor PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(testFWCoreTestProcessor PUBLIC
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

target_link_libraries(testFWCoreTestProcessor PUBLIC
FWCoreIntegration
FWCoreParameterSet
FWCoreTestProcessor
Threads::Threads
cppunit
crypt
dl
nsl
rt
)


