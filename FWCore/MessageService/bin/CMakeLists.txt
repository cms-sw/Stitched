add_executable(Standalone
  Standalone.cpp
)

target_include_directories(Standalone PUBLIC ${PYTHON_INCLUDE_DIR})
include_directories(Standalone PUBLIC ${PYTHON_INCLUDE_DIR})
target_include_directories(Standalone PUBLIC ${Boost_INCLUDE_DIR}/python)
include_directories(Standalone PUBLIC ${Boost_INCLUDE_DIR}/python)
target_include_directories(Standalone PUBLIC ${ROOT_INCLUDE_DIR})
include_directories(Standalone PUBLIC ${ROOT_INCLUDE_DIR})
target_include_directories(Standalone PUBLIC ${Boost_INCLUDE_DIR})
include_directories(Standalone PUBLIC ${Boost_INCLUDE_DIR})
target_include_directories(Standalone PUBLIC ${MD5_INCLUDE_DIR})
include_directories(Standalone PUBLIC ${MD5_INCLUDE_DIR})
target_include_directories(Standalone PUBLIC ${TBB_INCLUDE_DIRS})
include_directories(Standalone PUBLIC ${TBB_INCLUDE_DIRS})
target_include_directories(Standalone PUBLIC ${TINYXML_INCLUDE_DIR})
include_directories(Standalone PUBLIC ${TINYXML_INCLUDE_DIR})
target_link_libraries(Standalone PUBLIC
  ${Boost_REGEX_LIBRARY_RELEASE}
  dl
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  FWCoreMessageService
  FWCoreUtilities
  FWCoreMessageLogger
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  FWCorePythonParameterSet
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  FWCorePluginManager
  ${PYTHON_LIBRARY}
  FWCoreServiceRegistry
)

install( TARGETS Standalone EXPORT Standalone DESTINATION  bin )
