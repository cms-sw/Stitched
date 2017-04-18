include_directories(${CMAKE_SOURCE_DIR})
include_directories(/usr/include/)
if(BUILDTEST)
add_subdirectory(test)
endif()
add_subdirectory(plugins)
add_library(IOMCRandomEngine SHARED 
  src/RandomFilter.cc
  src/RandomNumberGeneratorService.cc
  src/TRandomAdaptor.cc
  src/RandomEngineStateProducer.cc
)

target_include_directories(IOMCRandomEngine PUBLIC ${PYTHON_INCLUDE_DIR})
include_directories(IOMCRandomEngine PUBLIC ${PYTHON_INCLUDE_DIR})
target_include_directories(IOMCRandomEngine PUBLIC ${Boost_INCLUDE_DIR}/python)
include_directories(IOMCRandomEngine PUBLIC ${Boost_INCLUDE_DIR}/python)
target_include_directories(IOMCRandomEngine PUBLIC ${ROOT_INCLUDE_DIR})
include_directories(IOMCRandomEngine PUBLIC ${ROOT_INCLUDE_DIR})
target_include_directories(IOMCRandomEngine PUBLIC ${Boost_INCLUDE_DIR})
include_directories(IOMCRandomEngine PUBLIC ${Boost_INCLUDE_DIR})
target_include_directories(IOMCRandomEngine PUBLIC ${MD5_INCLUDE_DIR})
include_directories(IOMCRandomEngine PUBLIC ${MD5_INCLUDE_DIR})
target_include_directories(IOMCRandomEngine PUBLIC ${CLHEP_INCLUDE_DIR})
include_directories(IOMCRandomEngine PUBLIC ${CLHEP_INCLUDE_DIR})
target_include_directories(IOMCRandomEngine PUBLIC ${TBB_INCLUDE_DIRS})
include_directories(IOMCRandomEngine PUBLIC ${TBB_INCLUDE_DIRS})
target_include_directories(IOMCRandomEngine PUBLIC ${TINYXML_INCLUDE_DIR})
include_directories(IOMCRandomEngine PUBLIC ${TINYXML_INCLUDE_DIR})
target_link_libraries(IOMCRandomEngine PUBLIC
  FWCoreParameterSet
  GenVector
  ${CLHEP_MAIN_LIBRARY}
  Thread
  Core
  FWCoreMessageLogger
  FWCoreFramework
  Tree
  ${GSL}
  MathMore
  RIO
  MathCore
  FWCoreServiceRegistry
  Net
  FWCoreUtilities
  DataFormatsProvenance
  SimDataFormatsRandomEngine
)

install( TARGETS IOMCRandomEngine EXPORT IOMCRandomEngine DESTINATION  lib )
