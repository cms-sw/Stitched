add_executable(edmCatalogFileLocator_t
  FileLocator_t.cpp
)

target_link_libraries(edmCatalogFileLocator_t PUBLIC
  FWCorePluginManager
  FWCoreCatalog
  FWCoreServiceRegistry
)

add_test(NAME edmCatalogFileLocator_t COMMAND edmCatalogFileLocator_t)
