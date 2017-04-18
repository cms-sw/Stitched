add_executable(edmConfigHash
  edmConfigHash.cpp
)

target_include_directories(edmConfigHash PUBLIC ${Boost_INCLUDE_DIR})
include_directories(edmConfigHash PUBLIC ${Boost_INCLUDE_DIR})
target_link_libraries(edmConfigHash PUBLIC
  ${Boost_REGEX_LIBRARY_RELEASE}
  dl
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  FWCoreParameterSet
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  FWCorePythonParameterSet
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  ${PYTHON_LIBRARY}
)

install( TARGETS edmConfigHash EXPORT edmConfigHash DESTINATION  bin )

add_executable(edmParameterSetDump
  edmParameterSetDump.cpp
)

target_include_directories(edmParameterSetDump PUBLIC ${Boost_INCLUDE_DIR})
include_directories(edmParameterSetDump PUBLIC ${Boost_INCLUDE_DIR})
target_link_libraries(edmParameterSetDump PUBLIC
  ${Boost_REGEX_LIBRARY_RELEASE}
  dl
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  FWCoreParameterSet
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  FWCorePythonParameterSet
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  ${PYTHON_LIBRARY}
)

install( TARGETS edmParameterSetDump EXPORT edmParameterSetDump DESTINATION  bin )

