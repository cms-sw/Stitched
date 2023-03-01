add_library(FWCoreIntegrationTestPSet SHARED ${FWCoreIntegrationTestPSet_EXTRA_SOURCES}
  ProducerWithPSetDesc.cc
  TestDescriptionComments.cc
  TestPSetAnalyzer.cc
)

set_target_properties(FWCoreIntegrationTestPSet PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_LIBS FWCoreIntegrationTestPSet)

set_target_properties(FWCoreIntegrationTestPSet PROPERTIES PREFIX "plugin")

add_dependencies( ALL_PLUGINS FWCoreIntegrationTestPSet)

edm_write_config( FWCoreIntegrationTestPSet FWCore/Integration)

target_include_directories(FWCoreIntegrationTestPSet PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(FWCoreIntegrationTestPSet PUBLIC
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

target_link_libraries(FWCoreIntegrationTestPSet PUBLIC
DataFormatsProvenance
FWCoreFramework
FWCoreIntegration
FWCoreParameterSet
FWCoreUtilities
)


add_python_rules(FWCore/Integration/plugins/)

add_script_rules(FWCore/Integration/plugins/)

install( TARGETS FWCoreIntegrationTestPSet DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

add_library(FWCoreIntegrationTestWithThing SHARED ${FWCoreIntegrationTestWithThing_EXTRA_SOURCES}
  DetSetVectorThingProducer.cc
  PutOrMergeTestSource.cc
  SlimmingDSVThingProducer.cc
  TestGetByLabelAnalyzer.cc
  TestGetterOfProducts.cc
  ThingAlgorithm.cc
  ThingAnalyzer.cc
  ThingExtSource.cc
  ThingProducer.cc
  ThingSource.cc
  ThingWithMergeProducer.cc
  ThinnedRefFromTestAnalyzer.cc
  ThinningDSVTestAnalyzer.cc
  ThinningDSVThingProducer.cc
  ThinningTestAnalyzer.cc
  TrackOfDSVThingsProducer.cc
  TrackOfThingsProducer.cc
)

set_target_properties(FWCoreIntegrationTestWithThing PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_LIBS FWCoreIntegrationTestWithThing)

set_target_properties(FWCoreIntegrationTestWithThing PROPERTIES PREFIX "plugin")

add_dependencies( ALL_PLUGINS FWCoreIntegrationTestWithThing)

edm_write_config( FWCoreIntegrationTestWithThing FWCore/Integration)

target_include_directories(FWCoreIntegrationTestWithThing PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(FWCoreIntegrationTestWithThing PUBLIC
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

target_link_libraries(FWCoreIntegrationTestWithThing PUBLIC
DataFormatsCommon
DataFormatsTestObjects
FWCoreFramework
FWCoreIntegration
FWCoreSources
)


add_python_rules(FWCore/Integration/plugins/)

add_script_rules(FWCore/Integration/plugins/)

install( TARGETS FWCoreIntegrationTestWithThing DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

add_library(FWCoreIntegrationTestWithWhatsItDoodad SHARED ${FWCoreIntegrationTestWithWhatsItDoodad_EXTRA_SOURCES}
  Doodad.cc
  DoodadEDLooper.cc
  DoodadESProducer.cc
  DoodadESSource.cc
  GadgetRcd.cc
  SlimmingThingProducer.cc
  ThinningThingProducer.cc
  WhatsIt.cc
  WhatsItAnalyzer.cc
  WhatsItESProducer.cc
  WhatsItWatcherAnalyzer.cc
)

set_target_properties(FWCoreIntegrationTestWithWhatsItDoodad PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_LIBS FWCoreIntegrationTestWithWhatsItDoodad)

set_target_properties(FWCoreIntegrationTestWithWhatsItDoodad PROPERTIES PREFIX "plugin")

add_dependencies( ALL_PLUGINS FWCoreIntegrationTestWithWhatsItDoodad)

edm_write_config( FWCoreIntegrationTestWithWhatsItDoodad FWCore/Integration)

target_include_directories(FWCoreIntegrationTestWithWhatsItDoodad PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(FWCoreIntegrationTestWithWhatsItDoodad PUBLIC
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

target_link_libraries(FWCoreIntegrationTestWithWhatsItDoodad PUBLIC
DataFormatsTestObjects
FWCoreFramework
FWCoreIntegration
)


add_python_rules(FWCore/Integration/plugins/)

add_script_rules(FWCore/Integration/plugins/)

install( TARGETS FWCoreIntegrationTestWithWhatsItDoodad DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

add_library(FWCoreIntegrationSomeTestModules SHARED ${FWCoreIntegrationSomeTestModules_EXTRA_SOURCES}
  AssociationMapAnalyzer.cc
  AssociationMapProducer.cc
  DelayedReaderThrowingSource.cc
  ExceptionThrowingProducer.cc
  ExistingDictionaryTestModules.cc
  HierarchicalEDProducer.cc
  IntSource.cc
  ManyProductProducer.cc
  MissingDictionaryTestProducer.cc
  PathAnalyzer.cc
  PluginUsingProducer.cc
  ProdigalAnalyzer.cc
  ProducerUsingCollector.cc
  SwitchProducerProvenanceAnalyzer.cc
  TableTestModules.cc
  TestFindProduct.cc
  TestGlobalOutput.cc
  TestHistoryKeeping.cc
  TestLimitedOutput.cc
  TestOneOutput.cc
  TestParentage.cc
  ThrowingSource.cc
  ViewAnalyzer.cc
)

set_target_properties(FWCoreIntegrationSomeTestModules PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_LIBS FWCoreIntegrationSomeTestModules)

set_target_properties(FWCoreIntegrationSomeTestModules PROPERTIES PREFIX "plugin")

add_dependencies( ALL_PLUGINS FWCoreIntegrationSomeTestModules)

edm_write_config( FWCoreIntegrationSomeTestModules FWCore/Integration)

target_include_directories(FWCoreIntegrationSomeTestModules PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(FWCoreIntegrationSomeTestModules PUBLIC
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

target_link_libraries(FWCoreIntegrationSomeTestModules PUBLIC
DataFormatsProvenance
DataFormatsTestObjects
FWCoreFramework
FWCoreIntegration
FWCoreMessageLogger
FWCoreParameterSet
FWCoreSources
)


add_python_rules(FWCore/Integration/plugins/)

add_script_rules(FWCore/Integration/plugins/)

install( TARGETS FWCoreIntegrationSomeTestModules DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

add_library(TestHistProducer SHARED ${TestHistProducer_EXTRA_SOURCES}
  HistProducer.cc
)

set_target_properties(TestHistProducer PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_LIBS TestHistProducer)

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


add_python_rules(FWCore/Integration/plugins/)

add_script_rules(FWCore/Integration/plugins/)

install( TARGETS TestHistProducer DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

add_library(FWCoreIntegrationOtherThing SHARED ${FWCoreIntegrationOtherThing_EXTRA_SOURCES}
  OtherThingAlgorithm.cc
  OtherThingAnalyzer.cc
  OtherThingProducer.cc
  OtherThingRefComparer.cc
)

set_target_properties(FWCoreIntegrationOtherThing PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_LIBS FWCoreIntegrationOtherThing)

set_target_properties(FWCoreIntegrationOtherThing PROPERTIES PREFIX "plugin")

add_dependencies( ALL_PLUGINS FWCoreIntegrationOtherThing)

edm_write_config( FWCoreIntegrationOtherThing FWCore/Integration)

target_include_directories(FWCoreIntegrationOtherThing PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(FWCoreIntegrationOtherThing PUBLIC
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

target_link_libraries(FWCoreIntegrationOtherThing PUBLIC
DataFormatsCommon
FWCoreFramework
FWCoreIntegration
FWCoreMessageLogger
)


add_python_rules(FWCore/Integration/plugins/)

add_script_rules(FWCore/Integration/plugins/)

install( TARGETS FWCoreIntegrationOtherThing DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

add_library(FWCoreIntegrationValueExample SHARED ${FWCoreIntegrationValueExample_EXTRA_SOURCES}
  ValueExample.cc
)

set_target_properties(FWCoreIntegrationValueExample PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_LIBS FWCoreIntegrationValueExample)

set_target_properties(FWCoreIntegrationValueExample PROPERTIES PREFIX "plugin")

add_dependencies( ALL_PLUGINS FWCoreIntegrationValueExample)

edm_write_config( FWCoreIntegrationValueExample FWCore/Integration)

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


add_python_rules(FWCore/Integration/plugins/)

add_script_rules(FWCore/Integration/plugins/)

install( TARGETS FWCoreIntegrationValueExample DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

add_library(FWCoreIntegrationValueExamplePlugin SHARED ${FWCoreIntegrationValueExamplePlugin_EXTRA_SOURCES}
  ValueExamplePlugin.cc
)

set_target_properties(FWCoreIntegrationValueExamplePlugin PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_LIBS FWCoreIntegrationValueExamplePlugin)

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


add_python_rules(FWCore/Integration/plugins/)

add_script_rules(FWCore/Integration/plugins/)

install( TARGETS FWCoreIntegrationValueExamplePlugin DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

add_library(UseValueExampleAnalyzer SHARED ${UseValueExampleAnalyzer_EXTRA_SOURCES}
  UseValueExampleAnalyzer.cc
)

set_target_properties(UseValueExampleAnalyzer PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_LIBS UseValueExampleAnalyzer)

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


add_python_rules(FWCore/Integration/plugins/)

add_script_rules(FWCore/Integration/plugins/)

install( TARGETS UseValueExampleAnalyzer DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

add_library(FWCoreIntegrationWaitingServiceModules SHARED ${FWCoreIntegrationWaitingServiceModules_EXTRA_SOURCES}
  AcquireIntFilter.cc
  AcquireIntProducer.cc
  AcquireIntStreamFilter.cc
  AcquireIntStreamProducer.cc
  WaitingServer.cc
  WaitingService.cc
)

set_target_properties(FWCoreIntegrationWaitingServiceModules PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_LIBS FWCoreIntegrationWaitingServiceModules)

set_target_properties(FWCoreIntegrationWaitingServiceModules PROPERTIES PREFIX "plugin")

add_dependencies( ALL_PLUGINS FWCoreIntegrationWaitingServiceModules)

edm_write_config( FWCoreIntegrationWaitingServiceModules FWCore/Integration)

target_include_directories(FWCoreIntegrationWaitingServiceModules PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(FWCoreIntegrationWaitingServiceModules PUBLIC
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

target_link_libraries(FWCoreIntegrationWaitingServiceModules PUBLIC
DataFormatsTestObjects
FWCoreConcurrency
FWCoreFramework
FWCoreIntegration
FWCoreParameterSet
FWCoreServiceRegistry
)


add_python_rules(FWCore/Integration/plugins/)

add_script_rules(FWCore/Integration/plugins/)

install( TARGETS FWCoreIntegrationWaitingServiceModules DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

add_library(FWCoreIntegrationPathsAndConsumesOfModulesTestService SHARED ${FWCoreIntegrationPathsAndConsumesOfModulesTestService_EXTRA_SOURCES}
  PathsAndConsumesOfModulesTestService.cc
)

set_target_properties(FWCoreIntegrationPathsAndConsumesOfModulesTestService PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_LIBS FWCoreIntegrationPathsAndConsumesOfModulesTestService)

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


add_python_rules(FWCore/Integration/plugins/)

add_script_rules(FWCore/Integration/plugins/)

install( TARGETS FWCoreIntegrationPathsAndConsumesOfModulesTestService DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

add_library(ConcurrentIOVESSource SHARED ${ConcurrentIOVESSource_EXTRA_SOURCES}
  ConcurrentIOVAnalyzer.cc
  ConcurrentIOVESProducer.cc
  ConcurrentIOVESSource.cc
  GadgetRcd.cc
  IOVTestInfo.cc
  RunLumiESAnalyzer.cc
  RunLumiESSource.cc
  TestESConcurrentSource.cc
  TestESSource.cc
)

set_target_properties(ConcurrentIOVESSource PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_LIBS ConcurrentIOVESSource)

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


add_python_rules(FWCore/Integration/plugins/)

add_script_rules(FWCore/Integration/plugins/)

install( TARGETS ConcurrentIOVESSource DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

add_library(ESTestModules SHARED ${ESTestModules_EXTRA_SOURCES}
  ESTestAnalyzers.cc
  ESTestProducers.cc
)

set_target_properties(ESTestModules PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_LIBS ESTestModules)

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


add_python_rules(FWCore/Integration/plugins/)

add_script_rules(FWCore/Integration/plugins/)

install( TARGETS ESTestModules DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

add_library(TestInterProcessProd SHARED ${TestInterProcessProd_EXTRA_SOURCES}
  TestInterProcessProd.cc
)

set_target_properties(TestInterProcessProd PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_LIBS TestInterProcessProd)

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


add_python_rules(FWCore/Integration/plugins/)

add_script_rules(FWCore/Integration/plugins/)

install( TARGETS TestInterProcessProd DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

add_library(TestInterProcessRandomProd SHARED ${TestInterProcessRandomProd_EXTRA_SOURCES}
  RandomIntProducer.cc
  TestInterProcessRandomProd.cc
)

set_target_properties(TestInterProcessRandomProd PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_LIBS TestInterProcessRandomProd)

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
DataFormatsTestObjects
FWCoreFramework
FWCoreIntegration
FWCoreParameterSet
FWCoreSharedMemory
FWCoreSources
FWCoreUtilities
Threads::Threads
crypt
dl
nsl
rt
)


add_python_rules(FWCore/Integration/plugins/)

add_script_rules(FWCore/Integration/plugins/)

install( TARGETS TestInterProcessRandomProd DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

add_library(TestServicesOnNonFrameworkThreadsAnalyzer SHARED ${TestServicesOnNonFrameworkThreadsAnalyzer_EXTRA_SOURCES}
  TestServicesOnNonFrameworkThreadsAnalyzer.cc
)

set_target_properties(TestServicesOnNonFrameworkThreadsAnalyzer PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_LIBS TestServicesOnNonFrameworkThreadsAnalyzer)

set_target_properties(TestServicesOnNonFrameworkThreadsAnalyzer PROPERTIES PREFIX "plugin")

add_dependencies( ALL_PLUGINS TestServicesOnNonFrameworkThreadsAnalyzer)

edm_write_config( TestServicesOnNonFrameworkThreadsAnalyzer FWCore/Integration)

target_include_directories(TestServicesOnNonFrameworkThreadsAnalyzer PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestServicesOnNonFrameworkThreadsAnalyzer PUBLIC
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

target_link_libraries(TestServicesOnNonFrameworkThreadsAnalyzer PUBLIC
${CLHEP_LIBRARIES}
FWCoreFramework
FWCoreIntegration
FWCoreMessageLogger
FWCoreParameterSet
)


add_python_rules(FWCore/Integration/plugins/)

add_script_rules(FWCore/Integration/plugins/)

install( TARGETS TestServicesOnNonFrameworkThreadsAnalyzer DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

add_library(FWCoreIntegrationTransformIntProducer SHARED ${FWCoreIntegrationTransformIntProducer_EXTRA_SOURCES}
  TransformAsyncIntProducer.cc
  TransformAsyncIntStreamProducer.cc
  TransformIntProducer.cc
  TransformIntStreamProducer.cc
)

set_target_properties(FWCoreIntegrationTransformIntProducer PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_LIBS FWCoreIntegrationTransformIntProducer)

set_target_properties(FWCoreIntegrationTransformIntProducer PROPERTIES PREFIX "plugin")

add_dependencies( ALL_PLUGINS FWCoreIntegrationTransformIntProducer)

edm_write_config( FWCoreIntegrationTransformIntProducer FWCore/Integration)

target_include_directories(FWCoreIntegrationTransformIntProducer PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(FWCoreIntegrationTransformIntProducer PUBLIC
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

target_link_libraries(FWCoreIntegrationTransformIntProducer PUBLIC
FWCoreFramework
FWCoreIntegration
FWCoreParameterSet
)


add_python_rules(FWCore/Integration/plugins/)

add_script_rules(FWCore/Integration/plugins/)

install( TARGETS FWCoreIntegrationTransformIntProducer DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

