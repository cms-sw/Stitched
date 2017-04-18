add_library(FWCoreFrameworkTestDummyForEventSetup SHARED 
  DummyData.cc
  DummyRecord.cc
  DepRecord.cc
  Dummy2Record.cc
  DepOn2Record.cc
)

target_include_directories(FWCoreFrameworkTestDummyForEventSetup PUBLIC ${Boost_INCLUDE_DIR})
include_directories(FWCoreFrameworkTestDummyForEventSetup PUBLIC ${Boost_INCLUDE_DIR})
target_link_libraries(FWCoreFrameworkTestDummyForEventSetup PUBLIC
  ${Boost_REGEX_LIBRARY_RELEASE}
  dl
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  FWCoreFramework
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  ${PYTHON_LIBRARY}
)

add_library(FWCoreFrameworkTest SHARED 
  MockEventProcessor.cc
  stubs/TestBeginEndJobAnalyzer.cc
)

target_include_directories(FWCoreFrameworkTest PUBLIC ${Boost_INCLUDE_DIR})
include_directories(FWCoreFrameworkTest PUBLIC ${Boost_INCLUDE_DIR})
target_link_libraries(FWCoreFrameworkTest PUBLIC
  ${Boost_REGEX_LIBRARY_RELEASE}
  dl
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  FWCoreFramework
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  ${PYTHON_LIBRARY}
)

add_library(TestOutputModule SHARED 
  stubs/TestOutputModule.cc
)

target_include_directories(TestOutputModule PUBLIC ${PYTHON_INCLUDE_DIR})
include_directories(TestOutputModule PUBLIC ${PYTHON_INCLUDE_DIR})
target_include_directories(TestOutputModule PUBLIC ${Boost_INCLUDE_DIR}/python)
include_directories(TestOutputModule PUBLIC ${Boost_INCLUDE_DIR}/python)
target_include_directories(TestOutputModule PUBLIC ${Boost_INCLUDE_DIR})
include_directories(TestOutputModule PUBLIC ${Boost_INCLUDE_DIR})
target_include_directories(TestOutputModule PUBLIC ${TBB_INCLUDE_DIRS})
include_directories(TestOutputModule PUBLIC ${TBB_INCLUDE_DIRS})
target_include_directories(TestOutputModule PUBLIC ${ROOT_INCLUDE_DIR})
include_directories(TestOutputModule PUBLIC ${ROOT_INCLUDE_DIR})
target_link_libraries(TestOutputModule PUBLIC
  FWCoreParameterSet
  dl
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  ${Boost_REGEX_LIBRARY_RELEASE}
  DataFormatsCommon
  FWCoreFramework
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  FWCoreServiceRegistry
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  ${PYTHON_LIBRARY}
  DataFormatsProvenance
)

add_library(TestFilterModule SHARED 
  stubs/TestFilterModule.cc
)

target_include_directories(TestFilterModule PUBLIC ${Boost_INCLUDE_DIR})
include_directories(TestFilterModule PUBLIC ${Boost_INCLUDE_DIR})
target_include_directories(TestFilterModule PUBLIC ${ROOT_INCLUDE_DIR})
include_directories(TestFilterModule PUBLIC ${ROOT_INCLUDE_DIR})
target_link_libraries(TestFilterModule PUBLIC
  FWCoreParameterSet
  dl
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  ${Boost_REGEX_LIBRARY_RELEASE}
  DataFormatsCommon
  FWCoreFramework
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  ${PYTHON_LIBRARY}
)

add_library(TestTBBTasksAnalyzer SHARED 
  stubs/TestTBBTasksAnalyzer.cc
  stubs/TestNThreadsChecker.cc
)

target_include_directories(TestTBBTasksAnalyzer PUBLIC ${Boost_INCLUDE_DIR})
include_directories(TestTBBTasksAnalyzer PUBLIC ${Boost_INCLUDE_DIR})
target_include_directories(TestTBBTasksAnalyzer PUBLIC ${TBB_INCLUDE_DIRS})
include_directories(TestTBBTasksAnalyzer PUBLIC ${TBB_INCLUDE_DIRS})
target_link_libraries(TestTBBTasksAnalyzer PUBLIC
  FWCoreParameterSet
  dl
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  ${Boost_REGEX_LIBRARY_RELEASE}
  DataFormatsCommon
  FWCoreFramework
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  ${TBB_LIBRARIES}
  ${PYTHON_LIBRARY}
)

add_executable(TestFWCoreFrameworkTBBTasks
  TestDriver.cpp
)

target_include_directories(TestFWCoreFrameworkTBBTasks PUBLIC ${Boost_INCLUDE_DIR})
include_directories(TestFWCoreFrameworkTBBTasks PUBLIC ${Boost_INCLUDE_DIR})
target_link_libraries(TestFWCoreFrameworkTBBTasks PUBLIC
  ${Boost_REGEX_LIBRARY_RELEASE}
  dl
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  FWCoreFramework
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  FWCoreUtilities
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  ${PYTHON_LIBRARY}
  ${Boost_PYTHON_LIBRARY_RELEASE}
)

add_test(NAME TestFWCoreFrameworkTBBTasks COMMAND TestFWCoreFrameworkTBBTasks)
add_library(TestTriggerNames SHARED 
  stubs/TestTriggerNames.cc
)

target_include_directories(TestTriggerNames PUBLIC ${Boost_INCLUDE_DIR})
include_directories(TestTriggerNames PUBLIC ${Boost_INCLUDE_DIR})
target_link_libraries(TestTriggerNames PUBLIC
  FWCoreParameterSet
  dl
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  ${Boost_REGEX_LIBRARY_RELEASE}
  FWCoreUtilities
  DataFormatsCommon
  FWCoreFramework
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  FWCoreServiceRegistry
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  ${PYTHON_LIBRARY}
  DataFormatsProvenance
)

add_library(TestMergeResults SHARED 
  stubs/TestMergeResults.cc
)

target_include_directories(TestMergeResults PUBLIC ${PYTHON_INCLUDE_DIR})
include_directories(TestMergeResults PUBLIC ${PYTHON_INCLUDE_DIR})
target_include_directories(TestMergeResults PUBLIC ${Boost_INCLUDE_DIR}/python)
include_directories(TestMergeResults PUBLIC ${Boost_INCLUDE_DIR}/python)
target_include_directories(TestMergeResults PUBLIC ${TINYXML_INCLUDE_DIR})
include_directories(TestMergeResults PUBLIC ${TINYXML_INCLUDE_DIR})
target_include_directories(TestMergeResults PUBLIC ${Boost_INCLUDE_DIR})
include_directories(TestMergeResults PUBLIC ${Boost_INCLUDE_DIR})
target_include_directories(TestMergeResults PUBLIC ${MD5_INCLUDE_DIR})
include_directories(TestMergeResults PUBLIC ${MD5_INCLUDE_DIR})
target_include_directories(TestMergeResults PUBLIC ${TBB_INCLUDE_DIRS})
include_directories(TestMergeResults PUBLIC ${TBB_INCLUDE_DIRS})
target_include_directories(TestMergeResults PUBLIC ${ROOT_INCLUDE_DIR})
include_directories(TestMergeResults PUBLIC ${ROOT_INCLUDE_DIR})
target_link_libraries(TestMergeResults PUBLIC
  FWCoreParameterSet
  dl
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  ${Boost_REGEX_LIBRARY_RELEASE}
  FWCoreUtilities
  FWCoreMessageLogger
  FWCoreFramework
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  FWCoreServiceRegistry
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  ${PYTHON_LIBRARY}
  DataFormatsProvenance
  DataFormatsCommon
  DataFormatsTestObjects
)

add_library(RunLumiEventAnalyzer SHARED 
  stubs/RunLumiEventAnalyzer.cc
)

target_include_directories(RunLumiEventAnalyzer PUBLIC ${Boost_INCLUDE_DIR})
include_directories(RunLumiEventAnalyzer PUBLIC ${Boost_INCLUDE_DIR})
target_link_libraries(RunLumiEventAnalyzer PUBLIC
  FWCoreParameterSet
  dl
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  ${Boost_REGEX_LIBRARY_RELEASE}
  FWCoreFramework
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  ${PYTHON_LIBRARY}
)

add_library(TestMod SHARED 
  stubs/TestMod.cc
)

target_include_directories(TestMod PUBLIC ${Boost_INCLUDE_DIR})
include_directories(TestMod PUBLIC ${Boost_INCLUDE_DIR})
target_link_libraries(TestMod PUBLIC
  FWCoreParameterSet
  dl
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  ${Boost_REGEX_LIBRARY_RELEASE}
  FWCoreFramework
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  ${PYTHON_LIBRARY}
)

add_library(TestToyModules SHARED 
  stubs/ToyModules.cc
  stubs/ToyAnalyzers.cc
  stubs/ToyIntProducers.cc
  stubs/ToyDoubleProducers.cc
  stubs/ToySTLProducers.cc
  stubs/ToyRefProducers.cc
  stubs/DeleteEarlyModules.cc
)

target_include_directories(TestToyModules PUBLIC ${Boost_INCLUDE_DIR})
include_directories(TestToyModules PUBLIC ${Boost_INCLUDE_DIR})
target_include_directories(TestToyModules PUBLIC ${ROOT_INCLUDE_DIR})
include_directories(TestToyModules PUBLIC ${ROOT_INCLUDE_DIR})
target_link_libraries(TestToyModules PUBLIC
  FWCoreParameterSet
  dl
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  ${Boost_REGEX_LIBRARY_RELEASE}
  DataFormatsCommon
  FWCoreFramework
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  ${PYTHON_LIBRARY}
  DataFormatsTestObjects
)

add_library(TestGlobalModules SHARED 
  stubs/TestGlobalProducers.cc
  stubs/TestGlobalAnalyzers.cc
  stubs/TestGlobalFilters.cc
)

target_include_directories(TestGlobalModules PUBLIC ${PYTHON_INCLUDE_DIR})
include_directories(TestGlobalModules PUBLIC ${PYTHON_INCLUDE_DIR})
target_include_directories(TestGlobalModules PUBLIC ${Boost_INCLUDE_DIR}/python)
include_directories(TestGlobalModules PUBLIC ${Boost_INCLUDE_DIR}/python)
target_include_directories(TestGlobalModules PUBLIC ${Boost_INCLUDE_DIR})
include_directories(TestGlobalModules PUBLIC ${Boost_INCLUDE_DIR})
target_include_directories(TestGlobalModules PUBLIC ${TBB_INCLUDE_DIRS})
include_directories(TestGlobalModules PUBLIC ${TBB_INCLUDE_DIRS})
target_include_directories(TestGlobalModules PUBLIC ${ROOT_INCLUDE_DIR})
include_directories(TestGlobalModules PUBLIC ${ROOT_INCLUDE_DIR})
target_link_libraries(TestGlobalModules PUBLIC
  FWCoreParameterSet
  dl
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  ${Boost_REGEX_LIBRARY_RELEASE}
  FWCoreFramework
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  ${PYTHON_LIBRARY}
)

add_library(TestOneModules SHARED 
  stubs/TestOneProducers.cc
  stubs/TestOneAnalyzers.cc
  stubs/TestOneFilters.cc
)

target_include_directories(TestOneModules PUBLIC ${PYTHON_INCLUDE_DIR})
include_directories(TestOneModules PUBLIC ${PYTHON_INCLUDE_DIR})
target_include_directories(TestOneModules PUBLIC ${Boost_INCLUDE_DIR}/python)
include_directories(TestOneModules PUBLIC ${Boost_INCLUDE_DIR}/python)
target_include_directories(TestOneModules PUBLIC ${Boost_INCLUDE_DIR})
include_directories(TestOneModules PUBLIC ${Boost_INCLUDE_DIR})
target_include_directories(TestOneModules PUBLIC ${TBB_INCLUDE_DIRS})
include_directories(TestOneModules PUBLIC ${TBB_INCLUDE_DIRS})
target_include_directories(TestOneModules PUBLIC ${ROOT_INCLUDE_DIR})
include_directories(TestOneModules PUBLIC ${ROOT_INCLUDE_DIR})
target_link_libraries(TestOneModules PUBLIC
  FWCoreParameterSet
  dl
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  ${Boost_REGEX_LIBRARY_RELEASE}
  FWCoreFramework
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  ${PYTHON_LIBRARY}
)

add_library(TestStreamModules SHARED 
  stubs/TestStreamProducers.cc
  stubs/TestStreamFilters.cc
  stubs/TestStreamAnalyzers.cc
)

target_include_directories(TestStreamModules PUBLIC ${Boost_INCLUDE_DIR})
include_directories(TestStreamModules PUBLIC ${Boost_INCLUDE_DIR})
target_link_libraries(TestStreamModules PUBLIC
  FWCoreParameterSet
  dl
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  ${Boost_REGEX_LIBRARY_RELEASE}
  FWCoreFramework
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  ${PYTHON_LIBRARY}
)

add_library(TestSchedulerModule1 SHARED 
  stubs/TestSchedulerModule1.cc
)

target_include_directories(TestSchedulerModule1 PUBLIC ${PYTHON_INCLUDE_DIR})
include_directories(TestSchedulerModule1 PUBLIC ${PYTHON_INCLUDE_DIR})
target_include_directories(TestSchedulerModule1 PUBLIC ${Boost_INCLUDE_DIR}/python)
include_directories(TestSchedulerModule1 PUBLIC ${Boost_INCLUDE_DIR}/python)
target_include_directories(TestSchedulerModule1 PUBLIC ${Boost_INCLUDE_DIR})
include_directories(TestSchedulerModule1 PUBLIC ${Boost_INCLUDE_DIR})
target_include_directories(TestSchedulerModule1 PUBLIC ${TBB_INCLUDE_DIRS})
include_directories(TestSchedulerModule1 PUBLIC ${TBB_INCLUDE_DIRS})
target_include_directories(TestSchedulerModule1 PUBLIC ${ROOT_INCLUDE_DIR})
include_directories(TestSchedulerModule1 PUBLIC ${ROOT_INCLUDE_DIR})
target_link_libraries(TestSchedulerModule1 PUBLIC
  FWCoreParameterSet
  dl
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  ${Boost_REGEX_LIBRARY_RELEASE}
  FWCoreFramework
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  ${PYTHON_LIBRARY}
)

add_library(TestSchedulerModule2 SHARED 
  stubs/TestSchedulerModule2.cc
)

target_include_directories(TestSchedulerModule2 PUBLIC ${Boost_INCLUDE_DIR})
include_directories(TestSchedulerModule2 PUBLIC ${Boost_INCLUDE_DIR})
target_link_libraries(TestSchedulerModule2 PUBLIC
  FWCoreParameterSet
  dl
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  ${Boost_REGEX_LIBRARY_RELEASE}
  FWCoreFramework
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  ${PYTHON_LIBRARY}
  DataFormatsProvenance
)

add_library(TestLoadableDummyFinder SHARED 
  stubs/LoadableDummyFinder.cc
)

target_include_directories(TestLoadableDummyFinder PUBLIC ${Boost_INCLUDE_DIR})
include_directories(TestLoadableDummyFinder PUBLIC ${Boost_INCLUDE_DIR})
target_link_libraries(TestLoadableDummyFinder PUBLIC
  ${Boost_REGEX_LIBRARY_RELEASE}
  dl
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  FWCoreFrameworkTestDummyForEventSetup
  FWCoreFramework
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  ${PYTHON_LIBRARY}
)

add_library(TestLoadableDummyESSource SHARED 
  stubs/LoadableDummyESSource.cc
)

target_include_directories(TestLoadableDummyESSource PUBLIC ${Boost_INCLUDE_DIR})
include_directories(TestLoadableDummyESSource PUBLIC ${Boost_INCLUDE_DIR})
target_link_libraries(TestLoadableDummyESSource PUBLIC
  ${Boost_REGEX_LIBRARY_RELEASE}
  dl
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  FWCoreFrameworkTestDummyForEventSetup
  FWCoreFramework
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  ${PYTHON_LIBRARY}
)

add_library(TestLoadableDummyEventSetupRecordRetriever SHARED 
  stubs/LoadableDummyEventSetupRecordRetriever.cc
)

target_include_directories(TestLoadableDummyEventSetupRecordRetriever PUBLIC ${PYTHON_INCLUDE_DIR})
include_directories(TestLoadableDummyEventSetupRecordRetriever PUBLIC ${PYTHON_INCLUDE_DIR})
target_include_directories(TestLoadableDummyEventSetupRecordRetriever PUBLIC ${Boost_INCLUDE_DIR}/python)
include_directories(TestLoadableDummyEventSetupRecordRetriever PUBLIC ${Boost_INCLUDE_DIR}/python)
target_include_directories(TestLoadableDummyEventSetupRecordRetriever PUBLIC ${Boost_INCLUDE_DIR})
include_directories(TestLoadableDummyEventSetupRecordRetriever PUBLIC ${Boost_INCLUDE_DIR})
target_include_directories(TestLoadableDummyEventSetupRecordRetriever PUBLIC ${TBB_INCLUDE_DIRS})
include_directories(TestLoadableDummyEventSetupRecordRetriever PUBLIC ${TBB_INCLUDE_DIRS})
target_include_directories(TestLoadableDummyEventSetupRecordRetriever PUBLIC ${ROOT_INCLUDE_DIR})
include_directories(TestLoadableDummyEventSetupRecordRetriever PUBLIC ${ROOT_INCLUDE_DIR})
target_link_libraries(TestLoadableDummyEventSetupRecordRetriever PUBLIC
  ${Boost_REGEX_LIBRARY_RELEASE}
  dl
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  FWCoreFramework
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  ${PYTHON_LIBRARY}
)

add_library(TestLoadableDummyProvider SHARED 
  stubs/LoadableDummyProvider.cc
)

target_include_directories(TestLoadableDummyProvider PUBLIC ${Boost_INCLUDE_DIR})
include_directories(TestLoadableDummyProvider PUBLIC ${Boost_INCLUDE_DIR})
target_link_libraries(TestLoadableDummyProvider PUBLIC
  ${Boost_REGEX_LIBRARY_RELEASE}
  dl
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  FWCoreFrameworkTestDummyForEventSetup
  FWCoreFramework
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  ${PYTHON_LIBRARY}
)

add_library(FWCoreFrameworkTestDummyLooper SHARED 
  stubs/DummyLooper.cc
  stubs/TestModuleChangeLooper.cc
)

target_include_directories(FWCoreFrameworkTestDummyLooper PUBLIC ${PYTHON_INCLUDE_DIR})
include_directories(FWCoreFrameworkTestDummyLooper PUBLIC ${PYTHON_INCLUDE_DIR})
target_include_directories(FWCoreFrameworkTestDummyLooper PUBLIC ${Boost_INCLUDE_DIR}/python)
include_directories(FWCoreFrameworkTestDummyLooper PUBLIC ${Boost_INCLUDE_DIR}/python)
target_include_directories(FWCoreFrameworkTestDummyLooper PUBLIC ${Boost_INCLUDE_DIR})
include_directories(FWCoreFrameworkTestDummyLooper PUBLIC ${Boost_INCLUDE_DIR})
target_include_directories(FWCoreFrameworkTestDummyLooper PUBLIC ${TBB_INCLUDE_DIRS})
include_directories(FWCoreFrameworkTestDummyLooper PUBLIC ${TBB_INCLUDE_DIRS})
target_include_directories(FWCoreFrameworkTestDummyLooper PUBLIC ${ROOT_INCLUDE_DIR})
include_directories(FWCoreFrameworkTestDummyLooper PUBLIC ${ROOT_INCLUDE_DIR})
target_link_libraries(FWCoreFrameworkTestDummyLooper PUBLIC
  ${Boost_REGEX_LIBRARY_RELEASE}
  dl
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  FWCoreFrameworkTestDummyForEventSetup
  FWCoreFramework
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  ${PYTHON_LIBRARY}
  DataFormatsTestObjects
)

add_library(FWCoreFrameworkTestESDummyDataAnalyzer SHARED 
  stubs/TestESDummyDataAnalyzer.cc
)

target_include_directories(FWCoreFrameworkTestESDummyDataAnalyzer PUBLIC ${PYTHON_INCLUDE_DIR})
include_directories(FWCoreFrameworkTestESDummyDataAnalyzer PUBLIC ${PYTHON_INCLUDE_DIR})
target_include_directories(FWCoreFrameworkTestESDummyDataAnalyzer PUBLIC ${MD5_INCLUDE_DIR})
include_directories(FWCoreFrameworkTestESDummyDataAnalyzer PUBLIC ${MD5_INCLUDE_DIR})
target_include_directories(FWCoreFrameworkTestESDummyDataAnalyzer PUBLIC ${Boost_INCLUDE_DIR}/python)
include_directories(FWCoreFrameworkTestESDummyDataAnalyzer PUBLIC ${Boost_INCLUDE_DIR}/python)
target_include_directories(FWCoreFrameworkTestESDummyDataAnalyzer PUBLIC ${Boost_INCLUDE_DIR})
include_directories(FWCoreFrameworkTestESDummyDataAnalyzer PUBLIC ${Boost_INCLUDE_DIR})
target_include_directories(FWCoreFrameworkTestESDummyDataAnalyzer PUBLIC ${TBB_INCLUDE_DIRS})
include_directories(FWCoreFrameworkTestESDummyDataAnalyzer PUBLIC ${TBB_INCLUDE_DIRS})
target_include_directories(FWCoreFrameworkTestESDummyDataAnalyzer PUBLIC ${ROOT_INCLUDE_DIR})
include_directories(FWCoreFrameworkTestESDummyDataAnalyzer PUBLIC ${ROOT_INCLUDE_DIR})
target_link_libraries(FWCoreFrameworkTestESDummyDataAnalyzer PUBLIC
  FWCoreParameterSet
  dl
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  FWCoreFrameworkTestDummyForEventSetup
  ${Boost_REGEX_LIBRARY_RELEASE}
  ${PYTHON_LIBRARY}
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  FWCoreUtilities
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  FWCoreFramework
  ${Boost_PYTHON_LIBRARY_RELEASE}
)

add_library(FWCoreFrameworkTestPRegisterModules SHARED 
  stubs/TestPRegisterModule2.cc
  stubs/TestPRegisterModule1.cc
  stubs/TestPRegisterModules.cc
)

target_include_directories(FWCoreFrameworkTestPRegisterModules PUBLIC ${PYTHON_INCLUDE_DIR})
include_directories(FWCoreFrameworkTestPRegisterModules PUBLIC ${PYTHON_INCLUDE_DIR})
target_include_directories(FWCoreFrameworkTestPRegisterModules PUBLIC ${CPPUNIT_INCLUDE_DIR})
include_directories(FWCoreFrameworkTestPRegisterModules PUBLIC ${CPPUNIT_INCLUDE_DIR})
target_include_directories(FWCoreFrameworkTestPRegisterModules PUBLIC ${Boost_INCLUDE_DIR}/python)
include_directories(FWCoreFrameworkTestPRegisterModules PUBLIC ${Boost_INCLUDE_DIR}/python)
target_include_directories(FWCoreFrameworkTestPRegisterModules PUBLIC ${Boost_INCLUDE_DIR})
include_directories(FWCoreFrameworkTestPRegisterModules PUBLIC ${Boost_INCLUDE_DIR})
target_include_directories(FWCoreFrameworkTestPRegisterModules PUBLIC ${TBB_INCLUDE_DIRS})
include_directories(FWCoreFrameworkTestPRegisterModules PUBLIC ${TBB_INCLUDE_DIRS})
target_include_directories(FWCoreFrameworkTestPRegisterModules PUBLIC ${ROOT_INCLUDE_DIR})
include_directories(FWCoreFrameworkTestPRegisterModules PUBLIC ${ROOT_INCLUDE_DIR})
target_link_libraries(FWCoreFrameworkTestPRegisterModules PUBLIC
  ${Boost_REGEX_LIBRARY_RELEASE}
  dl
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  DataFormatsCommon
  FWCoreFramework
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${CPPUNIT_LIBRARY}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  ${PYTHON_LIBRARY}
)

add_library(FWCoreFrameworkTestBeginEndJobAnalyzer SHARED 
  stubs/TestBeginEndJobAnalyzerModule.cc
)

target_include_directories(FWCoreFrameworkTestBeginEndJobAnalyzer PUBLIC ${Boost_INCLUDE_DIR})
include_directories(FWCoreFrameworkTestBeginEndJobAnalyzer PUBLIC ${Boost_INCLUDE_DIR})
target_link_libraries(FWCoreFrameworkTestBeginEndJobAnalyzer PUBLIC
  ${Boost_REGEX_LIBRARY_RELEASE}
  dl
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  FWCoreFramework
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  ${PYTHON_LIBRARY}
  FWCoreFrameworkTest
)

add_library(FWCoreFrameworkTestFailuresAnalyzer SHARED 
  stubs/TestFailuresAnalyzer.cc
)

target_include_directories(FWCoreFrameworkTestFailuresAnalyzer PUBLIC ${PYTHON_INCLUDE_DIR})
include_directories(FWCoreFrameworkTestFailuresAnalyzer PUBLIC ${PYTHON_INCLUDE_DIR})
target_include_directories(FWCoreFrameworkTestFailuresAnalyzer PUBLIC ${MD5_INCLUDE_DIR})
include_directories(FWCoreFrameworkTestFailuresAnalyzer PUBLIC ${MD5_INCLUDE_DIR})
target_include_directories(FWCoreFrameworkTestFailuresAnalyzer PUBLIC ${Boost_INCLUDE_DIR}/python)
include_directories(FWCoreFrameworkTestFailuresAnalyzer PUBLIC ${Boost_INCLUDE_DIR}/python)
target_include_directories(FWCoreFrameworkTestFailuresAnalyzer PUBLIC ${Boost_INCLUDE_DIR})
include_directories(FWCoreFrameworkTestFailuresAnalyzer PUBLIC ${Boost_INCLUDE_DIR})
target_include_directories(FWCoreFrameworkTestFailuresAnalyzer PUBLIC ${TBB_INCLUDE_DIRS})
include_directories(FWCoreFrameworkTestFailuresAnalyzer PUBLIC ${TBB_INCLUDE_DIRS})
target_include_directories(FWCoreFrameworkTestFailuresAnalyzer PUBLIC ${ROOT_INCLUDE_DIR})
include_directories(FWCoreFrameworkTestFailuresAnalyzer PUBLIC ${ROOT_INCLUDE_DIR})
target_link_libraries(FWCoreFrameworkTestFailuresAnalyzer PUBLIC
  FWCoreParameterSet
  dl
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  ${Boost_REGEX_LIBRARY_RELEASE}
  FWCoreFramework
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  FWCoreUtilities
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  ${PYTHON_LIBRARY}
  ${Boost_PYTHON_LIBRARY_RELEASE}
)

add_library(FWCoreFrameworkHistoryAnalyzer SHARED 
  stubs/HistoryAnalyzer.cc
)

target_include_directories(FWCoreFrameworkHistoryAnalyzer PUBLIC ${Boost_INCLUDE_DIR})
include_directories(FWCoreFrameworkHistoryAnalyzer PUBLIC ${Boost_INCLUDE_DIR})
target_link_libraries(FWCoreFrameworkHistoryAnalyzer PUBLIC
  FWCoreParameterSet
  dl
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  ${Boost_REGEX_LIBRARY_RELEASE}
  FWCoreFramework
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  ${PYTHON_LIBRARY}
  DataFormatsProvenance
)

add_executable(TestFWCoreFramework
  testRunner.cpp
  maker2_t.cppunit.cc
  maker_t.cppunit.cc
  productregistry.cppunit.cc
  edproducer_productregistry_callback.cc
  event_getrefbeforeput_t.cppunit.cc
  generichandle_t.cppunit.cc
  edconsumerbase_t.cppunit.cc
  global_module_t.cppunit.cc
  one_outputmodule_t.cppunit.cc
  global_outputmodule_t.cppunit.cc
  stream_module_t.cppunit.cc
  throwIfImproperDependencies_t.cppunit.cc
)

target_include_directories(TestFWCoreFramework PUBLIC ${PYTHON_INCLUDE_DIR})
include_directories(TestFWCoreFramework PUBLIC ${PYTHON_INCLUDE_DIR})
target_include_directories(TestFWCoreFramework PUBLIC ${CPPUNIT_INCLUDE_DIR})
include_directories(TestFWCoreFramework PUBLIC ${CPPUNIT_INCLUDE_DIR})
target_include_directories(TestFWCoreFramework PUBLIC ${MD5_INCLUDE_DIR})
include_directories(TestFWCoreFramework PUBLIC ${MD5_INCLUDE_DIR})
target_include_directories(TestFWCoreFramework PUBLIC ${Boost_INCLUDE_DIR}/python)
include_directories(TestFWCoreFramework PUBLIC ${Boost_INCLUDE_DIR}/python)
target_include_directories(TestFWCoreFramework PUBLIC ${Boost_INCLUDE_DIR})
include_directories(TestFWCoreFramework PUBLIC ${Boost_INCLUDE_DIR})
target_include_directories(TestFWCoreFramework PUBLIC ${TBB_INCLUDE_DIRS})
include_directories(TestFWCoreFramework PUBLIC ${TBB_INCLUDE_DIRS})
target_include_directories(TestFWCoreFramework PUBLIC ${ROOT_INCLUDE_DIR})
include_directories(TestFWCoreFramework PUBLIC ${ROOT_INCLUDE_DIR})
target_link_libraries(TestFWCoreFramework PUBLIC
  FWCoreParameterSet
  dl
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  ${Boost_REGEX_LIBRARY_RELEASE}
  FWCoreUtilities
  DataFormatsCommon
  FWCoreFramework
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${CPPUNIT_LIBRARY}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  DataFormatsWrappedStdDictionaries
  ${PYTHON_LIBRARY}
  DataFormatsProvenance
  DataFormatsTestObjects
  FWCoreVersion
)

add_test(NAME TestFWCoreFramework COMMAND TestFWCoreFramework)
add_executable(TestFWCoreFrameworkeventsetup
  testRunner.cpp
  callback_t.cppunit.cc
  datakey_t.cppunit.cc
  dependentrecord_t.cppunit.cc
  esproducer_t.cppunit.cc
  esproducts_t.cppunit.cc
  eventsetupplugin_t.cppunit.cc
  eventsetuprecord_t.cppunit.cc
  eventsetup_t.cppunit.cc
  fullchain_t.cppunit.cc
  interval_t.cppunit.cc
  proxyfactoryproducer_t.cppunit.cc
  iovsyncvalue_t.cppunit.cc
  intersectingiovrecordintervalfinder_t.cppunit.cc
  eventsetupscontroller_t.cppunit.cc
)

target_include_directories(TestFWCoreFrameworkeventsetup PUBLIC ${PYTHON_INCLUDE_DIR})
include_directories(TestFWCoreFrameworkeventsetup PUBLIC ${PYTHON_INCLUDE_DIR})
target_include_directories(TestFWCoreFrameworkeventsetup PUBLIC ${Boost_INCLUDE_DIR}/python)
include_directories(TestFWCoreFrameworkeventsetup PUBLIC ${Boost_INCLUDE_DIR}/python)
target_include_directories(TestFWCoreFrameworkeventsetup PUBLIC ${Boost_INCLUDE_DIR})
include_directories(TestFWCoreFrameworkeventsetup PUBLIC ${Boost_INCLUDE_DIR})
target_include_directories(TestFWCoreFrameworkeventsetup PUBLIC ${MD5_INCLUDE_DIR})
include_directories(TestFWCoreFrameworkeventsetup PUBLIC ${MD5_INCLUDE_DIR})
target_include_directories(TestFWCoreFrameworkeventsetup PUBLIC ${CPPUNIT_INCLUDE_DIR})
include_directories(TestFWCoreFrameworkeventsetup PUBLIC ${CPPUNIT_INCLUDE_DIR})
target_include_directories(TestFWCoreFrameworkeventsetup PUBLIC ${TBB_INCLUDE_DIRS})
include_directories(TestFWCoreFrameworkeventsetup PUBLIC ${TBB_INCLUDE_DIRS})
target_include_directories(TestFWCoreFrameworkeventsetup PUBLIC ${ROOT_INCLUDE_DIR})
include_directories(TestFWCoreFrameworkeventsetup PUBLIC ${ROOT_INCLUDE_DIR})
target_link_libraries(TestFWCoreFrameworkeventsetup PUBLIC
  FWCoreParameterSet
  dl
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  FWCoreFrameworkTestDummyForEventSetup
  ${Boost_REGEX_LIBRARY_RELEASE}
  FWCoreUtilities
  FWCoreFramework
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${CPPUNIT_LIBRARY}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  ${PYTHON_LIBRARY}
  FWCoreVersion
)

add_test(NAME TestFWCoreFrameworkeventsetup COMMAND TestFWCoreFrameworkeventsetup)
add_executable(TestFWCoreFrameworkeventprocessor
  testRunner.cpp
  eventprocessor2_t.cppunit.cc
  eventprocessor_t.cppunit.cc
)

target_include_directories(TestFWCoreFrameworkeventprocessor PUBLIC ${PYTHON_INCLUDE_DIR})
include_directories(TestFWCoreFrameworkeventprocessor PUBLIC ${PYTHON_INCLUDE_DIR})
target_include_directories(TestFWCoreFrameworkeventprocessor PUBLIC ${Boost_INCLUDE_DIR}/python)
include_directories(TestFWCoreFrameworkeventprocessor PUBLIC ${Boost_INCLUDE_DIR}/python)
target_include_directories(TestFWCoreFrameworkeventprocessor PUBLIC ${Boost_INCLUDE_DIR})
include_directories(TestFWCoreFrameworkeventprocessor PUBLIC ${Boost_INCLUDE_DIR})
target_include_directories(TestFWCoreFrameworkeventprocessor PUBLIC ${MD5_INCLUDE_DIR})
include_directories(TestFWCoreFrameworkeventprocessor PUBLIC ${MD5_INCLUDE_DIR})
target_include_directories(TestFWCoreFrameworkeventprocessor PUBLIC ${CPPUNIT_INCLUDE_DIR})
include_directories(TestFWCoreFrameworkeventprocessor PUBLIC ${CPPUNIT_INCLUDE_DIR})
target_include_directories(TestFWCoreFrameworkeventprocessor PUBLIC ${TBB_INCLUDE_DIRS})
include_directories(TestFWCoreFrameworkeventprocessor PUBLIC ${TBB_INCLUDE_DIRS})
target_include_directories(TestFWCoreFrameworkeventprocessor PUBLIC ${ROOT_INCLUDE_DIR})
include_directories(TestFWCoreFrameworkeventprocessor PUBLIC ${ROOT_INCLUDE_DIR})
target_link_libraries(TestFWCoreFrameworkeventprocessor PUBLIC
  ${Boost_REGEX_LIBRARY_RELEASE}
  dl
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  FWCoreFrameworkTest
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  FWCoreUtilities
  FWCoreFramework
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${CPPUNIT_LIBRARY}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  FWCoreServiceRegistry
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  ${PYTHON_LIBRARY}
  DataFormatsWrappedStdDictionaries
  DataFormatsProvenance
)

add_test(NAME TestFWCoreFrameworkeventprocessor COMMAND TestFWCoreFrameworkeventprocessor)
add_executable(TestFWCoreFrameworkeventprincipal
  testRunner.cpp
  eventprincipal_t.cppunit.cc
  sharedresourcesregistry_t.cppunit.cc
)

target_include_directories(TestFWCoreFrameworkeventprincipal PUBLIC ${PYTHON_INCLUDE_DIR})
include_directories(TestFWCoreFrameworkeventprincipal PUBLIC ${PYTHON_INCLUDE_DIR})
target_include_directories(TestFWCoreFrameworkeventprincipal PUBLIC ${CPPUNIT_INCLUDE_DIR})
include_directories(TestFWCoreFrameworkeventprincipal PUBLIC ${CPPUNIT_INCLUDE_DIR})
target_include_directories(TestFWCoreFrameworkeventprincipal PUBLIC ${MD5_INCLUDE_DIR})
include_directories(TestFWCoreFrameworkeventprincipal PUBLIC ${MD5_INCLUDE_DIR})
target_include_directories(TestFWCoreFrameworkeventprincipal PUBLIC ${Boost_INCLUDE_DIR}/python)
include_directories(TestFWCoreFrameworkeventprincipal PUBLIC ${Boost_INCLUDE_DIR}/python)
target_include_directories(TestFWCoreFrameworkeventprincipal PUBLIC ${Boost_INCLUDE_DIR})
include_directories(TestFWCoreFrameworkeventprincipal PUBLIC ${Boost_INCLUDE_DIR})
target_include_directories(TestFWCoreFrameworkeventprincipal PUBLIC ${TBB_INCLUDE_DIRS})
include_directories(TestFWCoreFrameworkeventprincipal PUBLIC ${TBB_INCLUDE_DIRS})
target_include_directories(TestFWCoreFrameworkeventprincipal PUBLIC ${ROOT_INCLUDE_DIR})
include_directories(TestFWCoreFrameworkeventprincipal PUBLIC ${ROOT_INCLUDE_DIR})
target_link_libraries(TestFWCoreFrameworkeventprincipal PUBLIC
  FWCoreParameterSet
  dl
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  ${Boost_REGEX_LIBRARY_RELEASE}
  FWCoreUtilities
  DataFormatsCommon
  FWCoreFramework
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${CPPUNIT_LIBRARY}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  ${PYTHON_LIBRARY}
  DataFormatsProvenance
  DataFormatsTestObjects
  FWCoreVersion
)

add_test(NAME TestFWCoreFrameworkeventprincipal COMMAND TestFWCoreFrameworkeventprincipal)
add_executable(TestFWCoreFrameworkEvent
  Event_t.cpp
)

target_include_directories(TestFWCoreFrameworkEvent PUBLIC ${PYTHON_INCLUDE_DIR})
include_directories(TestFWCoreFrameworkEvent PUBLIC ${PYTHON_INCLUDE_DIR})
target_include_directories(TestFWCoreFrameworkEvent PUBLIC ${CPPUNIT_INCLUDE_DIR})
include_directories(TestFWCoreFrameworkEvent PUBLIC ${CPPUNIT_INCLUDE_DIR})
target_include_directories(TestFWCoreFrameworkEvent PUBLIC ${MD5_INCLUDE_DIR})
include_directories(TestFWCoreFrameworkEvent PUBLIC ${MD5_INCLUDE_DIR})
target_include_directories(TestFWCoreFrameworkEvent PUBLIC ${Boost_INCLUDE_DIR}/python)
include_directories(TestFWCoreFrameworkEvent PUBLIC ${Boost_INCLUDE_DIR}/python)
target_include_directories(TestFWCoreFrameworkEvent PUBLIC ${Boost_INCLUDE_DIR})
include_directories(TestFWCoreFrameworkEvent PUBLIC ${Boost_INCLUDE_DIR})
target_include_directories(TestFWCoreFrameworkEvent PUBLIC ${TBB_INCLUDE_DIRS})
include_directories(TestFWCoreFrameworkEvent PUBLIC ${TBB_INCLUDE_DIRS})
target_include_directories(TestFWCoreFrameworkEvent PUBLIC ${ROOT_INCLUDE_DIR})
include_directories(TestFWCoreFrameworkEvent PUBLIC ${ROOT_INCLUDE_DIR})
target_link_libraries(TestFWCoreFrameworkEvent PUBLIC
  FWCoreParameterSet
  dl
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  ${Boost_REGEX_LIBRARY_RELEASE}
  FWCoreUtilities
  DataFormatsCommon
  FWCoreFramework
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${CPPUNIT_LIBRARY}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  DataFormatsWrappedStdDictionaries
  ${PYTHON_LIBRARY}
  DataFormatsProvenance
  DataFormatsTestObjects
  FWCoreVersion
)

add_test(NAME TestFWCoreFrameworkEvent COMMAND TestFWCoreFrameworkEvent)
add_executable(TestFWCoreFrameworkView
  View_t.cpp
)

target_include_directories(TestFWCoreFrameworkView PUBLIC ${CPPUNIT_INCLUDE_DIR})
include_directories(TestFWCoreFrameworkView PUBLIC ${CPPUNIT_INCLUDE_DIR})
target_include_directories(TestFWCoreFrameworkView PUBLIC ${Boost_INCLUDE_DIR})
include_directories(TestFWCoreFrameworkView PUBLIC ${Boost_INCLUDE_DIR})
target_link_libraries(TestFWCoreFrameworkView PUBLIC
  ${Boost_REGEX_LIBRARY_RELEASE}
  dl
  ${CPPUNIT_LIBRARY}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  DataFormatsCommon
  FWCoreFramework
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  ${PYTHON_LIBRARY}
)

add_test(NAME TestFWCoreFrameworkView COMMAND TestFWCoreFrameworkView)
add_executable(TestFWCoreFrameworkCmsRun
  TestDriver.cpp
)

target_include_directories(TestFWCoreFrameworkCmsRun PUBLIC ${Boost_INCLUDE_DIR})
include_directories(TestFWCoreFrameworkCmsRun PUBLIC ${Boost_INCLUDE_DIR})
target_link_libraries(TestFWCoreFrameworkCmsRun PUBLIC
  ${Boost_REGEX_LIBRARY_RELEASE}
  dl
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  FWCoreFramework
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  FWCoreUtilities
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  ${PYTHON_LIBRARY}
  ${Boost_PYTHON_LIBRARY_RELEASE}
)

add_test(NAME TestFWCoreFrameworkCmsRun COMMAND TestFWCoreFrameworkCmsRun)
add_executable(TestFWCoreFrameworkESRefer
  TestDriver.cpp
)

target_include_directories(TestFWCoreFrameworkESRefer PUBLIC ${PYTHON_INCLUDE_DIR})
include_directories(TestFWCoreFrameworkESRefer PUBLIC ${PYTHON_INCLUDE_DIR})
target_include_directories(TestFWCoreFrameworkESRefer PUBLIC ${Boost_INCLUDE_DIR}/python)
include_directories(TestFWCoreFrameworkESRefer PUBLIC ${Boost_INCLUDE_DIR}/python)
target_include_directories(TestFWCoreFrameworkESRefer PUBLIC ${Boost_INCLUDE_DIR})
include_directories(TestFWCoreFrameworkESRefer PUBLIC ${Boost_INCLUDE_DIR})
target_include_directories(TestFWCoreFrameworkESRefer PUBLIC ${MD5_INCLUDE_DIR})
include_directories(TestFWCoreFrameworkESRefer PUBLIC ${MD5_INCLUDE_DIR})
target_include_directories(TestFWCoreFrameworkESRefer PUBLIC ${TBB_INCLUDE_DIRS})
include_directories(TestFWCoreFrameworkESRefer PUBLIC ${TBB_INCLUDE_DIRS})
target_include_directories(TestFWCoreFrameworkESRefer PUBLIC ${ROOT_INCLUDE_DIR})
include_directories(TestFWCoreFrameworkESRefer PUBLIC ${ROOT_INCLUDE_DIR})
target_link_libraries(TestFWCoreFrameworkESRefer PUBLIC
  ${Boost_REGEX_LIBRARY_RELEASE}
  dl
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  FWCoreFramework
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  FWCoreUtilities
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  ${PYTHON_LIBRARY}
  ${Boost_PYTHON_LIBRARY_RELEASE}
)

add_test(NAME TestFWCoreFrameworkESRefer COMMAND TestFWCoreFrameworkESRefer)
add_executable(TestFWCoreFrameworkUnscheduled
  TestDriver.cpp
)

target_include_directories(TestFWCoreFrameworkUnscheduled PUBLIC ${Boost_INCLUDE_DIR})
include_directories(TestFWCoreFrameworkUnscheduled PUBLIC ${Boost_INCLUDE_DIR})
target_link_libraries(TestFWCoreFrameworkUnscheduled PUBLIC
  ${Boost_REGEX_LIBRARY_RELEASE}
  dl
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  FWCoreFramework
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  FWCoreUtilities
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  ${PYTHON_LIBRARY}
  ${Boost_PYTHON_LIBRARY_RELEASE}
)

add_test(NAME TestFWCoreFrameworkUnscheduled COMMAND TestFWCoreFrameworkUnscheduled)
add_executable(TestFWCoreFrameworkGlobalStreamOne
  TestDriver.cpp
)

target_include_directories(TestFWCoreFrameworkGlobalStreamOne PUBLIC ${PYTHON_INCLUDE_DIR})
include_directories(TestFWCoreFrameworkGlobalStreamOne PUBLIC ${PYTHON_INCLUDE_DIR})
target_include_directories(TestFWCoreFrameworkGlobalStreamOne PUBLIC ${Boost_INCLUDE_DIR}/python)
include_directories(TestFWCoreFrameworkGlobalStreamOne PUBLIC ${Boost_INCLUDE_DIR}/python)
target_include_directories(TestFWCoreFrameworkGlobalStreamOne PUBLIC ${Boost_INCLUDE_DIR})
include_directories(TestFWCoreFrameworkGlobalStreamOne PUBLIC ${Boost_INCLUDE_DIR})
target_include_directories(TestFWCoreFrameworkGlobalStreamOne PUBLIC ${MD5_INCLUDE_DIR})
include_directories(TestFWCoreFrameworkGlobalStreamOne PUBLIC ${MD5_INCLUDE_DIR})
target_include_directories(TestFWCoreFrameworkGlobalStreamOne PUBLIC ${TBB_INCLUDE_DIRS})
include_directories(TestFWCoreFrameworkGlobalStreamOne PUBLIC ${TBB_INCLUDE_DIRS})
target_include_directories(TestFWCoreFrameworkGlobalStreamOne PUBLIC ${ROOT_INCLUDE_DIR})
include_directories(TestFWCoreFrameworkGlobalStreamOne PUBLIC ${ROOT_INCLUDE_DIR})
target_link_libraries(TestFWCoreFrameworkGlobalStreamOne PUBLIC
  ${Boost_REGEX_LIBRARY_RELEASE}
  dl
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  FWCoreFramework
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  FWCoreUtilities
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  ${PYTHON_LIBRARY}
  DataFormatsWrappedStdDictionaries
)

add_test(NAME TestFWCoreFrameworkGlobalStreamOne COMMAND TestFWCoreFrameworkGlobalStreamOne)
add_executable(TestFWCoreFrameworkMayConsumesDeadlock
  TestDriver.cpp
)

target_include_directories(TestFWCoreFrameworkMayConsumesDeadlock PUBLIC ${PYTHON_INCLUDE_DIR})
include_directories(TestFWCoreFrameworkMayConsumesDeadlock PUBLIC ${PYTHON_INCLUDE_DIR})
target_include_directories(TestFWCoreFrameworkMayConsumesDeadlock PUBLIC ${Boost_INCLUDE_DIR}/python)
include_directories(TestFWCoreFrameworkMayConsumesDeadlock PUBLIC ${Boost_INCLUDE_DIR}/python)
target_include_directories(TestFWCoreFrameworkMayConsumesDeadlock PUBLIC ${Boost_INCLUDE_DIR})
include_directories(TestFWCoreFrameworkMayConsumesDeadlock PUBLIC ${Boost_INCLUDE_DIR})
target_include_directories(TestFWCoreFrameworkMayConsumesDeadlock PUBLIC ${MD5_INCLUDE_DIR})
include_directories(TestFWCoreFrameworkMayConsumesDeadlock PUBLIC ${MD5_INCLUDE_DIR})
target_include_directories(TestFWCoreFrameworkMayConsumesDeadlock PUBLIC ${TBB_INCLUDE_DIRS})
include_directories(TestFWCoreFrameworkMayConsumesDeadlock PUBLIC ${TBB_INCLUDE_DIRS})
target_include_directories(TestFWCoreFrameworkMayConsumesDeadlock PUBLIC ${ROOT_INCLUDE_DIR})
include_directories(TestFWCoreFrameworkMayConsumesDeadlock PUBLIC ${ROOT_INCLUDE_DIR})
target_link_libraries(TestFWCoreFrameworkMayConsumesDeadlock PUBLIC
  ${Boost_REGEX_LIBRARY_RELEASE}
  dl
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  FWCoreFramework
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  FWCoreUtilities
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  ${PYTHON_LIBRARY}
  DataFormatsWrappedStdDictionaries
)

add_test(NAME TestFWCoreFrameworkMayConsumesDeadlock COMMAND TestFWCoreFrameworkMayConsumesDeadlock)
add_executable(TestFWCoreFrameworkReplace
  TestDriver.cpp
)

target_include_directories(TestFWCoreFrameworkReplace PUBLIC ${Boost_INCLUDE_DIR})
include_directories(TestFWCoreFrameworkReplace PUBLIC ${Boost_INCLUDE_DIR})
target_link_libraries(TestFWCoreFrameworkReplace PUBLIC
  ${Boost_REGEX_LIBRARY_RELEASE}
  dl
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  FWCoreFramework
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  FWCoreUtilities
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  ${PYTHON_LIBRARY}
  ${Boost_PYTHON_LIBRARY_RELEASE}
)

add_test(NAME TestFWCoreFrameworkReplace COMMAND TestFWCoreFrameworkReplace)
add_executable(TestFWCoreFrameworkESProducerLooper
  TestDriver.cpp
)

target_include_directories(TestFWCoreFrameworkESProducerLooper PUBLIC ${PYTHON_INCLUDE_DIR})
include_directories(TestFWCoreFrameworkESProducerLooper PUBLIC ${PYTHON_INCLUDE_DIR})
target_include_directories(TestFWCoreFrameworkESProducerLooper PUBLIC ${Boost_INCLUDE_DIR}/python)
include_directories(TestFWCoreFrameworkESProducerLooper PUBLIC ${Boost_INCLUDE_DIR}/python)
target_include_directories(TestFWCoreFrameworkESProducerLooper PUBLIC ${Boost_INCLUDE_DIR})
include_directories(TestFWCoreFrameworkESProducerLooper PUBLIC ${Boost_INCLUDE_DIR})
target_include_directories(TestFWCoreFrameworkESProducerLooper PUBLIC ${MD5_INCLUDE_DIR})
include_directories(TestFWCoreFrameworkESProducerLooper PUBLIC ${MD5_INCLUDE_DIR})
target_include_directories(TestFWCoreFrameworkESProducerLooper PUBLIC ${TBB_INCLUDE_DIRS})
include_directories(TestFWCoreFrameworkESProducerLooper PUBLIC ${TBB_INCLUDE_DIRS})
target_include_directories(TestFWCoreFrameworkESProducerLooper PUBLIC ${ROOT_INCLUDE_DIR})
include_directories(TestFWCoreFrameworkESProducerLooper PUBLIC ${ROOT_INCLUDE_DIR})
target_link_libraries(TestFWCoreFrameworkESProducerLooper PUBLIC
  ${Boost_REGEX_LIBRARY_RELEASE}
  dl
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  FWCoreFramework
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  FWCoreUtilities
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  ${PYTHON_LIBRARY}
  ${Boost_PYTHON_LIBRARY_RELEASE}
)

add_test(NAME TestFWCoreFrameworkESProducerLooper COMMAND TestFWCoreFrameworkESProducerLooper)
add_executable(TestFWCoreFrameworkTrigBit
  TestDriver.cpp
)

target_include_directories(TestFWCoreFrameworkTrigBit PUBLIC ${Boost_INCLUDE_DIR})
include_directories(TestFWCoreFrameworkTrigBit PUBLIC ${Boost_INCLUDE_DIR})
target_link_libraries(TestFWCoreFrameworkTrigBit PUBLIC
  ${Boost_REGEX_LIBRARY_RELEASE}
  dl
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  FWCoreFramework
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  FWCoreUtilities
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  ${PYTHON_LIBRARY}
  ${Boost_PYTHON_LIBRARY_RELEASE}
)

add_test(NAME TestFWCoreFrameworkTrigBit COMMAND TestFWCoreFrameworkTrigBit)
add_executable(TestFWCoreFrameworkTrigMask
  TestDriver.cpp
)

target_include_directories(TestFWCoreFrameworkTrigMask PUBLIC ${PYTHON_INCLUDE_DIR})
include_directories(TestFWCoreFrameworkTrigMask PUBLIC ${PYTHON_INCLUDE_DIR})
target_include_directories(TestFWCoreFrameworkTrigMask PUBLIC ${Boost_INCLUDE_DIR}/python)
include_directories(TestFWCoreFrameworkTrigMask PUBLIC ${Boost_INCLUDE_DIR}/python)
target_include_directories(TestFWCoreFrameworkTrigMask PUBLIC ${Boost_INCLUDE_DIR})
include_directories(TestFWCoreFrameworkTrigMask PUBLIC ${Boost_INCLUDE_DIR})
target_include_directories(TestFWCoreFrameworkTrigMask PUBLIC ${MD5_INCLUDE_DIR})
include_directories(TestFWCoreFrameworkTrigMask PUBLIC ${MD5_INCLUDE_DIR})
target_include_directories(TestFWCoreFrameworkTrigMask PUBLIC ${TBB_INCLUDE_DIRS})
include_directories(TestFWCoreFrameworkTrigMask PUBLIC ${TBB_INCLUDE_DIRS})
target_include_directories(TestFWCoreFrameworkTrigMask PUBLIC ${ROOT_INCLUDE_DIR})
include_directories(TestFWCoreFrameworkTrigMask PUBLIC ${ROOT_INCLUDE_DIR})
target_link_libraries(TestFWCoreFrameworkTrigMask PUBLIC
  ${Boost_REGEX_LIBRARY_RELEASE}
  dl
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  FWCoreFramework
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  FWCoreUtilities
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  ${PYTHON_LIBRARY}
  ${Boost_PYTHON_LIBRARY_RELEASE}
)

add_test(NAME TestFWCoreFrameworkTrigMask COMMAND TestFWCoreFrameworkTrigMask)
add_executable(TestXMLSafeException
  TestDriver.cpp
)

target_include_directories(TestXMLSafeException PUBLIC ${Boost_INCLUDE_DIR})
include_directories(TestXMLSafeException PUBLIC ${Boost_INCLUDE_DIR})
target_link_libraries(TestXMLSafeException PUBLIC
  ${Boost_REGEX_LIBRARY_RELEASE}
  dl
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  FWCoreFramework
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  FWCoreUtilities
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  ${PYTHON_LIBRARY}
  ${Boost_PYTHON_LIBRARY_RELEASE}
)

add_test(NAME TestXMLSafeException COMMAND TestXMLSafeException)
add_executable(TestFWCoreFrameworkProductSelector
  ProductSelector_t.cpp
)

target_include_directories(TestFWCoreFrameworkProductSelector PUBLIC ${PYTHON_INCLUDE_DIR})
include_directories(TestFWCoreFrameworkProductSelector PUBLIC ${PYTHON_INCLUDE_DIR})
target_include_directories(TestFWCoreFrameworkProductSelector PUBLIC ${MD5_INCLUDE_DIR})
include_directories(TestFWCoreFrameworkProductSelector PUBLIC ${MD5_INCLUDE_DIR})
target_include_directories(TestFWCoreFrameworkProductSelector PUBLIC ${Boost_INCLUDE_DIR}/python)
include_directories(TestFWCoreFrameworkProductSelector PUBLIC ${Boost_INCLUDE_DIR}/python)
target_include_directories(TestFWCoreFrameworkProductSelector PUBLIC ${Boost_INCLUDE_DIR})
include_directories(TestFWCoreFrameworkProductSelector PUBLIC ${Boost_INCLUDE_DIR})
target_include_directories(TestFWCoreFrameworkProductSelector PUBLIC ${TBB_INCLUDE_DIRS})
include_directories(TestFWCoreFrameworkProductSelector PUBLIC ${TBB_INCLUDE_DIRS})
target_include_directories(TestFWCoreFrameworkProductSelector PUBLIC ${ROOT_INCLUDE_DIR})
include_directories(TestFWCoreFrameworkProductSelector PUBLIC ${ROOT_INCLUDE_DIR})
target_link_libraries(TestFWCoreFrameworkProductSelector PUBLIC
  FWCoreParameterSet
  dl
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  ${Boost_REGEX_LIBRARY_RELEASE}
  FWCoreUtilities
  FWCoreFramework
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  ${PYTHON_LIBRARY}
  DataFormatsProvenance
)

add_test(NAME TestFWCoreFrameworkProductSelector COMMAND TestFWCoreFrameworkProductSelector)
add_executable(TestFWCoreFrameworkEventSelector
  EventSelector_t.cpp
)

target_include_directories(TestFWCoreFrameworkEventSelector PUBLIC ${PYTHON_INCLUDE_DIR})
include_directories(TestFWCoreFrameworkEventSelector PUBLIC ${PYTHON_INCLUDE_DIR})
target_include_directories(TestFWCoreFrameworkEventSelector PUBLIC ${Boost_INCLUDE_DIR}/python)
include_directories(TestFWCoreFrameworkEventSelector PUBLIC ${Boost_INCLUDE_DIR}/python)
target_include_directories(TestFWCoreFrameworkEventSelector PUBLIC ${Boost_INCLUDE_DIR})
include_directories(TestFWCoreFrameworkEventSelector PUBLIC ${Boost_INCLUDE_DIR})
target_include_directories(TestFWCoreFrameworkEventSelector PUBLIC ${MD5_INCLUDE_DIR})
include_directories(TestFWCoreFrameworkEventSelector PUBLIC ${MD5_INCLUDE_DIR})
target_include_directories(TestFWCoreFrameworkEventSelector PUBLIC ${TBB_INCLUDE_DIRS})
include_directories(TestFWCoreFrameworkEventSelector PUBLIC ${TBB_INCLUDE_DIRS})
target_include_directories(TestFWCoreFrameworkEventSelector PUBLIC ${ROOT_INCLUDE_DIR})
include_directories(TestFWCoreFrameworkEventSelector PUBLIC ${ROOT_INCLUDE_DIR})
target_link_libraries(TestFWCoreFrameworkEventSelector PUBLIC
  FWCoreParameterSet
  dl
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  ${Boost_REGEX_LIBRARY_RELEASE}
  FWCoreUtilities
  DataFormatsCommon
  FWCoreFramework
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  FWCoreServiceRegistry
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  ${PYTHON_LIBRARY}
)

add_test(NAME TestFWCoreFrameworkEventSelector COMMAND TestFWCoreFrameworkEventSelector)
add_executable(TestFWCoreFrameworkEventSelWildcard
  EventSelWildcard_t.cpp
)

target_include_directories(TestFWCoreFrameworkEventSelWildcard PUBLIC ${PYTHON_INCLUDE_DIR})
include_directories(TestFWCoreFrameworkEventSelWildcard PUBLIC ${PYTHON_INCLUDE_DIR})
target_include_directories(TestFWCoreFrameworkEventSelWildcard PUBLIC ${Boost_INCLUDE_DIR}/python)
include_directories(TestFWCoreFrameworkEventSelWildcard PUBLIC ${Boost_INCLUDE_DIR}/python)
target_include_directories(TestFWCoreFrameworkEventSelWildcard PUBLIC ${Boost_INCLUDE_DIR})
include_directories(TestFWCoreFrameworkEventSelWildcard PUBLIC ${Boost_INCLUDE_DIR})
target_include_directories(TestFWCoreFrameworkEventSelWildcard PUBLIC ${MD5_INCLUDE_DIR})
include_directories(TestFWCoreFrameworkEventSelWildcard PUBLIC ${MD5_INCLUDE_DIR})
target_include_directories(TestFWCoreFrameworkEventSelWildcard PUBLIC ${TBB_INCLUDE_DIRS})
include_directories(TestFWCoreFrameworkEventSelWildcard PUBLIC ${TBB_INCLUDE_DIRS})
target_include_directories(TestFWCoreFrameworkEventSelWildcard PUBLIC ${ROOT_INCLUDE_DIR})
include_directories(TestFWCoreFrameworkEventSelWildcard PUBLIC ${ROOT_INCLUDE_DIR})
target_link_libraries(TestFWCoreFrameworkEventSelWildcard PUBLIC
  FWCoreParameterSet
  dl
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  ${Boost_REGEX_LIBRARY_RELEASE}
  FWCoreUtilities
  DataFormatsCommon
  FWCoreFramework
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  FWCoreServiceRegistry
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  ${PYTHON_LIBRARY}
)

add_test(NAME TestFWCoreFrameworkEventSelWildcard COMMAND TestFWCoreFrameworkEventSelWildcard)
add_executable(TestFWCoreFrameworkEventSelExc
  EventSelExc_t.cpp
)

target_include_directories(TestFWCoreFrameworkEventSelExc PUBLIC ${Boost_INCLUDE_DIR})
include_directories(TestFWCoreFrameworkEventSelExc PUBLIC ${Boost_INCLUDE_DIR})
target_include_directories(TestFWCoreFrameworkEventSelExc PUBLIC ${ROOT_INCLUDE_DIR})
include_directories(TestFWCoreFrameworkEventSelExc PUBLIC ${ROOT_INCLUDE_DIR})
target_link_libraries(TestFWCoreFrameworkEventSelExc PUBLIC
  FWCoreParameterSet
  dl
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  ${Boost_REGEX_LIBRARY_RELEASE}
  FWCoreUtilities
  DataFormatsCommon
  FWCoreFramework
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  FWCoreServiceRegistry
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  ${PYTHON_LIBRARY}
)

add_test(NAME TestFWCoreFrameworkEventSelExc COMMAND TestFWCoreFrameworkEventSelExc)
add_executable(TestFWCoreFrameworkEventSelOverlap
  EventSelOverlap_t.cpp
)

target_include_directories(TestFWCoreFrameworkEventSelOverlap PUBLIC ${PYTHON_INCLUDE_DIR})
include_directories(TestFWCoreFrameworkEventSelOverlap PUBLIC ${PYTHON_INCLUDE_DIR})
target_include_directories(TestFWCoreFrameworkEventSelOverlap PUBLIC ${Boost_INCLUDE_DIR}/python)
include_directories(TestFWCoreFrameworkEventSelOverlap PUBLIC ${Boost_INCLUDE_DIR}/python)
target_include_directories(TestFWCoreFrameworkEventSelOverlap PUBLIC ${Boost_INCLUDE_DIR})
include_directories(TestFWCoreFrameworkEventSelOverlap PUBLIC ${Boost_INCLUDE_DIR})
target_include_directories(TestFWCoreFrameworkEventSelOverlap PUBLIC ${MD5_INCLUDE_DIR})
include_directories(TestFWCoreFrameworkEventSelOverlap PUBLIC ${MD5_INCLUDE_DIR})
target_include_directories(TestFWCoreFrameworkEventSelOverlap PUBLIC ${TBB_INCLUDE_DIRS})
include_directories(TestFWCoreFrameworkEventSelOverlap PUBLIC ${TBB_INCLUDE_DIRS})
target_include_directories(TestFWCoreFrameworkEventSelOverlap PUBLIC ${ROOT_INCLUDE_DIR})
include_directories(TestFWCoreFrameworkEventSelOverlap PUBLIC ${ROOT_INCLUDE_DIR})
target_link_libraries(TestFWCoreFrameworkEventSelOverlap PUBLIC
  FWCoreParameterSet
  dl
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  ${Boost_REGEX_LIBRARY_RELEASE}
  FWCoreUtilities
  DataFormatsCommon
  FWCoreFramework
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  FWCoreServiceRegistry
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  ${PYTHON_LIBRARY}
)

add_test(NAME TestFWCoreFrameworkEventSelOverlap COMMAND TestFWCoreFrameworkEventSelOverlap)
add_executable(TestFWCoreFrameworkRegistryTemplate
  RegistryTemplate_t.cpp
)

target_include_directories(TestFWCoreFrameworkRegistryTemplate PUBLIC ${Boost_INCLUDE_DIR})
include_directories(TestFWCoreFrameworkRegistryTemplate PUBLIC ${Boost_INCLUDE_DIR})
target_link_libraries(TestFWCoreFrameworkRegistryTemplate PUBLIC
  FWCoreParameterSet
  dl
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  ${Boost_REGEX_LIBRARY_RELEASE}
  FWCoreUtilities
  FWCoreFramework
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  ${PYTHON_LIBRARY}
  DataFormatsProvenance
)

add_test(NAME TestFWCoreFrameworkRegistryTemplate COMMAND TestFWCoreFrameworkRegistryTemplate)
add_executable(TestFWCoreOutputModuleUtilities
  OutputModuleUtilities_t.cpp
)

target_include_directories(TestFWCoreOutputModuleUtilities PUBLIC ${PYTHON_INCLUDE_DIR})
include_directories(TestFWCoreOutputModuleUtilities PUBLIC ${PYTHON_INCLUDE_DIR})
target_include_directories(TestFWCoreOutputModuleUtilities PUBLIC ${Boost_INCLUDE_DIR}/python)
include_directories(TestFWCoreOutputModuleUtilities PUBLIC ${Boost_INCLUDE_DIR}/python)
target_include_directories(TestFWCoreOutputModuleUtilities PUBLIC ${Boost_INCLUDE_DIR})
include_directories(TestFWCoreOutputModuleUtilities PUBLIC ${Boost_INCLUDE_DIR})
target_include_directories(TestFWCoreOutputModuleUtilities PUBLIC ${TBB_INCLUDE_DIRS})
include_directories(TestFWCoreOutputModuleUtilities PUBLIC ${TBB_INCLUDE_DIRS})
target_include_directories(TestFWCoreOutputModuleUtilities PUBLIC ${ROOT_INCLUDE_DIR})
include_directories(TestFWCoreOutputModuleUtilities PUBLIC ${ROOT_INCLUDE_DIR})
target_link_libraries(TestFWCoreOutputModuleUtilities PUBLIC
  ${Boost_REGEX_LIBRARY_RELEASE}
  dl
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  FWCoreFramework
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  ${PYTHON_LIBRARY}
)

add_test(NAME TestFWCoreOutputModuleUtilities COMMAND TestFWCoreOutputModuleUtilities)
add_executable(TestFWCoreFrameworkStatemachine
  statemachine_t.cc
)

target_include_directories(TestFWCoreFrameworkStatemachine PUBLIC ${PYTHON_INCLUDE_DIR})
include_directories(TestFWCoreFrameworkStatemachine PUBLIC ${PYTHON_INCLUDE_DIR})
target_include_directories(TestFWCoreFrameworkStatemachine PUBLIC ${Boost_INCLUDE_DIR}/python)
include_directories(TestFWCoreFrameworkStatemachine PUBLIC ${Boost_INCLUDE_DIR}/python)
target_include_directories(TestFWCoreFrameworkStatemachine PUBLIC ${Boost_INCLUDE_DIR})
include_directories(TestFWCoreFrameworkStatemachine PUBLIC ${Boost_INCLUDE_DIR})
target_include_directories(TestFWCoreFrameworkStatemachine PUBLIC ${TBB_INCLUDE_DIRS})
include_directories(TestFWCoreFrameworkStatemachine PUBLIC ${TBB_INCLUDE_DIRS})
target_include_directories(TestFWCoreFrameworkStatemachine PUBLIC ${ROOT_INCLUDE_DIR})
include_directories(TestFWCoreFrameworkStatemachine PUBLIC ${ROOT_INCLUDE_DIR})
target_link_libraries(TestFWCoreFrameworkStatemachine PUBLIC
  ${Boost_REGEX_LIBRARY_RELEASE}
  dl
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  FWCoreFrameworkTest
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  FWCoreFramework
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  ${PYTHON_LIBRARY}
)

add_test(NAME TestFWCoreFrameworkStatemachine COMMAND TestFWCoreFrameworkStatemachine)
add_executable(TestFWCoreFrameworkStatemachineSH
  TestDriver.cpp
)

target_include_directories(TestFWCoreFrameworkStatemachineSH PUBLIC ${Boost_INCLUDE_DIR})
include_directories(TestFWCoreFrameworkStatemachineSH PUBLIC ${Boost_INCLUDE_DIR})
target_link_libraries(TestFWCoreFrameworkStatemachineSH PUBLIC
  ${Boost_REGEX_LIBRARY_RELEASE}
  dl
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  FWCoreFramework
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  FWCoreUtilities
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  ${PYTHON_LIBRARY}
  ${Boost_PYTHON_LIBRARY_RELEASE}
)

add_test(NAME TestFWCoreFrameworkStatemachineSH COMMAND TestFWCoreFrameworkStatemachineSH)
add_executable(TestFWCoreFrameworkInputTagFailure
  TestDriver.cpp
)

target_include_directories(TestFWCoreFrameworkInputTagFailure PUBLIC ${PYTHON_INCLUDE_DIR})
include_directories(TestFWCoreFrameworkInputTagFailure PUBLIC ${PYTHON_INCLUDE_DIR})
target_include_directories(TestFWCoreFrameworkInputTagFailure PUBLIC ${Boost_INCLUDE_DIR}/python)
include_directories(TestFWCoreFrameworkInputTagFailure PUBLIC ${Boost_INCLUDE_DIR}/python)
target_include_directories(TestFWCoreFrameworkInputTagFailure PUBLIC ${Boost_INCLUDE_DIR})
include_directories(TestFWCoreFrameworkInputTagFailure PUBLIC ${Boost_INCLUDE_DIR})
target_include_directories(TestFWCoreFrameworkInputTagFailure PUBLIC ${MD5_INCLUDE_DIR})
include_directories(TestFWCoreFrameworkInputTagFailure PUBLIC ${MD5_INCLUDE_DIR})
target_include_directories(TestFWCoreFrameworkInputTagFailure PUBLIC ${TBB_INCLUDE_DIRS})
include_directories(TestFWCoreFrameworkInputTagFailure PUBLIC ${TBB_INCLUDE_DIRS})
target_include_directories(TestFWCoreFrameworkInputTagFailure PUBLIC ${ROOT_INCLUDE_DIR})
include_directories(TestFWCoreFrameworkInputTagFailure PUBLIC ${ROOT_INCLUDE_DIR})
target_link_libraries(TestFWCoreFrameworkInputTagFailure PUBLIC
  ${Boost_REGEX_LIBRARY_RELEASE}
  dl
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  FWCoreFramework
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  FWCoreUtilities
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  ${PYTHON_LIBRARY}
  ${Boost_PYTHON_LIBRARY_RELEASE}
)

add_test(NAME TestFWCoreFrameworkInputTagFailure COMMAND TestFWCoreFrameworkInputTagFailure)
add_executable(TestFWCoreFrameworkDeleteEarly
  TestDriver.cpp
)

target_include_directories(TestFWCoreFrameworkDeleteEarly PUBLIC ${Boost_INCLUDE_DIR})
include_directories(TestFWCoreFrameworkDeleteEarly PUBLIC ${Boost_INCLUDE_DIR})
target_link_libraries(TestFWCoreFrameworkDeleteEarly PUBLIC
  ${Boost_REGEX_LIBRARY_RELEASE}
  dl
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  FWCoreFramework
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  FWCoreUtilities
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  ${PYTHON_LIBRARY}
  ${Boost_PYTHON_LIBRARY_RELEASE}
)

add_test(NAME TestFWCoreFrameworkDeleteEarly COMMAND TestFWCoreFrameworkDeleteEarly)
add_executable(TestFWCoreFrameworkEarlyTerminationSignal
  TestDriver.cpp
)

target_include_directories(TestFWCoreFrameworkEarlyTerminationSignal PUBLIC ${PYTHON_INCLUDE_DIR})
include_directories(TestFWCoreFrameworkEarlyTerminationSignal PUBLIC ${PYTHON_INCLUDE_DIR})
target_include_directories(TestFWCoreFrameworkEarlyTerminationSignal PUBLIC ${Boost_INCLUDE_DIR}/python)
include_directories(TestFWCoreFrameworkEarlyTerminationSignal PUBLIC ${Boost_INCLUDE_DIR}/python)
target_include_directories(TestFWCoreFrameworkEarlyTerminationSignal PUBLIC ${Boost_INCLUDE_DIR})
include_directories(TestFWCoreFrameworkEarlyTerminationSignal PUBLIC ${Boost_INCLUDE_DIR})
target_include_directories(TestFWCoreFrameworkEarlyTerminationSignal PUBLIC ${MD5_INCLUDE_DIR})
include_directories(TestFWCoreFrameworkEarlyTerminationSignal PUBLIC ${MD5_INCLUDE_DIR})
target_include_directories(TestFWCoreFrameworkEarlyTerminationSignal PUBLIC ${TBB_INCLUDE_DIRS})
include_directories(TestFWCoreFrameworkEarlyTerminationSignal PUBLIC ${TBB_INCLUDE_DIRS})
target_include_directories(TestFWCoreFrameworkEarlyTerminationSignal PUBLIC ${ROOT_INCLUDE_DIR})
include_directories(TestFWCoreFrameworkEarlyTerminationSignal PUBLIC ${ROOT_INCLUDE_DIR})
target_link_libraries(TestFWCoreFrameworkEarlyTerminationSignal PUBLIC
  ${Boost_REGEX_LIBRARY_RELEASE}
  dl
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  FWCoreFramework
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  FWCoreUtilities
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  ${PYTHON_LIBRARY}
  ${Boost_PYTHON_LIBRARY_RELEASE}
)

add_test(NAME TestFWCoreFrameworkEarlyTerminationSignal COMMAND TestFWCoreFrameworkEarlyTerminationSignal)
add_executable(TestFWCoreFrameworkPrintDependencies
  TestDriver.cpp
)

target_include_directories(TestFWCoreFrameworkPrintDependencies PUBLIC ${Boost_INCLUDE_DIR})
include_directories(TestFWCoreFrameworkPrintDependencies PUBLIC ${Boost_INCLUDE_DIR})
target_link_libraries(TestFWCoreFrameworkPrintDependencies PUBLIC
  ${Boost_REGEX_LIBRARY_RELEASE}
  dl
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  FWCoreFramework
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  FWCoreUtilities
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  ${PYTHON_LIBRARY}
  ${Boost_PYTHON_LIBRARY_RELEASE}
)

add_test(NAME TestFWCoreFrameworkPrintDependencies COMMAND TestFWCoreFrameworkPrintDependencies)
