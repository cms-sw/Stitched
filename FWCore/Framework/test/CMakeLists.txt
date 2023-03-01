add_library(FWCoreFrameworkTestDummyForEventSetup SHARED ${FWCoreFrameworkTestDummyForEventSetup_EXTRA_SOURCES}
  DepOn2Record.cc
  DepRecord.cc
  Dummy2Record.cc
  DummyData.cc
  DummyRecord.cc
)

set_target_properties(FWCoreFrameworkTestDummyForEventSetup PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_TESTLIBS FWCoreFrameworkTestDummyForEventSetup)

target_include_directories(FWCoreFrameworkTestDummyForEventSetup PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(FWCoreFrameworkTestDummyForEventSetup PUBLIC
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

target_link_libraries(FWCoreFrameworkTestDummyForEventSetup PUBLIC
FWCoreFramework
Threads::Threads
crypt
dl
nsl
rt
)


install( TARGETS FWCoreFrameworkTestDummyForEventSetup DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

add_library(FWCoreFrameworkTest SHARED ${FWCoreFrameworkTest_EXTRA_SOURCES}
  MockEventProcessor.cc
  stubs/TestBeginEndJobAnalyzer.cc
)

set_target_properties(FWCoreFrameworkTest PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_TESTLIBS FWCoreFrameworkTest)

target_include_directories(FWCoreFrameworkTest PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(FWCoreFrameworkTest PUBLIC
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

target_link_libraries(FWCoreFrameworkTest PUBLIC
FWCoreFramework
Threads::Threads
crypt
dl
nsl
rt
)


install( TARGETS FWCoreFrameworkTest DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

add_library(TestOutputModule SHARED ${TestOutputModule_EXTRA_SOURCES}
  stubs/TestOutputModule.cc
)

set_target_properties(TestOutputModule PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_TESTLIBS TestOutputModule)

set_target_properties(TestOutputModule PROPERTIES PREFIX "plugin")

add_dependencies( ALL_PLUGINS TestOutputModule)

edm_write_config( TestOutputModule FWCore/Framework)

target_include_directories(TestOutputModule PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestOutputModule PUBLIC
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

target_link_libraries(TestOutputModule PUBLIC
DataFormatsCommon
DataFormatsProvenance
FWCoreFramework
FWCoreParameterSet
FWCoreServiceRegistry
Threads::Threads
crypt
dl
nsl
rt
)


add_python_rules(FWCore/Framework/test/)

add_script_rules(FWCore/Framework/test/)

install( TARGETS TestOutputModule DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

add_library(TestFilterModule SHARED ${TestFilterModule_EXTRA_SOURCES}
  stubs/TestFilterModule.cc
)

set_target_properties(TestFilterModule PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_TESTLIBS TestFilterModule)

set_target_properties(TestFilterModule PROPERTIES PREFIX "plugin")

add_dependencies( ALL_PLUGINS TestFilterModule)

edm_write_config( TestFilterModule FWCore/Framework)

target_include_directories(TestFilterModule PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestFilterModule PUBLIC
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

target_link_libraries(TestFilterModule PUBLIC
DataFormatsCommon
FWCoreFramework
FWCoreParameterSet
Threads::Threads
crypt
dl
nsl
rt
)


add_python_rules(FWCore/Framework/test/)

add_script_rules(FWCore/Framework/test/)

install( TARGETS TestFilterModule DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

add_library(TestTBBTasksAnalyzer SHARED ${TestTBBTasksAnalyzer_EXTRA_SOURCES}
  stubs/TestNThreadsChecker.cc
  stubs/TestTBBTasksAnalyzer.cc
)

set_target_properties(TestTBBTasksAnalyzer PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_TESTLIBS TestTBBTasksAnalyzer)

set_target_properties(TestTBBTasksAnalyzer PROPERTIES PREFIX "plugin")

add_dependencies( ALL_PLUGINS TestTBBTasksAnalyzer)

edm_write_config( TestTBBTasksAnalyzer FWCore/Framework)

target_include_directories(TestTBBTasksAnalyzer PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestTBBTasksAnalyzer PUBLIC
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

target_link_libraries(TestTBBTasksAnalyzer PUBLIC
${TBB_LIBRARIES}
DataFormatsCommon
FWCoreFramework
FWCoreParameterSet
Threads::Threads
crypt
dl
nsl
rt
)


add_python_rules(FWCore/Framework/test/)

add_script_rules(FWCore/Framework/test/)

install( TARGETS TestTBBTasksAnalyzer DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

add_executable(TestFWCoreFrameworkTBBTasks
  TestDriver.cpp
)

add_test(NAME TestFWCoreFrameworkTBBTasks_CTest COMMAND /bin/bash -x ${CMAKE_CURRENT_SOURCE_DIR}/run_tbbTasks.sh)

add_test_properties(TestFWCoreFrameworkTBBTasks_CTest)

set_target_properties(TestFWCoreFrameworkTBBTasks PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS TestFWCoreFrameworkTBBTasks)

add_dependencies( TestFWCoreFrameworkTBBTasks ALL_PLUGINS)

target_include_directories(TestFWCoreFrameworkTBBTasks PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestFWCoreFrameworkTBBTasks PUBLIC
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

target_link_libraries(TestFWCoreFrameworkTBBTasks PUBLIC
FWCoreFramework
FWCoreUtilities
Threads::Threads
crypt
dl
nsl
rt
)


add_library(TestTriggerNames SHARED ${TestTriggerNames_EXTRA_SOURCES}
  stubs/TestTriggerNames.cc
)

set_target_properties(TestTriggerNames PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_TESTLIBS TestTriggerNames)

set_target_properties(TestTriggerNames PROPERTIES PREFIX "plugin")

add_dependencies( ALL_PLUGINS TestTriggerNames)

edm_write_config( TestTriggerNames FWCore/Framework)

target_include_directories(TestTriggerNames PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestTriggerNames PUBLIC
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

target_link_libraries(TestTriggerNames PUBLIC
DataFormatsCommon
DataFormatsProvenance
FWCoreFramework
FWCoreParameterSet
FWCoreServiceRegistry
FWCoreUtilities
Threads::Threads
crypt
dl
nsl
rt
)


add_python_rules(FWCore/Framework/test/)

add_script_rules(FWCore/Framework/test/)

install( TARGETS TestTriggerNames DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

add_library(TestMergeResults SHARED ${TestMergeResults_EXTRA_SOURCES}
  stubs/TestMergeResults.cc
)

set_target_properties(TestMergeResults PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_TESTLIBS TestMergeResults)

set_target_properties(TestMergeResults PROPERTIES PREFIX "plugin")

add_dependencies( ALL_PLUGINS TestMergeResults)

edm_write_config( TestMergeResults FWCore/Framework)

target_include_directories(TestMergeResults PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestMergeResults PUBLIC
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

target_link_libraries(TestMergeResults PUBLIC
DataFormatsCommon
DataFormatsProvenance
DataFormatsTestObjects
FWCoreFramework
FWCoreMessageLogger
FWCoreParameterSet
FWCoreServiceRegistry
FWCoreUtilities
Threads::Threads
crypt
dl
nsl
rt
)


add_python_rules(FWCore/Framework/test/)

add_script_rules(FWCore/Framework/test/)

install( TARGETS TestMergeResults DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

add_library(RunLumiEventAnalyzer SHARED ${RunLumiEventAnalyzer_EXTRA_SOURCES}
  stubs/RunLumiEventAnalyzer.cc
)

set_target_properties(RunLumiEventAnalyzer PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_TESTLIBS RunLumiEventAnalyzer)

set_target_properties(RunLumiEventAnalyzer PROPERTIES PREFIX "plugin")

add_dependencies( ALL_PLUGINS RunLumiEventAnalyzer)

edm_write_config( RunLumiEventAnalyzer FWCore/Framework)

target_include_directories(RunLumiEventAnalyzer PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(RunLumiEventAnalyzer PUBLIC
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

target_link_libraries(RunLumiEventAnalyzer PUBLIC
FWCoreFramework
FWCoreParameterSet
Threads::Threads
crypt
dl
nsl
rt
)


add_python_rules(FWCore/Framework/test/)

add_script_rules(FWCore/Framework/test/)

install( TARGETS RunLumiEventAnalyzer DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

add_library(TestMod SHARED ${TestMod_EXTRA_SOURCES}
  stubs/TestMod.cc
)

set_target_properties(TestMod PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_TESTLIBS TestMod)

set_target_properties(TestMod PROPERTIES PREFIX "plugin")

add_dependencies( ALL_PLUGINS TestMod)

edm_write_config( TestMod FWCore/Framework)

target_include_directories(TestMod PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestMod PUBLIC
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

target_link_libraries(TestMod PUBLIC
FWCoreFramework
FWCoreParameterSet
Threads::Threads
crypt
dl
nsl
rt
)


add_python_rules(FWCore/Framework/test/)

add_script_rules(FWCore/Framework/test/)

install( TARGETS TestMod DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

add_library(TestToyModules SHARED ${TestToyModules_EXTRA_SOURCES}
  stubs/DeleteEarlyModules.cc
  stubs/ToyAnalyzers.cc
  stubs/ToyDoubleProducers.cc
  stubs/ToyIntProducers.cc
  stubs/ToyModules.cc
  stubs/ToyRefProducers.cc
  stubs/ToySTLProducers.cc
)

set_target_properties(TestToyModules PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_TESTLIBS TestToyModules)

set_target_properties(TestToyModules PROPERTIES PREFIX "plugin")

add_dependencies( ALL_PLUGINS TestToyModules)

edm_write_config( TestToyModules FWCore/Framework)

target_include_directories(TestToyModules PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestToyModules PUBLIC
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

target_link_libraries(TestToyModules PUBLIC
DataFormatsCommon
DataFormatsTestObjects
FWCoreFramework
FWCoreParameterSet
Threads::Threads
crypt
dl
nsl
rt
)


add_python_rules(FWCore/Framework/test/)

add_script_rules(FWCore/Framework/test/)

install( TARGETS TestToyModules DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

add_library(TestGlobalModules SHARED ${TestGlobalModules_EXTRA_SOURCES}
  stubs/TestGetPathStatus.cc
  stubs/TestGlobalAnalyzers.cc
  stubs/TestGlobalFilters.cc
  stubs/TestGlobalProducers.cc
)

set_target_properties(TestGlobalModules PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_TESTLIBS TestGlobalModules)

set_target_properties(TestGlobalModules PROPERTIES PREFIX "plugin")

add_dependencies( ALL_PLUGINS TestGlobalModules)

edm_write_config( TestGlobalModules FWCore/Framework)

target_include_directories(TestGlobalModules PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestGlobalModules PUBLIC
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

target_link_libraries(TestGlobalModules PUBLIC
FWCoreFramework
FWCoreParameterSet
Threads::Threads
crypt
dl
nsl
rt
)


add_python_rules(FWCore/Framework/test/)

add_script_rules(FWCore/Framework/test/)

install( TARGETS TestGlobalModules DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

add_library(TestLimitedModules SHARED ${TestLimitedModules_EXTRA_SOURCES}
  stubs/TestLimitedAnalyzers.cc
  stubs/TestLimitedFilters.cc
  stubs/TestLimitedProducers.cc
)

set_target_properties(TestLimitedModules PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_TESTLIBS TestLimitedModules)

set_target_properties(TestLimitedModules PROPERTIES PREFIX "plugin")

add_dependencies( ALL_PLUGINS TestLimitedModules)

edm_write_config( TestLimitedModules FWCore/Framework)

target_include_directories(TestLimitedModules PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestLimitedModules PUBLIC
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

target_link_libraries(TestLimitedModules PUBLIC
FWCoreFramework
FWCoreParameterSet
Threads::Threads
crypt
dl
nsl
rt
)


add_python_rules(FWCore/Framework/test/)

add_script_rules(FWCore/Framework/test/)

install( TARGETS TestLimitedModules DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

add_library(TestOneModules SHARED ${TestOneModules_EXTRA_SOURCES}
  stubs/TestOneAnalyzers.cc
  stubs/TestOneFilters.cc
  stubs/TestOneProducers.cc
)

set_target_properties(TestOneModules PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_TESTLIBS TestOneModules)

set_target_properties(TestOneModules PROPERTIES PREFIX "plugin")

add_dependencies( ALL_PLUGINS TestOneModules)

edm_write_config( TestOneModules FWCore/Framework)

target_include_directories(TestOneModules PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestOneModules PUBLIC
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

target_link_libraries(TestOneModules PUBLIC
FWCoreFramework
FWCoreParameterSet
Threads::Threads
crypt
dl
nsl
rt
)


add_python_rules(FWCore/Framework/test/)

add_script_rules(FWCore/Framework/test/)

install( TARGETS TestOneModules DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

add_library(TestStreamModules SHARED ${TestStreamModules_EXTRA_SOURCES}
  stubs/TestStreamAnalyzers.cc
  stubs/TestStreamFilters.cc
  stubs/TestStreamProducers.cc
)

set_target_properties(TestStreamModules PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_TESTLIBS TestStreamModules)

set_target_properties(TestStreamModules PROPERTIES PREFIX "plugin")

add_dependencies( ALL_PLUGINS TestStreamModules)

edm_write_config( TestStreamModules FWCore/Framework)

target_include_directories(TestStreamModules PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestStreamModules PUBLIC
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

target_link_libraries(TestStreamModules PUBLIC
FWCoreFramework
FWCoreParameterSet
Threads::Threads
crypt
dl
nsl
rt
)


add_python_rules(FWCore/Framework/test/)

add_script_rules(FWCore/Framework/test/)

install( TARGETS TestStreamModules DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

add_library(TestSchedulerModule1 SHARED ${TestSchedulerModule1_EXTRA_SOURCES}
  stubs/TestSchedulerModule1.cc
)

set_target_properties(TestSchedulerModule1 PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_TESTLIBS TestSchedulerModule1)

set_target_properties(TestSchedulerModule1 PROPERTIES PREFIX "plugin")

add_dependencies( ALL_PLUGINS TestSchedulerModule1)

edm_write_config( TestSchedulerModule1 FWCore/Framework)

target_include_directories(TestSchedulerModule1 PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestSchedulerModule1 PUBLIC
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

target_link_libraries(TestSchedulerModule1 PUBLIC
FWCoreFramework
FWCoreParameterSet
Threads::Threads
crypt
dl
nsl
rt
)


add_python_rules(FWCore/Framework/test/)

add_script_rules(FWCore/Framework/test/)

install( TARGETS TestSchedulerModule1 DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

add_library(TestSchedulerModule2 SHARED ${TestSchedulerModule2_EXTRA_SOURCES}
  stubs/TestSchedulerModule2.cc
)

set_target_properties(TestSchedulerModule2 PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_TESTLIBS TestSchedulerModule2)

set_target_properties(TestSchedulerModule2 PROPERTIES PREFIX "plugin")

add_dependencies( ALL_PLUGINS TestSchedulerModule2)

edm_write_config( TestSchedulerModule2 FWCore/Framework)

target_include_directories(TestSchedulerModule2 PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestSchedulerModule2 PUBLIC
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

target_link_libraries(TestSchedulerModule2 PUBLIC
DataFormatsProvenance
FWCoreFramework
FWCoreParameterSet
Threads::Threads
crypt
dl
nsl
rt
)


add_python_rules(FWCore/Framework/test/)

add_script_rules(FWCore/Framework/test/)

install( TARGETS TestSchedulerModule2 DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

add_library(TestLoadableDummyFinder SHARED ${TestLoadableDummyFinder_EXTRA_SOURCES}
  stubs/LoadableDummyFinder.cc
)

set_target_properties(TestLoadableDummyFinder PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_TESTLIBS TestLoadableDummyFinder)

set_target_properties(TestLoadableDummyFinder PROPERTIES PREFIX "plugin")

add_dependencies( ALL_PLUGINS TestLoadableDummyFinder)

edm_write_config( TestLoadableDummyFinder FWCore/Framework)

target_include_directories(TestLoadableDummyFinder PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestLoadableDummyFinder PUBLIC
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

target_link_libraries(TestLoadableDummyFinder PUBLIC
FWCoreFramework
FWCoreFrameworkTestDummyForEventSetup
Threads::Threads
crypt
dl
nsl
rt
)


add_python_rules(FWCore/Framework/test/)

add_script_rules(FWCore/Framework/test/)

install( TARGETS TestLoadableDummyFinder DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

add_library(TestLoadableDummyESSource SHARED ${TestLoadableDummyESSource_EXTRA_SOURCES}
  stubs/LoadableDummyESSource.cc
)

set_target_properties(TestLoadableDummyESSource PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_TESTLIBS TestLoadableDummyESSource)

set_target_properties(TestLoadableDummyESSource PROPERTIES PREFIX "plugin")

add_dependencies( ALL_PLUGINS TestLoadableDummyESSource)

edm_write_config( TestLoadableDummyESSource FWCore/Framework)

target_include_directories(TestLoadableDummyESSource PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestLoadableDummyESSource PUBLIC
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

target_link_libraries(TestLoadableDummyESSource PUBLIC
FWCoreFramework
FWCoreFrameworkTestDummyForEventSetup
Threads::Threads
crypt
dl
nsl
rt
)


add_python_rules(FWCore/Framework/test/)

add_script_rules(FWCore/Framework/test/)

install( TARGETS TestLoadableDummyESSource DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

add_library(TestLoadableDummyEventSetupRecordRetriever SHARED ${TestLoadableDummyEventSetupRecordRetriever_EXTRA_SOURCES}
  stubs/LoadableDummyEventSetupRecordRetriever.cc
)

set_target_properties(TestLoadableDummyEventSetupRecordRetriever PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_TESTLIBS TestLoadableDummyEventSetupRecordRetriever)

set_target_properties(TestLoadableDummyEventSetupRecordRetriever PROPERTIES PREFIX "plugin")

add_dependencies( ALL_PLUGINS TestLoadableDummyEventSetupRecordRetriever)

edm_write_config( TestLoadableDummyEventSetupRecordRetriever FWCore/Framework)

target_include_directories(TestLoadableDummyEventSetupRecordRetriever PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestLoadableDummyEventSetupRecordRetriever PUBLIC
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

target_link_libraries(TestLoadableDummyEventSetupRecordRetriever PUBLIC
FWCoreFramework
Threads::Threads
crypt
dl
nsl
rt
)


add_python_rules(FWCore/Framework/test/)

add_script_rules(FWCore/Framework/test/)

install( TARGETS TestLoadableDummyEventSetupRecordRetriever DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

add_library(TestLoadableDummyProvider SHARED ${TestLoadableDummyProvider_EXTRA_SOURCES}
  stubs/LoadableDummyProvider.cc
)

set_target_properties(TestLoadableDummyProvider PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_TESTLIBS TestLoadableDummyProvider)

set_target_properties(TestLoadableDummyProvider PROPERTIES PREFIX "plugin")

add_dependencies( ALL_PLUGINS TestLoadableDummyProvider)

edm_write_config( TestLoadableDummyProvider FWCore/Framework)

target_include_directories(TestLoadableDummyProvider PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestLoadableDummyProvider PUBLIC
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

target_link_libraries(TestLoadableDummyProvider PUBLIC
FWCoreFramework
FWCoreFrameworkTestDummyForEventSetup
Threads::Threads
crypt
dl
nsl
rt
)


add_python_rules(FWCore/Framework/test/)

add_script_rules(FWCore/Framework/test/)

install( TARGETS TestLoadableDummyProvider DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

add_library(FWCoreFrameworkTestDummyLooper SHARED ${FWCoreFrameworkTestDummyLooper_EXTRA_SOURCES}
  stubs/DummyLooper.cc
  stubs/IntTestLooper.cc
  stubs/TestModuleChangeLooper.cc
)

set_target_properties(FWCoreFrameworkTestDummyLooper PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_TESTLIBS FWCoreFrameworkTestDummyLooper)

set_target_properties(FWCoreFrameworkTestDummyLooper PROPERTIES PREFIX "plugin")

add_dependencies( ALL_PLUGINS FWCoreFrameworkTestDummyLooper)

edm_write_config( FWCoreFrameworkTestDummyLooper FWCore/Framework)

target_include_directories(FWCoreFrameworkTestDummyLooper PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(FWCoreFrameworkTestDummyLooper PUBLIC
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

target_link_libraries(FWCoreFrameworkTestDummyLooper PUBLIC
DataFormatsTestObjects
FWCoreFramework
FWCoreFrameworkTestDummyForEventSetup
Threads::Threads
crypt
dl
nsl
rt
)


add_python_rules(FWCore/Framework/test/)

add_script_rules(FWCore/Framework/test/)

install( TARGETS FWCoreFrameworkTestDummyLooper DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

add_library(FWCoreFrameworkTestESDummyDataAnalyzer SHARED ${FWCoreFrameworkTestESDummyDataAnalyzer_EXTRA_SOURCES}
  stubs/TestESDummyDataAnalyzer.cc
)

set_target_properties(FWCoreFrameworkTestESDummyDataAnalyzer PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_TESTLIBS FWCoreFrameworkTestESDummyDataAnalyzer)

set_target_properties(FWCoreFrameworkTestESDummyDataAnalyzer PROPERTIES PREFIX "plugin")

add_dependencies( ALL_PLUGINS FWCoreFrameworkTestESDummyDataAnalyzer)

edm_write_config( FWCoreFrameworkTestESDummyDataAnalyzer FWCore/Framework)

target_include_directories(FWCoreFrameworkTestESDummyDataAnalyzer PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(FWCoreFrameworkTestESDummyDataAnalyzer PUBLIC
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

target_link_libraries(FWCoreFrameworkTestESDummyDataAnalyzer PUBLIC
FWCoreFramework
FWCoreFrameworkTestDummyForEventSetup
FWCoreParameterSet
FWCoreUtilities
Threads::Threads
crypt
dl
nsl
rt
)


add_python_rules(FWCore/Framework/test/)

add_script_rules(FWCore/Framework/test/)

install( TARGETS FWCoreFrameworkTestESDummyDataAnalyzer DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

add_library(FWCoreFrameworkTestPRegisterModules SHARED ${FWCoreFrameworkTestPRegisterModules_EXTRA_SOURCES}
  stubs/TestPRegisterModule1.cc
  stubs/TestPRegisterModule2.cc
)

set_target_properties(FWCoreFrameworkTestPRegisterModules PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_TESTLIBS FWCoreFrameworkTestPRegisterModules)

set_target_properties(FWCoreFrameworkTestPRegisterModules PROPERTIES PREFIX "plugin")

add_dependencies( ALL_PLUGINS FWCoreFrameworkTestPRegisterModules)

edm_write_config( FWCoreFrameworkTestPRegisterModules FWCore/Framework)

target_include_directories(FWCoreFrameworkTestPRegisterModules PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(FWCoreFrameworkTestPRegisterModules PUBLIC
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

target_link_libraries(FWCoreFrameworkTestPRegisterModules PUBLIC
DataFormatsCommon
FWCoreFramework
Threads::Threads
cppunit
crypt
dl
nsl
rt
)


add_python_rules(FWCore/Framework/test/)

add_script_rules(FWCore/Framework/test/)

install( TARGETS FWCoreFrameworkTestPRegisterModules DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

add_library(FWCoreFrameworkTestBeginEndJobAnalyzer SHARED ${FWCoreFrameworkTestBeginEndJobAnalyzer_EXTRA_SOURCES}
  stubs/TestBeginEndJobAnalyzerModule.cc
)

set_target_properties(FWCoreFrameworkTestBeginEndJobAnalyzer PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_TESTLIBS FWCoreFrameworkTestBeginEndJobAnalyzer)

set_target_properties(FWCoreFrameworkTestBeginEndJobAnalyzer PROPERTIES PREFIX "plugin")

add_dependencies( ALL_PLUGINS FWCoreFrameworkTestBeginEndJobAnalyzer)

edm_write_config( FWCoreFrameworkTestBeginEndJobAnalyzer FWCore/Framework)

target_include_directories(FWCoreFrameworkTestBeginEndJobAnalyzer PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(FWCoreFrameworkTestBeginEndJobAnalyzer PUBLIC
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

target_link_libraries(FWCoreFrameworkTestBeginEndJobAnalyzer PUBLIC
FWCoreFramework
FWCoreFrameworkTest
Threads::Threads
crypt
dl
nsl
rt
)


add_python_rules(FWCore/Framework/test/)

add_script_rules(FWCore/Framework/test/)

install( TARGETS FWCoreFrameworkTestBeginEndJobAnalyzer DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

add_library(FWCoreFrameworkTestFailuresAnalyzer SHARED ${FWCoreFrameworkTestFailuresAnalyzer_EXTRA_SOURCES}
  stubs/TestFailuresAnalyzer.cc
)

set_target_properties(FWCoreFrameworkTestFailuresAnalyzer PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_TESTLIBS FWCoreFrameworkTestFailuresAnalyzer)

set_target_properties(FWCoreFrameworkTestFailuresAnalyzer PROPERTIES PREFIX "plugin")

add_dependencies( ALL_PLUGINS FWCoreFrameworkTestFailuresAnalyzer)

edm_write_config( FWCoreFrameworkTestFailuresAnalyzer FWCore/Framework)

target_include_directories(FWCoreFrameworkTestFailuresAnalyzer PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(FWCoreFrameworkTestFailuresAnalyzer PUBLIC
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

target_link_libraries(FWCoreFrameworkTestFailuresAnalyzer PUBLIC
FWCoreFramework
FWCoreParameterSet
FWCoreUtilities
Threads::Threads
crypt
dl
nsl
rt
)


add_python_rules(FWCore/Framework/test/)

add_script_rules(FWCore/Framework/test/)

install( TARGETS FWCoreFrameworkTestFailuresAnalyzer DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

add_library(FWCoreFrameworkHistoryAnalyzer SHARED ${FWCoreFrameworkHistoryAnalyzer_EXTRA_SOURCES}
  stubs/HistoryAnalyzer.cc
)

set_target_properties(FWCoreFrameworkHistoryAnalyzer PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_TESTLIBS FWCoreFrameworkHistoryAnalyzer)

set_target_properties(FWCoreFrameworkHistoryAnalyzer PROPERTIES PREFIX "plugin")

add_dependencies( ALL_PLUGINS FWCoreFrameworkHistoryAnalyzer)

edm_write_config( FWCoreFrameworkHistoryAnalyzer FWCore/Framework)

target_include_directories(FWCoreFrameworkHistoryAnalyzer PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(FWCoreFrameworkHistoryAnalyzer PUBLIC
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

target_link_libraries(FWCoreFrameworkHistoryAnalyzer PUBLIC
DataFormatsProvenance
FWCoreFramework
FWCoreParameterSet
Threads::Threads
crypt
dl
nsl
rt
)


add_python_rules(FWCore/Framework/test/)

add_script_rules(FWCore/Framework/test/)

install( TARGETS FWCoreFrameworkHistoryAnalyzer DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

add_library(FWCoreFrameworkTestModuleDelete SHARED ${FWCoreFrameworkTestModuleDelete_EXTRA_SOURCES}
  stubs/TestModuleDelete.cc
)

set_target_properties(FWCoreFrameworkTestModuleDelete PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_TESTLIBS FWCoreFrameworkTestModuleDelete)

set_target_properties(FWCoreFrameworkTestModuleDelete PROPERTIES PREFIX "plugin")

add_dependencies( ALL_PLUGINS FWCoreFrameworkTestModuleDelete)

edm_write_config( FWCoreFrameworkTestModuleDelete FWCore/Framework)

target_include_directories(FWCoreFrameworkTestModuleDelete PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(FWCoreFrameworkTestModuleDelete PUBLIC
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

target_link_libraries(FWCoreFrameworkTestModuleDelete PUBLIC
FWCoreFramework
FWCoreMessageLogger
FWCoreParameterSet
Threads::Threads
crypt
dl
nsl
rt
)


add_python_rules(FWCore/Framework/test/)

add_script_rules(FWCore/Framework/test/)

install( TARGETS FWCoreFrameworkTestModuleDelete DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

add_library(FWCoreFrameworkTestTypeResolver SHARED ${FWCoreFrameworkTestTypeResolver_EXTRA_SOURCES}
  stubs/TestTypeResolverPlugins.cc
)

set_target_properties(FWCoreFrameworkTestTypeResolver PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_TESTLIBS FWCoreFrameworkTestTypeResolver)

set_target_properties(FWCoreFrameworkTestTypeResolver PROPERTIES PREFIX "plugin")

add_dependencies( ALL_PLUGINS FWCoreFrameworkTestTypeResolver)

edm_write_config( FWCoreFrameworkTestTypeResolver FWCore/Framework)

target_include_directories(FWCoreFrameworkTestTypeResolver PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(FWCoreFrameworkTestTypeResolver PUBLIC
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

target_link_libraries(FWCoreFrameworkTestTypeResolver PUBLIC
FWCoreFramework
FWCoreParameterSet
FWCoreUtilities
Threads::Threads
crypt
dl
nsl
rt
)


add_python_rules(FWCore/Framework/test/)

add_script_rules(FWCore/Framework/test/)

install( TARGETS FWCoreFrameworkTestTypeResolver DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

add_executable(TestFWCoreFramework
  checkForModuleDependencyCorrectness_t.cppunit.cc
  edconsumerbase_t.cppunit.cc
  edproducer_productregistry_callback.cc
  event_getrefbeforeput_t.cppunit.cc
  generichandle_t.cppunit.cc
  global_filter_t.cppunit.cc
  global_outputmodule_t.cppunit.cc
  global_producer_t.cppunit.cc
  limited_filter_t.cppunit.cc
  limited_outputmodule_t.cppunit.cc
  limited_producer_t.cppunit.cc
  maker2_t.cppunit.cc
  maker_t.cppunit.cc
  one_outputmodule_t.cppunit.cc
  productregistry.cppunit.cc
  stream_filter_t.cppunit.cc
  stream_producer_t.cppunit.cc
  testRunner.cpp
)

add_test(NAME TestFWCoreFramework_CTest COMMAND TestFWCoreFramework)

add_test_properties(TestFWCoreFramework_CTest)

set_target_properties(TestFWCoreFramework PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS TestFWCoreFramework)

add_dependencies( TestFWCoreFramework ALL_PLUGINS)

target_include_directories(TestFWCoreFramework PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestFWCoreFramework PUBLIC
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

target_link_libraries(TestFWCoreFramework PUBLIC
DataFormatsCommon
DataFormatsProvenance
DataFormatsTestObjects
FWCoreFramework
FWCoreParameterSet
FWCoreParameterSetReader
FWCoreUtilities
FWCoreVersion
Threads::Threads
cppunit
crypt
dl
nsl
rt
)


add_executable(TestFWCoreFrameworkeventsetup
  callback_t.cppunit.cc
  datakey_t.cppunit.cc
  dependentrecord_t.cppunit.cc
  esproducer_t.cppunit.cc
  esproducts_t.cppunit.cc
  eventsetup_t.cppunit.cc
  eventsetupplugin_t.cppunit.cc
  eventsetuprecord_t.cppunit.cc
  eventsetupscontroller_t.cppunit.cc
  fullchain_t.cppunit.cc
  intersectingiovrecordintervalfinder_t.cppunit.cc
  interval_t.cppunit.cc
  iovsyncvalue_t.cppunit.cc
  proxyfactoryproducer_t.cppunit.cc
  testRunner.cpp
)

add_test(NAME TestFWCoreFrameworkeventsetup_CTest COMMAND TestFWCoreFrameworkeventsetup)

add_test_properties(TestFWCoreFrameworkeventsetup_CTest)

set_target_properties(TestFWCoreFrameworkeventsetup PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS TestFWCoreFrameworkeventsetup)

add_dependencies( TestFWCoreFrameworkeventsetup ALL_PLUGINS)

target_include_directories(TestFWCoreFrameworkeventsetup PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestFWCoreFrameworkeventsetup PUBLIC
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

target_link_libraries(TestFWCoreFrameworkeventsetup PUBLIC
FWCoreFramework
FWCoreFrameworkTestDummyForEventSetup
FWCoreParameterSet
FWCoreUtilities
FWCoreVersion
Threads::Threads
cppunit
crypt
dl
nsl
rt
)


add_executable(TestFWCoreFrameworkeventprocessor
  eventprocessor2_t.cppunit.cc
  eventprocessor_t.cppunit.cc
  testRunner.cpp
)

add_test(NAME TestFWCoreFrameworkeventprocessor_CTest COMMAND TestFWCoreFrameworkeventprocessor)

add_test_properties(TestFWCoreFrameworkeventprocessor_CTest)

set_target_properties(TestFWCoreFrameworkeventprocessor PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS TestFWCoreFrameworkeventprocessor)

add_dependencies( TestFWCoreFrameworkeventprocessor ALL_PLUGINS)

target_include_directories(TestFWCoreFrameworkeventprocessor PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestFWCoreFrameworkeventprocessor PUBLIC
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

target_link_libraries(TestFWCoreFrameworkeventprocessor PUBLIC
DataFormatsProvenance
FWCoreFramework
FWCoreFrameworkTest
FWCoreParameterSetReader
FWCoreServiceRegistry
FWCoreUtilities
Threads::Threads
cppunit
crypt
dl
nsl
rt
)


add_executable(TestFWCoreFrameworkeventprincipal
  eventprincipal_t.cppunit.cc
  sharedresourcesregistry_t.cppunit.cc
  testRunner.cpp
)

add_test(NAME TestFWCoreFrameworkeventprincipal_CTest COMMAND TestFWCoreFrameworkeventprincipal)

add_test_properties(TestFWCoreFrameworkeventprincipal_CTest)

set_target_properties(TestFWCoreFrameworkeventprincipal PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS TestFWCoreFrameworkeventprincipal)

add_dependencies( TestFWCoreFrameworkeventprincipal ALL_PLUGINS)

target_include_directories(TestFWCoreFrameworkeventprincipal PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestFWCoreFrameworkeventprincipal PUBLIC
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

target_link_libraries(TestFWCoreFrameworkeventprincipal PUBLIC
DataFormatsCommon
DataFormatsProvenance
DataFormatsTestObjects
FWCoreFramework
FWCoreParameterSet
FWCoreUtilities
FWCoreVersion
Threads::Threads
cppunit
crypt
dl
nsl
rt
)


add_executable(TestFWCoreFrameworkEvent
  Event_t.cpp
)

add_test(NAME TestFWCoreFrameworkEvent_CTest COMMAND TestFWCoreFrameworkEvent)

add_test_properties(TestFWCoreFrameworkEvent_CTest)

set_target_properties(TestFWCoreFrameworkEvent PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS TestFWCoreFrameworkEvent)

add_dependencies( TestFWCoreFrameworkEvent ALL_PLUGINS)

target_include_directories(TestFWCoreFrameworkEvent PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestFWCoreFrameworkEvent PUBLIC
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

target_link_libraries(TestFWCoreFrameworkEvent PUBLIC
DataFormatsCommon
DataFormatsProvenance
DataFormatsTestObjects
FWCoreFramework
FWCoreParameterSet
FWCoreUtilities
FWCoreVersion
Threads::Threads
cppunit
crypt
dl
nsl
rt
)


add_executable(TestFWCoreFrameworkView
  View_t.cpp
)

add_test(NAME TestFWCoreFrameworkView_CTest COMMAND TestFWCoreFrameworkView)

add_test_properties(TestFWCoreFrameworkView_CTest)

set_target_properties(TestFWCoreFrameworkView PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS TestFWCoreFrameworkView)

add_dependencies( TestFWCoreFrameworkView ALL_PLUGINS)

target_include_directories(TestFWCoreFrameworkView PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestFWCoreFrameworkView PUBLIC
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

target_link_libraries(TestFWCoreFrameworkView PUBLIC
DataFormatsCommon
FWCoreFramework
Threads::Threads
cppunit
crypt
dl
nsl
rt
)


add_executable(TestFWCoreFrameworkCmsRun
  TestDriver.cpp
)

add_test(NAME TestFWCoreFrameworkCmsRun_CTest COMMAND /bin/bash -x ${CMAKE_CURRENT_SOURCE_DIR}/run_cmsRun.sh)

add_test_properties(TestFWCoreFrameworkCmsRun_CTest)

set_target_properties(TestFWCoreFrameworkCmsRun PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS TestFWCoreFrameworkCmsRun)

add_dependencies( TestFWCoreFrameworkCmsRun ALL_PLUGINS)

target_include_directories(TestFWCoreFrameworkCmsRun PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestFWCoreFrameworkCmsRun PUBLIC
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

target_link_libraries(TestFWCoreFrameworkCmsRun PUBLIC
FWCoreFramework
FWCoreUtilities
Threads::Threads
crypt
dl
nsl
rt
)


add_executable(TestFWCoreFrameworkESRefer
  TestDriver.cpp
)

add_test(NAME TestFWCoreFrameworkESRefer_CTest COMMAND /bin/bash -x ${CMAKE_CURRENT_SOURCE_DIR}/run_es_refer_tests.sh)

add_test_properties(TestFWCoreFrameworkESRefer_CTest)

set_target_properties(TestFWCoreFrameworkESRefer PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS TestFWCoreFrameworkESRefer)

add_dependencies( TestFWCoreFrameworkESRefer ALL_PLUGINS)

target_include_directories(TestFWCoreFrameworkESRefer PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestFWCoreFrameworkESRefer PUBLIC
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

target_link_libraries(TestFWCoreFrameworkESRefer PUBLIC
FWCoreFramework
FWCoreUtilities
Threads::Threads
crypt
dl
nsl
rt
)


add_executable(TestFWCoreFrameworkUnscheduled
  TestDriver.cpp
)

add_test(NAME TestFWCoreFrameworkUnscheduled_CTest COMMAND /bin/bash -x ${CMAKE_CURRENT_SOURCE_DIR}/run_unscheduled.sh)

add_test_properties(TestFWCoreFrameworkUnscheduled_CTest)

set_target_properties(TestFWCoreFrameworkUnscheduled PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS TestFWCoreFrameworkUnscheduled)

add_dependencies( TestFWCoreFrameworkUnscheduled ALL_PLUGINS)

target_include_directories(TestFWCoreFrameworkUnscheduled PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestFWCoreFrameworkUnscheduled PUBLIC
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

target_link_libraries(TestFWCoreFrameworkUnscheduled PUBLIC
FWCoreFramework
FWCoreUtilities
Threads::Threads
crypt
dl
nsl
rt
)


add_executable(TestFWCoreFrameworkGlobalStreamOne
  TestDriver.cpp
)

add_test(NAME TestFWCoreFrameworkGlobalStreamOne_CTest COMMAND /bin/bash -x ${CMAKE_CURRENT_SOURCE_DIR}/run_global_stream_one.sh)

add_test_properties(TestFWCoreFrameworkGlobalStreamOne_CTest)

set_target_properties(TestFWCoreFrameworkGlobalStreamOne PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS TestFWCoreFrameworkGlobalStreamOne)

add_dependencies( TestFWCoreFrameworkGlobalStreamOne ALL_PLUGINS)

target_include_directories(TestFWCoreFrameworkGlobalStreamOne PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestFWCoreFrameworkGlobalStreamOne PUBLIC
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

target_link_libraries(TestFWCoreFrameworkGlobalStreamOne PUBLIC
FWCoreFramework
FWCoreUtilities
Threads::Threads
crypt
dl
nsl
rt
)


add_executable(TestFWCoreFrameworkMayConsumesDeadlock
  TestDriver.cpp
)

add_test(NAME TestFWCoreFrameworkMayConsumesDeadlock_CTest COMMAND /bin/bash -x ${CMAKE_CURRENT_SOURCE_DIR}/run_deadlock_test.sh)

add_test_properties(TestFWCoreFrameworkMayConsumesDeadlock_CTest)

set_target_properties(TestFWCoreFrameworkMayConsumesDeadlock PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS TestFWCoreFrameworkMayConsumesDeadlock)

add_dependencies( TestFWCoreFrameworkMayConsumesDeadlock ALL_PLUGINS)

target_include_directories(TestFWCoreFrameworkMayConsumesDeadlock PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestFWCoreFrameworkMayConsumesDeadlock PUBLIC
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

target_link_libraries(TestFWCoreFrameworkMayConsumesDeadlock PUBLIC
FWCoreFramework
FWCoreUtilities
Threads::Threads
crypt
dl
nsl
rt
)


add_executable(TestFWCoreFrameworkReplace
  TestDriver.cpp
)

add_test(NAME TestFWCoreFrameworkReplace_CTest COMMAND /bin/bash -x ${CMAKE_CURRENT_SOURCE_DIR}/run_replace_tests.sh)

add_test_properties(TestFWCoreFrameworkReplace_CTest)

set_target_properties(TestFWCoreFrameworkReplace PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS TestFWCoreFrameworkReplace)

add_dependencies( TestFWCoreFrameworkReplace ALL_PLUGINS)

target_include_directories(TestFWCoreFrameworkReplace PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestFWCoreFrameworkReplace PUBLIC
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

target_link_libraries(TestFWCoreFrameworkReplace PUBLIC
FWCoreFramework
FWCoreUtilities
Threads::Threads
crypt
dl
nsl
rt
)


add_executable(TestFWCoreFrameworkESProducerLooper
  TestDriver.cpp
)

add_test(NAME TestFWCoreFrameworkESProducerLooper_CTest COMMAND /bin/bash -x ${CMAKE_CURRENT_SOURCE_DIR}/run_esproducerlooper.sh)

add_test_properties(TestFWCoreFrameworkESProducerLooper_CTest)

set_target_properties(TestFWCoreFrameworkESProducerLooper PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS TestFWCoreFrameworkESProducerLooper)

add_dependencies( TestFWCoreFrameworkESProducerLooper ALL_PLUGINS)

target_include_directories(TestFWCoreFrameworkESProducerLooper PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestFWCoreFrameworkESProducerLooper PUBLIC
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

target_link_libraries(TestFWCoreFrameworkESProducerLooper PUBLIC
FWCoreFramework
FWCoreUtilities
Threads::Threads
crypt
dl
nsl
rt
)


add_executable(TestFWCoreFrameworkTrigBit
  TestDriver.cpp
)

add_test(NAME TestFWCoreFrameworkTrigBit_CTest COMMAND /bin/bash -x ${CMAKE_CURRENT_SOURCE_DIR}/run_trigbit.sh)

add_test_properties(TestFWCoreFrameworkTrigBit_CTest)

set_target_properties(TestFWCoreFrameworkTrigBit PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS TestFWCoreFrameworkTrigBit)

add_dependencies( TestFWCoreFrameworkTrigBit ALL_PLUGINS)

target_include_directories(TestFWCoreFrameworkTrigBit PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestFWCoreFrameworkTrigBit PUBLIC
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

target_link_libraries(TestFWCoreFrameworkTrigBit PUBLIC
FWCoreFramework
FWCoreUtilities
Threads::Threads
crypt
dl
nsl
rt
)


add_executable(TestFWCoreFrameworkTrigMask
  TestDriver.cpp
)

add_test(NAME TestFWCoreFrameworkTrigMask_CTest COMMAND /bin/bash -x ${CMAKE_CURRENT_SOURCE_DIR}/run_trigmask.sh)

add_test_properties(TestFWCoreFrameworkTrigMask_CTest)

set_target_properties(TestFWCoreFrameworkTrigMask PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS TestFWCoreFrameworkTrigMask)

add_dependencies( TestFWCoreFrameworkTrigMask ALL_PLUGINS)

target_include_directories(TestFWCoreFrameworkTrigMask PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestFWCoreFrameworkTrigMask PUBLIC
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

target_link_libraries(TestFWCoreFrameworkTrigMask PUBLIC
FWCoreFramework
FWCoreUtilities
Threads::Threads
crypt
dl
nsl
rt
)


add_executable(TestXMLSafeException
  TestDriver.cpp
)

add_test(NAME TestXMLSafeException_CTest COMMAND /bin/bash -x ${CMAKE_CURRENT_SOURCE_DIR}/run_XMLException.sh)

add_test_properties(TestXMLSafeException_CTest)

set_target_properties(TestXMLSafeException PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS TestXMLSafeException)

add_dependencies( TestXMLSafeException ALL_PLUGINS)

target_include_directories(TestXMLSafeException PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestXMLSafeException PUBLIC
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

target_link_libraries(TestXMLSafeException PUBLIC
FWCoreFramework
FWCoreUtilities
Threads::Threads
crypt
dl
nsl
rt
)


add_executable(TestFWCoreFrameworkProductSelector
  ProductSelector_t.cpp
)

add_test(NAME TestFWCoreFrameworkProductSelector_CTest COMMAND TestFWCoreFrameworkProductSelector)

add_test_properties(TestFWCoreFrameworkProductSelector_CTest)

set_target_properties(TestFWCoreFrameworkProductSelector PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS TestFWCoreFrameworkProductSelector)

add_dependencies( TestFWCoreFrameworkProductSelector ALL_PLUGINS)

target_include_directories(TestFWCoreFrameworkProductSelector PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestFWCoreFrameworkProductSelector PUBLIC
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

target_link_libraries(TestFWCoreFrameworkProductSelector PUBLIC
DataFormatsProvenance
FWCoreFramework
FWCoreParameterSet
FWCoreUtilities
Threads::Threads
crypt
dl
nsl
rt
)


add_executable(TestFWCoreFrameworkEventSelector
  EventSelector_t.cpp
)

add_test(NAME TestFWCoreFrameworkEventSelector_CTest COMMAND TestFWCoreFrameworkEventSelector)

add_test_properties(TestFWCoreFrameworkEventSelector_CTest)

set_target_properties(TestFWCoreFrameworkEventSelector PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS TestFWCoreFrameworkEventSelector)

add_dependencies( TestFWCoreFrameworkEventSelector ALL_PLUGINS)

target_include_directories(TestFWCoreFrameworkEventSelector PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestFWCoreFrameworkEventSelector PUBLIC
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

target_link_libraries(TestFWCoreFrameworkEventSelector PUBLIC
DataFormatsCommon
FWCoreFramework
FWCoreParameterSet
FWCoreServiceRegistry
FWCoreUtilities
Threads::Threads
crypt
dl
nsl
rt
)


add_executable(TestFWCoreFrameworkEventSelWildcard
  EventSelWildcard_t.cpp
)

add_test(NAME TestFWCoreFrameworkEventSelWildcard_CTest COMMAND TestFWCoreFrameworkEventSelWildcard)

add_test_properties(TestFWCoreFrameworkEventSelWildcard_CTest)

set_target_properties(TestFWCoreFrameworkEventSelWildcard PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS TestFWCoreFrameworkEventSelWildcard)

add_dependencies( TestFWCoreFrameworkEventSelWildcard ALL_PLUGINS)

target_include_directories(TestFWCoreFrameworkEventSelWildcard PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestFWCoreFrameworkEventSelWildcard PUBLIC
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

target_link_libraries(TestFWCoreFrameworkEventSelWildcard PUBLIC
DataFormatsCommon
FWCoreFramework
FWCoreParameterSet
FWCoreServiceRegistry
FWCoreUtilities
Threads::Threads
crypt
dl
nsl
rt
)


add_executable(TestFWCoreFrameworkEventSelExc
  EventSelExc_t.cpp
)

add_test(NAME TestFWCoreFrameworkEventSelExc_CTest COMMAND TestFWCoreFrameworkEventSelExc)

add_test_properties(TestFWCoreFrameworkEventSelExc_CTest)

set_target_properties(TestFWCoreFrameworkEventSelExc PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS TestFWCoreFrameworkEventSelExc)

add_dependencies( TestFWCoreFrameworkEventSelExc ALL_PLUGINS)

target_include_directories(TestFWCoreFrameworkEventSelExc PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestFWCoreFrameworkEventSelExc PUBLIC
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

target_link_libraries(TestFWCoreFrameworkEventSelExc PUBLIC
DataFormatsCommon
FWCoreFramework
FWCoreParameterSet
FWCoreServiceRegistry
FWCoreUtilities
Threads::Threads
crypt
dl
nsl
rt
)


add_executable(TestFWCoreFrameworkEventSelOverlap
  EventSelOverlap_t.cpp
)

add_test(NAME TestFWCoreFrameworkEventSelOverlap_CTest COMMAND TestFWCoreFrameworkEventSelOverlap)

add_test_properties(TestFWCoreFrameworkEventSelOverlap_CTest)

set_target_properties(TestFWCoreFrameworkEventSelOverlap PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS TestFWCoreFrameworkEventSelOverlap)

add_dependencies( TestFWCoreFrameworkEventSelOverlap ALL_PLUGINS)

target_include_directories(TestFWCoreFrameworkEventSelOverlap PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestFWCoreFrameworkEventSelOverlap PUBLIC
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

target_link_libraries(TestFWCoreFrameworkEventSelOverlap PUBLIC
DataFormatsCommon
FWCoreFramework
FWCoreParameterSet
FWCoreServiceRegistry
FWCoreUtilities
Threads::Threads
crypt
dl
nsl
rt
)


add_executable(TestFWCoreFrameworkRegistryTemplate
  RegistryTemplate_t.cpp
)

add_test(NAME TestFWCoreFrameworkRegistryTemplate_CTest COMMAND TestFWCoreFrameworkRegistryTemplate)

add_test_properties(TestFWCoreFrameworkRegistryTemplate_CTest)

set_target_properties(TestFWCoreFrameworkRegistryTemplate PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS TestFWCoreFrameworkRegistryTemplate)

add_dependencies( TestFWCoreFrameworkRegistryTemplate ALL_PLUGINS)

target_include_directories(TestFWCoreFrameworkRegistryTemplate PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestFWCoreFrameworkRegistryTemplate PUBLIC
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

target_link_libraries(TestFWCoreFrameworkRegistryTemplate PUBLIC
DataFormatsProvenance
FWCoreFramework
FWCoreParameterSet
FWCoreUtilities
Threads::Threads
crypt
dl
nsl
rt
)


add_executable(TestFWCoreOutputModuleUtilities
  OutputModuleUtilities_t.cpp
)

add_test(NAME TestFWCoreOutputModuleUtilities_CTest COMMAND TestFWCoreOutputModuleUtilities)

add_test_properties(TestFWCoreOutputModuleUtilities_CTest)

set_target_properties(TestFWCoreOutputModuleUtilities PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS TestFWCoreOutputModuleUtilities)

add_dependencies( TestFWCoreOutputModuleUtilities ALL_PLUGINS)

target_include_directories(TestFWCoreOutputModuleUtilities PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestFWCoreOutputModuleUtilities PUBLIC
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

target_link_libraries(TestFWCoreOutputModuleUtilities PUBLIC
FWCoreFramework
Threads::Threads
crypt
dl
nsl
rt
)


add_executable(TestFWCoreFrameworkStatemachine
  statemachine_t.cc
)

add_test(NAME TestFWCoreFrameworkStatemachine_CTest COMMAND TestFWCoreFrameworkStatemachine)

add_test_properties(TestFWCoreFrameworkStatemachine_CTest)

set_target_properties(TestFWCoreFrameworkStatemachine PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS TestFWCoreFrameworkStatemachine)

add_dependencies( TestFWCoreFrameworkStatemachine ALL_PLUGINS)

target_include_directories(TestFWCoreFrameworkStatemachine PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestFWCoreFrameworkStatemachine PUBLIC
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

target_link_libraries(TestFWCoreFrameworkStatemachine PUBLIC
Boost::program_options
FWCoreFramework
FWCoreFrameworkTest
Threads::Threads
crypt
dl
nsl
rt
)


add_executable(TestFWCoreFrameworkStatemachineSH
  TestDriver.cpp
)

add_test(NAME TestFWCoreFrameworkStatemachineSH_CTest COMMAND /bin/bash -x ${CMAKE_CURRENT_SOURCE_DIR}/run_statemachine.sh)

add_test_properties(TestFWCoreFrameworkStatemachineSH_CTest)

set_target_properties(TestFWCoreFrameworkStatemachineSH PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS TestFWCoreFrameworkStatemachineSH)

add_dependencies( TestFWCoreFrameworkStatemachineSH ALL_PLUGINS)

target_include_directories(TestFWCoreFrameworkStatemachineSH PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestFWCoreFrameworkStatemachineSH PUBLIC
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

target_link_libraries(TestFWCoreFrameworkStatemachineSH PUBLIC
FWCoreFramework
FWCoreUtilities
Threads::Threads
crypt
dl
nsl
rt
)


add_executable(TestFWCoreFrameworkInputTagFailure
  TestDriver.cpp
)

add_test(NAME TestFWCoreFrameworkInputTagFailure_CTest COMMAND /bin/bash -x ${CMAKE_CURRENT_SOURCE_DIR}/test_InputTag_cache_failure.sh)

add_test_properties(TestFWCoreFrameworkInputTagFailure_CTest)

set_target_properties(TestFWCoreFrameworkInputTagFailure PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS TestFWCoreFrameworkInputTagFailure)

add_dependencies( TestFWCoreFrameworkInputTagFailure ALL_PLUGINS)

target_include_directories(TestFWCoreFrameworkInputTagFailure PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestFWCoreFrameworkInputTagFailure PUBLIC
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

target_link_libraries(TestFWCoreFrameworkInputTagFailure PUBLIC
FWCoreFramework
FWCoreUtilities
Threads::Threads
crypt
dl
nsl
rt
)


add_executable(TestFWCoreFrameworkDeleteEarly
  TestDriver.cpp
)

add_test(NAME TestFWCoreFrameworkDeleteEarly_CTest COMMAND /bin/bash -x ${CMAKE_CURRENT_SOURCE_DIR}/test_deleteEarly.sh)

add_test_properties(TestFWCoreFrameworkDeleteEarly_CTest)

set_target_properties(TestFWCoreFrameworkDeleteEarly PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS TestFWCoreFrameworkDeleteEarly)

add_dependencies( TestFWCoreFrameworkDeleteEarly ALL_PLUGINS)

target_include_directories(TestFWCoreFrameworkDeleteEarly PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestFWCoreFrameworkDeleteEarly PUBLIC
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

target_link_libraries(TestFWCoreFrameworkDeleteEarly PUBLIC
FWCoreFramework
FWCoreUtilities
Threads::Threads
crypt
dl
nsl
rt
)


add_executable(TestFWCoreFrameworkEarlyTerminationSignal
  TestDriver.cpp
)

add_test(NAME TestFWCoreFrameworkEarlyTerminationSignal_CTest COMMAND /bin/bash -x ${CMAKE_CURRENT_SOURCE_DIR}/test_earlyTerminationSignal.sh)

add_test_properties(TestFWCoreFrameworkEarlyTerminationSignal_CTest)

set_target_properties(TestFWCoreFrameworkEarlyTerminationSignal PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS TestFWCoreFrameworkEarlyTerminationSignal)

add_dependencies( TestFWCoreFrameworkEarlyTerminationSignal ALL_PLUGINS)

target_include_directories(TestFWCoreFrameworkEarlyTerminationSignal PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestFWCoreFrameworkEarlyTerminationSignal PUBLIC
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

target_link_libraries(TestFWCoreFrameworkEarlyTerminationSignal PUBLIC
FWCoreFramework
FWCoreUtilities
Threads::Threads
crypt
dl
nsl
rt
)


add_executable(TestFWCoreFrameworkPrintDependencies
  TestDriver.cpp
)

add_test(NAME TestFWCoreFrameworkPrintDependencies_CTest COMMAND /bin/bash -x ${CMAKE_CURRENT_SOURCE_DIR}/run_PrintDependencies.sh)

add_test_properties(TestFWCoreFrameworkPrintDependencies_CTest)

set_target_properties(TestFWCoreFrameworkPrintDependencies PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS TestFWCoreFrameworkPrintDependencies)

add_dependencies( TestFWCoreFrameworkPrintDependencies ALL_PLUGINS)

target_include_directories(TestFWCoreFrameworkPrintDependencies PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestFWCoreFrameworkPrintDependencies PUBLIC
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

target_link_libraries(TestFWCoreFrameworkPrintDependencies PUBLIC
FWCoreFramework
FWCoreUtilities
Threads::Threads
crypt
dl
nsl
rt
)


add_executable(TestFWCoreFrameworkTransitions
  TestDriver.cpp
)

add_test(NAME TestFWCoreFrameworkTransitions_CTest COMMAND /bin/bash -x ${CMAKE_CURRENT_SOURCE_DIR}/transition_test.sh)

add_test_properties(TestFWCoreFrameworkTransitions_CTest)

set_target_properties(TestFWCoreFrameworkTransitions PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS TestFWCoreFrameworkTransitions)

add_dependencies( TestFWCoreFrameworkTransitions ALL_PLUGINS)

target_include_directories(TestFWCoreFrameworkTransitions PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestFWCoreFrameworkTransitions PUBLIC
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

target_link_libraries(TestFWCoreFrameworkTransitions PUBLIC
FWCoreFramework
FWCoreUtilities
Threads::Threads
crypt
dl
nsl
rt
)


add_executable(TestFWCoreFrameworkEmptyPath
  TestDriver.cpp
)

add_test(NAME TestFWCoreFrameworkEmptyPath_CTest COMMAND /bin/bash -x ${CMAKE_CURRENT_SOURCE_DIR}/test_emptyPath.sh)

add_test_properties(TestFWCoreFrameworkEmptyPath_CTest)

set_target_properties(TestFWCoreFrameworkEmptyPath PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS TestFWCoreFrameworkEmptyPath)

add_dependencies( TestFWCoreFrameworkEmptyPath ALL_PLUGINS)

target_include_directories(TestFWCoreFrameworkEmptyPath PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestFWCoreFrameworkEmptyPath PUBLIC
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

target_link_libraries(TestFWCoreFrameworkEmptyPath PUBLIC
FWCoreFramework
FWCoreUtilities
Threads::Threads
crypt
dl
nsl
rt
)


add_executable(TestFWCoreFrameworkCatch2notTP
  test_catch2_main.cc
  test_catch2notTP_ESRecordsToProxyIndices.cc
  test_catch2notTP_InputProcessBlock.cc
  test_catch2notTP_InputProcessBlockCacheHolder.cc
  test_catch2notTP_MergeableRunProductMetadata.cc
)

add_test(NAME TestFWCoreFrameworkCatch2notTP_CTest COMMAND TestFWCoreFrameworkCatch2notTP)

add_test_properties(TestFWCoreFrameworkCatch2notTP_CTest)

set_target_properties(TestFWCoreFrameworkCatch2notTP PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS TestFWCoreFrameworkCatch2notTP)

add_dependencies( TestFWCoreFrameworkCatch2notTP ALL_PLUGINS)

target_include_directories(TestFWCoreFrameworkCatch2notTP PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestFWCoreFrameworkCatch2notTP PUBLIC
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

target_link_libraries(TestFWCoreFrameworkCatch2notTP PUBLIC
FWCoreFramework
Threads::Threads
crypt
dl
nsl
rt
)


add_executable(TestFWCoreFrameworkFactory
  test_catch2_Factory.cc
  test_catch2_main.cc
)

add_test(NAME TestFWCoreFrameworkFactory_CTest COMMAND TestFWCoreFrameworkFactory)

add_test_properties(TestFWCoreFrameworkFactory_CTest)

set_target_properties(TestFWCoreFrameworkFactory PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS TestFWCoreFrameworkFactory)

add_dependencies( TestFWCoreFrameworkFactory ALL_PLUGINS)

target_include_directories(TestFWCoreFrameworkFactory PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestFWCoreFrameworkFactory PUBLIC
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

target_link_libraries(TestFWCoreFrameworkFactory PUBLIC
FWCoreFramework
Threads::Threads
crypt
dl
nsl
rt
)


