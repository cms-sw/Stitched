include_directories(${CMAKE_SOURCE_DIR})
include_directories(/usr/include/)
add_library(FWCoreIntegration SHARED 
  src/ESTestRecords.cc
  src/ESTestData.cc
)

target_include_directories(FWCoreIntegration PUBLIC ${PYTHON_INCLUDE_DIR})
include_directories(FWCoreIntegration PUBLIC ${PYTHON_INCLUDE_DIR})
target_include_directories(FWCoreIntegration PUBLIC ${Boost_INCLUDE_DIR}/python)
include_directories(FWCoreIntegration PUBLIC ${Boost_INCLUDE_DIR}/python)
target_include_directories(FWCoreIntegration PUBLIC ${Boost_INCLUDE_DIR})
include_directories(FWCoreIntegration PUBLIC ${Boost_INCLUDE_DIR})
target_include_directories(FWCoreIntegration PUBLIC ${MD5_INCLUDE_DIR})
include_directories(FWCoreIntegration PUBLIC ${MD5_INCLUDE_DIR})
target_include_directories(FWCoreIntegration PUBLIC ${TBB_INCLUDE_DIRS})
include_directories(FWCoreIntegration PUBLIC ${TBB_INCLUDE_DIRS})
target_include_directories(FWCoreIntegration PUBLIC ${ROOT_INCLUDE_DIR})
include_directories(FWCoreIntegration PUBLIC ${ROOT_INCLUDE_DIR})
target_link_libraries(FWCoreIntegration PUBLIC
  FWCoreFramework
  FWCoreUtilities
)

install( TARGETS FWCoreIntegration EXPORT FWCoreIntegration DESTINATION  lib )

