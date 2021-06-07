add_executable(test_xercesInitialize
  test_xercesInitialize.cpp
)

add_test(NAME test_xercesInitialize_CTest COMMAND test_xercesInitialize)

add_test_properties(test_xercesInitialize_CTest)

set_target_properties(test_xercesInitialize PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS test_xercesInitialize)

add_dependencies( test_xercesInitialize ALL_PLUGINS)

target_include_directories(test_xercesInitialize PRIVATE ${CMAKE_SOURCE_DIR})

target_link_libraries(test_xercesInitialize PUBLIC
UtilitiesXerces
)


