include_directories(${CMAKE_SOURCE_DIR})
include_directories(/usr/include/)
add_library(FWCoreModules SHARED 
  src/LogErrorFilter.cc
  src/EventSetupCacheIdentifierChecker.cc
  src/AsciiOutputModule.cc
  src/EventIDChecker.cc
  src/Prescaler.cc
  src/AbortOnEventIDAnalyzer.cc
  src/ProvenanceCheckerOutputModule.cc
  src/IterateNTimesLooper.cc
  src/PrintEventSetupContent.cc
  src/EmptyESSource.cc
  src/GetProductCheckerOutputModule.cc
  src/EmptySource.cc
  src/LogErrorHarvester.cc
  src/EventSetupRecordDataGetter.cc
  src/NavigateEventsLooper.cc
  src/EventContentAnalyzer.cc
  src/PrintEventSetupDataRetrieval.cc
  src/EventAuxiliaryHistoryProducer.cc
  src/MulticoreRunLumiEventChecker.cc
)

target_include_directories(FWCoreModules PUBLIC ${Boost_INCLUDE_DIR})
include_directories(FWCoreModules PUBLIC ${Boost_INCLUDE_DIR})
target_link_libraries(FWCoreModules PUBLIC
  FWCoreParameterSet
  dl
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  ${Boost_REGEX_LIBRARY_RELEASE}
  FWCoreSources
  FWCoreFramework
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  ${PYTHON_LIBRARY}
  DataFormatsProvenance
  FWCoreMessageLogger
)

install( TARGETS FWCoreModules EXPORT FWCoreModules DESTINATION  lib )

