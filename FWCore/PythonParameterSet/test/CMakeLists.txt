add_executable(testPyDevParameterSet
  makeprocess_t.cppunit.cc
  makepset_t.cppunit.cc
  processbuilder_t.cppunit.cpp
  readpsetsfrom_t.cppunit.cc
)

add_test(NAME testPyDevParameterSet_CTest COMMAND testPyDevParameterSet)

add_test_properties(testPyDevParameterSet_CTest)

set_target_properties(testPyDevParameterSet PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS testPyDevParameterSet)

add_dependencies( testPyDevParameterSet ALL_PLUGINS)

add_dependencies( testPyDevParameterSet file_in_path )

target_include_directories(testPyDevParameterSet PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(testPyDevParameterSet PUBLIC
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

target_link_libraries(testPyDevParameterSet PUBLIC
FWCoreParameterSet
FWCorePythonParameterSet
FWCoreUtilities
cppunit
)


