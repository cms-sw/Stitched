add_executable(testDataFormatsCommon
  testRunner.cpp
  testOwnVector.cc
  testOneToOneAssociation.cc
  testValueMap.cc
  testOneToManyAssociation.cc
  testAssociationVector.cc
  testAssociationNew.cc
  testValueMapNew.cc
  testSortedCollection.cc
  testRangeMap.cc
  testIDVectorMap.cc
  ref_t.cppunit.cc
  DetSetRefVector_t.cppunit.cc
  reftobase_t.cppunit.cc
  reftobasevector_t.cppunit.cc
  cloningptr_t.cppunit.cc
  ptr_t.cppunit.cc
  ptrvector_t.cppunit.cc
  containermask_t.cppunit.cc
  reftobaseprod_t.cppunit.cc
)

target_include_directories(testDataFormatsCommon PUBLIC ${CPPUNIT_INCLUDE_DIR})
target_include_directories(testDataFormatsCommon PUBLIC ${Boost_INCLUDE_DIR})
target_include_directories(testDataFormatsCommon PUBLIC ${ROOT_INCLUDE_DIR})
target_link_libraries(testDataFormatsCommon PUBLIC
  ${Boost_REGEX_LIBRARY_RELEASE}
  dl
  ${CPPUNIT_LIBRARY}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  DataFormatsCommon
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  ${PYTHON_LIBRARY}
)

install( TARGETS testDataFormatsCommon EXPORT testDataFormatsCommon DESTINATION  bin )

add_executable(DetSetVector_t
  DetSetVector_t.cpp
)

target_include_directories(DetSetVector_t PUBLIC ${CPPUNIT_INCLUDE_DIR})
target_include_directories(DetSetVector_t PUBLIC ${Boost_INCLUDE_DIR})
target_link_libraries(DetSetVector_t PUBLIC
  ${Boost_REGEX_LIBRARY_RELEASE}
  dl
  ${CPPUNIT_LIBRARY}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  DataFormatsCommon
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  ${PYTHON_LIBRARY}
)

install( TARGETS DetSetVector_t EXPORT DetSetVector_t DESTINATION  bin )

add_executable(OwnVector_t
  OwnVector_t.cpp
)

target_include_directories(OwnVector_t PUBLIC ${CPPUNIT_INCLUDE_DIR})
target_include_directories(OwnVector_t PUBLIC ${Boost_INCLUDE_DIR})
target_include_directories(OwnVector_t PUBLIC ${ROOT_INCLUDE_DIR})
target_link_libraries(OwnVector_t PUBLIC
  ${Boost_REGEX_LIBRARY_RELEASE}
  dl
  ${CPPUNIT_LIBRARY}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  DataFormatsCommon
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  ${PYTHON_LIBRARY}
)

install( TARGETS OwnVector_t EXPORT OwnVector_t DESTINATION  bin )

add_executable(DictionaryTools_t
  DictionaryTools_t.cpp
)

target_include_directories(DictionaryTools_t PUBLIC ${CPPUNIT_INCLUDE_DIR})
target_include_directories(DictionaryTools_t PUBLIC ${Boost_INCLUDE_DIR})
target_include_directories(DictionaryTools_t PUBLIC ${ROOT_INCLUDE_DIR})
target_link_libraries(DictionaryTools_t PUBLIC
  ${Boost_REGEX_LIBRARY_RELEASE}
  dl
  ${CPPUNIT_LIBRARY}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  DataFormatsCommon
  ${PYTHON_LIBRARY}
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  DataFormatsStdDictionaries
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  DataFormatsWrappedStdDictionaries
)

install( TARGETS DictionaryTools_t EXPORT DictionaryTools_t DESTINATION  bin )

add_executable(Wrapper_t
  Wrapper_t.cpp
)

target_include_directories(Wrapper_t PUBLIC ${CPPUNIT_INCLUDE_DIR})
target_include_directories(Wrapper_t PUBLIC ${Boost_INCLUDE_DIR})
target_include_directories(Wrapper_t PUBLIC ${ROOT_INCLUDE_DIR})
target_link_libraries(Wrapper_t PUBLIC
  ${Boost_REGEX_LIBRARY_RELEASE}
  dl
  ${CPPUNIT_LIBRARY}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  DataFormatsCommon
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  ${PYTHON_LIBRARY}
)

install( TARGETS Wrapper_t EXPORT Wrapper_t DESTINATION  bin )

add_executable(traits_t
  traits_t.cpp
)

target_include_directories(traits_t PUBLIC ${CPPUNIT_INCLUDE_DIR})
target_include_directories(traits_t PUBLIC ${Boost_INCLUDE_DIR})
target_include_directories(traits_t PUBLIC ${ROOT_INCLUDE_DIR})
target_link_libraries(traits_t PUBLIC
  ${Boost_REGEX_LIBRARY_RELEASE}
  dl
  ${CPPUNIT_LIBRARY}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  DataFormatsCommon
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  ${PYTHON_LIBRARY}
)

install( TARGETS traits_t EXPORT traits_t DESTINATION  bin )

add_executable(RefCore_t
  RefCore_t.cpp
)

target_include_directories(RefCore_t PUBLIC ${CPPUNIT_INCLUDE_DIR})
target_include_directories(RefCore_t PUBLIC ${Boost_INCLUDE_DIR})
target_include_directories(RefCore_t PUBLIC ${ROOT_INCLUDE_DIR})
target_link_libraries(RefCore_t PUBLIC
  ${Boost_REGEX_LIBRARY_RELEASE}
  dl
  ${CPPUNIT_LIBRARY}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  DataFormatsCommon
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  ${PYTHON_LIBRARY}
)

install( TARGETS RefCore_t EXPORT RefCore_t DESTINATION  bin )

add_executable(Ref_t
  Ref_t.cpp
)

target_include_directories(Ref_t PUBLIC ${CPPUNIT_INCLUDE_DIR})
target_include_directories(Ref_t PUBLIC ${Boost_INCLUDE_DIR})
target_include_directories(Ref_t PUBLIC ${ROOT_INCLUDE_DIR})
target_link_libraries(Ref_t PUBLIC
  ${Boost_REGEX_LIBRARY_RELEASE}
  dl
  ${CPPUNIT_LIBRARY}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  DataFormatsCommon
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  ${PYTHON_LIBRARY}
)

install( TARGETS Ref_t EXPORT Ref_t DESTINATION  bin )

add_executable(RefVector_t
  RefVector_t.cpp
)

target_include_directories(RefVector_t PUBLIC ${CPPUNIT_INCLUDE_DIR})
target_include_directories(RefVector_t PUBLIC ${Boost_INCLUDE_DIR})
target_include_directories(RefVector_t PUBLIC ${ROOT_INCLUDE_DIR})
target_link_libraries(RefVector_t PUBLIC
  ${Boost_REGEX_LIBRARY_RELEASE}
  dl
  ${CPPUNIT_LIBRARY}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  DataFormatsCommon
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  ${PYTHON_LIBRARY}
)

install( TARGETS RefVector_t EXPORT RefVector_t DESTINATION  bin )

add_executable(DataFrame_t
  DataFrame_t.cpp
)

target_include_directories(DataFrame_t PUBLIC ${CPPUNIT_INCLUDE_DIR})
target_include_directories(DataFrame_t PUBLIC ${Boost_INCLUDE_DIR})
target_include_directories(DataFrame_t PUBLIC ${ROOT_INCLUDE_DIR})
target_link_libraries(DataFrame_t PUBLIC
  ${Boost_REGEX_LIBRARY_RELEASE}
  dl
  ${CPPUNIT_LIBRARY}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  DataFormatsCommon
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  ${PYTHON_LIBRARY}
)

install( TARGETS DataFrame_t EXPORT DataFrame_t DESTINATION  bin )

add_executable(DetSetNew_t
  DetSetNew_t.cpp
)

target_include_directories(DetSetNew_t PUBLIC ${CPPUNIT_INCLUDE_DIR})
target_include_directories(DetSetNew_t PUBLIC ${Boost_INCLUDE_DIR})
target_include_directories(DetSetNew_t PUBLIC ${ROOT_INCLUDE_DIR})
target_link_libraries(DetSetNew_t PUBLIC
  ${Boost_REGEX_LIBRARY_RELEASE}
  dl
  ${CPPUNIT_LIBRARY}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  DataFormatsCommon
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  ${PYTHON_LIBRARY}
)

install( TARGETS DetSetNew_t EXPORT DetSetNew_t DESTINATION  bin )

add_executable(DetSetNewTS_t
  DetSetNewTS_t.cpp
)

target_include_directories(DetSetNewTS_t PUBLIC ${CPPUNIT_INCLUDE_DIR})
target_include_directories(DetSetNewTS_t PUBLIC ${Boost_INCLUDE_DIR})
target_include_directories(DetSetNewTS_t PUBLIC ${ROOT_INCLUDE_DIR})
target_link_libraries(DetSetNewTS_t PUBLIC
  ${Boost_REGEX_LIBRARY_RELEASE}
  dl
  ${CPPUNIT_LIBRARY}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  DataFormatsCommon
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  ${PYTHON_LIBRARY}
)

install( TARGETS DetSetNewTS_t EXPORT DetSetNewTS_t DESTINATION  bin )

add_executable(MapOfVectors_t
  MapOfVectors_t.cpp
)

target_include_directories(MapOfVectors_t PUBLIC ${CPPUNIT_INCLUDE_DIR})
target_include_directories(MapOfVectors_t PUBLIC ${Boost_INCLUDE_DIR})
target_include_directories(MapOfVectors_t PUBLIC ${ROOT_INCLUDE_DIR})
target_link_libraries(MapOfVectors_t PUBLIC
  ${Boost_REGEX_LIBRARY_RELEASE}
  dl
  ${CPPUNIT_LIBRARY}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  DataFormatsCommon
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  ${PYTHON_LIBRARY}
)

install( TARGETS MapOfVectors_t EXPORT MapOfVectors_t DESTINATION  bin )

add_executable(exDSTV
  exDSTV.cpp
)

target_include_directories(exDSTV PUBLIC ${CPPUNIT_INCLUDE_DIR})
target_include_directories(exDSTV PUBLIC ${Boost_INCLUDE_DIR})
target_include_directories(exDSTV PUBLIC ${ROOT_INCLUDE_DIR})
target_link_libraries(exDSTV PUBLIC
  ${Boost_REGEX_LIBRARY_RELEASE}
  dl
  ${CPPUNIT_LIBRARY}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  DataFormatsCommon
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  ${PYTHON_LIBRARY}
)

install( TARGETS exDSTV EXPORT exDSTV DESTINATION  bin )

add_executable(Trie_t
  Trie_t.cpp
)

target_include_directories(Trie_t PUBLIC ${CPPUNIT_INCLUDE_DIR})
target_include_directories(Trie_t PUBLIC ${Boost_INCLUDE_DIR})
target_include_directories(Trie_t PUBLIC ${ROOT_INCLUDE_DIR})
target_link_libraries(Trie_t PUBLIC
  ${Boost_REGEX_LIBRARY_RELEASE}
  dl
  ${CPPUNIT_LIBRARY}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  DataFormatsCommon
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  ${PYTHON_LIBRARY}
)

install( TARGETS Trie_t EXPORT Trie_t DESTINATION  bin )

add_executable(exTrie
  exTrie.cpp
)

target_include_directories(exTrie PUBLIC ${CPPUNIT_INCLUDE_DIR})
target_include_directories(exTrie PUBLIC ${Boost_INCLUDE_DIR})
target_include_directories(exTrie PUBLIC ${ROOT_INCLUDE_DIR})
target_link_libraries(exTrie PUBLIC
  ${Boost_REGEX_LIBRARY_RELEASE}
  dl
  ${CPPUNIT_LIBRARY}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  DataFormatsCommon
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  ${PYTHON_LIBRARY}
)

install( TARGETS exTrie EXPORT exTrie DESTINATION  bin )

add_executable(testBoostRange
  testBoostRange.cpp
)

target_include_directories(testBoostRange PUBLIC ${CPPUNIT_INCLUDE_DIR})
target_include_directories(testBoostRange PUBLIC ${Boost_INCLUDE_DIR})
target_include_directories(testBoostRange PUBLIC ${ROOT_INCLUDE_DIR})
target_link_libraries(testBoostRange PUBLIC
  ${Boost_REGEX_LIBRARY_RELEASE}
  dl
  ${CPPUNIT_LIBRARY}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  DataFormatsCommon
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  ${PYTHON_LIBRARY}
)

install( TARGETS testBoostRange EXPORT testBoostRange DESTINATION  bin )

add_executable(testMultiAssociation
  testRunner.cpp
  testMultiAssociation.cc
)

target_include_directories(testMultiAssociation PUBLIC ${CPPUNIT_INCLUDE_DIR})
target_include_directories(testMultiAssociation PUBLIC ${Boost_INCLUDE_DIR})
target_include_directories(testMultiAssociation PUBLIC ${ROOT_INCLUDE_DIR})
target_link_libraries(testMultiAssociation PUBLIC
  ${Boost_REGEX_LIBRARY_RELEASE}
  dl
  ${CPPUNIT_LIBRARY}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  DataFormatsCommon
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  ${PYTHON_LIBRARY}
)

install( TARGETS testMultiAssociation EXPORT testMultiAssociation DESTINATION  bin )

