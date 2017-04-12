add_subdirectory(bin)
if(BUILDTEST)
add_subdirectory(test)
endif()
add_library(FWCorePluginManager SHARED 
  src/SharedLibrary.cc
  src/PluginCapabilities.cc
  src/PluginFactoryBase.cc
  src/ProblemTracker.cc
  src/standard.cc
  src/PresenceFactory.cc
  src/CacheParser.cc
  src/PluginFactoryManager.cc
  src/PluginManager.cc
)

target_include_directories(FWCorePluginManager PUBLIC ${Boost_INCLUDE_DIR})
target_include_directories(FWCorePluginManager PUBLIC ${TBB_INCLUDE_DIRS})
target_include_directories(FWCorePluginManager PUBLIC ${ROOT_INCLUDE_DIR})
target_include_directories(FWCorePluginManager PUBLIC ${MD5_INCLUDE_DIR})
target_link_libraries(FWCorePluginManager PUBLIC
  ${Boost_REGEX_LIBRARY_RELEASE}
  dl
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  FWCoreUtilities
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${PYTHON_LIBRARY}
  ${TBB_LIBRARIES}
)

install( TARGETS FWCorePluginManager EXPORT FWCorePluginManager DESTINATION  lib )

