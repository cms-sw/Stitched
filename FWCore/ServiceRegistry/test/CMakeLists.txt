add_library(FWCoreServiceRegistryTestDummyService SHARED ${FWCoreServiceRegistryTestDummyService_EXTRA_SOURCES}
  stubs/DependsOnDummyService.cc
  stubs/DummyService.cc
  stubs/DummyServiceE0.cc
  stubs/DummyStoreConfigService.cc
)

set_target_properties(FWCoreServiceRegistryTestDummyService PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_TESTLIBS FWCoreServiceRegistryTestDummyService)

target_include_directories(FWCoreServiceRegistryTestDummyService PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(FWCoreServiceRegistryTestDummyService PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${CPPUNIT_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(FWCoreServiceRegistryTestDummyService PUBLIC
FWCoreServiceRegistry
Threads::Threads
cppunit
crypt
dl
nsl
rt
)


install( TARGETS FWCoreServiceRegistryTestDummyService DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

add_library(FWCoreServiceRegistryTestDummyServicePlugin SHARED ${FWCoreServiceRegistryTestDummyServicePlugin_EXTRA_SOURCES}
  stubs/Modules.cc
)

set_target_properties(FWCoreServiceRegistryTestDummyServicePlugin PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_TESTLIBS FWCoreServiceRegistryTestDummyServicePlugin)

set_target_properties(FWCoreServiceRegistryTestDummyServicePlugin PROPERTIES PREFIX "plugin")

add_dependencies( ALL_PLUGINS FWCoreServiceRegistryTestDummyServicePlugin)

edm_write_config( FWCoreServiceRegistryTestDummyServicePlugin FWCore/ServiceRegistry)

target_include_directories(FWCoreServiceRegistryTestDummyServicePlugin PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(FWCoreServiceRegistryTestDummyServicePlugin PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${CPPUNIT_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(FWCoreServiceRegistryTestDummyServicePlugin PUBLIC
FWCoreServiceRegistry
FWCoreServiceRegistryTestDummyService
Threads::Threads
cppunit
crypt
dl
nsl
rt
)


add_python_rules(FWCore/ServiceRegistry/test/)

add_script_rules(FWCore/ServiceRegistry/test/)

install( TARGETS FWCoreServiceRegistryTestDummyServicePlugin DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

add_executable(testServiceRegistry
  connect_but_block_self_t.cppunit.cc
  serviceregistry_t.cppunit.cpp
  servicesmanager_t.cppunit.cc
)

add_test(NAME testServiceRegistry_CTest COMMAND testServiceRegistry)

add_test_properties(testServiceRegistry_CTest)

set_target_properties(testServiceRegistry PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS testServiceRegistry)

add_dependencies( testServiceRegistry ALL_PLUGINS)

target_include_directories(testServiceRegistry PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(testServiceRegistry PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${CPPUNIT_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(testServiceRegistry PUBLIC
FWCoreParameterSet
FWCorePluginManager
FWCoreServiceRegistry
FWCoreServiceRegistryTestDummyService
FWCoreUtilities
Threads::Threads
cppunit
crypt
dl
nsl
rt
)


add_executable(servicesmanager_order
  servicesmanager_order.cpp
)

add_test(NAME servicesmanager_order_CTest COMMAND servicesmanager_order)

add_test_properties(servicesmanager_order_CTest)

set_target_properties(servicesmanager_order PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS servicesmanager_order)

add_dependencies( servicesmanager_order ALL_PLUGINS)

target_include_directories(servicesmanager_order PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(servicesmanager_order PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${CPPUNIT_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(servicesmanager_order PUBLIC
FWCoreParameterSet
FWCorePluginManager
FWCoreServiceRegistry
FWCoreServiceRegistryTestDummyService
FWCoreUtilities
Threads::Threads
cppunit
crypt
dl
nsl
rt
)


