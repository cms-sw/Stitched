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
target_include_directories(IOMCRandomEngine PUBLIC ${Boost_INCLUDE_DIR}/python)
target_include_directories(IOMCRandomEngine PUBLIC ${TINYXML_INCLUDE_DIR})
target_include_directories(IOMCRandomEngine PUBLIC ${Boost_INCLUDE_DIR})
target_include_directories(IOMCRandomEngine PUBLIC ${MD5_INCLUDE_DIR})
target_include_directories(IOMCRandomEngine PUBLIC ${CLHEP_INCLUDE_DIR})
target_include_directories(IOMCRandomEngine PUBLIC ${TBB_INCLUDE_DIRS})
target_include_directories(IOMCRandomEngine PUBLIC ${ROOT_INCLUDE_DIR})
target_link_libraries(IOMCRandomEngine PUBLIC
  FWCoreParameterSet
  Thread
  FWCoreMessageLogger
  FWCoreFramework
  Tree
  ${GSL}
  MathMore
  MathCore
  FWCoreServiceRegistry
  Net
  DataFormatsProvenance
  SimDataFormatsRandomEngine
  Core
  GenVector
  ${CLHEP_MAIN_LIBRARY}
  FWCoreUtilities
  RIO
)

install( TARGETS IOMCRandomEngine EXPORT IOMCRandomEngine DESTINATION  lib )

