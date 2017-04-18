add_executable(testDataFormatsProvenance
  testRunner.cpp
  eventid_t.cppunit.cc
  timestamp_t.cppunit.cc
  parametersetid_t.cppunit.cc
  indexIntoFile_t.cppunit.cc
  indexIntoFile1_t.cppunit.cc
  indexIntoFile2_t.cppunit.cc
  indexIntoFile3_t.cppunit.cc
  indexIntoFile4_t.cppunit.cc
  indexIntoFile5_t.cppunit.cc
  lumirange_t.cppunit.cc
  eventrange_t.cppunit.cc
)

target_include_directories(testDataFormatsProvenance PUBLIC ${CPPUNIT_INCLUDE_DIR})
include_directories(testDataFormatsProvenance PUBLIC ${CPPUNIT_INCLUDE_DIR})
target_link_libraries(testDataFormatsProvenance PUBLIC
  ${CPPUNIT_LIBRARY}
  DataFormatsProvenance
)

add_test(NAME testDataFormatsProvenance COMMAND testDataFormatsProvenance)
add_executable(EntryDescription_t
  EntryDescription_t.cpp
)

target_include_directories(EntryDescription_t PUBLIC ${CPPUNIT_INCLUDE_DIR})
include_directories(EntryDescription_t PUBLIC ${CPPUNIT_INCLUDE_DIR})
target_include_directories(EntryDescription_t PUBLIC ${Boost_INCLUDE_DIR})
include_directories(EntryDescription_t PUBLIC ${Boost_INCLUDE_DIR})
target_include_directories(EntryDescription_t PUBLIC ${TBB_INCLUDE_DIRS})
include_directories(EntryDescription_t PUBLIC ${TBB_INCLUDE_DIRS})
target_include_directories(EntryDescription_t PUBLIC ${ROOT_INCLUDE_DIR})
include_directories(EntryDescription_t PUBLIC ${ROOT_INCLUDE_DIR})
target_link_libraries(EntryDescription_t PUBLIC
  ${CPPUNIT_LIBRARY}
  DataFormatsProvenance
)

add_test(NAME EntryDescription_t COMMAND EntryDescription_t)
add_executable(testProductResolverIndexHelper
  testRunner.cpp
  productResolverIndexHelper_t.cppunit.cc
)

target_include_directories(testProductResolverIndexHelper PUBLIC ${CPPUNIT_INCLUDE_DIR})
include_directories(testProductResolverIndexHelper PUBLIC ${CPPUNIT_INCLUDE_DIR})
target_include_directories(testProductResolverIndexHelper PUBLIC ${Boost_INCLUDE_DIR})
include_directories(testProductResolverIndexHelper PUBLIC ${Boost_INCLUDE_DIR})
target_include_directories(testProductResolverIndexHelper PUBLIC ${TBB_INCLUDE_DIRS})
include_directories(testProductResolverIndexHelper PUBLIC ${TBB_INCLUDE_DIRS})
target_include_directories(testProductResolverIndexHelper PUBLIC ${ROOT_INCLUDE_DIR})
include_directories(testProductResolverIndexHelper PUBLIC ${ROOT_INCLUDE_DIR})
target_link_libraries(testProductResolverIndexHelper PUBLIC
  ${CPPUNIT_LIBRARY}
  DataFormatsProvenance
  DataFormatsTestObjects
)

add_test(NAME testProductResolverIndexHelper COMMAND testProductResolverIndexHelper)
add_executable(productResolverIndexHelperTest
  productResolverIndexHelperTest.cc
)

target_include_directories(productResolverIndexHelperTest PUBLIC ${CPPUNIT_INCLUDE_DIR})
include_directories(productResolverIndexHelperTest PUBLIC ${CPPUNIT_INCLUDE_DIR})
target_link_libraries(productResolverIndexHelperTest PUBLIC
  ${CPPUNIT_LIBRARY}
  DataFormatsProvenance
)

add_test(NAME productResolverIndexHelperTest COMMAND productResolverIndexHelperTest)
