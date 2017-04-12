add_executable(HRTime_t
  HRTime_t.cpp
)

target_include_directories(HRTime_t PUBLIC ${CPPUNIT_INCLUDE_DIR})
target_link_libraries(HRTime_t PUBLIC
  ${CPPUNIT_LIBRARY}
  FWCoreUtilities
)

install( TARGETS HRTime_t EXPORT HRTime_t DESTINATION  bin )

add_executable(isFinite_t
  isFinite_t.cpp
)

target_include_directories(isFinite_t PUBLIC ${Boost_INCLUDE_DIR})
target_include_directories(isFinite_t PUBLIC ${TBB_INCLUDE_DIRS})
target_include_directories(isFinite_t PUBLIC ${ROOT_INCLUDE_DIR})
target_include_directories(isFinite_t PUBLIC ${MD5_INCLUDE_DIR})
target_link_libraries(isFinite_t PUBLIC
  FWCoreUtilities
)

install( TARGETS isFinite_t EXPORT isFinite_t DESTINATION  bin )

add_executable(clone_ptr_t
  clone_ptr_t.cpp
)

target_include_directories(clone_ptr_t PUBLIC ${Boost_INCLUDE_DIR})
target_include_directories(clone_ptr_t PUBLIC ${TBB_INCLUDE_DIRS})
target_include_directories(clone_ptr_t PUBLIC ${ROOT_INCLUDE_DIR})
target_include_directories(clone_ptr_t PUBLIC ${MD5_INCLUDE_DIR})
target_link_libraries(clone_ptr_t PUBLIC
  FWCoreUtilities
)

install( TARGETS clone_ptr_t EXPORT clone_ptr_t DESTINATION  bin )

add_executable(MallocOpts_t
  MallocOpts_t.cpp
)

target_include_directories(MallocOpts_t PUBLIC ${CPPUNIT_INCLUDE_DIR})
target_link_libraries(MallocOpts_t PUBLIC
  ${CPPUNIT_LIBRARY}
  FWCoreUtilities
)

install( TARGETS MallocOpts_t EXPORT MallocOpts_t DESTINATION  bin )

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
target_include_directories(testFWCoreUtilities PUBLIC ${Boost_INCLUDE_DIR})
target_include_directories(testFWCoreUtilities PUBLIC ${TBB_INCLUDE_DIRS})
target_include_directories(testFWCoreUtilities PUBLIC ${ROOT_INCLUDE_DIR})
target_include_directories(testFWCoreUtilities PUBLIC ${MD5_INCLUDE_DIR})
target_link_libraries(testFWCoreUtilities PUBLIC
  ${CPPUNIT_LIBRARY}
  FWCoreUtilities
)

install( TARGETS testFWCoreUtilities EXPORT testFWCoreUtilities DESTINATION  bin )

add_executable(InputTag_t
  InputTag_t.cpp
)

target_include_directories(InputTag_t PUBLIC ${TBB_INCLUDE_DIRS})
target_link_libraries(InputTag_t PUBLIC
  ${TBB_LIBRARIES}
  FWCoreUtilities
)

install( TARGETS InputTag_t EXPORT InputTag_t DESTINATION  bin )

add_executable(EDGetToken_t
  EDGetToken_t.cpp
)

target_link_libraries(EDGetToken_t PUBLIC
  FWCoreUtilities
)

install( TARGETS EDGetToken_t EXPORT EDGetToken_t DESTINATION  bin )

add_executable(RunningAverage_t
  RunningAverage_t.cpp
)

target_include_directories(RunningAverage_t PUBLIC ${TBB_INCLUDE_DIRS})
target_link_libraries(RunningAverage_t PUBLIC
  ${TBB_LIBRARIES}
  FWCoreUtilities
)

install( TARGETS RunningAverage_t EXPORT RunningAverage_t DESTINATION  bin )

