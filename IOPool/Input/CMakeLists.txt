include_directories(${CMAKE_SOURCE_DIR})
include_directories(/usr/include/)
add_library(IOPoolInput SHARED 
  src/EmbeddedRootSource.cc
  src/PoolSource.cc
  src/RootPrimaryFileSequence.cc
  src/Module.cc
  src/RootFile.cc
  src/InputFile.cc
  src/DuplicateChecker.cc
  src/RunHelper.cc
  src/RootDelayedReader.cc
  src/RootEmbeddedFileSequence.cc
  src/RootInputFileSequence.cc
  src/RootTree.cc
  src/RootSecondaryFileSequence.cc
  src/ProvenanceAdaptor.cc
)

target_include_directories(IOPoolInput PUBLIC ${CLHEP_INCLUDE_DIR})
include_directories(IOPoolInput PUBLIC ${CLHEP_INCLUDE_DIR})
target_include_directories(IOPoolInput PUBLIC ${Boost_INCLUDE_DIR})
include_directories(IOPoolInput PUBLIC ${Boost_INCLUDE_DIR})
target_include_directories(IOPoolInput PUBLIC ${TBB_INCLUDE_DIRS})
include_directories(IOPoolInput PUBLIC ${TBB_INCLUDE_DIRS})
target_include_directories(IOPoolInput PUBLIC ${ROOT_INCLUDE_DIR})
include_directories(IOPoolInput PUBLIC ${ROOT_INCLUDE_DIR})
target_link_libraries(IOPoolInput PUBLIC
  FWCoreParameterSet
  Thread
  Core
  DataFormatsCommon
  FWCoreFramework
  Tree
  ${CLHEP_MAIN_LIBRARY}
  FWCoreSources
  RIO
  MathCore
  FWCoreCatalog
  IOPoolCommon
  UtilitiesStorageFactory
  Net
  FWCoreUtilities
  DataFormatsProvenance
  FWCoreMessageLogger
  FWCoreServiceRegistry
)

install( TARGETS IOPoolInput EXPORT IOPoolInput DESTINATION  lib )

