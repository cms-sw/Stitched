add_library(FWCoreServicesPlugins SHARED ${FWCoreServicesPlugins_EXTRA_SOURCES}
  CPU.cc
  CheckTransitions.cc
  ConcurrentModuleTimer.cc
  CondorStatusUpdater.cc
  DependencyGraph.cc
  InitRootHandlers.cc
  LoadAllDictionaries.cc
  Module.cc
  PrintLoadingPlugins.cc
  ProcInfoFetcher.cc
  ProductRegistryDumper.cc
  ResourceEnforcer.cc
  ResourceInformationService.cc
  SimpleMemoryCheck.cc
  StallMonitor.cc
  TestService.cc
  Timing.cc
  Tracer.cc
  UnixSignalService.cc
  ZombieKillerService.cc
)

set_target_properties(FWCoreServicesPlugins PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_LIBS FWCoreServicesPlugins)

set_target_properties(FWCoreServicesPlugins PROPERTIES PREFIX "plugin")

add_dependencies( ALL_PLUGINS FWCoreServicesPlugins)

edm_write_config( FWCoreServicesPlugins FWCore/Services)

target_include_directories(FWCoreServicesPlugins PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(FWCoreServicesPlugins PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CLHEP_INCLUDE_DIR}
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${OPENSSL_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
/usr/include
)

add_compile_options("-D_FILE_OFFSET_BITS=64")

target_link_libraries(FWCoreServicesPlugins PUBLIC
${TBB_LIBRARIES}
DataFormatsCommon
DataFormatsProvenance
FWCoreConcurrency
FWCoreFramework
FWCorePluginManager
FWCoreReflection
FWCoreServices
Threads::Threads
UtilitiesStorageFactory
UtilitiesXrdAdaptor
atomic
crypt
dl
nsl
rt
)


add_python_rules(FWCore/Services/plugins/)

add_script_rules(FWCore/Services/plugins/)

install( TARGETS FWCoreServicesPlugins DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

