if(BUILDTEST)
add_subdirectory(test)
endif()
add_library(FWCoreServiceRegistry SHARED 
  src/PathContext.cc
  src/ServiceWrapperBase.cc
  src/GlobalContext.cc
  src/InternalContext.cc
  src/ModuleCallingContext.cc
  src/StreamContext.cc
  src/PlaceInPathContext.cc
  src/ConsumesInfo.cc
  src/ParentContext.cc
  src/ServiceMakerBase.cc
  src/CurrentModuleOnThread.cc
  src/ServiceToken.cc
  src/ServiceRegistry.cc
  src/ActivityRegistry.cc
  src/ServicesManager.cc
  src/ServicePluginFactory.cc
  src/ProcessContext.cc
  src/PathsAndConsumesOfModulesBase.cc
)

target_include_directories(FWCoreServiceRegistry PUBLIC ${Boost_INCLUDE_DIR}/python)
target_include_directories(FWCoreServiceRegistry PUBLIC ${PYTHON_INCLUDE_DIR})
target_include_directories(FWCoreServiceRegistry PUBLIC ${Boost_INCLUDE_DIR})
target_link_libraries(FWCoreServiceRegistry PUBLIC
  FWCorePluginManager
  FWCoreUtilities
  DataFormatsProvenance
  FWCorePythonParameterSet
  FWCoreParameterSet
)

install( TARGETS FWCoreServiceRegistry EXPORT FWCoreServiceRegistry DESTINATION  lib )

