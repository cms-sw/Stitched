add_executable(testFWCoreConcurrency
  limitedtaskqueue_t.cppunit.cpp
  serialtaskqueue_t.cppunit.cpp
  serialtaskqueuechain_t.cppunit.cpp
  waitingtasklist_t.cppunit.cpp
)

add_test(NAME testFWCoreConcurrency_CTest COMMAND testFWCoreConcurrency)

add_test_properties(testFWCoreConcurrency_CTest)

set_target_properties(testFWCoreConcurrency PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS testFWCoreConcurrency)

add_dependencies( testFWCoreConcurrency ALL_PLUGINS)

target_include_directories(testFWCoreConcurrency PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(testFWCoreConcurrency PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${CPPUNIT_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(testFWCoreConcurrency PUBLIC
FWCoreConcurrency
cppunit
)


add_executable(test_threadSafeOutputFileStream
  test_threadSafeOutputFileStream.cpp
)

set_target_properties(test_threadSafeOutputFileStream PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS test_threadSafeOutputFileStream)

add_dependencies( test_threadSafeOutputFileStream ALL_PLUGINS)

target_include_directories(test_threadSafeOutputFileStream PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(test_threadSafeOutputFileStream PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(test_threadSafeOutputFileStream PUBLIC
FWCoreConcurrency
)


add_executable(ThreadSafeAddOnlyContainer_t
  ThreadSafeAddOnlyContainer_t.cpp
)

add_test(NAME ThreadSafeAddOnlyContainer_t_CTest COMMAND ThreadSafeAddOnlyContainer_t)

add_test_properties(ThreadSafeAddOnlyContainer_t_CTest)

set_target_properties(ThreadSafeAddOnlyContainer_t PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS ThreadSafeAddOnlyContainer_t)

add_dependencies( ThreadSafeAddOnlyContainer_t ALL_PLUGINS)

target_include_directories(ThreadSafeAddOnlyContainer_t PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(ThreadSafeAddOnlyContainer_t PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(ThreadSafeAddOnlyContainer_t PUBLIC
FWCoreConcurrency
)


add_executable(TestFWCoreConcurrencyDriver
  TestFWCoreConcurrencyDriver.cpp
)

add_test(NAME TestFWCoreConcurrencyDriver_2_CTest COMMAND /bin/bash -x ${CMAKE_CURRENT_SOURCE_DIR}/run_streamGrapher_test.sh)

add_test_properties(TestFWCoreConcurrencyDriver_2_CTest)

add_test(NAME TestFWCoreConcurrencyDriver_3_CTest COMMAND /bin/bash -x ${CMAKE_CURRENT_SOURCE_DIR}/run_threadSafeOutputFileStream_test.sh)

add_test_properties(TestFWCoreConcurrencyDriver_3_CTest)

set_target_properties(TestFWCoreConcurrencyDriver PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS TestFWCoreConcurrencyDriver)

add_dependencies( TestFWCoreConcurrencyDriver ALL_PLUGINS)

target_include_directories(TestFWCoreConcurrencyDriver PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestFWCoreConcurrencyDriver PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(TestFWCoreConcurrencyDriver PUBLIC
FWCoreConcurrency
FWCoreUtilities
)


add_executable(testFWCoreConcurrencyTBB.cc
  TestTBB.cc
)

add_test(NAME testFWCoreConcurrencyTBB.cc_CTest COMMAND testFWCoreConcurrencyTBB.cc)

add_test_properties(testFWCoreConcurrencyTBB.cc_CTest)

set_target_properties(testFWCoreConcurrencyTBB.cc PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS testFWCoreConcurrencyTBB.cc)

add_dependencies( testFWCoreConcurrencyTBB.cc ALL_PLUGINS)

target_include_directories(testFWCoreConcurrencyTBB.cc PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(testFWCoreConcurrencyTBB.cc PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(testFWCoreConcurrencyTBB.cc PUBLIC
${TBB_LIBRARIES}
FWCoreConcurrency
)


add_executable(testFWCoreConcurrencyCatch2
  test_catch2_WaitingTaskChain.cc
)

add_test(NAME testFWCoreConcurrencyCatch2_CTest COMMAND testFWCoreConcurrencyCatch2)

add_test_properties(testFWCoreConcurrencyCatch2_CTest)

set_target_properties(testFWCoreConcurrencyCatch2 PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS testFWCoreConcurrencyCatch2)

add_dependencies( testFWCoreConcurrencyCatch2 ALL_PLUGINS)

target_include_directories(testFWCoreConcurrencyCatch2 PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(testFWCoreConcurrencyCatch2 PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CATCH2_INCLUDE_DIRS}
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(testFWCoreConcurrencyCatch2 PUBLIC
${TBB_LIBRARIES}
FWCoreConcurrency
)


