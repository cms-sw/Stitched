add_library(FpeTester SHARED 
  FpeTester.cc
)

target_link_libraries(FpeTester PUBLIC
  FWCorePluginManager
  FWCoreServices
  FWCoreFramework
)

install( TARGETS FpeTester EXPORT FpeTester DESTINATION  lib )

add_library(StuckAnalyzer SHARED 
  StuckAnalyzer.cc
)

target_include_directories(StuckAnalyzer PUBLIC ${PYTHON_INCLUDE_DIR})
target_include_directories(StuckAnalyzer PUBLIC ${Boost_INCLUDE_DIR}/python)
target_include_directories(StuckAnalyzer PUBLIC ${Boost_INCLUDE_DIR})
target_include_directories(StuckAnalyzer PUBLIC ${TBB_INCLUDE_DIRS})
target_include_directories(StuckAnalyzer PUBLIC ${ROOT_INCLUDE_DIR})
target_link_libraries(StuckAnalyzer PUBLIC
  FWCorePluginManager
  FWCoreServices
  FWCoreFramework
)

install( TARGETS StuckAnalyzer EXPORT StuckAnalyzer DESTINATION  lib )

add_library(SiteLocalConfigUnitTestClient SHARED 
  SiteLocalConfigServiceTester.cc
)

target_include_directories(SiteLocalConfigUnitTestClient PUBLIC ${PYTHON_INCLUDE_DIR})
target_include_directories(SiteLocalConfigUnitTestClient PUBLIC ${Boost_INCLUDE_DIR}/python)
target_include_directories(SiteLocalConfigUnitTestClient PUBLIC ${TINYXML_INCLUDE_DIR})
target_include_directories(SiteLocalConfigUnitTestClient PUBLIC ${Boost_INCLUDE_DIR})
target_include_directories(SiteLocalConfigUnitTestClient PUBLIC ${MD5_INCLUDE_DIR})
target_include_directories(SiteLocalConfigUnitTestClient PUBLIC ${TBB_INCLUDE_DIRS})
target_include_directories(SiteLocalConfigUnitTestClient PUBLIC ${ROOT_INCLUDE_DIR})
target_link_libraries(SiteLocalConfigUnitTestClient PUBLIC
  FWCorePluginManager
  FWCoreServices
  FWCoreFramework
)

install( TARGETS SiteLocalConfigUnitTestClient EXPORT SiteLocalConfigUnitTestClient DESTINATION  lib )

add_executable(TestFWCoreServicesDriver
  TestFWCoreServicesDriver.cpp
)

target_include_directories(TestFWCoreServicesDriver PUBLIC ${PYTHON_INCLUDE_DIR})
target_include_directories(TestFWCoreServicesDriver PUBLIC ${Boost_INCLUDE_DIR}/python)
target_include_directories(TestFWCoreServicesDriver PUBLIC ${TINYXML_INCLUDE_DIR})
target_include_directories(TestFWCoreServicesDriver PUBLIC ${Boost_INCLUDE_DIR})
target_include_directories(TestFWCoreServicesDriver PUBLIC ${MD5_INCLUDE_DIR})
target_include_directories(TestFWCoreServicesDriver PUBLIC ${TBB_INCLUDE_DIRS})
target_include_directories(TestFWCoreServicesDriver PUBLIC ${ROOT_INCLUDE_DIR})
target_link_libraries(TestFWCoreServicesDriver PUBLIC
  FWCoreServices
  FWCoreUtilities
)

install( TARGETS TestFWCoreServicesDriver EXPORT TestFWCoreServicesDriver DESTINATION  bin )

