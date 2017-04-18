add_executable(test_precomputed_value_sort
  test_precomputed_value_sort.cpp
)

target_link_libraries(test_precomputed_value_sort PUBLIC
  UtilitiesGeneral
)

add_test(NAME test_precomputed_value_sort COMMAND test_precomputed_value_sort)
add_executable(TestTBB
  TestTBB.cc
)

target_include_directories(TestTBB PUBLIC ${Boost_INCLUDE_DIR})
include_directories(TestTBB PUBLIC ${Boost_INCLUDE_DIR})
target_include_directories(TestTBB PUBLIC ${TBB_INCLUDE_DIRS})
include_directories(TestTBB PUBLIC ${TBB_INCLUDE_DIRS})
target_link_libraries(TestTBB PUBLIC
  ${TBB_LIBRARIES}
  UtilitiesGeneral
)

add_test(NAME TestTBB COMMAND TestTBB)
