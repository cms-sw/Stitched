include_directories(${CMAKE_SOURCE_DIR})
include_directories(/usr/include/)
if(BUILDTEST)
add_subdirectory(test)
endif()
reflex_dictionary(DataFormatsProvenance src/classes.h src/classes_def.xml)
add_library(DataFormatsProvenance SHARED 
  src/LuminosityBlockAuxiliary.cc
  src/ParameterSetBlob.cc
  src/BranchIDListHelper.cc
  src/RunID.cc
  src/RunAux.cc
  src/FileID.cc
  src/LuminosityBlockAux.cc
  src/EventRange.cc
  src/BranchDescription.cc
  src/FileFormatVersion.cc
  src/ViewTypeChecker.cc
  src/ProductProvenanceRetriever.cc
  src/ModuleDescription.cc
  src/ProcessConfiguration.cc
  src/BranchType.cc
  src/History.cc
  src/ProductRegistry.cc
  src/RunAuxiliary.cc
  src/IndexIntoFile.cc
  src/Hash.cc
  src/BranchKey.cc
  src/FileIndex.cc
  src/ProcessHistoryRegistry.cc
  src/BranchID.cc
  src/Provenance.cc
  src/ProcessHistory.cc
  src/LuminosityBlockRange.cc
  src/ProductID.cc
  src/EventAux.cc
  src/BranchChildren.cc
  src/EventEntryDescription.cc
  src/EventEntryInfo.cc
  src/StableProvenance.cc
  src/ESRecordAuxiliary.cc
  src/EventID.cc
  src/ProductProvenance.cc
  src/ParentageRegistry.cc
  src/ProductIDToBranchID.cc
  src/RunLumiEntryInfo.cc
  src/Parentage.cc
  src/LuminosityBlockID.cc
  src/ThinnedAssociationsHelper.cc
  src/Timestamp.cc
  src/ProductResolverIndexHelper.cc
  src/EventAuxiliary.cc
  DataFormatsProvenanceDict.cpp
)

add_dependencies(DataFormatsProvenance DataFormatsProvenanceDict)
target_include_directories(DataFormatsProvenance PUBLIC ${Boost_INCLUDE_DIR})
include_directories(DataFormatsProvenance PUBLIC ${Boost_INCLUDE_DIR})
target_include_directories(DataFormatsProvenance PUBLIC ${TBB_INCLUDE_DIRS})
include_directories(DataFormatsProvenance PUBLIC ${TBB_INCLUDE_DIRS})
target_include_directories(DataFormatsProvenance PUBLIC ${ROOT_INCLUDE_DIR})
include_directories(DataFormatsProvenance PUBLIC ${ROOT_INCLUDE_DIR})
target_link_libraries(DataFormatsProvenance PUBLIC
  ${Boost_REGEX_LIBRARY_RELEASE}
  dl
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  Thread
  FWCoreMessageLogger
  Tree
  ${Boost_THREAD_LIBRARY_RELEASE}
  MathCore
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  Net
  ${PYTHON_LIBRARY}
  Core
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  FWCoreUtilities
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  RIO
  ${TBB_LIBRARIES}
)

install( TARGETS DataFormatsProvenance EXPORT DataFormatsProvenance DESTINATION  lib )

