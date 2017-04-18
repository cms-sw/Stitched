add_library(FWCoreServicesPlugins SHARED 
  CondorStatusUpdater.cc
  CPU.cc
  InitRootHandlers.cc
  ProcInfoFetcher.cc
  UnixSignalService.cc
  SimpleMemoryCheck.cc
  LoadAllDictionaries.cc
  Module.cc
  ConcurrentModuleTimer.cc
  EnableFloatingPointExceptions.cc
  ResourceEnforcer.cc
  Tracer.cc
  PrintLoadingPlugins.cc
  Timing.cc
  ZombieKillerService.cc
)

target_include_directories(FWCoreServicesPlugins PUBLIC ${Boost_INCLUDE_DIR})
include_directories(FWCoreServicesPlugins PUBLIC ${Boost_INCLUDE_DIR})
target_include_directories(FWCoreServicesPlugins PUBLIC ${TBB_INCLUDE_DIRS})
include_directories(FWCoreServicesPlugins PUBLIC ${TBB_INCLUDE_DIRS})
target_link_libraries(FWCoreServicesPlugins PUBLIC
  UtilitiesStorageFactory
  FWCoreServices
)

install( TARGETS FWCoreServicesPlugins EXPORT FWCoreServicesPlugins DESTINATION  lib )

