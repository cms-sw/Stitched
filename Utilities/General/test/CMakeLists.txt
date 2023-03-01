add_executable(test_precomputed_value_sort
  test_precomputed_value_sort.cpp
)

add_test(NAME test_precomputed_value_sort_CTest COMMAND test_precomputed_value_sort)

add_test_properties(test_precomputed_value_sort_CTest)

set_target_properties(test_precomputed_value_sort PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS test_precomputed_value_sort)

add_dependencies( test_precomputed_value_sort ALL_PLUGINS)

target_include_directories(test_precomputed_value_sort PRIVATE ${CMAKE_SOURCE_DIR})

target_link_libraries(test_precomputed_value_sort PUBLIC
UtilitiesGeneral
)


add_executable(googlebenchmarkbasic
  google-benchmark-basic.cpp
)

add_test(NAME googlebenchmarkbasic_CTest COMMAND googlebenchmarkbasic)

add_test_properties(googlebenchmarkbasic_CTest)

set_target_properties(googlebenchmarkbasic PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS googlebenchmarkbasic)

add_dependencies( googlebenchmarkbasic ALL_PLUGINS)

target_include_directories(googlebenchmarkbasic PRIVATE ${CMAKE_SOURCE_DIR})

target_link_libraries(googlebenchmarkbasic PUBLIC
UtilitiesGeneral
benchmark::benchmark
)


add_executable(googlebenchmarkpassargv
  google-benchmark-pass-argv.cpp
)

add_test(NAME googlebenchmarkpassargv_CTest COMMAND googlebenchmarkpassargv)

add_test_properties(googlebenchmarkpassargv_CTest)

set_target_properties(googlebenchmarkpassargv PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS googlebenchmarkpassargv)

add_dependencies( googlebenchmarkpassargv ALL_PLUGINS)

target_include_directories(googlebenchmarkpassargv PRIVATE ${CMAKE_SOURCE_DIR})

target_link_libraries(googlebenchmarkpassargv PUBLIC
UtilitiesGeneral
benchmark::benchmark_main
)


