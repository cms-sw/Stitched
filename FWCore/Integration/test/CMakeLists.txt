add_executable(TestFWCoreIntegrationStandalone
  standalone_t.cppunit.cc
  testRunner.cpp
)

add_test(NAME TestFWCoreIntegrationStandalone_CTest COMMAND TestFWCoreIntegrationStandalone)

add_test_properties(TestFWCoreIntegrationStandalone_CTest)

set_target_properties(TestFWCoreIntegrationStandalone PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS TestFWCoreIntegrationStandalone)

add_dependencies( TestFWCoreIntegrationStandalone ALL_PLUGINS)

target_include_directories(TestFWCoreIntegrationStandalone PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestFWCoreIntegrationStandalone PUBLIC
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

target_link_libraries(TestFWCoreIntegrationStandalone PUBLIC
FWCoreFramework
FWCoreIntegration
FWCoreParameterSetReader
FWCorePluginManager
FWCoreUtilities
cppunit
)


add_executable(TestIntegrationEventHistory
  TestIntegration.cpp
)

add_test(NAME TestIntegrationEventHistory_CTest COMMAND /bin/bash -x ${CMAKE_CURRENT_SOURCE_DIR}/eventHistoryTest.sh)

add_test_properties(TestIntegrationEventHistory_CTest)

set_target_properties(TestIntegrationEventHistory PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS TestIntegrationEventHistory)

add_dependencies( TestIntegrationEventHistory ALL_PLUGINS)

target_include_directories(TestIntegrationEventHistory PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestIntegrationEventHistory PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(TestIntegrationEventHistory PUBLIC
FWCoreIntegration
FWCoreUtilities
)


add_executable(TestIntegrationRef
  TestIntegration.cpp
)

add_test(NAME TestIntegrationRef_CTest COMMAND /bin/bash -x ${CMAKE_CURRENT_SOURCE_DIR}/refTest.sh)

add_test_properties(TestIntegrationRef_CTest)

set_target_properties(TestIntegrationRef PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS TestIntegrationRef)

add_dependencies( TestIntegrationRef ALL_PLUGINS)

target_include_directories(TestIntegrationRef PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestIntegrationRef PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(TestIntegrationRef PUBLIC
FWCoreIntegration
FWCoreUtilities
)


add_executable(TestIntegrationTransRef
  TestIntegration.cpp
)

add_test(NAME TestIntegrationTransRef_CTest COMMAND /bin/bash -x ${CMAKE_CURRENT_SOURCE_DIR}/transRefTest.sh)

add_test_properties(TestIntegrationTransRef_CTest)

set_target_properties(TestIntegrationTransRef PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS TestIntegrationTransRef)

add_dependencies( TestIntegrationTransRef ALL_PLUGINS)

target_include_directories(TestIntegrationTransRef PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestIntegrationTransRef PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(TestIntegrationTransRef PUBLIC
FWCoreIntegration
FWCoreUtilities
)


add_executable(TestIntegrationTableTest
  TestIntegration.cpp
)

add_test(NAME TestIntegrationTableTest_CTest COMMAND /bin/bash -x ${CMAKE_CURRENT_SOURCE_DIR}/testTables.sh)

add_test_properties(TestIntegrationTableTest_CTest)

set_target_properties(TestIntegrationTableTest PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS TestIntegrationTableTest)

add_dependencies( TestIntegrationTableTest ALL_PLUGINS)

target_include_directories(TestIntegrationTableTest PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestIntegrationTableTest PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(TestIntegrationTableTest PUBLIC
FWCoreIntegration
FWCoreUtilities
)


add_executable(TestIntegrationProducedSource
  TestIntegration.cpp
)

add_test(NAME TestIntegrationProducedSource_CTest COMMAND /bin/bash -x ${CMAKE_CURRENT_SOURCE_DIR}/inputSourceTest.sh)

add_test_properties(TestIntegrationProducedSource_CTest)

set_target_properties(TestIntegrationProducedSource PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS TestIntegrationProducedSource)

add_dependencies( TestIntegrationProducedSource ALL_PLUGINS)

target_include_directories(TestIntegrationProducedSource PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestIntegrationProducedSource PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(TestIntegrationProducedSource PUBLIC
FWCoreIntegration
FWCoreUtilities
)


add_executable(TestIntegrationExternalSource
  TestIntegration.cpp
)

add_test(NAME TestIntegrationExternalSource_CTest COMMAND /bin/bash -x ${CMAKE_CURRENT_SOURCE_DIR}/inputExtSourceTest.sh)

add_test_properties(TestIntegrationExternalSource_CTest)

set_target_properties(TestIntegrationExternalSource PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS TestIntegrationExternalSource)

add_dependencies( TestIntegrationExternalSource ALL_PLUGINS)

target_include_directories(TestIntegrationExternalSource PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestIntegrationExternalSource PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(TestIntegrationExternalSource PUBLIC
FWCoreIntegration
FWCoreUtilities
)


add_executable(TestIntegrationEventSetup
  TestIntegration.cpp
)

add_test(NAME TestIntegrationEventSetup_CTest COMMAND /bin/bash -x ${CMAKE_CURRENT_SOURCE_DIR}/eventSetupTest.sh)

add_test_properties(TestIntegrationEventSetup_CTest)

set_target_properties(TestIntegrationEventSetup PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS TestIntegrationEventSetup)

add_dependencies( TestIntegrationEventSetup ALL_PLUGINS)

target_include_directories(TestIntegrationEventSetup PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestIntegrationEventSetup PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(TestIntegrationEventSetup PUBLIC
FWCoreIntegration
FWCoreUtilities
)


add_executable(TestIntegrationHierarchyExample
  TestIntegration.cpp
)

add_test(NAME TestIntegrationHierarchyExample_CTest COMMAND /bin/bash -x ${CMAKE_CURRENT_SOURCE_DIR}/hierarchy_example.sh)

add_test_properties(TestIntegrationHierarchyExample_CTest)

set_target_properties(TestIntegrationHierarchyExample PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS TestIntegrationHierarchyExample)

add_dependencies( TestIntegrationHierarchyExample ALL_PLUGINS)

target_include_directories(TestIntegrationHierarchyExample PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestIntegrationHierarchyExample PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(TestIntegrationHierarchyExample PUBLIC
FWCoreIntegration
FWCoreUtilities
)


add_executable(TestIntegrationServiceExample
  TestIntegration.cpp
)

add_test(NAME TestIntegrationServiceExample_CTest COMMAND /bin/bash -x ${CMAKE_CURRENT_SOURCE_DIR}/service_example.sh)

add_test_properties(TestIntegrationServiceExample_CTest)

set_target_properties(TestIntegrationServiceExample PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS TestIntegrationServiceExample)

add_dependencies( TestIntegrationServiceExample ALL_PLUGINS)

target_include_directories(TestIntegrationServiceExample PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestIntegrationServiceExample PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(TestIntegrationServiceExample PUBLIC
FWCoreIntegration
FWCoreUtilities
)


add_executable(TestIntegrationView
  TestIntegration.cpp
)

add_test(NAME TestIntegrationView_CTest COMMAND /bin/bash -x ${CMAKE_CURRENT_SOURCE_DIR}/ViewTest.sh)

add_test_properties(TestIntegrationView_CTest)

set_target_properties(TestIntegrationView PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS TestIntegrationView)

add_dependencies( TestIntegrationView ALL_PLUGINS)

target_include_directories(TestIntegrationView PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestIntegrationView PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(TestIntegrationView PUBLIC
FWCoreIntegration
FWCoreUtilities
)


add_executable(TestIntegrationSeriesOfProcesses
  TestIntegration.cpp
)

add_test(NAME TestIntegrationSeriesOfProcesses_CTest COMMAND /bin/bash -x ${CMAKE_CURRENT_SOURCE_DIR}/run_SeriesOfProcesses.sh)

add_test_properties(TestIntegrationSeriesOfProcesses_CTest)

set_target_properties(TestIntegrationSeriesOfProcesses PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS TestIntegrationSeriesOfProcesses)

add_dependencies( TestIntegrationSeriesOfProcesses ALL_PLUGINS)

target_include_directories(TestIntegrationSeriesOfProcesses PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestIntegrationSeriesOfProcesses PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(TestIntegrationSeriesOfProcesses PUBLIC
FWCoreIntegration
FWCoreUtilities
)


add_executable(TestParentageWithStreamerIO
  TestIntegration.cpp
)

add_test(NAME TestParentageWithStreamerIO_CTest COMMAND /bin/bash -x ${CMAKE_CURRENT_SOURCE_DIR}/run_ParentageWithStreamerIO.sh)

add_test_properties(TestParentageWithStreamerIO_CTest)

set_target_properties(TestParentageWithStreamerIO PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS TestParentageWithStreamerIO)

add_dependencies( TestParentageWithStreamerIO ALL_PLUGINS)

target_include_directories(TestParentageWithStreamerIO PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestParentageWithStreamerIO PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(TestParentageWithStreamerIO PUBLIC
FWCoreIntegration
FWCoreUtilities
)


add_executable(TestIntegrationThinningTests
  TestIntegration.cpp
)

add_test(NAME TestIntegrationThinningTests_CTest COMMAND /bin/bash -x ${CMAKE_CURRENT_SOURCE_DIR}/run_ThinningTests.sh)

add_test_properties(TestIntegrationThinningTests_CTest)

set_target_properties(TestIntegrationThinningTests PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS TestIntegrationThinningTests)

add_dependencies( TestIntegrationThinningTests ALL_PLUGINS)

target_include_directories(TestIntegrationThinningTests PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestIntegrationThinningTests PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(TestIntegrationThinningTests PUBLIC
FWCoreIntegration
FWCoreUtilities
)


add_executable(TestIntegrationGetBy
  TestIntegration.cpp
)

add_test(NAME TestIntegrationGetBy_CTest COMMAND /bin/bash -x ${CMAKE_CURRENT_SOURCE_DIR}/run_TestGetBy.sh)

add_test_properties(TestIntegrationGetBy_CTest)

set_target_properties(TestIntegrationGetBy PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS TestIntegrationGetBy)

add_dependencies( TestIntegrationGetBy ALL_PLUGINS)

target_include_directories(TestIntegrationGetBy PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestIntegrationGetBy PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(TestIntegrationGetBy PUBLIC
FWCoreIntegration
FWCoreUtilities
)


add_executable(TestIntegrationOutput
  TestIntegration.cpp
)

add_test(NAME TestIntegrationOutput_CTest COMMAND /bin/bash -x ${CMAKE_CURRENT_SOURCE_DIR}/run_TestOutput.sh)

add_test_properties(TestIntegrationOutput_CTest)

set_target_properties(TestIntegrationOutput PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS TestIntegrationOutput)

add_dependencies( TestIntegrationOutput ALL_PLUGINS)

target_include_directories(TestIntegrationOutput PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestIntegrationOutput PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(TestIntegrationOutput PUBLIC
FWCoreIntegration
FWCoreUtilities
)


add_executable(TestIntegrationDropOnInput
  TestIntegration.cpp
)

add_test(NAME TestIntegrationDropOnInput_CTest COMMAND /bin/bash -x ${CMAKE_CURRENT_SOURCE_DIR}/run_TestDropOnInput.sh)

add_test_properties(TestIntegrationDropOnInput_CTest)

set_target_properties(TestIntegrationDropOnInput PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS TestIntegrationDropOnInput)

add_dependencies( TestIntegrationDropOnInput ALL_PLUGINS)

target_include_directories(TestIntegrationDropOnInput PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestIntegrationDropOnInput PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(TestIntegrationDropOnInput PUBLIC
FWCoreIntegration
FWCoreUtilities
)


add_executable(TestSubProcess
  TestIntegration.cpp
)

add_test(NAME TestSubProcess_CTest COMMAND /bin/bash -x ${CMAKE_CURRENT_SOURCE_DIR}/run_SubProcess.sh)

add_test_properties(TestSubProcess_CTest)

set_target_properties(TestSubProcess PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS TestSubProcess)

add_dependencies( TestSubProcess ALL_PLUGINS)

target_include_directories(TestSubProcess PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestSubProcess PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(TestSubProcess PUBLIC
FWCoreIntegration
FWCoreUtilities
)


add_executable(TestIntegrationUnscheduledFailOnOutput
  TestIntegration.cpp
)

add_test(NAME TestIntegrationUnscheduledFailOnOutput_CTest COMMAND /bin/bash -x ${CMAKE_CURRENT_SOURCE_DIR}/run_unscheduledFailOnOutput.sh)

add_test_properties(TestIntegrationUnscheduledFailOnOutput_CTest)

set_target_properties(TestIntegrationUnscheduledFailOnOutput PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS TestIntegrationUnscheduledFailOnOutput)

add_dependencies( TestIntegrationUnscheduledFailOnOutput ALL_PLUGINS)

target_include_directories(TestIntegrationUnscheduledFailOnOutput PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestIntegrationUnscheduledFailOnOutput PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(TestIntegrationUnscheduledFailOnOutput PUBLIC
FWCoreIntegration
FWCoreUtilities
)


add_executable(TestIntegrationGetProductAtEnd
  TestIntegration.cpp
)

add_test(NAME TestIntegrationGetProductAtEnd_CTest COMMAND /bin/bash -x ${CMAKE_CURRENT_SOURCE_DIR}/run_getProductAtEnd.sh)

add_test_properties(TestIntegrationGetProductAtEnd_CTest)

set_target_properties(TestIntegrationGetProductAtEnd PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS TestIntegrationGetProductAtEnd)

add_dependencies( TestIntegrationGetProductAtEnd ALL_PLUGINS)

target_include_directories(TestIntegrationGetProductAtEnd PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestIntegrationGetProductAtEnd PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(TestIntegrationGetProductAtEnd PUBLIC
FWCoreIntegration
FWCoreUtilities
)


add_executable(TestIntegrationParentless
  TestIntegration.cpp
)

add_test(NAME TestIntegrationParentless_CTest COMMAND /bin/bash -x ${CMAKE_CURRENT_SOURCE_DIR}/parentlessTest.sh)

add_test_properties(TestIntegrationParentless_CTest)

set_target_properties(TestIntegrationParentless PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS TestIntegrationParentless)

add_dependencies( TestIntegrationParentless ALL_PLUGINS)

target_include_directories(TestIntegrationParentless PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestIntegrationParentless PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(TestIntegrationParentless PUBLIC
FWCoreIntegration
FWCoreUtilities
)


add_executable(TestIntegrationWaitingThread
  TestIntegration.cpp
)

add_test(NAME TestIntegrationWaitingThread_CTest COMMAND /bin/bash -x ${CMAKE_CURRENT_SOURCE_DIR}/waiting_thread_test.sh)

add_test_properties(TestIntegrationWaitingThread_CTest)

set_target_properties(TestIntegrationWaitingThread PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS TestIntegrationWaitingThread)

add_dependencies( TestIntegrationWaitingThread ALL_PLUGINS)

target_include_directories(TestIntegrationWaitingThread PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestIntegrationWaitingThread PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(TestIntegrationWaitingThread PUBLIC
FWCoreIntegration
FWCoreUtilities
)


add_executable(TestIntegrationRunMerge
  TestIntegration.cpp
)

add_test(NAME TestIntegrationRunMerge_CTest COMMAND /bin/bash -x ${CMAKE_CURRENT_SOURCE_DIR}/run_RunMerge.sh)

add_test_properties(TestIntegrationRunMerge_CTest)

set_target_properties(TestIntegrationRunMerge PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS TestIntegrationRunMerge)

add_dependencies( TestIntegrationRunMerge ALL_PLUGINS)

target_include_directories(TestIntegrationRunMerge PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestIntegrationRunMerge PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(TestIntegrationRunMerge PUBLIC
FWCoreIntegration
FWCoreUtilities
)


add_executable(TestIntegrationRunMerge2
  TestIntegration.cpp
)

add_test(NAME TestIntegrationRunMerge2_CTest COMMAND /bin/bash -x ${CMAKE_CURRENT_SOURCE_DIR}/run_RunMerge2.sh)

add_test_properties(TestIntegrationRunMerge2_CTest)

set_target_properties(TestIntegrationRunMerge2 PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS TestIntegrationRunMerge2)

add_dependencies( TestIntegrationRunMerge2 ALL_PLUGINS)

target_include_directories(TestIntegrationRunMerge2 PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestIntegrationRunMerge2 PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(TestIntegrationRunMerge2 PUBLIC
FWCoreIntegration
FWCoreUtilities
)


add_executable(TestIntegrationRefMerge
  TestIntegration.cpp
)

add_test(NAME TestIntegrationRefMerge_CTest COMMAND /bin/bash -x ${CMAKE_CURRENT_SOURCE_DIR}/run_RefMerge.sh)

add_test_properties(TestIntegrationRefMerge_CTest)

set_target_properties(TestIntegrationRefMerge PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS TestIntegrationRefMerge)

add_dependencies( TestIntegrationRefMerge ALL_PLUGINS)

target_include_directories(TestIntegrationRefMerge PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestIntegrationRefMerge PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(TestIntegrationRefMerge PUBLIC
FWCoreIntegration
FWCoreUtilities
)


add_executable(TestIntegrationRefAlias
  TestIntegration.cpp
)

add_test(NAME TestIntegrationRefAlias_CTest COMMAND /bin/bash -x ${CMAKE_CURRENT_SOURCE_DIR}/run_RefAlias.sh)

add_test_properties(TestIntegrationRefAlias_CTest)

set_target_properties(TestIntegrationRefAlias PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS TestIntegrationRefAlias)

add_dependencies( TestIntegrationRefAlias ALL_PLUGINS)

target_include_directories(TestIntegrationRefAlias PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestIntegrationRefAlias PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(TestIntegrationRefAlias PUBLIC
FWCoreIntegration
FWCoreUtilities
)


add_executable(TestIntegrationParameterSet
  TestIntegration.cpp
)

add_test(NAME TestIntegrationParameterSet_CTest COMMAND /bin/bash -x ${CMAKE_CURRENT_SOURCE_DIR}/run_ParameterSet.sh)

add_test_properties(TestIntegrationParameterSet_CTest)

set_target_properties(TestIntegrationParameterSet PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS TestIntegrationParameterSet)

add_dependencies( TestIntegrationParameterSet ALL_PLUGINS)

target_include_directories(TestIntegrationParameterSet PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestIntegrationParameterSet PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(TestIntegrationParameterSet PUBLIC
FWCoreIntegration
FWCoreUtilities
)


add_executable(TestIntegrationSwitchProducer
  TestIntegration.cpp
)

add_test(NAME TestIntegrationSwitchProducer_CTest COMMAND /bin/bash -x ${CMAKE_CURRENT_SOURCE_DIR}/run_TestSwitchProducer.sh)

add_test_properties(TestIntegrationSwitchProducer_CTest)

set_target_properties(TestIntegrationSwitchProducer PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS TestIntegrationSwitchProducer)

add_dependencies( TestIntegrationSwitchProducer ALL_PLUGINS)

target_include_directories(TestIntegrationSwitchProducer PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestIntegrationSwitchProducer PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(TestIntegrationSwitchProducer PUBLIC
FWCoreIntegration
FWCoreUtilities
)


add_executable(TestIntegration_TestEDAlias
  TestIntegration.cpp
)

add_test(NAME TestIntegration_TestEDAlias_CTest COMMAND /bin/bash -x ${CMAKE_CURRENT_SOURCE_DIR}/run_TestEDAlias.sh)

add_test_properties(TestIntegration_TestEDAlias_CTest)

set_target_properties(TestIntegration_TestEDAlias PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS TestIntegration_TestEDAlias)

add_dependencies( TestIntegration_TestEDAlias ALL_PLUGINS)

target_include_directories(TestIntegration_TestEDAlias PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestIntegration_TestEDAlias PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(TestIntegration_TestEDAlias PUBLIC
FWCoreIntegration
FWCoreUtilities
)


add_executable(TestIntegrationExistingDictionary
  TestIntegration.cpp
)

add_test(NAME TestIntegrationExistingDictionary_CTest COMMAND /bin/bash -x ${CMAKE_CURRENT_SOURCE_DIR}/run_TestExistingDictionary.sh)

add_test_properties(TestIntegrationExistingDictionary_CTest)

set_target_properties(TestIntegrationExistingDictionary PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS TestIntegrationExistingDictionary)

add_dependencies( TestIntegrationExistingDictionary ALL_PLUGINS)

target_include_directories(TestIntegrationExistingDictionary PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestIntegrationExistingDictionary PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(TestIntegrationExistingDictionary PUBLIC
FWCoreIntegration
FWCoreUtilities
)


add_executable(TestIntegrationDataFormatsProvenance
  ProcessConfiguration_t.cpp
  ProcessHistory_t.cpp
)

add_test(NAME TestIntegrationDataFormatsProvenance_CTest COMMAND TestIntegrationDataFormatsProvenance)

add_test_properties(TestIntegrationDataFormatsProvenance_CTest)

set_target_properties(TestIntegrationDataFormatsProvenance PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS TestIntegrationDataFormatsProvenance)

add_dependencies( TestIntegrationDataFormatsProvenance ALL_PLUGINS)

target_include_directories(TestIntegrationDataFormatsProvenance PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestIntegrationDataFormatsProvenance PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CATCH2_INCLUDE_DIRS}
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(TestIntegrationDataFormatsProvenance PUBLIC
DataFormatsProvenance
FWCoreIntegration
FWCoreParameterSet
FWCoreVersion
)


add_executable(SwitchProducer_t
  SwitchProducer_t.cpp
)

add_test(NAME SwitchProducer_t_CTest COMMAND SwitchProducer_t)

add_test_properties(SwitchProducer_t_CTest)

set_target_properties(SwitchProducer_t PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS SwitchProducer_t)

add_dependencies( SwitchProducer_t ALL_PLUGINS)

target_include_directories(SwitchProducer_t PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(SwitchProducer_t PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CATCH2_INCLUDE_DIRS}
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(SwitchProducer_t PUBLIC
DataFormatsProvenance
FWCoreFramework
FWCoreIntegration
FWCoreParameterSet
FWCoreParameterSetReader
FWCoreTestProcessor
)


add_executable(ProcessAccelerator_t
  ProcessAccelerator_t.cpp
)

add_test(NAME ProcessAccelerator_t_CTest COMMAND ProcessAccelerator_t)

add_test_properties(ProcessAccelerator_t_CTest)

set_target_properties(ProcessAccelerator_t PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS ProcessAccelerator_t)

add_dependencies( ProcessAccelerator_t ALL_PLUGINS)

target_include_directories(ProcessAccelerator_t PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(ProcessAccelerator_t PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CATCH2_INCLUDE_DIRS}
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(ProcessAccelerator_t PUBLIC
DataFormatsProvenance
FWCoreFramework
FWCoreIntegration
FWCoreParameterSet
FWCoreParameterSetReader
FWCoreTestProcessor
fmt::fmt
)


add_executable(EDAlias_t
  EDAlias_t.cpp
)

add_test(NAME EDAlias_t_CTest COMMAND EDAlias_t)

add_test_properties(EDAlias_t_CTest)

set_target_properties(EDAlias_t PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS EDAlias_t)

add_dependencies( EDAlias_t ALL_PLUGINS)

target_include_directories(EDAlias_t PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(EDAlias_t PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CATCH2_INCLUDE_DIRS}
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(EDAlias_t PUBLIC
DataFormatsProvenance
FWCoreFramework
FWCoreIntegration
FWCoreParameterSet
FWCoreTestProcessor
fmt::fmt
)


add_executable(RandomIntProducer_t
  RandomIntProducer_t.cpp
)

add_test(NAME RandomIntProducer_t_CTest COMMAND RandomIntProducer_t)

add_test_properties(RandomIntProducer_t_CTest)

set_target_properties(RandomIntProducer_t PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS RandomIntProducer_t)

add_dependencies( RandomIntProducer_t ALL_PLUGINS)

target_include_directories(RandomIntProducer_t PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(RandomIntProducer_t PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CATCH2_INCLUDE_DIRS}
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(RandomIntProducer_t PUBLIC
DataFormatsProvenance
FWCoreFramework
FWCoreIntegration
FWCoreParameterSet
FWCoreTestProcessor
)


