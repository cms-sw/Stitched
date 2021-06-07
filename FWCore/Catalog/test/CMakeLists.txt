add_executable(edmCatalogFileLocator_t
  FileLocator_t.cpp
)

add_test(NAME edmCatalogFileLocator_t_CTest COMMAND edmCatalogFileLocator_t)

add_test_properties(edmCatalogFileLocator_t_CTest)

set_target_properties(edmCatalogFileLocator_t PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS edmCatalogFileLocator_t)

add_dependencies( edmCatalogFileLocator_t ALL_PLUGINS)

target_include_directories(edmCatalogFileLocator_t PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(edmCatalogFileLocator_t PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CATCH2_INCLUDE_DIRS}
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(edmCatalogFileLocator_t PUBLIC
FWCoreCatalog
FWCoreServiceRegistry
)


