if(BUILDTEST)
  add_subdirectory(test)
endif()

include_directories(${CMAKE_SOURCE_DIR}
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

cms_rootdict(DataFormatsFWLite src/classes.h src/classes_def.xml)

add_rootdict_rules(DataFormatsFWLite)

add_library(DataFormatsFWLite SHARED ${DataFormatsFWLite_EXTRA_SOURCES}
  src/ChainEvent.cc
  src/DataGetterHelper.cc
  src/ESHandle.cc
  src/EntryFinder.cc
  src/ErrorThrower.cc
  src/Event.cc
  src/EventBase.cc
  src/EventHistoryGetter.cc
  src/EventSetup.cc
  src/HistoryGetterBase.cc
  src/IOVSyncValue.cc
  src/LumiHistoryGetter.cc
  src/LuminosityBlock.cc
  src/LuminosityBlockBase.cc
  src/MultiChainEvent.cc
  src/Record.cc
  src/Run.cc
  src/RunBase.cc
  src/RunFactory.cc
  src/RunHistoryGetter.cc
  src/format_type_name.cc
)

set_target_properties(DataFormatsFWLite PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_LIBS DataFormatsFWLite)

target_include_directories(DataFormatsFWLite PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(DataFormatsFWLite PUBLIC
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

target_link_libraries(DataFormatsFWLite PUBLIC
DataFormatsCommon
DataFormatsProvenance
FWCoreCommon
FWCoreFWLite
FWCoreParameterSet
FWCoreReflection
FWCoreUtilities
ROOT::Core
ROOT::MathCore
ROOT::Net
ROOT::RIO
ROOT::Thread
ROOT::Tree
)


add_python_rules(DataFormats/FWLite)

add_script_rules(DataFormats/FWLite)

install( TARGETS DataFormatsFWLite DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

