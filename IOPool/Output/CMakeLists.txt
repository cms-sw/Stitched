add_subdirectory(plugins)
add_library(IOPoolOutput SHARED 
  src/RootOutputFile.cc
  src/PoolOutputModule.cc
  src/TimeoutPoolOutputModule.cc
  src/RootOutputTree.cc
)

target_include_directories(IOPoolOutput PUBLIC ${PYTHON_INCLUDE_DIR})
target_include_directories(IOPoolOutput PUBLIC ${Boost_INCLUDE_DIR}/python)
target_include_directories(IOPoolOutput PUBLIC ${Boost_INCLUDE_DIR})
target_include_directories(IOPoolOutput PUBLIC ${TBB_INCLUDE_DIRS})
target_include_directories(IOPoolOutput PUBLIC ${ROOT_INCLUDE_DIR})
target_link_libraries(IOPoolOutput PUBLIC
  FWCoreParameterSet
  FWCoreVersion
  Thread
  Core
  FWCoreMessageLogger
  FWCoreFramework
  Tree
  FWCoreUtilities
  RIO
  MathCore
  FWCoreServiceRegistry
  Net
  DataFormatsProvenance
  DataFormatsCommon
  IOPoolCommon
)

install( TARGETS IOPoolOutput EXPORT IOPoolOutput DESTINATION  lib )

