add_subdirectory(ServiceRegistry)
add_subdirectory(TFWLiteSelector)
add_subdirectory(Integration)
add_subdirectory(PluginManager)
add_subdirectory(Utilities)
add_subdirectory(MessageService)
add_subdirectory(MessageLogger)
add_subdirectory(Modules)
add_subdirectory(PrescaleService)
add_subdirectory(Services)
add_subdirectory(FWLite)
add_subdirectory(Framework)
add_subdirectory(Sources)
add_subdirectory(Version)
add_subdirectory(ParameterSet)
add_subdirectory(Concurrency)
add_subdirectory(TFWLiteSelectorTest)
add_subdirectory(PythonParameterSet)
add_subdirectory(Catalog)
add_subdirectory(Common)


# Meta-target that builds everything in this subsystem
add_custom_target(FWCore_all)
add_dependencies(FWCore_all
  FWCoreTFWLiteSelector
  FWCoreMessageLogger
  FWCoreFWLite
  FWCoreTFWLiteSelectorTest
  FWCoreCommon
)
