add_executable(testDataFormatsCommon
  DetSetRefVector_t.cppunit.cc
  cloningptr_t.cppunit.cc
  containermask_t.cppunit.cc
  handle_t.cppunit.cc
  ptr_t.cppunit.cc
  ptrvector_t.cppunit.cc
  ref_t.cppunit.cc
  reftobase_t.cppunit.cc
  reftobaseprod_t.cppunit.cc
  reftobasevector_t.cppunit.cc
  testAssociationNew.cc
  testAssociationVector.cc
  testIDVectorMap.cc
  testOneToManyAssociation.cc
  testOneToOneAssociation.cc
  testOwnVector.cc
  testRangeMap.cc
  testRunner.cpp
  testSortedCollection.cc
  testValueMap.cc
  testValueMapNew.cc
)

add_test(NAME testDataFormatsCommon_CTest COMMAND testDataFormatsCommon)

add_test_properties(testDataFormatsCommon_CTest)

set_target_properties(testDataFormatsCommon PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS testDataFormatsCommon)

add_dependencies( testDataFormatsCommon ALL_PLUGINS)

target_include_directories(testDataFormatsCommon PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(testDataFormatsCommon PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${CPPUNIT_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(testDataFormatsCommon PUBLIC
DataFormatsCommon
Threads::Threads
cppunit
crypt
dl
nsl
rt
)


add_executable(DetSetVector_t
  DetSetVector_t.cpp
)

add_test(NAME DetSetVector_t_CTest COMMAND DetSetVector_t)

add_test_properties(DetSetVector_t_CTest)

set_target_properties(DetSetVector_t PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS DetSetVector_t)

add_dependencies( DetSetVector_t ALL_PLUGINS)

target_include_directories(DetSetVector_t PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(DetSetVector_t PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${CPPUNIT_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(DetSetVector_t PUBLIC
DataFormatsCommon
Threads::Threads
cppunit
crypt
dl
nsl
rt
)


add_executable(OwnVector_t
  OwnVector_t.cpp
)

add_test(NAME OwnVector_t_CTest COMMAND OwnVector_t)

add_test_properties(OwnVector_t_CTest)

set_target_properties(OwnVector_t PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS OwnVector_t)

add_dependencies( OwnVector_t ALL_PLUGINS)

target_include_directories(OwnVector_t PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(OwnVector_t PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${CPPUNIT_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(OwnVector_t PUBLIC
DataFormatsCommon
Threads::Threads
cppunit
crypt
dl
nsl
rt
)


add_executable(DictionaryTools_t
  DictionaryTools_t.cpp
)

add_test(NAME DictionaryTools_t_CTest COMMAND DictionaryTools_t)

add_test_properties(DictionaryTools_t_CTest)

set_target_properties(DictionaryTools_t PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS DictionaryTools_t)

add_dependencies( DictionaryTools_t ALL_PLUGINS)

target_include_directories(DictionaryTools_t PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(DictionaryTools_t PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${CPPUNIT_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(DictionaryTools_t PUBLIC
DataFormatsCommon
Threads::Threads
cppunit
crypt
dl
nsl
rt
)


add_executable(Wrapper_t
  Wrapper_t.cpp
)

add_test(NAME Wrapper_t_CTest COMMAND Wrapper_t)

add_test_properties(Wrapper_t_CTest)

set_target_properties(Wrapper_t PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS Wrapper_t)

add_dependencies( Wrapper_t ALL_PLUGINS)

target_include_directories(Wrapper_t PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(Wrapper_t PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${CPPUNIT_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(Wrapper_t PUBLIC
DataFormatsCommon
Threads::Threads
cppunit
crypt
dl
nsl
rt
)


add_executable(traits_t
  traits_t.cpp
)

add_test(NAME traits_t_CTest COMMAND traits_t)

add_test_properties(traits_t_CTest)

set_target_properties(traits_t PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS traits_t)

add_dependencies( traits_t ALL_PLUGINS)

target_include_directories(traits_t PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(traits_t PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${CPPUNIT_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(traits_t PUBLIC
DataFormatsCommon
Threads::Threads
cppunit
crypt
dl
nsl
rt
)


add_executable(RefCore_t
  RefCore_t.cpp
)

add_test(NAME RefCore_t_CTest COMMAND RefCore_t)

add_test_properties(RefCore_t_CTest)

set_target_properties(RefCore_t PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS RefCore_t)

add_dependencies( RefCore_t ALL_PLUGINS)

target_include_directories(RefCore_t PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(RefCore_t PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${CPPUNIT_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(RefCore_t PUBLIC
DataFormatsCommon
Threads::Threads
cppunit
crypt
dl
nsl
rt
)


add_executable(Ref_t
  Ref_t.cpp
)

add_test(NAME Ref_t_CTest COMMAND Ref_t)

add_test_properties(Ref_t_CTest)

set_target_properties(Ref_t PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS Ref_t)

add_dependencies( Ref_t ALL_PLUGINS)

target_include_directories(Ref_t PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(Ref_t PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${CPPUNIT_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(Ref_t PUBLIC
DataFormatsCommon
Threads::Threads
cppunit
crypt
dl
nsl
rt
)


add_executable(ThinnedRefSet_t
  ThinnedRefSet_t.cpp
)

add_test(NAME ThinnedRefSet_t_CTest COMMAND ThinnedRefSet_t)

add_test_properties(ThinnedRefSet_t_CTest)

set_target_properties(ThinnedRefSet_t PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS ThinnedRefSet_t)

add_dependencies( ThinnedRefSet_t ALL_PLUGINS)

target_include_directories(ThinnedRefSet_t PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(ThinnedRefSet_t PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CATCH2_INCLUDE_DIRS}
${CMSMD5_INCLUDE_DIR}
${CPPUNIT_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(ThinnedRefSet_t PUBLIC
DataFormatsCommon
Threads::Threads
cppunit
crypt
dl
nsl
rt
)


add_executable(RefVector_t
  RefVector_t.cpp
)

add_test(NAME RefVector_t_CTest COMMAND RefVector_t)

add_test_properties(RefVector_t_CTest)

set_target_properties(RefVector_t PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS RefVector_t)

add_dependencies( RefVector_t ALL_PLUGINS)

target_include_directories(RefVector_t PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(RefVector_t PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${CPPUNIT_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(RefVector_t PUBLIC
DataFormatsCommon
Threads::Threads
cppunit
crypt
dl
nsl
rt
)


add_executable(DataFrame_t
  DataFrame_t.cpp
)

add_test(NAME DataFrame_t_CTest COMMAND DataFrame_t)

add_test_properties(DataFrame_t_CTest)

set_target_properties(DataFrame_t PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS DataFrame_t)

add_dependencies( DataFrame_t ALL_PLUGINS)

target_include_directories(DataFrame_t PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(DataFrame_t PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${CPPUNIT_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(DataFrame_t PUBLIC
DataFormatsCommon
Threads::Threads
cppunit
crypt
dl
nsl
rt
)


add_executable(DetSetNew_t
  DetSetNew_t.cpp
)

add_test(NAME DetSetNew_t_CTest COMMAND DetSetNew_t)

add_test_properties(DetSetNew_t_CTest)

set_target_properties(DetSetNew_t PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS DetSetNew_t)

add_dependencies( DetSetNew_t ALL_PLUGINS)

target_include_directories(DetSetNew_t PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(DetSetNew_t PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${CPPUNIT_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(DetSetNew_t PUBLIC
DataFormatsCommon
Threads::Threads
cppunit
crypt
dl
nsl
rt
)


add_executable(DetSetNewTS_t
  DetSetNewTS_t.cpp
)

add_test(NAME DetSetNewTS_t_CTest COMMAND DetSetNewTS_t)

add_test_properties(DetSetNewTS_t_CTest)

set_target_properties(DetSetNewTS_t PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS DetSetNewTS_t)

add_dependencies( DetSetNewTS_t ALL_PLUGINS)

target_include_directories(DetSetNewTS_t PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(DetSetNewTS_t PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${CPPUNIT_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(DetSetNewTS_t PUBLIC
DataFormatsCommon
Threads::Threads
cppunit
crypt
dl
nsl
rt
)


add_executable(MapOfVectors_t
  MapOfVectors_t.cpp
)

add_test(NAME MapOfVectors_t_CTest COMMAND MapOfVectors_t)

add_test_properties(MapOfVectors_t_CTest)

set_target_properties(MapOfVectors_t PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS MapOfVectors_t)

add_dependencies( MapOfVectors_t ALL_PLUGINS)

target_include_directories(MapOfVectors_t PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(MapOfVectors_t PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${CPPUNIT_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(MapOfVectors_t PUBLIC
DataFormatsCommon
Threads::Threads
cppunit
crypt
dl
nsl
rt
)


add_executable(exDSTV
  exDSTV.cpp
)

add_test(NAME exDSTV_CTest COMMAND exDSTV)

add_test_properties(exDSTV_CTest)

set_target_properties(exDSTV PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS exDSTV)

add_dependencies( exDSTV ALL_PLUGINS)

target_include_directories(exDSTV PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(exDSTV PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${CPPUNIT_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(exDSTV PUBLIC
DataFormatsCommon
Threads::Threads
cppunit
crypt
dl
nsl
rt
)


add_executable(Trie_t
  Trie_t.cpp
)

add_test(NAME Trie_t_CTest COMMAND Trie_t)

add_test_properties(Trie_t_CTest)

set_target_properties(Trie_t PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS Trie_t)

add_dependencies( Trie_t ALL_PLUGINS)

target_include_directories(Trie_t PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(Trie_t PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${CPPUNIT_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(Trie_t PUBLIC
DataFormatsCommon
Threads::Threads
cppunit
crypt
dl
nsl
rt
)


add_executable(exTrie
  exTrie.cpp
)

add_test(NAME exTrie_CTest COMMAND exTrie)

add_test_properties(exTrie_CTest)

set_target_properties(exTrie PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS exTrie)

add_dependencies( exTrie ALL_PLUGINS)

target_include_directories(exTrie PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(exTrie PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${CPPUNIT_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(exTrie PUBLIC
DataFormatsCommon
Threads::Threads
cppunit
crypt
dl
nsl
rt
)


add_executable(testBoostRange
  testBoostRange.cpp
)

add_test(NAME testBoostRange_CTest COMMAND testBoostRange)

add_test_properties(testBoostRange_CTest)

set_target_properties(testBoostRange PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS testBoostRange)

add_dependencies( testBoostRange ALL_PLUGINS)

target_include_directories(testBoostRange PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(testBoostRange PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${CPPUNIT_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(testBoostRange PUBLIC
DataFormatsCommon
Threads::Threads
cppunit
crypt
dl
nsl
rt
)


add_executable(testMultiAssociation
  testMultiAssociation.cc
  testRunner.cpp
)

add_test(NAME testMultiAssociation_CTest COMMAND testMultiAssociation)

add_test_properties(testMultiAssociation_CTest)

set_target_properties(testMultiAssociation PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS testMultiAssociation)

add_dependencies( testMultiAssociation ALL_PLUGINS)

target_include_directories(testMultiAssociation PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(testMultiAssociation PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${CPPUNIT_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(testMultiAssociation PUBLIC
DataFormatsCommon
Threads::Threads
cppunit
crypt
dl
nsl
rt
)


