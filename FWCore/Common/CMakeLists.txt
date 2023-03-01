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

cms_rootdict(FWCoreCommon src/classes.h src/classes_def.xml)

add_rootdict_rules(FWCoreCommon)

add_library(FWCoreCommon SHARED ${FWCoreCommon_EXTRA_SOURCES}
  src/EventBase.cc
  src/LuminosityBlockBase.cc
  src/OutputProcessBlockHelper.cc
  src/ProcessBlockHelper.cc
  src/ProcessBlockHelperBase.cc
  src/Provenance.cc
  src/RunBase.cc
  src/SubProcessBlockHelper.cc
  src/TriggerNames.cc
  src/TriggerResultsByName.cc
)

set_target_properties(FWCoreCommon PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_LIBS FWCoreCommon)

target_include_directories(FWCoreCommon PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(FWCoreCommon PUBLIC
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

target_link_libraries(FWCoreCommon PUBLIC
${TBB_LIBRARIES}
DataFormatsCommon
DataFormatsProvenance
FWCoreParameterSet
FWCoreUtilities
)


add_python_rules(FWCore/Common)

add_script_rules(FWCore/Common)

install( TARGETS FWCoreCommon DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

