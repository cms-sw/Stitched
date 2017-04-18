include_directories(${CMAKE_SOURCE_DIR})
include_directories(/usr/include/)
add_subdirectory(plugins)
add_library(IOPoolOutput SHARED 
  src/RootOutputFile.cc
  src/PoolOutputModule.cc
  src/TimeoutPoolOutputModule.cc
  src/RootOutputTree.cc
)

target_include_directories(IOPoolOutput PUBLIC ${PYTHON_INCLUDE_DIR})
include_directories(IOPoolOutput PUBLIC ${PYTHON_INCLUDE_DIR})
target_include_directories(IOPoolOutput PUBLIC ${Boost_INCLUDE_DIR}/python)
include_directories(IOPoolOutput PUBLIC ${Boost_INCLUDE_DIR}/python)
target_include_directories(IOPoolOutput PUBLIC ${Boost_INCLUDE_DIR})
include_directories(IOPoolOutput PUBLIC ${Boost_INCLUDE_DIR})
target_include_directories(IOPoolOutput PUBLIC ${TBB_INCLUDE_DIRS})
include_directories(IOPoolOutput PUBLIC ${TBB_INCLUDE_DIRS})
target_include_directories(IOPoolOutput PUBLIC ${ROOT_INCLUDE_DIR})
include_directories(IOPoolOutput PUBLIC ${ROOT_INCLUDE_DIR})
target_link_libraries(IOPoolOutput PUBLIC
  Core
  FWCoreVersion
  Thread
  FWCoreParameterSet
  DataFormatsCommon
  FWCoreFramework
  Tree
  FWCoreUtilities
  RIO
  MathCore
  IOPoolCommon
  Net
  DataFormatsProvenance
  FWCoreMessageLogger
  FWCoreServiceRegistry
)

install( TARGETS IOPoolOutput EXPORT IOPoolOutput DESTINATION  lib )

