add_executable(testParameterSet
  ps_t.cppunit.cc
)

target_include_directories(testParameterSet PUBLIC ${CPPUNIT_INCLUDE_DIR})
include_directories(testParameterSet PUBLIC ${CPPUNIT_INCLUDE_DIR})
target_link_libraries(testParameterSet PUBLIC
  FWCoreParameterSet
  ${CPPUNIT_LIBRARY}
  FWCoreUtilities
)

add_test(NAME testParameterSet COMMAND testParameterSet)
add_executable(TestFWCoreParameterSetDescription
  parameterSetDescription_t.cc
)

target_include_directories(TestFWCoreParameterSetDescription PUBLIC ${MD5_INCLUDE_DIR})
include_directories(TestFWCoreParameterSetDescription PUBLIC ${MD5_INCLUDE_DIR})
target_include_directories(TestFWCoreParameterSetDescription PUBLIC ${Boost_INCLUDE_DIR})
include_directories(TestFWCoreParameterSetDescription PUBLIC ${Boost_INCLUDE_DIR})
target_include_directories(TestFWCoreParameterSetDescription PUBLIC ${TBB_INCLUDE_DIRS})
include_directories(TestFWCoreParameterSetDescription PUBLIC ${TBB_INCLUDE_DIRS})
target_include_directories(TestFWCoreParameterSetDescription PUBLIC ${ROOT_INCLUDE_DIR})
include_directories(TestFWCoreParameterSetDescription PUBLIC ${ROOT_INCLUDE_DIR})
target_link_libraries(TestFWCoreParameterSetDescription PUBLIC
  FWCoreParameterSet
  dl
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  ${Boost_REGEX_LIBRARY_RELEASE}
  ${PYTHON_LIBRARY}
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  FWCoreUtilities
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  DataFormatsProvenance
)

add_test(NAME TestFWCoreParameterSetDescription COMMAND TestFWCoreParameterSetDescription)
add_executable(TestFWCoreParameterSetDriver
  TestFWCoreParameterSetDriver.cpp
)

target_link_libraries(TestFWCoreParameterSetDriver PUBLIC
  FWCoreParameterSet
  FWCoreUtilities
)

add_test(NAME TestFWCoreParameterSetDriver COMMAND TestFWCoreParameterSetDriver)
