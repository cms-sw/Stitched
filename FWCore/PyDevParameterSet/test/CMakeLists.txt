add_executable(testPyBind11ParameterSet
  makeprocess_t.cppunit.cc
  makepset_t.cppunit.cc
  processbuilder_t.cppunit.cpp
  readpsetsfrom_t.cppunit.cc
)

add_test(NAME testPyBind11ParameterSet_CTest COMMAND testPyBind11ParameterSet)

add_test_properties(testPyBind11ParameterSet_CTest)

set_target_properties(testPyBind11ParameterSet PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS testPyBind11ParameterSet)

add_dependencies( testPyBind11ParameterSet ALL_PLUGINS)

add_dependencies( testPyBind11ParameterSet file_in_path )

target_include_directories(testPyBind11ParameterSet PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(testPyBind11ParameterSet PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${CPPUNIT_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${PYBIND11_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(testPyBind11ParameterSet PUBLIC
FWCoreParameterSet
FWCorePyDevParameterSet
FWCoreUtilities
cppunit
)


