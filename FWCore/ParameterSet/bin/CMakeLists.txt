add_executable(edmPluginHelp
  edmPluginHelp.cpp
)

target_include_directories(edmPluginHelp PUBLIC ${MD5_INCLUDE_DIR})
include_directories(edmPluginHelp PUBLIC ${MD5_INCLUDE_DIR})
target_include_directories(edmPluginHelp PUBLIC ${Boost_INCLUDE_DIR})
include_directories(edmPluginHelp PUBLIC ${Boost_INCLUDE_DIR})
target_include_directories(edmPluginHelp PUBLIC ${TBB_INCLUDE_DIRS})
include_directories(edmPluginHelp PUBLIC ${TBB_INCLUDE_DIRS})
target_include_directories(edmPluginHelp PUBLIC ${ROOT_INCLUDE_DIR})
include_directories(edmPluginHelp PUBLIC ${ROOT_INCLUDE_DIR})
target_link_libraries(edmPluginHelp PUBLIC
  FWCoreParameterSet
  dl
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  ${Boost_REGEX_LIBRARY_RELEASE}
  FWCoreUtilities
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  FWCorePluginManager
  ${PYTHON_LIBRARY}
)

install( TARGETS edmPluginHelp EXPORT edmPluginHelp DESTINATION  bin )

add_executable(edmWriteConfigs
  edmWriteConfigs.cpp
)

target_include_directories(edmWriteConfigs PUBLIC ${Boost_INCLUDE_DIR})
include_directories(edmWriteConfigs PUBLIC ${Boost_INCLUDE_DIR})
target_link_libraries(edmWriteConfigs PUBLIC
  FWCoreParameterSet
  dl
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  ${Boost_REGEX_LIBRARY_RELEASE}
  FWCoreUtilities
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  FWCorePluginManager
  ${PYTHON_LIBRARY}
)

install( TARGETS edmWriteConfigs EXPORT edmWriteConfigs DESTINATION  bin )

