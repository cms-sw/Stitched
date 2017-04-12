add_executable(cmsRunGlibC
  cmsRun.cpp
)

target_include_directories(cmsRunGlibC PUBLIC ${PYTHON_INCLUDE_DIR})
target_include_directories(cmsRunGlibC PUBLIC ${Boost_INCLUDE_DIR}/python)
target_include_directories(cmsRunGlibC PUBLIC ${TINYXML_INCLUDE_DIR})
target_include_directories(cmsRunGlibC PUBLIC ${Boost_INCLUDE_DIR})
target_include_directories(cmsRunGlibC PUBLIC ${MD5_INCLUDE_DIR})
target_include_directories(cmsRunGlibC PUBLIC ${TBB_INCLUDE_DIRS})
target_include_directories(cmsRunGlibC PUBLIC ${ROOT_INCLUDE_DIR})
target_link_libraries(cmsRunGlibC PUBLIC
  ${Boost_REGEX_LIBRARY_RELEASE}
  dl
  Matrix
  Thread
  FWCoreParameterSet
  FWCoreMessageLogger
  FWCoreFramework
  Tree
  Hist
  ${Boost_THREAD_LIBRARY_RELEASE}
  MathCore
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  FWCoreServiceRegistry
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  Net
  ${PYTHON_LIBRARY}
  Core
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  FWCoreUtilities
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  RIO
  FWCorePythonParameterSet
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  FWCorePluginManager
  ${TBB_LIBRARIES}
)

install( TARGETS cmsRunGlibC EXPORT cmsRunGlibC DESTINATION  bin )

add_executable(cmsRunTC
  cmsRun.cpp
)

target_include_directories(cmsRunTC PUBLIC ${PYTHON_INCLUDE_DIR})
target_include_directories(cmsRunTC PUBLIC ${Boost_INCLUDE_DIR}/python)
target_include_directories(cmsRunTC PUBLIC ${Boost_INCLUDE_DIR})
target_include_directories(cmsRunTC PUBLIC ${TBB_INCLUDE_DIRS})
target_link_libraries(cmsRunTC PUBLIC
  ${Boost_REGEX_LIBRARY_RELEASE}
  dl
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  FWCoreParameterSet
  FWCoreUtilities
  FWCoreMessageLogger
  FWCoreFramework
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  FWCoreServiceRegistry
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  FWCorePluginManager
  ${TBB_LIBRARIES}
  ${PYTHON_LIBRARY}
  FWCorePythonParameterSet
)

install( TARGETS cmsRunTC EXPORT cmsRunTC DESTINATION  bin )

add_executable(cmsRun
  cmsRun.cpp
)

target_include_directories(cmsRun PUBLIC ${PYTHON_INCLUDE_DIR})
target_include_directories(cmsRun PUBLIC ${Boost_INCLUDE_DIR}/python)
target_include_directories(cmsRun PUBLIC ${TINYXML_INCLUDE_DIR})
target_include_directories(cmsRun PUBLIC ${Boost_INCLUDE_DIR})
target_include_directories(cmsRun PUBLIC ${MD5_INCLUDE_DIR})
target_include_directories(cmsRun PUBLIC ${TBB_INCLUDE_DIRS})
target_include_directories(cmsRun PUBLIC ${ROOT_INCLUDE_DIR})
target_link_libraries(cmsRun PUBLIC
  ${Boost_REGEX_LIBRARY_RELEASE}
  dl
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  FWCoreParameterSet
  FWCoreMessageLogger
  FWCoreFramework
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  FWCoreServiceRegistry
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  ${PYTHON_LIBRARY}
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  FWCoreUtilities
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  FWCorePythonParameterSet
  FWCorePluginManager
  ${TBB_LIBRARIES}
)

install( TARGETS cmsRun EXPORT cmsRun DESTINATION  bin )

add_executable(cmsRunVDT
  cmsRun.cpp
)

target_include_directories(cmsRunVDT PUBLIC ${PYTHON_INCLUDE_DIR})
target_include_directories(cmsRunVDT PUBLIC ${Boost_INCLUDE_DIR}/python)
target_include_directories(cmsRunVDT PUBLIC ${TINYXML_INCLUDE_DIR})
target_include_directories(cmsRunVDT PUBLIC ${Boost_INCLUDE_DIR})
target_include_directories(cmsRunVDT PUBLIC ${MD5_INCLUDE_DIR})
target_include_directories(cmsRunVDT PUBLIC ${TBB_INCLUDE_DIRS})
target_include_directories(cmsRunVDT PUBLIC ${ROOT_INCLUDE_DIR})
target_link_libraries(cmsRunVDT PUBLIC
  ${Boost_REGEX_LIBRARY_RELEASE}
  dl
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  FWCoreParameterSet
  FWCoreMessageLogger
  FWCoreFramework
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  FWCoreServiceRegistry
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  ${PYTHON_LIBRARY}
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  FWCoreUtilities
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  FWCorePythonParameterSet
  FWCorePluginManager
  ${TBB_LIBRARIES}
)

install( TARGETS cmsRunVDT EXPORT cmsRunVDT DESTINATION  bin )

