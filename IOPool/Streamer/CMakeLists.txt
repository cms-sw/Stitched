include_directories(${CMAKE_SOURCE_DIR})
include_directories(/usr/include/)
add_subdirectory(plugins)
add_library(IOPoolStreamer SHARED 
  src/StreamerOutputFile.cc
  src/StreamerOutputModuleBase.cc
  src/StreamerFileIO.cc
  src/StreamerInputSource.cc
  src/EventMsgBuilder.cc
  src/StreamerFileWriter.cc
  src/InitMessage.cc
  src/StreamerFileReader.cc
  src/InitMsgBuilder.cc
  src/ClassFiller.cc
  src/StreamerInputFile.cc
  src/FRDEventMessage.cc
  src/DumpTools.cc
  src/StreamSerializer.cc
  src/EventMessage.cc
)

target_include_directories(IOPoolStreamer PUBLIC ${Boost_INCLUDE_DIR})
include_directories(IOPoolStreamer PUBLIC ${Boost_INCLUDE_DIR})
target_include_directories(IOPoolStreamer PUBLIC ${TBB_INCLUDE_DIRS})
include_directories(IOPoolStreamer PUBLIC ${TBB_INCLUDE_DIRS})
target_include_directories(IOPoolStreamer PUBLIC ${ROOT_INCLUDE_DIR})
include_directories(IOPoolStreamer PUBLIC ${ROOT_INCLUDE_DIR})
target_link_libraries(IOPoolStreamer PUBLIC
  Core
  z
  FWCoreVersion
  Thread
  FWCoreParameterSet
  DataFormatsCommon
  FWCoreFramework
  Tree
  FWCoreSources
  RIO
  MathCore
  FWCoreCatalog
  FWCoreServiceRegistry
  DataFormatsStreamer
  UtilitiesStorageFactory
  FWCorePluginManager
  Net
  FWCoreUtilities
  DataFormatsProvenance
)

install( TARGETS IOPoolStreamer EXPORT IOPoolStreamer DESTINATION  lib )

