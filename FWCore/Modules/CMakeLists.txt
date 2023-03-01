if(BUILDTEST)
  add_subdirectory(test)
endif()

add_library(FWCoreModules SHARED ${FWCoreModules_EXTRA_SOURCES}
  src/AbortOnEventIDAnalyzer.cc
  src/AsciiOutputModule.cc
  src/BooleanFilter.cc
  src/BooleanProducer.cc
  src/BunchCrossingFilter.cc
  src/EmptyESSource.cc
  src/EmptySource.cc
  src/EventAuxiliaryHistoryProducer.cc
  src/EventContentAnalyzer.cc
  src/EventIDChecker.cc
  src/EventSetupCacheIdentifierChecker.cc
  src/EventSetupRecordDataGetter.cc
  src/GenericConsumer.cc
  src/GetProductCheckerOutputModule.cc
  src/IterateNTimesLooper.cc
  src/LogErrorFilter.cc
  src/LogErrorHarvester.cc
  src/ModuloEventIDFilter.cc
  src/ModuloStreamIDFilter.cc
  src/NavigateEventsLooper.cc
  src/PathStatusFilter.cc
  src/Prescaler.cc
  src/PrintEventSetupContent.cc
  src/PrintEventSetupDataRetrieval.cc
  src/ProvenanceCheckerOutputModule.cc
  src/RunLumiEventChecker.cc
  src/SwitchProducer.cc
  src/TestSource.cc
  src/TimeStudyModules.cc
)

set_target_properties(FWCoreModules PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_LIBS FWCoreModules)

set_target_properties(FWCoreModules PROPERTIES PREFIX "plugin")

add_dependencies( ALL_PLUGINS FWCoreModules)

edm_write_config( FWCoreModules FWCore/Modules)

target_include_directories(FWCoreModules PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(FWCoreModules PUBLIC
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

target_link_libraries(FWCoreModules PUBLIC
DataFormatsCommon
DataFormatsProvenance
FWCoreFramework
FWCoreMessageLogger
FWCoreParameterSet
FWCoreReflection
FWCoreServiceRegistry
FWCoreSources
FWCoreUtilities
Threads::Threads
crypt
dl
nsl
rt
)


add_python_rules(FWCore/Modules)

add_script_rules(FWCore/Modules)

install( TARGETS FWCoreModules DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

