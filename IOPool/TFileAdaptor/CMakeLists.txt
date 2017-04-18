include_directories(${CMAKE_SOURCE_DIR})
include_directories(/usr/include/)
if(BUILDTEST)
add_subdirectory(test)
endif()
reflex_dictionary(IOPoolTFileAdaptor src/classes.h src/classes_def.xml)
add_library(IOPoolTFileAdaptor SHARED 
  src/ReadRepacker.cc
  src/TFileAdaptor.cc
  src/TStorageFactoryFile.cc
  src/TStorageFactorySystem.cc
  IOPoolTFileAdaptorDict.cpp
)

add_dependencies(IOPoolTFileAdaptor IOPoolTFileAdaptorDict)
target_include_directories(IOPoolTFileAdaptor PUBLIC ${ROOT_INCLUDE_DIR})
include_directories(IOPoolTFileAdaptor PUBLIC ${ROOT_INCLUDE_DIR})
target_link_libraries(IOPoolTFileAdaptor PUBLIC
  FWCoreParameterSet
  Thread
  Core
  FWCoreMessageLogger
  Tree
  RIO
  MathCore
  FWCoreCatalog
  FWCoreServiceRegistry
  UtilitiesStorageFactory
  Net
)

install( TARGETS IOPoolTFileAdaptor EXPORT IOPoolTFileAdaptor DESTINATION  lib )

