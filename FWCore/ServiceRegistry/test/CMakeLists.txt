add_library(FWCoreServiceRegistryTestDummyService SHARED 
  stubs/DummyService.cc
  stubs/DummyServiceE0.cc
  stubs/DependsOnDummyService.cc
  stubs/DummyStoreConfigService.cc
)

target_include_directories(FWCoreServiceRegistryTestDummyService PUBLIC ${CPPUNIT_INCLUDE_DIR})
include_directories(FWCoreServiceRegistryTestDummyService PUBLIC ${CPPUNIT_INCLUDE_DIR})
target_include_directories(FWCoreServiceRegistryTestDummyService PUBLIC ${Boost_INCLUDE_DIR})
include_directories(FWCoreServiceRegistryTestDummyService PUBLIC ${Boost_INCLUDE_DIR})
target_link_libraries(FWCoreServiceRegistryTestDummyService PUBLIC
  ${Boost_REGEX_LIBRARY_RELEASE}
  dl
  ${CPPUNIT_LIBRARY}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  FWCoreServiceRegistry
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  ${PYTHON_LIBRARY}
)

add_library(FWCoreServiceRegistryTestDummyServicePlugin SHARED 
  stubs/Modules.cc
)

target_include_directories(FWCoreServiceRegistryTestDummyServicePlugin PUBLIC ${PYTHON_INCLUDE_DIR})
include_directories(FWCoreServiceRegistryTestDummyServicePlugin PUBLIC ${PYTHON_INCLUDE_DIR})
target_include_directories(FWCoreServiceRegistryTestDummyServicePlugin PUBLIC ${CPPUNIT_INCLUDE_DIR})
include_directories(FWCoreServiceRegistryTestDummyServicePlugin PUBLIC ${CPPUNIT_INCLUDE_DIR})
target_include_directories(FWCoreServiceRegistryTestDummyServicePlugin PUBLIC ${Boost_INCLUDE_DIR}/python)
include_directories(FWCoreServiceRegistryTestDummyServicePlugin PUBLIC ${Boost_INCLUDE_DIR}/python)
target_include_directories(FWCoreServiceRegistryTestDummyServicePlugin PUBLIC ${Boost_INCLUDE_DIR})
include_directories(FWCoreServiceRegistryTestDummyServicePlugin PUBLIC ${Boost_INCLUDE_DIR})
target_link_libraries(FWCoreServiceRegistryTestDummyServicePlugin PUBLIC
  ${Boost_REGEX_LIBRARY_RELEASE}
  dl
  ${CPPUNIT_LIBRARY}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  FWCoreServiceRegistry
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  ${PYTHON_LIBRARY}
  FWCoreServiceRegistryTestDummyService
)

add_executable(testServiceRegistry
  serviceregistry_t.cppunit.cpp
  servicesmanager_t.cppunit.cc
  connect_but_block_self_t.cppunit.cc
)

target_include_directories(testServiceRegistry PUBLIC ${CPPUNIT_INCLUDE_DIR})
include_directories(testServiceRegistry PUBLIC ${CPPUNIT_INCLUDE_DIR})
target_include_directories(testServiceRegistry PUBLIC ${Boost_INCLUDE_DIR})
include_directories(testServiceRegistry PUBLIC ${Boost_INCLUDE_DIR})
target_link_libraries(testServiceRegistry PUBLIC
  FWCoreParameterSet
  dl
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  ${Boost_REGEX_LIBRARY_RELEASE}
  FWCoreUtilities
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${CPPUNIT_LIBRARY}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  FWCoreServiceRegistry
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  FWCorePluginManager
  ${PYTHON_LIBRARY}
  FWCoreServiceRegistryTestDummyService
)

add_test(NAME testServiceRegistry COMMAND testServiceRegistry)
add_executable(servicesmanager_order
  servicesmanager_order.cpp
)

target_include_directories(servicesmanager_order PUBLIC ${CPPUNIT_INCLUDE_DIR})
include_directories(servicesmanager_order PUBLIC ${CPPUNIT_INCLUDE_DIR})
target_include_directories(servicesmanager_order PUBLIC ${PYTHON_INCLUDE_DIR})
include_directories(servicesmanager_order PUBLIC ${PYTHON_INCLUDE_DIR})
target_include_directories(servicesmanager_order PUBLIC ${MD5_INCLUDE_DIR})
include_directories(servicesmanager_order PUBLIC ${MD5_INCLUDE_DIR})
target_include_directories(servicesmanager_order PUBLIC ${Boost_INCLUDE_DIR}/python)
include_directories(servicesmanager_order PUBLIC ${Boost_INCLUDE_DIR}/python)
target_include_directories(servicesmanager_order PUBLIC ${Boost_INCLUDE_DIR})
include_directories(servicesmanager_order PUBLIC ${Boost_INCLUDE_DIR})
target_include_directories(servicesmanager_order PUBLIC ${TBB_INCLUDE_DIRS})
include_directories(servicesmanager_order PUBLIC ${TBB_INCLUDE_DIRS})
target_include_directories(servicesmanager_order PUBLIC ${ROOT_INCLUDE_DIR})
include_directories(servicesmanager_order PUBLIC ${ROOT_INCLUDE_DIR})
target_link_libraries(servicesmanager_order PUBLIC
  FWCoreParameterSet
  dl
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  ${Boost_REGEX_LIBRARY_RELEASE}
  FWCoreUtilities
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${CPPUNIT_LIBRARY}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  FWCoreServiceRegistry
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  FWCorePluginManager
  ${PYTHON_LIBRARY}
  FWCoreServiceRegistryTestDummyService
)

add_test(NAME servicesmanager_order COMMAND servicesmanager_order)