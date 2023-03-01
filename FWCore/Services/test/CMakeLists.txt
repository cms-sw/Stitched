add_library(StuckAnalyzer SHARED ${StuckAnalyzer_EXTRA_SOURCES}
  StuckAnalyzer.cc
)

set_target_properties(StuckAnalyzer PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_TESTLIBS StuckAnalyzer)

set_target_properties(StuckAnalyzer PROPERTIES PREFIX "plugin")

add_dependencies( ALL_PLUGINS StuckAnalyzer)

edm_write_config( StuckAnalyzer FWCore/Services)

target_include_directories(StuckAnalyzer PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(StuckAnalyzer PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CLHEP_INCLUDE_DIR}
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(StuckAnalyzer PUBLIC
FWCoreFramework
FWCoreServices
)


add_python_rules(FWCore/Services/test/)

add_script_rules(FWCore/Services/test/)

install( TARGETS StuckAnalyzer DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

add_library(SiteLocalConfigUnitTestClient SHARED ${SiteLocalConfigUnitTestClient_EXTRA_SOURCES}
  SiteLocalConfigServiceCatalogTester.cc
  SiteLocalConfigServiceTester.cc
)

set_target_properties(SiteLocalConfigUnitTestClient PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_TESTLIBS SiteLocalConfigUnitTestClient)

set_target_properties(SiteLocalConfigUnitTestClient PROPERTIES PREFIX "plugin")

add_dependencies( ALL_PLUGINS SiteLocalConfigUnitTestClient)

edm_write_config( SiteLocalConfigUnitTestClient FWCore/Services)

target_include_directories(SiteLocalConfigUnitTestClient PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(SiteLocalConfigUnitTestClient PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CLHEP_INCLUDE_DIR}
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(SiteLocalConfigUnitTestClient PUBLIC
FWCoreFramework
FWCoreServices
)


add_python_rules(FWCore/Services/test/)

add_script_rules(FWCore/Services/test/)

install( TARGETS SiteLocalConfigUnitTestClient DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

add_executable(testFWCoreServicesCatch2
  test_catch2_ExternalRandomNumberGeneratorService.cc
  test_catch2_SiteLocalConfigService.cc
  test_catch2_cpu_features.cc
)

add_test(NAME testFWCoreServicesCatch2_CTest COMMAND testFWCoreServicesCatch2)

add_test_properties(testFWCoreServicesCatch2_CTest)

set_target_properties(testFWCoreServicesCatch2 PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS testFWCoreServicesCatch2)

add_dependencies( testFWCoreServicesCatch2 ALL_PLUGINS)

target_include_directories(testFWCoreServicesCatch2 PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(testFWCoreServicesCatch2 PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CATCH2_INCLUDE_DIRS}
${CLHEP_INCLUDE_DIR}
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(testFWCoreServicesCatch2 PUBLIC
${CLHEP_LIBRARIES}
FWCoreServices
)


add_executable(TestResourceInformationService
  TestFWCoreServicesDriver.cpp
)

add_test(NAME TestResourceInformationService_CTest COMMAND /bin/bash -x ${CMAKE_CURRENT_SOURCE_DIR}/test_resourceInformationService.sh)

add_test_properties(TestResourceInformationService_CTest)

set_target_properties(TestResourceInformationService PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS TestResourceInformationService)

add_dependencies( TestResourceInformationService ALL_PLUGINS)

target_include_directories(TestResourceInformationService PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestResourceInformationService PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CLHEP_INCLUDE_DIR}
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(TestResourceInformationService PUBLIC
FWCoreServices
FWCoreUtilities
)


