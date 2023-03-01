add_executable(TestHelper_t
  TestHelper_t.cpp
)

add_test(NAME TestHelper_t_2_CTest COMMAND /bin/bash -x ${CMAKE_CURRENT_SOURCE_DIR}/one.sh)

add_test_properties(TestHelper_t_2_CTest)

add_test(NAME TestHelper_t_3_CTest COMMAND /bin/bash -x ${CMAKE_CURRENT_SOURCE_DIR}/two.sh)

add_test_properties(TestHelper_t_3_CTest)

add_test(NAME TestHelper_t_4_CTest COMMAND /bin/bash -x ${CMAKE_CURRENT_SOURCE_DIR}/testFriendlyNames.sh)

add_test_properties(TestHelper_t_4_CTest)

add_test(NAME TestHelper_t_5_CTest COMMAND /bin/bash -x ${CMAKE_CURRENT_SOURCE_DIR}/testAdler32.sh)

add_test_properties(TestHelper_t_5_CTest)

set_target_properties(TestHelper_t PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS TestHelper_t)

add_dependencies( TestHelper_t ALL_PLUGINS)

target_include_directories(TestHelper_t PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestHelper_t PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(TestHelper_t PUBLIC
FWCoreUtilities
Threads::Threads
crypt
dl
nsl
rt
)


add_executable(atomic_value_ptr_t
  atomic_value_ptr_t.cpp
)

add_test(NAME atomic_value_ptr_t_CTest COMMAND atomic_value_ptr_t)

add_test_properties(atomic_value_ptr_t_CTest)

set_target_properties(atomic_value_ptr_t PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS atomic_value_ptr_t)

add_dependencies( atomic_value_ptr_t ALL_PLUGINS)

target_include_directories(atomic_value_ptr_t PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(atomic_value_ptr_t PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(atomic_value_ptr_t PUBLIC
FWCoreUtilities
Threads::Threads
crypt
dl
nsl
rt
)


add_executable(typedefs_t
  typedefs_t.cpp
)

add_test(NAME typedefs_t_CTest COMMAND typedefs_t)

add_test_properties(typedefs_t_CTest)

set_target_properties(typedefs_t PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS typedefs_t)

add_dependencies( typedefs_t ALL_PLUGINS)

target_include_directories(typedefs_t PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(typedefs_t PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(typedefs_t PUBLIC
FWCoreUtilities
Threads::Threads
crypt
dl
nsl
rt
)


add_executable(HRTime_t
  HRTime_t.cpp
)

add_test(NAME HRTime_t_CTest COMMAND HRTime_t)

add_test_properties(HRTime_t_CTest)

set_target_properties(HRTime_t PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS HRTime_t)

add_dependencies( HRTime_t ALL_PLUGINS)

target_include_directories(HRTime_t PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(HRTime_t PUBLIC
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

target_link_libraries(HRTime_t PUBLIC
FWCoreUtilities
Threads::Threads
cppunit
crypt
dl
nsl
rt
)


add_executable(testFWCoreUtilities
  callxnowait_t.cppunit.cpp
  cputimer_t.cppunit.cpp
  esinputtag.cppunit.cpp
  friendlyname_t.cppunit.cpp
  indexset.cppunit.cpp
  propagate_const_array_t.cppunit.cpp
  propagate_const_t.cppunit.cpp
  reusableobjectholder_t.cppunit.cpp
  signal_t.cppunit.cpp
  soatuple_t.cppunit.cpp
  transform.cppunit.cpp
  typeid_t.cppunit.cpp
  typeidbase_t.cppunit.cpp
  vecarray.cppunit.cpp
)

add_test(NAME testFWCoreUtilities_CTest COMMAND testFWCoreUtilities)

add_test_properties(testFWCoreUtilities_CTest)

set_target_properties(testFWCoreUtilities PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS testFWCoreUtilities)

add_dependencies( testFWCoreUtilities ALL_PLUGINS)

target_include_directories(testFWCoreUtilities PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(testFWCoreUtilities PUBLIC
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

target_link_libraries(testFWCoreUtilities PUBLIC
FWCoreUtilities
Threads::Threads
cppunit
crypt
dl
nsl
rt
)


add_executable(testFWCoreUtilitiesCatch2
  test_catch2_CRC32Calculator.cc
  test_catch2_Digest.cc
  test_catch2_EDGetToken.cc
  test_catch2_EDMException.cc
  test_catch2_Exception.cc
  test_catch2_Guid.cc
  test_catch2_InputTag.cc
  test_catch2_clone_ptr.cc
  test_catch2_isFinite.cc
  test_catch2_main.cc
  test_catch2_path_configuration.cc
  test_catch2_stemFromPath.cc
  test_catch2_value_ptr.cc
)

add_test(NAME testFWCoreUtilitiesCatch2_CTest COMMAND testFWCoreUtilitiesCatch2)

add_test_properties(testFWCoreUtilitiesCatch2_CTest)

set_target_properties(testFWCoreUtilitiesCatch2 PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS testFWCoreUtilitiesCatch2)

add_dependencies( testFWCoreUtilitiesCatch2 ALL_PLUGINS)

target_include_directories(testFWCoreUtilitiesCatch2 PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(testFWCoreUtilitiesCatch2 PUBLIC
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

target_link_libraries(testFWCoreUtilitiesCatch2 PUBLIC
FWCoreUtilities
Threads::Threads
crypt
dl
nsl
rt
)


add_executable(InputTag_t
  InputTag_t.cpp
)

add_test(NAME InputTag_t_CTest COMMAND InputTag_t)

add_test_properties(InputTag_t_CTest)

set_target_properties(InputTag_t PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS InputTag_t)

add_dependencies( InputTag_t ALL_PLUGINS)

target_include_directories(InputTag_t PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(InputTag_t PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(InputTag_t PUBLIC
${TBB_LIBRARIES}
FWCoreUtilities
Threads::Threads
crypt
dl
nsl
rt
)


add_executable(RunningAverage_t
  RunningAverage_t.cpp
)

add_test(NAME RunningAverage_t_CTest COMMAND RunningAverage_t)

add_test_properties(RunningAverage_t_CTest)

set_target_properties(RunningAverage_t PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS RunningAverage_t)

add_dependencies( RunningAverage_t ALL_PLUGINS)

target_include_directories(RunningAverage_t PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(RunningAverage_t PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(RunningAverage_t PUBLIC
${TBB_LIBRARIES}
FWCoreUtilities
Threads::Threads
crypt
dl
nsl
rt
)


