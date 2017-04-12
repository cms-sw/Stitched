add_executable(TestFWCorePluginManagerPluginFactoryManager
  pluginfactorymanager_t.cc
)

target_include_directories(TestFWCorePluginManagerPluginFactoryManager PUBLIC ${CPPUNIT_INCLUDE_DIR})
target_include_directories(TestFWCorePluginManagerPluginFactoryManager PUBLIC ${Boost_INCLUDE_DIR})
target_link_libraries(TestFWCorePluginManagerPluginFactoryManager PUBLIC
  ${Boost_REGEX_LIBRARY_RELEASE}
  dl
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${CPPUNIT_LIBRARY}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  FWCorePluginManager
  ${PYTHON_LIBRARY}
)

install( TARGETS TestFWCorePluginManagerPluginFactoryManager EXPORT TestFWCorePluginManagerPluginFactoryManager DESTINATION  bin )

add_executable(TestFWCorePluginManagerPluginManager
  pluginmanager_t.cc
)

target_include_directories(TestFWCorePluginManagerPluginManager PUBLIC ${CPPUNIT_INCLUDE_DIR})
target_include_directories(TestFWCorePluginManagerPluginManager PUBLIC ${Boost_INCLUDE_DIR})
target_include_directories(TestFWCorePluginManagerPluginManager PUBLIC ${TBB_INCLUDE_DIRS})
target_include_directories(TestFWCorePluginManagerPluginManager PUBLIC ${ROOT_INCLUDE_DIR})
target_include_directories(TestFWCorePluginManagerPluginManager PUBLIC ${MD5_INCLUDE_DIR})
target_link_libraries(TestFWCorePluginManagerPluginManager PUBLIC
  ${Boost_REGEX_LIBRARY_RELEASE}
  dl
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${CPPUNIT_LIBRARY}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  TestFWCorePluginManagerDummyFactory
  FWCorePluginManager
  ${PYTHON_LIBRARY}
)

install( TARGETS TestFWCorePluginManagerPluginManager EXPORT TestFWCorePluginManagerPluginManager DESTINATION  bin )

add_executable(TestFWCorePluginManagerCacheParser
  cacheparser_t.cc
)

target_include_directories(TestFWCorePluginManagerCacheParser PUBLIC ${CPPUNIT_INCLUDE_DIR})
target_include_directories(TestFWCorePluginManagerCacheParser PUBLIC ${Boost_INCLUDE_DIR})
target_link_libraries(TestFWCorePluginManagerCacheParser PUBLIC
  ${Boost_REGEX_LIBRARY_RELEASE}
  dl
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${CPPUNIT_LIBRARY}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  FWCorePluginManager
  ${PYTHON_LIBRARY}
)

install( TARGETS TestFWCorePluginManagerCacheParser EXPORT TestFWCorePluginManagerCacheParser DESTINATION  bin )

add_executable(TestFWCorePluginManagerPluginFactory
  pluginfactory_t.cc
)

target_include_directories(TestFWCorePluginManagerPluginFactory PUBLIC ${CPPUNIT_INCLUDE_DIR})
target_include_directories(TestFWCorePluginManagerPluginFactory PUBLIC ${Boost_INCLUDE_DIR})
target_link_libraries(TestFWCorePluginManagerPluginFactory PUBLIC
  ${Boost_REGEX_LIBRARY_RELEASE}
  dl
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${CPPUNIT_LIBRARY}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  FWCorePluginManager
  ${PYTHON_LIBRARY}
)

install( TARGETS TestFWCorePluginManagerPluginFactory EXPORT TestFWCorePluginManagerPluginFactory DESTINATION  bin )

add_library(TestFWCorePluginManagerDummyFactory SHARED 
  DummyFactory.cc
)

target_link_libraries(TestFWCorePluginManagerDummyFactory PUBLIC
  FWCorePluginManager
)

install( TARGETS TestFWCorePluginManagerDummyFactory EXPORT TestFWCorePluginManagerDummyFactory DESTINATION  lib )

add_library(TestFWCorePluginManagerDummyPlugins SHARED 
  OneDummy.cc
  TwoDummy.cc
)

target_include_directories(TestFWCorePluginManagerDummyPlugins PUBLIC ${Boost_INCLUDE_DIR})
target_include_directories(TestFWCorePluginManagerDummyPlugins PUBLIC ${TBB_INCLUDE_DIRS})
target_include_directories(TestFWCorePluginManagerDummyPlugins PUBLIC ${ROOT_INCLUDE_DIR})
target_include_directories(TestFWCorePluginManagerDummyPlugins PUBLIC ${MD5_INCLUDE_DIR})
target_link_libraries(TestFWCorePluginManagerDummyPlugins PUBLIC
  FWCorePluginManager
  TestFWCorePluginManagerDummyFactory
)

install( TARGETS TestFWCorePluginManagerDummyPlugins EXPORT TestFWCorePluginManagerDummyPlugins DESTINATION  lib )

