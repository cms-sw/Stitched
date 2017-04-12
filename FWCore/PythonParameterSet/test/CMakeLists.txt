add_executable(testPythonParameterSet
  processbuilder_t.cppunit.cpp
  makeprocess_t.cppunit.cc
  makepset_t.cppunit.cc
  readpsetsfrom_t.cppunit.cc
)

target_include_directories(testPythonParameterSet PUBLIC ${CPPUNIT_INCLUDE_DIR})
target_include_directories(testPythonParameterSet PUBLIC ${PYTHON_INCLUDE_DIR})
target_include_directories(testPythonParameterSet PUBLIC ${MD5_INCLUDE_DIR})
target_include_directories(testPythonParameterSet PUBLIC ${Boost_INCLUDE_DIR}/python)
target_include_directories(testPythonParameterSet PUBLIC ${Boost_INCLUDE_DIR})
target_include_directories(testPythonParameterSet PUBLIC ${TBB_INCLUDE_DIRS})
target_include_directories(testPythonParameterSet PUBLIC ${ROOT_INCLUDE_DIR})
target_link_libraries(testPythonParameterSet PUBLIC
  ${Boost_REGEX_LIBRARY_RELEASE}
  dl
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  FWCoreParameterSet
  FWCoreUtilities
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${CPPUNIT_LIBRARY}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  FWCorePythonParameterSet
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  ${PYTHON_LIBRARY}
)

install( TARGETS testPythonParameterSet EXPORT testPythonParameterSet DESTINATION  bin )

