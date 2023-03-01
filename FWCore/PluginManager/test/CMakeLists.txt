add_executable(TestFWCorePluginManagerPluginFactoryManager
  pluginfactorymanager_t.cc
)

add_test(NAME TestFWCorePluginManagerPluginFactoryManager_CTest COMMAND TestFWCorePluginManagerPluginFactoryManager)

add_test_properties(TestFWCorePluginManagerPluginFactoryManager_CTest)

set_target_properties(TestFWCorePluginManagerPluginFactoryManager PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS TestFWCorePluginManagerPluginFactoryManager)

add_dependencies( TestFWCorePluginManagerPluginFactoryManager ALL_PLUGINS)

target_include_directories(TestFWCorePluginManagerPluginFactoryManager PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestFWCorePluginManagerPluginFactoryManager PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${CPPUNIT_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(TestFWCorePluginManagerPluginFactoryManager PUBLIC
FWCorePluginManager
Threads::Threads
cppunit
crypt
dl
nsl
rt
)


add_executable(TestFWCorePluginManagerPluginManager
  pluginmanager_t.cc
)

add_test(NAME TestFWCorePluginManagerPluginManager_CTest COMMAND TestFWCorePluginManagerPluginManager)

add_test_properties(TestFWCorePluginManagerPluginManager_CTest)

set_target_properties(TestFWCorePluginManagerPluginManager PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS TestFWCorePluginManagerPluginManager)

add_dependencies( TestFWCorePluginManagerPluginManager ALL_PLUGINS)

target_include_directories(TestFWCorePluginManagerPluginManager PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestFWCorePluginManagerPluginManager PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${CPPUNIT_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(TestFWCorePluginManagerPluginManager PUBLIC
FWCorePluginManager
TestFWCorePluginManagerDummyFactory
Threads::Threads
cppunit
crypt
dl
nsl
rt
)


add_executable(TestFWCorePluginManagerCacheParser
  cacheparser_t.cc
)

add_test(NAME TestFWCorePluginManagerCacheParser_CTest COMMAND TestFWCorePluginManagerCacheParser)

add_test_properties(TestFWCorePluginManagerCacheParser_CTest)

set_target_properties(TestFWCorePluginManagerCacheParser PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS TestFWCorePluginManagerCacheParser)

add_dependencies( TestFWCorePluginManagerCacheParser ALL_PLUGINS)

target_include_directories(TestFWCorePluginManagerCacheParser PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestFWCorePluginManagerCacheParser PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${CPPUNIT_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(TestFWCorePluginManagerCacheParser PUBLIC
FWCorePluginManager
Threads::Threads
cppunit
crypt
dl
nsl
rt
)


add_executable(TestFWCorePluginManagerPluginFactory
  pluginfactory_t.cc
)

add_test(NAME TestFWCorePluginManagerPluginFactory_CTest COMMAND TestFWCorePluginManagerPluginFactory)

add_test_properties(TestFWCorePluginManagerPluginFactory_CTest)

set_target_properties(TestFWCorePluginManagerPluginFactory PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS TestFWCorePluginManagerPluginFactory)

add_dependencies( TestFWCorePluginManagerPluginFactory ALL_PLUGINS)

target_include_directories(TestFWCorePluginManagerPluginFactory PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestFWCorePluginManagerPluginFactory PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${CPPUNIT_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(TestFWCorePluginManagerPluginFactory PUBLIC
FWCorePluginManager
Threads::Threads
cppunit
crypt
dl
nsl
rt
)


add_library(TestFWCorePluginManagerDummyFactory SHARED ${TestFWCorePluginManagerDummyFactory_EXTRA_SOURCES}
  DummyFactory.cc
)

set_target_properties(TestFWCorePluginManagerDummyFactory PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_TESTLIBS TestFWCorePluginManagerDummyFactory)

target_include_directories(TestFWCorePluginManagerDummyFactory PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestFWCorePluginManagerDummyFactory PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(TestFWCorePluginManagerDummyFactory PUBLIC
FWCorePluginManager
)


install( TARGETS TestFWCorePluginManagerDummyFactory DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

add_library(TestFWCorePluginManagerDummyPlugins SHARED ${TestFWCorePluginManagerDummyPlugins_EXTRA_SOURCES}
  OneDummy.cc
  TwoDummy.cc
)

set_target_properties(TestFWCorePluginManagerDummyPlugins PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_TESTLIBS TestFWCorePluginManagerDummyPlugins)

set_target_properties(TestFWCorePluginManagerDummyPlugins PROPERTIES PREFIX "plugin")

add_dependencies( ALL_PLUGINS TestFWCorePluginManagerDummyPlugins)

edm_write_config( TestFWCorePluginManagerDummyPlugins FWCore/PluginManager)

target_include_directories(TestFWCorePluginManagerDummyPlugins PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestFWCorePluginManagerDummyPlugins PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(TestFWCorePluginManagerDummyPlugins PUBLIC
FWCorePluginManager
TestFWCorePluginManagerDummyFactory
)


add_python_rules(FWCore/PluginManager/test/)

add_script_rules(FWCore/PluginManager/test/)

install( TARGETS TestFWCorePluginManagerDummyPlugins DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

