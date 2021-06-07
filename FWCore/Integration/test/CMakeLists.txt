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
${PYBIND11_INCLUDE_DIR}
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


add_executable(CatchStdExceptiontest
  TestIntegration.cpp
)

add_test(NAME CatchStdExceptiontest_CTest COMMAND /bin/bash -x ${CMAKE_CURRENT_SOURCE_DIR}/CatchStdExceptiontest.sh)

add_test_properties(CatchStdExceptiontest_CTest)

set_target_properties(CatchStdExceptiontest PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS CatchStdExceptiontest)

add_dependencies( CatchStdExceptiontest ALL_PLUGINS)

target_include_directories(CatchStdExceptiontest PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(CatchStdExceptiontest PUBLIC
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

target_link_libraries(CatchStdExceptiontest PUBLIC
FWCoreIntegration
FWCoreUtilities
)


add_executable(CatchCmsExceptiontest
  TestIntegration.cpp
)

add_test(NAME CatchCmsExceptiontest_CTest COMMAND /bin/bash -x ${CMAKE_CURRENT_SOURCE_DIR}/CatchCmsExceptiontest.sh)

add_test_properties(CatchCmsExceptiontest_CTest)

set_target_properties(CatchCmsExceptiontest PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS CatchCmsExceptiontest)

add_dependencies( CatchCmsExceptiontest ALL_PLUGINS)

target_include_directories(CatchCmsExceptiontest PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(CatchCmsExceptiontest PUBLIC
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

target_link_libraries(CatchCmsExceptiontest PUBLIC
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


add_executable(ProcessConfiguration_t
  ProcessConfiguration_t.cpp
)

add_test(NAME ProcessConfiguration_t_CTest COMMAND ProcessConfiguration_t)

add_test_properties(ProcessConfiguration_t_CTest)

set_target_properties(ProcessConfiguration_t PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS ProcessConfiguration_t)

add_dependencies( ProcessConfiguration_t ALL_PLUGINS)

target_include_directories(ProcessConfiguration_t PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(ProcessConfiguration_t PUBLIC
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

target_link_libraries(ProcessConfiguration_t PUBLIC
DataFormatsProvenance
FWCoreIntegration
FWCoreParameterSet
)


add_executable(ProcessHistory_t
  ProcessHistory_t.cpp
)

add_test(NAME ProcessHistory_t_CTest COMMAND ProcessHistory_t)

add_test_properties(ProcessHistory_t_CTest)

set_target_properties(ProcessHistory_t PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS ProcessHistory_t)

add_dependencies( ProcessHistory_t ALL_PLUGINS)

target_include_directories(ProcessHistory_t PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(ProcessHistory_t PUBLIC
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

target_link_libraries(ProcessHistory_t PUBLIC
DataFormatsProvenance
FWCoreIntegration
FWCoreParameterSet
FWCoreUtilities
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
${PYBIND11_INCLUDE_DIR}
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
${PYBIND11_INCLUDE_DIR}
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


add_library(TestPSetAnalyzer SHARED ${TestPSetAnalyzer_EXTRA_SOURCES}
  TestPSetAnalyzer.cc
)

set_target_properties(TestPSetAnalyzer PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_TESTLIBS TestPSetAnalyzer)

set_target_properties(TestPSetAnalyzer PROPERTIES PREFIX "plugin")

add_dependencies( ALL_PLUGINS TestPSetAnalyzer)

edm_write_config( TestPSetAnalyzer FWCore/Integration)

target_include_directories(TestPSetAnalyzer PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestPSetAnalyzer PUBLIC
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

target_link_libraries(TestPSetAnalyzer PUBLIC
DataFormatsProvenance
FWCoreFramework
FWCoreIntegration
FWCoreParameterSet
)


add_python_rules(FWCore/Integration/test/)

add_script_rules(FWCore/Integration/test/)

install( TARGETS TestPSetAnalyzer DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

add_library(SomeTestModules SHARED ${SomeTestModules_EXTRA_SOURCES}
  AcquireIntFilter.cc
  AcquireIntProducer.cc
  AcquireIntStreamFilter.cc
  AcquireIntStreamProducer.cc
  AssociationMapAnalyzer.cc
  AssociationMapProducer.cc
  DetSetVectorThingProducer.cc
  ExistingDictionaryTestModules.cc
  GadgetRcd.cc
  MissingDictionaryTestProducer.cc
  PluginUsingProducer.cc
  ProducerUsingCollector.cc
  SlimmingDSVThingProducer.cc
  SlimmingThingProducer.cc
  SwitchProducerProvenanceAnalyzer.cc
  TableTestModules.cc
  TestGlobalOutput.cc
  TestLimitedOutput.cc
  ThingAlgorithm.cc
  ThingAnalyzer.cc
  ThingProducer.cc
  ThinnedRefFromTestAnalyzer.cc
  ThinningDSVTestAnalyzer.cc
  ThinningDSVThingProducer.cc
  ThinningTestAnalyzer.cc
  ThinningThingProducer.cc
  TrackOfDSVThingsProducer.cc
  TrackOfThingsProducer.cc
  WhatsIt.cc
)

set_target_properties(SomeTestModules PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_TESTLIBS SomeTestModules)

set_target_properties(SomeTestModules PROPERTIES PREFIX "plugin")

add_dependencies( ALL_PLUGINS SomeTestModules)

edm_write_config( SomeTestModules FWCore/Integration)

target_include_directories(SomeTestModules PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(SomeTestModules PUBLIC
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

target_link_libraries(SomeTestModules PUBLIC
DataFormatsTestObjects
FWCoreFramework
FWCoreIntegration
FWCoreIntegrationWaitingServer
)


add_python_rules(FWCore/Integration/test/)

add_script_rules(FWCore/Integration/test/)

install( TARGETS SomeTestModules DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

add_library(TestProducerWithPSetDesc SHARED ${TestProducerWithPSetDesc_EXTRA_SOURCES}
  ProducerWithPSetDesc.cc
)

set_target_properties(TestProducerWithPSetDesc PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_TESTLIBS TestProducerWithPSetDesc)

set_target_properties(TestProducerWithPSetDesc PROPERTIES PREFIX "plugin")

add_dependencies( ALL_PLUGINS TestProducerWithPSetDesc)

edm_write_config( TestProducerWithPSetDesc FWCore/Integration)

target_include_directories(TestProducerWithPSetDesc PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestProducerWithPSetDesc PUBLIC
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

target_link_libraries(TestProducerWithPSetDesc PUBLIC
DataFormatsProvenance
FWCoreFramework
FWCoreIntegration
FWCoreParameterSet
FWCoreUtilities
)


add_python_rules(FWCore/Integration/test/)

add_script_rules(FWCore/Integration/test/)

install( TARGETS TestProducerWithPSetDesc DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

add_library(TestHistProducer SHARED ${TestHistProducer_EXTRA_SOURCES}
  HistProducer.cc
)

set_target_properties(TestHistProducer PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_TESTLIBS TestHistProducer)

set_target_properties(TestHistProducer PROPERTIES PREFIX "plugin")

add_dependencies( ALL_PLUGINS TestHistProducer)

edm_write_config( TestHistProducer FWCore/Integration)

target_include_directories(TestHistProducer PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestHistProducer PUBLIC
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

target_link_libraries(TestHistProducer PUBLIC
FWCoreFramework
FWCoreIntegration
ROOT::Core
ROOT::Hist
ROOT::MathCore
ROOT::Matrix
ROOT::Net
ROOT::Physics
ROOT::RIO
ROOT::Thread
ROOT::Tree
)


add_python_rules(FWCore/Integration/test/)

add_script_rules(FWCore/Integration/test/)

install( TARGETS TestHistProducer DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

add_library(TestHistoryKeeping SHARED ${TestHistoryKeeping_EXTRA_SOURCES}
  TestHistoryKeeping.cc
)

set_target_properties(TestHistoryKeeping PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_TESTLIBS TestHistoryKeeping)

set_target_properties(TestHistoryKeeping PROPERTIES PREFIX "plugin")

add_dependencies( ALL_PLUGINS TestHistoryKeeping)

edm_write_config( TestHistoryKeeping FWCore/Integration)

target_include_directories(TestHistoryKeeping PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestHistoryKeeping PUBLIC
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

target_link_libraries(TestHistoryKeeping PUBLIC
DataFormatsProvenance
FWCoreFramework
FWCoreIntegration
FWCoreParameterSet
)


add_python_rules(FWCore/Integration/test/)

add_script_rules(FWCore/Integration/test/)

install( TARGETS TestHistoryKeeping DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

add_library(ThrowingSource SHARED ${ThrowingSource_EXTRA_SOURCES}
  ThrowingSource.cc
)

set_target_properties(ThrowingSource PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_TESTLIBS ThrowingSource)

set_target_properties(ThrowingSource PROPERTIES PREFIX "plugin")

add_dependencies( ALL_PLUGINS ThrowingSource)

edm_write_config( ThrowingSource FWCore/Integration)

target_include_directories(ThrowingSource PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(ThrowingSource PUBLIC
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

target_link_libraries(ThrowingSource PUBLIC
FWCoreFramework
FWCoreIntegration
FWCoreParameterSet
FWCoreSources
)


add_python_rules(FWCore/Integration/test/)

add_script_rules(FWCore/Integration/test/)

install( TARGETS ThrowingSource DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

add_library(TestThingSource SHARED ${TestThingSource_EXTRA_SOURCES}
  ThingAlgorithm.cc
  ThingSource.cc
)

set_target_properties(TestThingSource PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_TESTLIBS TestThingSource)

set_target_properties(TestThingSource PROPERTIES PREFIX "plugin")

add_dependencies( ALL_PLUGINS TestThingSource)

edm_write_config( TestThingSource FWCore/Integration)

target_include_directories(TestThingSource PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestThingSource PUBLIC
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

target_link_libraries(TestThingSource PUBLIC
FWCoreIntegration
FWCoreSources
)


add_python_rules(FWCore/Integration/test/)

add_script_rules(FWCore/Integration/test/)

install( TARGETS TestThingSource DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

add_library(TestThingExtSource SHARED ${TestThingExtSource_EXTRA_SOURCES}
  ThingAlgorithm.cc
  ThingExtSource.cc
)

set_target_properties(TestThingExtSource PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_TESTLIBS TestThingExtSource)

set_target_properties(TestThingExtSource PROPERTIES PREFIX "plugin")

add_dependencies( ALL_PLUGINS TestThingExtSource)

edm_write_config( TestThingExtSource FWCore/Integration)

target_include_directories(TestThingExtSource PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestThingExtSource PUBLIC
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

target_link_libraries(TestThingExtSource PUBLIC
FWCoreIntegration
FWCoreSources
)


add_python_rules(FWCore/Integration/test/)

add_script_rules(FWCore/Integration/test/)

install( TARGETS TestThingExtSource DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

add_library(PutOrMergeTestSource SHARED ${PutOrMergeTestSource_EXTRA_SOURCES}
  PutOrMergeTestSource.cc
)

set_target_properties(PutOrMergeTestSource PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_TESTLIBS PutOrMergeTestSource)

set_target_properties(PutOrMergeTestSource PROPERTIES PREFIX "plugin")

add_dependencies( ALL_PLUGINS PutOrMergeTestSource)

edm_write_config( PutOrMergeTestSource FWCore/Integration)

target_include_directories(PutOrMergeTestSource PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(PutOrMergeTestSource PUBLIC
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

target_link_libraries(PutOrMergeTestSource PUBLIC
DataFormatsTestObjects
FWCoreIntegration
FWCoreSources
)


add_python_rules(FWCore/Integration/test/)

add_script_rules(FWCore/Integration/test/)

install( TARGETS PutOrMergeTestSource DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

add_library(TestOtherThingProducer SHARED ${TestOtherThingProducer_EXTRA_SOURCES}
  OtherThingAlgorithm.cc
  OtherThingProducer.cc
)

set_target_properties(TestOtherThingProducer PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_TESTLIBS TestOtherThingProducer)

set_target_properties(TestOtherThingProducer PROPERTIES PREFIX "plugin")

add_dependencies( ALL_PLUGINS TestOtherThingProducer)

edm_write_config( TestOtherThingProducer FWCore/Integration)

target_include_directories(TestOtherThingProducer PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestOtherThingProducer PUBLIC
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

target_link_libraries(TestOtherThingProducer PUBLIC
DataFormatsCommon
FWCoreFramework
FWCoreIntegration
)


add_python_rules(FWCore/Integration/test/)

add_script_rules(FWCore/Integration/test/)

install( TARGETS TestOtherThingProducer DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

add_library(TestThingWithMergeProducer SHARED ${TestThingWithMergeProducer_EXTRA_SOURCES}
  ThingWithMergeProducer.cc
)

set_target_properties(TestThingWithMergeProducer PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_TESTLIBS TestThingWithMergeProducer)

set_target_properties(TestThingWithMergeProducer PROPERTIES PREFIX "plugin")

add_dependencies( ALL_PLUGINS TestThingWithMergeProducer)

edm_write_config( TestThingWithMergeProducer FWCore/Integration)

target_include_directories(TestThingWithMergeProducer PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestThingWithMergeProducer PUBLIC
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

target_link_libraries(TestThingWithMergeProducer PUBLIC
DataFormatsCommon
DataFormatsTestObjects
FWCoreFramework
FWCoreIntegration
)


add_python_rules(FWCore/Integration/test/)

add_script_rules(FWCore/Integration/test/)

install( TARGETS TestThingWithMergeProducer DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

add_library(FWCoreIntegrationPathAnalyzer SHARED ${FWCoreIntegrationPathAnalyzer_EXTRA_SOURCES}
  PathAnalyzer.cc
)

set_target_properties(FWCoreIntegrationPathAnalyzer PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_TESTLIBS FWCoreIntegrationPathAnalyzer)

set_target_properties(FWCoreIntegrationPathAnalyzer PROPERTIES PREFIX "plugin")

add_dependencies( ALL_PLUGINS FWCoreIntegrationPathAnalyzer)

edm_write_config( FWCoreIntegrationPathAnalyzer FWCore/Integration)

target_include_directories(FWCoreIntegrationPathAnalyzer PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(FWCoreIntegrationPathAnalyzer PUBLIC
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

target_link_libraries(FWCoreIntegrationPathAnalyzer PUBLIC
FWCoreFramework
FWCoreIntegration
)


add_python_rules(FWCore/Integration/test/)

add_script_rules(FWCore/Integration/test/)

install( TARGETS FWCoreIntegrationPathAnalyzer DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

add_library(FWCoreIntegrationValueExample SHARED ${FWCoreIntegrationValueExample_EXTRA_SOURCES}
  ValueExample.cc
)

set_target_properties(FWCoreIntegrationValueExample PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_TESTLIBS FWCoreIntegrationValueExample)

target_include_directories(FWCoreIntegrationValueExample PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(FWCoreIntegrationValueExample PUBLIC
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

target_link_libraries(FWCoreIntegrationValueExample PUBLIC
FWCoreIntegration
FWCoreParameterSet
)


install( TARGETS FWCoreIntegrationValueExample DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

add_library(FWCoreIntegrationValueExamplePlugin SHARED ${FWCoreIntegrationValueExamplePlugin_EXTRA_SOURCES}
  ValueExamplePlugin.cc
)

set_target_properties(FWCoreIntegrationValueExamplePlugin PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_TESTLIBS FWCoreIntegrationValueExamplePlugin)

set_target_properties(FWCoreIntegrationValueExamplePlugin PROPERTIES PREFIX "plugin")

add_dependencies( ALL_PLUGINS FWCoreIntegrationValueExamplePlugin)

edm_write_config( FWCoreIntegrationValueExamplePlugin FWCore/Integration)

target_include_directories(FWCoreIntegrationValueExamplePlugin PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(FWCoreIntegrationValueExamplePlugin PUBLIC
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

target_link_libraries(FWCoreIntegrationValueExamplePlugin PUBLIC
FWCoreIntegration
FWCoreIntegrationValueExample
FWCoreParameterSet
FWCoreServiceRegistry
)


add_python_rules(FWCore/Integration/test/)

add_script_rules(FWCore/Integration/test/)

install( TARGETS FWCoreIntegrationValueExamplePlugin DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

add_library(UseValueExampleAnalyzer SHARED ${UseValueExampleAnalyzer_EXTRA_SOURCES}
  UseValueExampleAnalyzer.cc
)

set_target_properties(UseValueExampleAnalyzer PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_TESTLIBS UseValueExampleAnalyzer)

set_target_properties(UseValueExampleAnalyzer PROPERTIES PREFIX "plugin")

add_dependencies( ALL_PLUGINS UseValueExampleAnalyzer)

edm_write_config( UseValueExampleAnalyzer FWCore/Integration)

target_include_directories(UseValueExampleAnalyzer PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(UseValueExampleAnalyzer PUBLIC
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

target_link_libraries(UseValueExampleAnalyzer PUBLIC
FWCoreFramework
FWCoreIntegration
FWCoreIntegrationValueExample
FWCoreParameterSet
)


add_python_rules(FWCore/Integration/test/)

add_script_rules(FWCore/Integration/test/)

install( TARGETS UseValueExampleAnalyzer DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

add_library(FWCoreIntegrationWaitingServer SHARED ${FWCoreIntegrationWaitingServer_EXTRA_SOURCES}
  WaitingServer.cc
)

set_target_properties(FWCoreIntegrationWaitingServer PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_TESTLIBS FWCoreIntegrationWaitingServer)

target_include_directories(FWCoreIntegrationWaitingServer PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(FWCoreIntegrationWaitingServer PUBLIC
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

target_link_libraries(FWCoreIntegrationWaitingServer PUBLIC
FWCoreConcurrency
FWCoreIntegration
)


install( TARGETS FWCoreIntegrationWaitingServer DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

add_library(FWCoreIntegrationWaitingService SHARED ${FWCoreIntegrationWaitingService_EXTRA_SOURCES}
  WaitingService.cc
)

set_target_properties(FWCoreIntegrationWaitingService PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_TESTLIBS FWCoreIntegrationWaitingService)

set_target_properties(FWCoreIntegrationWaitingService PROPERTIES PREFIX "plugin")

add_dependencies( ALL_PLUGINS FWCoreIntegrationWaitingService)

edm_write_config( FWCoreIntegrationWaitingService FWCore/Integration)

target_include_directories(FWCoreIntegrationWaitingService PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(FWCoreIntegrationWaitingService PUBLIC
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

target_link_libraries(FWCoreIntegrationWaitingService PUBLIC
FWCoreConcurrency
FWCoreIntegration
FWCoreIntegrationWaitingServer
FWCoreParameterSet
FWCoreServiceRegistry
)


add_python_rules(FWCore/Integration/test/)

add_script_rules(FWCore/Integration/test/)

install( TARGETS FWCoreIntegrationWaitingService DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

add_library(FWCoreIntegrationPathsAndConsumesOfModulesTestService SHARED ${FWCoreIntegrationPathsAndConsumesOfModulesTestService_EXTRA_SOURCES}
  PathsAndConsumesOfModulesTestService.cc
)

set_target_properties(FWCoreIntegrationPathsAndConsumesOfModulesTestService PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_TESTLIBS FWCoreIntegrationPathsAndConsumesOfModulesTestService)

set_target_properties(FWCoreIntegrationPathsAndConsumesOfModulesTestService PROPERTIES PREFIX "plugin")

add_dependencies( ALL_PLUGINS FWCoreIntegrationPathsAndConsumesOfModulesTestService)

edm_write_config( FWCoreIntegrationPathsAndConsumesOfModulesTestService FWCore/Integration)

target_include_directories(FWCoreIntegrationPathsAndConsumesOfModulesTestService PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(FWCoreIntegrationPathsAndConsumesOfModulesTestService PUBLIC
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

target_link_libraries(FWCoreIntegrationPathsAndConsumesOfModulesTestService PUBLIC
DataFormatsProvenance
FWCoreIntegration
FWCoreParameterSet
FWCoreServiceRegistry
)


add_python_rules(FWCore/Integration/test/)

add_script_rules(FWCore/Integration/test/)

install( TARGETS FWCoreIntegrationPathsAndConsumesOfModulesTestService DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

add_library(TestOtherThingAnalyzer SHARED ${TestOtherThingAnalyzer_EXTRA_SOURCES}
  OtherThingAnalyzer.cc
  OtherThingRefComparer.cc
)

set_target_properties(TestOtherThingAnalyzer PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_TESTLIBS TestOtherThingAnalyzer)

set_target_properties(TestOtherThingAnalyzer PROPERTIES PREFIX "plugin")

add_dependencies( ALL_PLUGINS TestOtherThingAnalyzer)

edm_write_config( TestOtherThingAnalyzer FWCore/Integration)

target_include_directories(TestOtherThingAnalyzer PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestOtherThingAnalyzer PUBLIC
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

target_link_libraries(TestOtherThingAnalyzer PUBLIC
DataFormatsCommon
FWCoreFramework
FWCoreIntegration
FWCoreMessageLogger
)


add_python_rules(FWCore/Integration/test/)

add_script_rules(FWCore/Integration/test/)

install( TARGETS TestOtherThingAnalyzer DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

add_library(TestProdigalAnalyzer SHARED ${TestProdigalAnalyzer_EXTRA_SOURCES}
  ProdigalAnalyzer.cc
)

set_target_properties(TestProdigalAnalyzer PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_TESTLIBS TestProdigalAnalyzer)

set_target_properties(TestProdigalAnalyzer PROPERTIES PREFIX "plugin")

add_dependencies( ALL_PLUGINS TestProdigalAnalyzer)

edm_write_config( TestProdigalAnalyzer FWCore/Integration)

target_include_directories(TestProdigalAnalyzer PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestProdigalAnalyzer PUBLIC
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

target_link_libraries(TestProdigalAnalyzer PUBLIC
DataFormatsCommon
FWCoreFramework
FWCoreIntegration
FWCoreMessageLogger
)


add_python_rules(FWCore/Integration/test/)

add_script_rules(FWCore/Integration/test/)

install( TARGETS TestProdigalAnalyzer DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

add_library(FWCoreIntegrationTestFindProduct SHARED ${FWCoreIntegrationTestFindProduct_EXTRA_SOURCES}
  ManyProductProducer.cc
  TestFindProduct.cc
  TestParentage.cc
)

set_target_properties(FWCoreIntegrationTestFindProduct PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_TESTLIBS FWCoreIntegrationTestFindProduct)

set_target_properties(FWCoreIntegrationTestFindProduct PROPERTIES PREFIX "plugin")

add_dependencies( ALL_PLUGINS FWCoreIntegrationTestFindProduct)

edm_write_config( FWCoreIntegrationTestFindProduct FWCore/Integration)

target_include_directories(FWCoreIntegrationTestFindProduct PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(FWCoreIntegrationTestFindProduct PUBLIC
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

target_link_libraries(FWCoreIntegrationTestFindProduct PUBLIC
DataFormatsCommon
FWCoreFramework
FWCoreIntegration
FWCoreParameterSet
)


add_python_rules(FWCore/Integration/test/)

add_script_rules(FWCore/Integration/test/)

install( TARGETS FWCoreIntegrationTestFindProduct DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

add_library(TestViewAnalyzer SHARED ${TestViewAnalyzer_EXTRA_SOURCES}
  ViewAnalyzer.cc
)

set_target_properties(TestViewAnalyzer PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_TESTLIBS TestViewAnalyzer)

set_target_properties(TestViewAnalyzer PROPERTIES PREFIX "plugin")

add_dependencies( ALL_PLUGINS TestViewAnalyzer)

edm_write_config( TestViewAnalyzer FWCore/Integration)

target_include_directories(TestViewAnalyzer PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestViewAnalyzer PUBLIC
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

target_link_libraries(TestViewAnalyzer PUBLIC
DataFormatsCommon
DataFormatsTestObjects
FWCoreFramework
FWCoreIntegration
)


add_python_rules(FWCore/Integration/test/)

add_script_rules(FWCore/Integration/test/)

install( TARGETS TestViewAnalyzer DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

add_library(HierarchicalEDProducer SHARED ${HierarchicalEDProducer_EXTRA_SOURCES}
  HierarchicalEDProducer.cc
)

set_target_properties(HierarchicalEDProducer PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_TESTLIBS HierarchicalEDProducer)

set_target_properties(HierarchicalEDProducer PROPERTIES PREFIX "plugin")

add_dependencies( ALL_PLUGINS HierarchicalEDProducer)

edm_write_config( HierarchicalEDProducer FWCore/Integration)

target_include_directories(HierarchicalEDProducer PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(HierarchicalEDProducer PUBLIC
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

target_link_libraries(HierarchicalEDProducer PUBLIC
FWCoreFramework
FWCoreIntegration
FWCoreParameterSet
)


add_python_rules(FWCore/Integration/test/)

add_script_rules(FWCore/Integration/test/)

install( TARGETS HierarchicalEDProducer DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

add_library(ConcurrentIOVESSource SHARED ${ConcurrentIOVESSource_EXTRA_SOURCES}
  ConcurrentIOVAnalyzer.cc
  ConcurrentIOVESProducer.cc
  ConcurrentIOVESSource.cc
  GadgetRcd.cc
  IOVTestInfo.cc
  RunLumiESAnalyzer.cc
  RunLumiESSource.cc
  TestESSource.cc
)

set_target_properties(ConcurrentIOVESSource PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_TESTLIBS ConcurrentIOVESSource)

set_target_properties(ConcurrentIOVESSource PROPERTIES PREFIX "plugin")

add_dependencies( ALL_PLUGINS ConcurrentIOVESSource)

edm_write_config( ConcurrentIOVESSource FWCore/Integration)

target_include_directories(ConcurrentIOVESSource PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(ConcurrentIOVESSource PUBLIC
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

target_link_libraries(ConcurrentIOVESSource PUBLIC
FWCoreFramework
FWCoreIntegration
)


add_python_rules(FWCore/Integration/test/)

add_script_rules(FWCore/Integration/test/)

install( TARGETS ConcurrentIOVESSource DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

add_library(WhatsItESProducer SHARED ${WhatsItESProducer_EXTRA_SOURCES}
  Doodad.cc
  GadgetRcd.cc
  WhatsIt.cc
  WhatsItESProducer.cc
)

set_target_properties(WhatsItESProducer PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_TESTLIBS WhatsItESProducer)

set_target_properties(WhatsItESProducer PROPERTIES PREFIX "plugin")

add_dependencies( ALL_PLUGINS WhatsItESProducer)

edm_write_config( WhatsItESProducer FWCore/Integration)

target_include_directories(WhatsItESProducer PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(WhatsItESProducer PUBLIC
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

target_link_libraries(WhatsItESProducer PUBLIC
FWCoreFramework
FWCoreIntegration
)


add_python_rules(FWCore/Integration/test/)

add_script_rules(FWCore/Integration/test/)

install( TARGETS WhatsItESProducer DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

add_library(DoodadESProducer SHARED ${DoodadESProducer_EXTRA_SOURCES}
  Doodad.cc
  DoodadESProducer.cc
  GadgetRcd.cc
)

set_target_properties(DoodadESProducer PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_TESTLIBS DoodadESProducer)

set_target_properties(DoodadESProducer PROPERTIES PREFIX "plugin")

add_dependencies( ALL_PLUGINS DoodadESProducer)

edm_write_config( DoodadESProducer FWCore/Integration)

target_include_directories(DoodadESProducer PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(DoodadESProducer PUBLIC
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

target_link_libraries(DoodadESProducer PUBLIC
FWCoreFramework
FWCoreIntegration
)


add_python_rules(FWCore/Integration/test/)

add_script_rules(FWCore/Integration/test/)

install( TARGETS DoodadESProducer DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

add_library(DoodadESSource SHARED ${DoodadESSource_EXTRA_SOURCES}
  Doodad.cc
  DoodadESSource.cc
  GadgetRcd.cc
)

set_target_properties(DoodadESSource PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_TESTLIBS DoodadESSource)

set_target_properties(DoodadESSource PROPERTIES PREFIX "plugin")

add_dependencies( ALL_PLUGINS DoodadESSource)

edm_write_config( DoodadESSource FWCore/Integration)

target_include_directories(DoodadESSource PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(DoodadESSource PUBLIC
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

target_link_libraries(DoodadESSource PUBLIC
FWCoreFramework
FWCoreIntegration
)


add_python_rules(FWCore/Integration/test/)

add_script_rules(FWCore/Integration/test/)

install( TARGETS DoodadESSource DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

add_library(WhatsItAnalyzer SHARED ${WhatsItAnalyzer_EXTRA_SOURCES}
  GadgetRcd.cc
  WhatsIt.cc
  WhatsItAnalyzer.cc
)

set_target_properties(WhatsItAnalyzer PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_TESTLIBS WhatsItAnalyzer)

set_target_properties(WhatsItAnalyzer PROPERTIES PREFIX "plugin")

add_dependencies( ALL_PLUGINS WhatsItAnalyzer)

edm_write_config( WhatsItAnalyzer FWCore/Integration)

target_include_directories(WhatsItAnalyzer PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(WhatsItAnalyzer PUBLIC
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

target_link_libraries(WhatsItAnalyzer PUBLIC
FWCoreFramework
FWCoreIntegration
)


add_python_rules(FWCore/Integration/test/)

add_script_rules(FWCore/Integration/test/)

install( TARGETS WhatsItAnalyzer DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

add_library(TestGetterOfProducts SHARED ${TestGetterOfProducts_EXTRA_SOURCES}
  TestGetterOfProducts.cc
)

set_target_properties(TestGetterOfProducts PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_TESTLIBS TestGetterOfProducts)

set_target_properties(TestGetterOfProducts PROPERTIES PREFIX "plugin")

add_dependencies( ALL_PLUGINS TestGetterOfProducts)

edm_write_config( TestGetterOfProducts FWCore/Integration)

target_include_directories(TestGetterOfProducts PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestGetterOfProducts PUBLIC
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

target_link_libraries(TestGetterOfProducts PUBLIC
DataFormatsTestObjects
FWCoreFramework
FWCoreIntegration
FWCoreParameterSet
)


add_python_rules(FWCore/Integration/test/)

add_script_rules(FWCore/Integration/test/)

install( TARGETS TestGetterOfProducts DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

add_library(TestDescriptionComments SHARED ${TestDescriptionComments_EXTRA_SOURCES}
  TestDescriptionComments.cc
)

set_target_properties(TestDescriptionComments PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_TESTLIBS TestDescriptionComments)

set_target_properties(TestDescriptionComments PROPERTIES PREFIX "plugin")

add_dependencies( ALL_PLUGINS TestDescriptionComments)

edm_write_config( TestDescriptionComments FWCore/Integration)

target_include_directories(TestDescriptionComments PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestDescriptionComments PUBLIC
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

target_link_libraries(TestDescriptionComments PUBLIC
FWCoreFramework
FWCoreIntegration
FWCoreParameterSet
)


add_python_rules(FWCore/Integration/test/)

add_script_rules(FWCore/Integration/test/)

install( TARGETS TestDescriptionComments DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

add_library(WhatsItWatcherAnalyzer SHARED ${WhatsItWatcherAnalyzer_EXTRA_SOURCES}
  GadgetRcd.cc
  WhatsIt.cc
  WhatsItWatcherAnalyzer.cc
)

set_target_properties(WhatsItWatcherAnalyzer PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_TESTLIBS WhatsItWatcherAnalyzer)

set_target_properties(WhatsItWatcherAnalyzer PROPERTIES PREFIX "plugin")

add_dependencies( ALL_PLUGINS WhatsItWatcherAnalyzer)

edm_write_config( WhatsItWatcherAnalyzer FWCore/Integration)

target_include_directories(WhatsItWatcherAnalyzer PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(WhatsItWatcherAnalyzer PUBLIC
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

target_link_libraries(WhatsItWatcherAnalyzer PUBLIC
FWCoreFramework
FWCoreIntegration
)


add_python_rules(FWCore/Integration/test/)

add_script_rules(FWCore/Integration/test/)

install( TARGETS WhatsItWatcherAnalyzer DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

add_library(ESTestModules SHARED ${ESTestModules_EXTRA_SOURCES}
  ESTestAnalyzers.cc
  ESTestProducers.cc
)

set_target_properties(ESTestModules PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_TESTLIBS ESTestModules)

set_target_properties(ESTestModules PROPERTIES PREFIX "plugin")

add_dependencies( ALL_PLUGINS ESTestModules)

edm_write_config( ESTestModules FWCore/Integration)

target_include_directories(ESTestModules PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(ESTestModules PUBLIC
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

target_link_libraries(ESTestModules PUBLIC
DataFormatsProvenance
FWCoreFramework
FWCoreIntegration
FWCoreMessageLogger
FWCoreParameterSet
)


add_python_rules(FWCore/Integration/test/)

add_script_rules(FWCore/Integration/test/)

install( TARGETS ESTestModules DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

add_library(IntSource SHARED ${IntSource_EXTRA_SOURCES}
  IntSource.cc
)

set_target_properties(IntSource PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_TESTLIBS IntSource)

set_target_properties(IntSource PROPERTIES PREFIX "plugin")

add_dependencies( ALL_PLUGINS IntSource)

edm_write_config( IntSource FWCore/Integration)

target_include_directories(IntSource PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(IntSource PUBLIC
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

target_link_libraries(IntSource PUBLIC
DataFormatsTestObjects
FWCoreFramework
FWCoreIntegration
FWCoreParameterSet
FWCoreSources
)


add_python_rules(FWCore/Integration/test/)

add_script_rules(FWCore/Integration/test/)

install( TARGETS IntSource DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

add_library(TestInterProcessProd SHARED ${TestInterProcessProd_EXTRA_SOURCES}
  TestInterProcessProd.cc
)

set_target_properties(TestInterProcessProd PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_TESTLIBS TestInterProcessProd)

set_target_properties(TestInterProcessProd PROPERTIES PREFIX "plugin")

add_dependencies( ALL_PLUGINS TestInterProcessProd)

edm_write_config( TestInterProcessProd FWCore/Integration)

target_include_directories(TestInterProcessProd PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestInterProcessProd PUBLIC
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

target_link_libraries(TestInterProcessProd PUBLIC
FWCoreFramework
FWCoreIntegration
FWCoreParameterSet
FWCoreSharedMemory
FWCoreSources
Threads::Threads
crypt
dl
nsl
rt
)


add_python_rules(FWCore/Integration/test/)

add_script_rules(FWCore/Integration/test/)

install( TARGETS TestInterProcessProd DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

add_library(RandomIntProducer SHARED ${RandomIntProducer_EXTRA_SOURCES}
  RandomIntProducer.cc
)

set_target_properties(RandomIntProducer PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_TESTLIBS RandomIntProducer)

set_target_properties(RandomIntProducer PROPERTIES PREFIX "plugin")

add_dependencies( ALL_PLUGINS RandomIntProducer)

edm_write_config( RandomIntProducer FWCore/Integration)

target_include_directories(RandomIntProducer PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(RandomIntProducer PUBLIC
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

target_link_libraries(RandomIntProducer PUBLIC
${CLHEP_LIBRARIES}
DataFormatsTestObjects
FWCoreFramework
FWCoreIntegration
FWCoreParameterSet
FWCoreUtilities
)


add_python_rules(FWCore/Integration/test/)

add_script_rules(FWCore/Integration/test/)

install( TARGETS RandomIntProducer DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

add_library(TestInterProcessRandomProd SHARED ${TestInterProcessRandomProd_EXTRA_SOURCES}
  TestInterProcessRandomProd.cc
)

set_target_properties(TestInterProcessRandomProd PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_TESTLIBS TestInterProcessRandomProd)

set_target_properties(TestInterProcessRandomProd PROPERTIES PREFIX "plugin")

add_dependencies( ALL_PLUGINS TestInterProcessRandomProd)

edm_write_config( TestInterProcessRandomProd FWCore/Integration)

target_include_directories(TestInterProcessRandomProd PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestInterProcessRandomProd PUBLIC
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

target_link_libraries(TestInterProcessRandomProd PUBLIC
${CLHEP_LIBRARIES}
FWCoreFramework
FWCoreIntegration
FWCoreParameterSet
FWCoreSharedMemory
FWCoreSources
Threads::Threads
crypt
dl
nsl
rt
)


add_python_rules(FWCore/Integration/test/)

add_script_rules(FWCore/Integration/test/)

install( TARGETS TestInterProcessRandomProd DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

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
${PYBIND11_INCLUDE_DIR}
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


