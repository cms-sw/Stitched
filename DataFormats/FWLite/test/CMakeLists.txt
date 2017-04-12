add_executable(testDataFormatsFWLiteMakeInput
  TestRunnerDataFormatsFWLite.cpp
)

target_include_directories(testDataFormatsFWLiteMakeInput PUBLIC ${Boost_INCLUDE_DIR})
target_include_directories(testDataFormatsFWLiteMakeInput PUBLIC ${MD5_INCLUDE_DIR})
target_include_directories(testDataFormatsFWLiteMakeInput PUBLIC ${CPPUNIT_INCLUDE_DIR})
target_include_directories(testDataFormatsFWLiteMakeInput PUBLIC ${TBB_INCLUDE_DIRS})
target_include_directories(testDataFormatsFWLiteMakeInput PUBLIC ${ROOT_INCLUDE_DIR})
target_link_libraries(testDataFormatsFWLiteMakeInput PUBLIC
  DataFormatsFWLite
  ${Boost_REGEX_LIBRARY_RELEASE}
  dl
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  FWCoreUtilities
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${CPPUNIT_LIBRARY}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  ${PYTHON_LIBRARY}
)

install( TARGETS testDataFormatsFWLiteMakeInput EXPORT testDataFormatsFWLiteMakeInput DESTINATION  bin )

add_executable(testDataFormatsFWLite
  test.cppunit.cpp
  format_type_name.cppunit.cpp
)

target_include_directories(testDataFormatsFWLite PUBLIC ${CPPUNIT_INCLUDE_DIR})
target_link_libraries(testDataFormatsFWLite PUBLIC
  DataFormatsFWLite
  FWCoreFWLite
  ${CPPUNIT_LIBRARY}
  DataFormatsTestObjects
)

install( TARGETS testDataFormatsFWLite EXPORT testDataFormatsFWLite DESTINATION  bin )

add_executable(TestRunnerDataFormatsFWLite
  TestRunnerDataFormatsFWLite.cpp
)

target_include_directories(TestRunnerDataFormatsFWLite PUBLIC ${CPPUNIT_INCLUDE_DIR})
target_include_directories(TestRunnerDataFormatsFWLite PUBLIC ${Boost_INCLUDE_DIR})
target_include_directories(TestRunnerDataFormatsFWLite PUBLIC ${TBB_INCLUDE_DIRS})
target_include_directories(TestRunnerDataFormatsFWLite PUBLIC ${ROOT_INCLUDE_DIR})
target_include_directories(TestRunnerDataFormatsFWLite PUBLIC ${MD5_INCLUDE_DIR})
target_link_libraries(TestRunnerDataFormatsFWLite PUBLIC
  DataFormatsFWLite
  ${CPPUNIT_LIBRARY}
  FWCoreUtilities
)

install( TARGETS TestRunnerDataFormatsFWLite EXPORT TestRunnerDataFormatsFWLite DESTINATION  bin )

