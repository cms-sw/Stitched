include_directories(${CMAKE_SOURCE_DIR})
include_directories(/usr/include/)
add_subdirectory(bin)
if(BUILDTEST)
add_subdirectory(test)
endif()
add_library(FWCoreParameterSet SHARED 
  src/ParameterSet.cc
  src/ProcessDesc.cc
  src/ParameterWildcard.cc
  src/FileInPath.cc
  src/ParameterDescriptionCases.cc
  src/EmptyGroupDescription.cc
  src/ANDGroupDescription.cc
  src/ParameterSetConverter.cc
  src/ParameterSetDescriptionFillerBase.cc
  src/ParameterSetEntry.cc
  src/Registry.cc
  src/XORGroupDescription.cc
  src/AllowedLabelsDescription.cc
  src/Entry.cc
  src/ParameterDescription.cc
  src/ParameterDescriptionBase.cc
  src/ORGroupDescription.cc
  src/ParameterSetDescription.cc
  src/AllowedLabelsDescriptionBase.cc
  src/DocFormatHelper.cc
  src/ParameterSetDescriptionFillerPluginFactory.cc
  src/ConfigurationDescriptions.cc
  src/IfExistsDescription.cc
  src/types.cc
  src/ParameterDescriptionNode.cc
  src/IllegalParameters.cc
  src/ParameterSwitchBase.cc
  src/VParameterSetEntry.cc
  src/FillDescriptionFromPSet.cc
  src/ParameterWildcardBase.cc
)

target_include_directories(FWCoreParameterSet PUBLIC ${Boost_INCLUDE_DIR})
include_directories(FWCoreParameterSet PUBLIC ${Boost_INCLUDE_DIR})
target_include_directories(FWCoreParameterSet PUBLIC ${TBB_INCLUDE_DIRS})
include_directories(FWCoreParameterSet PUBLIC ${TBB_INCLUDE_DIRS})
target_include_directories(FWCoreParameterSet PUBLIC ${ROOT_INCLUDE_DIR})
include_directories(FWCoreParameterSet PUBLIC ${ROOT_INCLUDE_DIR})
target_link_libraries(FWCoreParameterSet PUBLIC
  ${Boost_REGEX_LIBRARY_RELEASE}
  dl
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  FWCoreUtilities
  FWCoreMessageLogger
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  FWCorePluginManager
  ${TBB_LIBRARIES}
  ${PYTHON_LIBRARY}
  DataFormatsProvenance
)

install( TARGETS FWCoreParameterSet EXPORT FWCoreParameterSet DESTINATION  lib )

