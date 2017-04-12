add_executable(testFWCoreConcurrency
  serialtaskqueue_t.cppunit.cpp
  serialtaskqueuechain_t.cppunit.cpp
  waitingtasklist_t.cppunit.cpp
)

target_include_directories(testFWCoreConcurrency PUBLIC ${CPPUNIT_INCLUDE_DIR})
target_include_directories(testFWCoreConcurrency PUBLIC ${TBB_INCLUDE_DIRS})
target_link_libraries(testFWCoreConcurrency PUBLIC
  FWCoreConcurrency
  ${CPPUNIT_LIBRARY}
)

install( TARGETS testFWCoreConcurrency EXPORT testFWCoreConcurrency DESTINATION  bin )

add_executable(test_xercesInitialize
  test_xercesInitialize.cpp
)

target_include_directories(test_xercesInitialize PUBLIC ${TBB_INCLUDE_DIRS})
target_link_libraries(test_xercesInitialize PUBLIC
  FWCoreConcurrency
)

install( TARGETS test_xercesInitialize EXPORT test_xercesInitialize DESTINATION  bin )

add_executable(ThreadSafeAddOnlyContainer_t
  ThreadSafeAddOnlyContainer_t.cpp
)

target_include_directories(ThreadSafeAddOnlyContainer_t PUBLIC ${TBB_INCLUDE_DIRS})
target_link_libraries(ThreadSafeAddOnlyContainer_t PUBLIC
  FWCoreConcurrency
)

install( TARGETS ThreadSafeAddOnlyContainer_t EXPORT ThreadSafeAddOnlyContainer_t DESTINATION  bin )

add_executable(runStreamGrapherTest
  runStreamGrapherTest.cpp
)

target_include_directories(runStreamGrapherTest PUBLIC ${TBB_INCLUDE_DIRS})
target_link_libraries(runStreamGrapherTest PUBLIC
  FWCoreConcurrency
  FWCoreUtilities
)

install( TARGETS runStreamGrapherTest EXPORT runStreamGrapherTest DESTINATION  bin )

