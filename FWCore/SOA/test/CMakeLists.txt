add_executable(testFWCoreSOA
  table_t.cppunit.cpp
)

add_test(NAME testFWCoreSOA_CTest COMMAND testFWCoreSOA)

add_test_properties(testFWCoreSOA_CTest)

set_target_properties(testFWCoreSOA PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS testFWCoreSOA)

add_dependencies( testFWCoreSOA ALL_PLUGINS)

target_include_directories(testFWCoreSOA PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(testFWCoreSOA PUBLIC
${CPPUNIT_INCLUDE_DIR}
)

target_link_libraries(testFWCoreSOA PUBLIC
cppunit
)


add_executable(testFWCoreSOATableFilling
  table_filling_t.cppunit.cpp
)

add_test(NAME testFWCoreSOATableFilling_CTest COMMAND testFWCoreSOATableFilling)

add_test_properties(testFWCoreSOATableFilling_CTest)

set_target_properties(testFWCoreSOATableFilling PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS testFWCoreSOATableFilling)

add_dependencies( testFWCoreSOATableFilling ALL_PLUGINS)

target_include_directories(testFWCoreSOATableFilling PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(testFWCoreSOATableFilling PUBLIC
${CPPUNIT_INCLUDE_DIR}
)

target_link_libraries(testFWCoreSOATableFilling PUBLIC
cppunit
)


