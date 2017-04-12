add_subdirectory(bin)
if(BUILDTEST)
add_subdirectory(test)
endif()
reflex_dictionary(FWCoreFWLite src/classes.h src/classes_def.xml)
add_library(FWCoreFWLite SHARED 
  src/BareRootProductGetter.cc
  src/FWLiteEnabler.cc
  src/BranchMapReader.cc
  src/RefStreamer.cc
  src/branchToClass.cc
  src/AutoLibraryLoader.cc
  FWCoreFWLiteDict.cpp
)

add_dependencies(FWCoreFWLite FWCoreFWLiteDict)
target_include_directories(FWCoreFWLite PUBLIC ${MD5_INCLUDE_DIR})
target_include_directories(FWCoreFWLite PUBLIC ${Boost_INCLUDE_DIR})
target_include_directories(FWCoreFWLite PUBLIC ${TBB_INCLUDE_DIRS})
target_include_directories(FWCoreFWLite PUBLIC ${ROOT_INCLUDE_DIR})
target_link_libraries(FWCoreFWLite PUBLIC
  Core
  Thread
  DataFormatsCommon
  Tree
  FWCoreUtilities
  RIO
  MathCore
  FWCorePluginManager
  Net
  DataFormatsProvenance
)

install( TARGETS FWCoreFWLite EXPORT FWCoreFWLite DESTINATION  lib )

