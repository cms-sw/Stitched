add_executable(testFWCoreConcurrency
  serialtaskqueue_t.cppunit.cpp
  serialtaskqueuechain_t.cppunit.cpp
  waitingtasklist_t.cppunit.cpp
)

target_include_directories(testFWCoreConcurrency PUBLIC ${CPPUNIT_INCLUDE_DIR})
include_directories(testFWCoreConcurrency PUBLIC ${CPPUNIT_INCLUDE_DIR})
target_include_directories(testFWCoreConcurrency PUBLIC ${TBB_INCLUDE_DIRS})
include_directories(testFWCoreConcurrency PUBLIC ${TBB_INCLUDE_DIRS})
target_link_libraries(testFWCoreConcurrency PUBLIC
  FWCoreConcurrency
  ${CPPUNIT_LIBRARY}
)

add_test(NAME testFWCoreConcurrency COMMAND testFWCoreConcurrency)
add_executable(test_xercesInitialize
  test_xercesInitialize.cpp
)

target_include_directories(test_xercesInitialize PUBLIC ${TBB_INCLUDE_DIRS})
include_directories(test_xercesInitialize PUBLIC ${TBB_INCLUDE_DIRS})
target_link_libraries(test_xercesInitialize PUBLIC
  FWCoreConcurrency
)

add_test(NAME test_xercesInitialize COMMAND test_xercesInitialize)
add_executable(ThreadSafeAddOnlyContainer_t
  ThreadSafeAddOnlyContainer_t.cpp
)

target_include_directories(ThreadSafeAddOnlyContainer_t PUBLIC ${TBB_INCLUDE_DIRS})
include_directories(ThreadSafeAddOnlyContainer_t PUBLIC ${TBB_INCLUDE_DIRS})
target_link_libraries(ThreadSafeAddOnlyContainer_t PUBLIC
  FWCoreConcurrency
)

add_test(NAME ThreadSafeAddOnlyContainer_t COMMAND ThreadSafeAddOnlyContainer_t)
add_executable(runStreamGrapherTest
  runStreamGrapherTest.cpp
)

target_include_directories(runStreamGrapherTest PUBLIC ${TBB_INCLUDE_DIRS})
include_directories(runStreamGrapherTest PUBLIC ${TBB_INCLUDE_DIRS})
target_link_libraries(runStreamGrapherTest PUBLIC
  FWCoreConcurrency
  FWCoreUtilities
)

add_test(NAME runStreamGrapherTest COMMAND runStreamGrapherTest)
