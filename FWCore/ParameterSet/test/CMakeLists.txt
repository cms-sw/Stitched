add_executable(testParameterSet
  ps_t.cppunit.cc
)

target_include_directories(testParameterSet PUBLIC ${CPPUNIT_INCLUDE_DIR})
target_link_libraries(testParameterSet PUBLIC
  FWCoreParameterSet
  ${CPPUNIT_LIBRARY}
  FWCoreUtilities
)

install( TARGETS testParameterSet EXPORT testParameterSet DESTINATION  bin )

add_executable(TestFWCoreParameterSetDescription
  parameterSetDescription_t.cc
)

target_include_directories(TestFWCoreParameterSetDescription PUBLIC ${MD5_INCLUDE_DIR})
target_include_directories(TestFWCoreParameterSetDescription PUBLIC ${Boost_INCLUDE_DIR})
target_include_directories(TestFWCoreParameterSetDescription PUBLIC ${TBB_INCLUDE_DIRS})
target_include_directories(TestFWCoreParameterSetDescription PUBLIC ${ROOT_INCLUDE_DIR})
target_link_libraries(TestFWCoreParameterSetDescription PUBLIC
  ${Boost_REGEX_LIBRARY_RELEASE}
  dl
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  FWCoreParameterSet
  FWCoreUtilities
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  ${PYTHON_LIBRARY}
  DataFormatsProvenance
)

install( TARGETS TestFWCoreParameterSetDescription EXPORT TestFWCoreParameterSetDescription DESTINATION  bin )

add_executable(TestFWCoreParameterSetDriver
  TestFWCoreParameterSetDriver.cpp
)

target_link_libraries(TestFWCoreParameterSetDriver PUBLIC
  FWCoreParameterSet
  FWCoreUtilities
)

install( TARGETS TestFWCoreParameterSetDriver EXPORT TestFWCoreParameterSetDriver DESTINATION  bin )

