include_directories(${CMAKE_SOURCE_DIR})
include_directories(/usr/include/)
if(BUILDTEST)
add_subdirectory(test)
endif()
reflex_dictionary(DataFormatsFWLite src/classes.h src/classes_def.xml)
add_library(DataFormatsFWLite SHARED 
  src/ChainEvent.cc
  src/LumiHistoryGetter.cc
  src/DataGetterHelper.cc
  src/LuminosityBlock.cc
  src/RunBase.cc
  src/ESHandle.cc
  src/EventBase.cc
  src/LuminosityBlockBase.cc
  src/RunHistoryGetter.cc
  src/format_type_name.cc
  src/HistoryGetterBase.cc
  src/Run.cc
  src/EntryFinder.cc
  src/MultiChainEvent.cc
  src/RunFactory.cc
  src/IOVSyncValue.cc
  src/Record.cc
  src/EventSetup.cc
  src/EventHistoryGetter.cc
  src/Event.cc
  src/ErrorThrower.cc
  DataFormatsFWLiteDict.cpp
)

add_dependencies(DataFormatsFWLite DataFormatsFWLiteDict)
target_include_directories(DataFormatsFWLite PUBLIC ${MD5_INCLUDE_DIR})
include_directories(DataFormatsFWLite PUBLIC ${MD5_INCLUDE_DIR})
target_include_directories(DataFormatsFWLite PUBLIC ${Boost_INCLUDE_DIR})
include_directories(DataFormatsFWLite PUBLIC ${Boost_INCLUDE_DIR})
target_include_directories(DataFormatsFWLite PUBLIC ${TBB_INCLUDE_DIRS})
include_directories(DataFormatsFWLite PUBLIC ${TBB_INCLUDE_DIRS})
target_include_directories(DataFormatsFWLite PUBLIC ${ROOT_INCLUDE_DIR})
include_directories(DataFormatsFWLite PUBLIC ${ROOT_INCLUDE_DIR})
target_link_libraries(DataFormatsFWLite PUBLIC
  FWCoreParameterSet
  Thread
  FWCoreFWLite
  DataFormatsCommon
  Tree
  Core
  FWCoreUtilities
  RIO
  MathCore
  Net
  FWCoreCommon
  DataFormatsProvenance
)

install( TARGETS DataFormatsFWLite EXPORT DataFormatsFWLite DESTINATION  lib )

