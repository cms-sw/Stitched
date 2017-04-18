add_executable(HRTime_t
  HRTime_t.cpp
)

target_include_directories(HRTime_t PUBLIC ${CPPUNIT_INCLUDE_DIR})
include_directories(HRTime_t PUBLIC ${CPPUNIT_INCLUDE_DIR})
target_link_libraries(HRTime_t PUBLIC
  ${CPPUNIT_LIBRARY}
  FWCoreUtilities
)

add_test(NAME HRTime_t COMMAND HRTime_t)
add_executable(isFinite_t
  isFinite_t.cpp
)

target_include_directories(isFinite_t PUBLIC ${ROOT_INCLUDE_DIR})
include_directories(isFinite_t PUBLIC ${ROOT_INCLUDE_DIR})
target_include_directories(isFinite_t PUBLIC ${Boost_INCLUDE_DIR})
include_directories(isFinite_t PUBLIC ${Boost_INCLUDE_DIR})
target_include_directories(isFinite_t PUBLIC ${TBB_INCLUDE_DIRS})
include_directories(isFinite_t PUBLIC ${TBB_INCLUDE_DIRS})
target_include_directories(isFinite_t PUBLIC ${MD5_INCLUDE_DIR})
include_directories(isFinite_t PUBLIC ${MD5_INCLUDE_DIR})
target_link_libraries(isFinite_t PUBLIC
  FWCoreUtilities
)

add_test(NAME isFinite_t COMMAND isFinite_t)
add_executable(clone_ptr_t
  clone_ptr_t.cpp
)

target_include_directories(clone_ptr_t PUBLIC ${ROOT_INCLUDE_DIR})
include_directories(clone_ptr_t PUBLIC ${ROOT_INCLUDE_DIR})
target_include_directories(clone_ptr_t PUBLIC ${Boost_INCLUDE_DIR})
include_directories(clone_ptr_t PUBLIC ${Boost_INCLUDE_DIR})
target_include_directories(clone_ptr_t PUBLIC ${TBB_INCLUDE_DIRS})
include_directories(clone_ptr_t PUBLIC ${TBB_INCLUDE_DIRS})
target_include_directories(clone_ptr_t PUBLIC ${MD5_INCLUDE_DIR})
include_directories(clone_ptr_t PUBLIC ${MD5_INCLUDE_DIR})
target_link_libraries(clone_ptr_t PUBLIC
  FWCoreUtilities
)

add_test(NAME clone_ptr_t COMMAND clone_ptr_t)
add_executable(MallocOpts_t
  MallocOpts_t.cpp
)

target_include_directories(MallocOpts_t PUBLIC ${CPPUNIT_INCLUDE_DIR})
include_directories(MallocOpts_t PUBLIC ${CPPUNIT_INCLUDE_DIR})
target_link_libraries(MallocOpts_t PUBLIC
  ${CPPUNIT_LIBRARY}
  FWCoreUtilities
)

add_test(NAME MallocOpts_t COMMAND MallocOpts_t)
add_executable(testFWCoreUtilities
  typeidbase_t.cppunit.cpp
  typeid_t.cppunit.cpp
  cputimer_t.cppunit.cpp
  extensioncord_t.cppunit.cpp
  friendlyname_t.cppunit.cpp
  signal_t.cppunit.cpp
  soatuple_t.cppunit.cpp
  transform.cppunit.cpp
  callxnowait_t.cppunit.cpp
  vecarray.cppunit.cpp
  reusableobjectholder_t.cppunit.cpp
  propagate_const_t.cppunit.cpp
)

target_include_directories(testFWCoreUtilities PUBLIC ${CPPUNIT_INCLUDE_DIR})
include_directories(testFWCoreUtilities PUBLIC ${CPPUNIT_INCLUDE_DIR})
target_include_directories(testFWCoreUtilities PUBLIC ${ROOT_INCLUDE_DIR})
include_directories(testFWCoreUtilities PUBLIC ${ROOT_INCLUDE_DIR})
target_include_directories(testFWCoreUtilities PUBLIC ${Boost_INCLUDE_DIR})
include_directories(testFWCoreUtilities PUBLIC ${Boost_INCLUDE_DIR})
target_include_directories(testFWCoreUtilities PUBLIC ${TBB_INCLUDE_DIRS})
include_directories(testFWCoreUtilities PUBLIC ${TBB_INCLUDE_DIRS})
target_include_directories(testFWCoreUtilities PUBLIC ${MD5_INCLUDE_DIR})
include_directories(testFWCoreUtilities PUBLIC ${MD5_INCLUDE_DIR})
target_link_libraries(testFWCoreUtilities PUBLIC
  ${CPPUNIT_LIBRARY}
  FWCoreUtilities
)

add_test(NAME testFWCoreUtilities COMMAND testFWCoreUtilities)
add_executable(InputTag_t
  InputTag_t.cpp
)

target_include_directories(InputTag_t PUBLIC ${TBB_INCLUDE_DIRS})
include_directories(InputTag_t PUBLIC ${TBB_INCLUDE_DIRS})
target_link_libraries(InputTag_t PUBLIC
  ${TBB_LIBRARIES}
  FWCoreUtilities
)

add_test(NAME InputTag_t COMMAND InputTag_t)
add_executable(EDGetToken_t
  EDGetToken_t.cpp
)

target_link_libraries(EDGetToken_t PUBLIC
  FWCoreUtilities
)

add_test(NAME EDGetToken_t COMMAND EDGetToken_t)
add_executable(RunningAverage_t
  RunningAverage_t.cpp
)

target_include_directories(RunningAverage_t PUBLIC ${TBB_INCLUDE_DIRS})
include_directories(RunningAverage_t PUBLIC ${TBB_INCLUDE_DIRS})
target_link_libraries(RunningAverage_t PUBLIC
  ${TBB_LIBRARIES}
  FWCoreUtilities
)

add_test(NAME RunningAverage_t COMMAND RunningAverage_t)
