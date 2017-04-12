add_executable(testFWCoreFWLite
  ref_t.cppunit.cpp
)

target_include_directories(testFWCoreFWLite PUBLIC ${CPPUNIT_INCLUDE_DIR})
target_link_libraries(testFWCoreFWLite PUBLIC
  FWCoreFWLite
  ${CPPUNIT_LIBRARY}
  DataFormatsTestObjects
)

install( TARGETS testFWCoreFWLite EXPORT testFWCoreFWLite DESTINATION  bin )

add_executable(TestRunnerFWCoreFWLite
  TestRunnerFWCoreFWLite.cpp
)

target_include_directories(TestRunnerFWCoreFWLite PUBLIC ${MD5_INCLUDE_DIR})
target_include_directories(TestRunnerFWCoreFWLite PUBLIC ${Boost_INCLUDE_DIR})
target_include_directories(TestRunnerFWCoreFWLite PUBLIC ${TBB_INCLUDE_DIRS})
target_include_directories(TestRunnerFWCoreFWLite PUBLIC ${ROOT_INCLUDE_DIR})
target_link_libraries(TestRunnerFWCoreFWLite PUBLIC
  FWCoreFWLite
  FWCoreTFWLiteSelector
  FWCoreUtilities
)

install( TARGETS TestRunnerFWCoreFWLite EXPORT TestRunnerFWCoreFWLite DESTINATION  bin )

