if(BUILDTEST)
  add_subdirectory(test)
endif()

add_library(FWCoreServiceRegistry SHARED ${FWCoreServiceRegistry_EXTRA_SOURCES}
  src/ActivityRegistry.cc
  src/ConsumesInfo.cc
  src/CurrentModuleOnThread.cc
  src/ESModuleCallingContext.cc
  src/ESParentContext.cc
  src/GlobalContext.cc
  src/InternalContext.cc
  src/ModuleCallingContext.cc
  src/ParentContext.cc
  src/PathContext.cc
  src/PathsAndConsumesOfModulesBase.cc
  src/PlaceInPathContext.cc
  src/ProcessContext.cc
  src/ServiceMakerBase.cc
  src/ServicePluginFactory.cc
  src/ServiceRegistry.cc
  src/ServiceToken.cc
  src/ServiceWrapperBase.cc
  src/ServicesManager.cc
  src/StreamContext.cc
)

set_target_properties(FWCoreServiceRegistry PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_LIBS FWCoreServiceRegistry)

target_include_directories(FWCoreServiceRegistry PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(FWCoreServiceRegistry PUBLIC
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

target_link_libraries(FWCoreServiceRegistry PUBLIC
DataFormatsProvenance
FWCoreMessageLogger
FWCoreParameterSet
FWCorePluginManager
FWCoreUtilities
)


add_python_rules(FWCore/ServiceRegistry)

add_script_rules(FWCore/ServiceRegistry)

install( TARGETS FWCoreServiceRegistry DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

