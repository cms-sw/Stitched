include_directories(${CMAKE_SOURCE_DIR})
include_directories(/usr/include/)
add_library(FWCoreSources SHARED 
  src/RawInputSource.cc
  src/EventSkipperByID.cc
  src/VectorInputSourceFactory.cc
  src/ProducerSourceBase.cc
  src/RawInputSourceFromFiles.cc
  src/FromFiles.cc
  src/ProducerSourceFromFiles.cc
  src/VectorInputSource.cc
  src/DaqProvenanceHelper.cc
)

target_include_directories(FWCoreSources PUBLIC ${TBB_INCLUDE_DIRS})
include_directories(FWCoreSources PUBLIC ${TBB_INCLUDE_DIRS})
target_link_libraries(FWCoreSources PUBLIC
  FWCoreParameterSet
  FWCoreCatalog
  FWCorePluginManager
  FWCoreMessageLogger
  FWCoreFramework
  DataFormatsProvenance
  ${TBB_LIBRARIES}
  FWCoreUtilities
)

install( TARGETS FWCoreSources EXPORT FWCoreSources DESTINATION  lib )

