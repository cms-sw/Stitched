include_directories(${CMAKE_SOURCE_DIR})
include_directories(/usr/include/)
add_subdirectory(bin)
if(BUILDTEST)
add_subdirectory(test)
endif()
add_subdirectory(plugins)
add_library(FWCoreServices SHARED 
  src/SiteLocalConfigService.cc
  src/JobReportService.cc
)

target_include_directories(FWCoreServices PUBLIC ${PYTHON_INCLUDE_DIR})
include_directories(FWCoreServices PUBLIC ${PYTHON_INCLUDE_DIR})
target_include_directories(FWCoreServices PUBLIC ${Boost_INCLUDE_DIR}/python)
include_directories(FWCoreServices PUBLIC ${Boost_INCLUDE_DIR}/python)
target_include_directories(FWCoreServices PUBLIC ${TINYXML_INCLUDE_DIR})
include_directories(FWCoreServices PUBLIC ${TINYXML_INCLUDE_DIR})
target_include_directories(FWCoreServices PUBLIC ${Boost_INCLUDE_DIR})
include_directories(FWCoreServices PUBLIC ${Boost_INCLUDE_DIR})
target_include_directories(FWCoreServices PUBLIC ${MD5_INCLUDE_DIR})
include_directories(FWCoreServices PUBLIC ${MD5_INCLUDE_DIR})
target_include_directories(FWCoreServices PUBLIC ${TBB_INCLUDE_DIRS})
include_directories(FWCoreServices PUBLIC ${TBB_INCLUDE_DIRS})
target_include_directories(FWCoreServices PUBLIC ${ROOT_INCLUDE_DIR})
include_directories(FWCoreServices PUBLIC ${ROOT_INCLUDE_DIR})
target_link_libraries(FWCoreServices PUBLIC
  FWCoreParameterSet
  dl
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  Thread
  ${Boost_REGEX_LIBRARY_RELEASE}
  xerces-c
  DataFormatsCommon
  FWCoreFramework
  Tree
  Hist
  ${Boost_THREAD_LIBRARY_RELEASE}
  MathCore
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  FWCoreServiceRegistry
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  Net
  ${Boost_PYTHON_LIBRARY_RELEASE}
  DataFormatsProvenance
  Matrix
  Core
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${PYTHON_LIBRARY}
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  FWCoreUtilities
  RIO
  DataFormatsStreamer
  FWCoreConcurrency
  FWCorePluginManager
  FWCoreMessageLogger
)

install( TARGETS FWCoreServices EXPORT FWCoreServices DESTINATION  lib )

