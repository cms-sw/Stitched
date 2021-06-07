add_subdirectory(bin)
if(BUILDTEST)
  add_subdirectory(test)
endif()

add_library(FWCoreParameterSet SHARED ${FWCoreParameterSet_EXTRA_SOURCES}
  src/ANDGroupDescription.cc
  src/AllowedLabelsDescription.cc
  src/AllowedLabelsDescriptionBase.cc
  src/ConfigurationDescriptions.cc
  src/DocFormatHelper.cc
  src/EmptyGroupDescription.cc
  src/Entry.cc
  src/FillDescriptionFromPSet.cc
  src/IfExistsDescription.cc
  src/IllegalParameters.cc
  src/ORGroupDescription.cc
  src/ParameterDescription.cc
  src/ParameterDescriptionBase.cc
  src/ParameterDescriptionCases.cc
  src/ParameterDescriptionNode.cc
  src/ParameterSet.cc
  src/ParameterSetConverter.cc
  src/ParameterSetDescription.cc
  src/ParameterSetDescriptionFillerBase.cc
  src/ParameterSetDescriptionFillerPluginFactory.cc
  src/ParameterSetDescriptionTraits.cc
  src/ParameterSetEntry.cc
  src/ParameterSwitchBase.cc
  src/ParameterWildcard.cc
  src/ParameterWildcardBase.cc
  src/ParameterWildcardWithSpecifics.cc
  src/ProcessDesc.cc
  src/Registry.cc
  src/ThreadsInfo.cc
  src/VParameterSetEntry.cc
  src/XORGroupDescription.cc
  src/defaultModuleLabel.cc
  src/types.cc
  src/validateTopLevelParameterSets.cc
)

set_target_properties(FWCoreParameterSet PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_LIBS FWCoreParameterSet)

target_include_directories(FWCoreParameterSet PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(FWCoreParameterSet PUBLIC
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

target_link_libraries(FWCoreParameterSet PUBLIC
${TBB_LIBRARIES}
DataFormatsProvenance
FWCoreMessageLogger
FWCorePluginManager
FWCoreUtilities
Threads::Threads
crypt
dl
nsl
rt
)


add_python_rules(FWCore/ParameterSet)

add_script_rules(FWCore/ParameterSet)

install( TARGETS FWCoreParameterSet DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

