add_executable(testDataFormatsProvenance
  compactEventAuxiliaryVector_t.cppunit.cc
  eventid_t.cppunit.cc
  eventrange_t.cppunit.cc
  indexIntoFile1_t.cppunit.cc
  indexIntoFile2_t.cppunit.cc
  indexIntoFile3_t.cppunit.cc
  indexIntoFile4_t.cppunit.cc
  indexIntoFile5_t.cppunit.cc
  indexIntoFile_t.cppunit.cc
  lumirange_t.cppunit.cc
  parametersetid_t.cppunit.cc
  testRunner.cpp
  timestamp_t.cppunit.cc
)

add_test(NAME testDataFormatsProvenance_CTest COMMAND testDataFormatsProvenance)

add_test_properties(testDataFormatsProvenance_CTest)

set_target_properties(testDataFormatsProvenance PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS testDataFormatsProvenance)

add_dependencies( testDataFormatsProvenance ALL_PLUGINS)

target_include_directories(testDataFormatsProvenance PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(testDataFormatsProvenance PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${CPPUNIT_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(testDataFormatsProvenance PUBLIC
DataFormatsProvenance
cppunit
)


add_executable(EntryDescription_t
  EntryDescription_t.cpp
)

add_test(NAME EntryDescription_t_CTest COMMAND EntryDescription_t)

add_test_properties(EntryDescription_t_CTest)

set_target_properties(EntryDescription_t PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS EntryDescription_t)

add_dependencies( EntryDescription_t ALL_PLUGINS)

target_include_directories(EntryDescription_t PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(EntryDescription_t PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${CPPUNIT_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(EntryDescription_t PUBLIC
DataFormatsProvenance
cppunit
)


add_executable(ElementID_t
  ElementID_t.cpp
)

add_test(NAME ElementID_t_CTest COMMAND ElementID_t)

add_test_properties(ElementID_t_CTest)

set_target_properties(ElementID_t PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS ElementID_t)

add_dependencies( ElementID_t ALL_PLUGINS)

target_include_directories(ElementID_t PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(ElementID_t PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CATCH2_INCLUDE_DIRS}
${CMSMD5_INCLUDE_DIR}
${CPPUNIT_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(ElementID_t PUBLIC
DataFormatsProvenance
cppunit
)


add_executable(StoredProcessBlockHelper_t
  StoredProcessBlockHelper_t.cpp
)

add_test(NAME StoredProcessBlockHelper_t_CTest COMMAND StoredProcessBlockHelper_t)

add_test_properties(StoredProcessBlockHelper_t_CTest)

set_target_properties(StoredProcessBlockHelper_t PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS StoredProcessBlockHelper_t)

add_dependencies( StoredProcessBlockHelper_t ALL_PLUGINS)

target_include_directories(StoredProcessBlockHelper_t PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(StoredProcessBlockHelper_t PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CATCH2_INCLUDE_DIRS}
${CMSMD5_INCLUDE_DIR}
${CPPUNIT_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(StoredProcessBlockHelper_t PUBLIC
DataFormatsProvenance
cppunit
)


add_executable(testProductResolverIndexHelper
  productResolverIndexHelper_t.cppunit.cc
  testRunner.cpp
)

add_test(NAME testProductResolverIndexHelper_CTest COMMAND testProductResolverIndexHelper)

add_test_properties(testProductResolverIndexHelper_CTest)

set_target_properties(testProductResolverIndexHelper PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS testProductResolverIndexHelper)

add_dependencies( testProductResolverIndexHelper ALL_PLUGINS)

target_include_directories(testProductResolverIndexHelper PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(testProductResolverIndexHelper PUBLIC
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

target_link_libraries(testProductResolverIndexHelper PUBLIC
DataFormatsProvenance
DataFormatsTestObjects
cppunit
)


add_executable(productResolverIndexHelperTest
  productResolverIndexHelperTest.cc
)

set_target_properties(productResolverIndexHelperTest PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS productResolverIndexHelperTest)

add_dependencies( productResolverIndexHelperTest ALL_PLUGINS)

target_include_directories(productResolverIndexHelperTest PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(productResolverIndexHelperTest PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${CPPUNIT_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(productResolverIndexHelperTest PUBLIC
DataFormatsProvenance
cppunit
)


