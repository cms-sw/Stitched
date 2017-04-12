add_executable(edmCatalogFileLocator_t
  FileLocator_t.cpp
)

target_link_libraries(edmCatalogFileLocator_t PUBLIC
  FWCorePluginManager
  FWCoreCatalog
  FWCoreServiceRegistry
)

install( TARGETS edmCatalogFileLocator_t EXPORT edmCatalogFileLocator_t DESTINATION  bin )

