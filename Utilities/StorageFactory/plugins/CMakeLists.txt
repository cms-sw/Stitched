add_library(UtilitiesStorageFactoryPlugins SHARED 
  GsiFTPStorageMaker.cc
  HttpStorageMaker.cc
  LocalStorageMaker.cc
  StormStorageMaker.cc
  StormLCGStorageMaker.cc
  StatisticsSenderServiceMaker.cc
)

target_include_directories(UtilitiesStorageFactoryPlugins PUBLIC ${Boost_INCLUDE_DIR})
include_directories(UtilitiesStorageFactoryPlugins PUBLIC ${Boost_INCLUDE_DIR})
target_include_directories(UtilitiesStorageFactoryPlugins PUBLIC ${TBB_INCLUDE_DIRS})
include_directories(UtilitiesStorageFactoryPlugins PUBLIC ${TBB_INCLUDE_DIRS})
target_link_libraries(UtilitiesStorageFactoryPlugins PUBLIC
  UtilitiesStorageFactory
)

install( TARGETS UtilitiesStorageFactoryPlugins EXPORT UtilitiesStorageFactoryPlugins DESTINATION  lib )

