add_executable(edmPluginDump
  dump.cc
)

target_include_directories(edmPluginDump PUBLIC ${Boost_INCLUDE_DIR})
include_directories(edmPluginDump PUBLIC ${Boost_INCLUDE_DIR})
target_include_directories(edmPluginDump PUBLIC ${TBB_INCLUDE_DIRS})
include_directories(edmPluginDump PUBLIC ${TBB_INCLUDE_DIRS})
target_include_directories(edmPluginDump PUBLIC ${ROOT_INCLUDE_DIR})
include_directories(edmPluginDump PUBLIC ${ROOT_INCLUDE_DIR})
target_include_directories(edmPluginDump PUBLIC ${MD5_INCLUDE_DIR})
include_directories(edmPluginDump PUBLIC ${MD5_INCLUDE_DIR})
target_link_libraries(edmPluginDump PUBLIC
  ${Boost_REGEX_LIBRARY_RELEASE}
  dl
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  FWCorePluginManager
  ${PYTHON_LIBRARY}
)

install( TARGETS edmPluginDump EXPORT edmPluginDump DESTINATION  bin )

add_executable(edmPluginRefresh
  refresh.cc
)

target_include_directories(edmPluginRefresh PUBLIC ${Boost_INCLUDE_DIR})
include_directories(edmPluginRefresh PUBLIC ${Boost_INCLUDE_DIR})
target_link_libraries(edmPluginRefresh PUBLIC
  ${Boost_REGEX_LIBRARY_RELEASE}
  dl
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  FWCorePluginManager
  ${PYTHON_LIBRARY}
)

install( TARGETS edmPluginRefresh EXPORT edmPluginRefresh DESTINATION  bin )

