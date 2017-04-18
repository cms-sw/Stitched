include_directories(${CMAKE_SOURCE_DIR})
include_directories(/usr/include/)
add_subdirectory(bin)
add_library(IOPoolCommon SHARED 
  src/RootServiceChecker.cc
)

target_include_directories(IOPoolCommon PUBLIC ${PYTHON_INCLUDE_DIR})
include_directories(IOPoolCommon PUBLIC ${PYTHON_INCLUDE_DIR})
target_include_directories(IOPoolCommon PUBLIC ${MD5_INCLUDE_DIR})
include_directories(IOPoolCommon PUBLIC ${MD5_INCLUDE_DIR})
target_include_directories(IOPoolCommon PUBLIC ${Boost_INCLUDE_DIR}/python)
include_directories(IOPoolCommon PUBLIC ${Boost_INCLUDE_DIR}/python)
target_include_directories(IOPoolCommon PUBLIC ${Boost_INCLUDE_DIR})
include_directories(IOPoolCommon PUBLIC ${Boost_INCLUDE_DIR})
target_include_directories(IOPoolCommon PUBLIC ${TBB_INCLUDE_DIRS})
include_directories(IOPoolCommon PUBLIC ${TBB_INCLUDE_DIRS})
target_include_directories(IOPoolCommon PUBLIC ${ROOT_INCLUDE_DIR})
include_directories(IOPoolCommon PUBLIC ${ROOT_INCLUDE_DIR})
target_link_libraries(IOPoolCommon PUBLIC
  FWCoreServiceRegistry
  FWCoreUtilities
)

install( TARGETS IOPoolCommon EXPORT IOPoolCommon DESTINATION  lib )

