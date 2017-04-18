include_directories(${CMAKE_SOURCE_DIR})
include_directories(/usr/include/)
if(BUILDTEST)
add_subdirectory(test)
endif()
reflex_dictionary(DataFormatsTestObjects src/classes.h src/classes_def.xml)
add_library(DataFormatsTestObjects SHARED 
  src/ToyProducts.cc
  src/DeleteEarly.cc
  src/ThingWithMerge.cc
  src/ThingWithIsEqual.cc
  src/StreamTestThing.cc
  DataFormatsTestObjectsDict.cpp
)

add_dependencies(DataFormatsTestObjects DataFormatsTestObjectsDict)
target_include_directories(DataFormatsTestObjects PUBLIC ${Boost_INCLUDE_DIR})
include_directories(DataFormatsTestObjects PUBLIC ${Boost_INCLUDE_DIR})
target_include_directories(DataFormatsTestObjects PUBLIC ${ROOT_INCLUDE_DIR})
include_directories(DataFormatsTestObjects PUBLIC ${ROOT_INCLUDE_DIR})
target_link_libraries(DataFormatsTestObjects PUBLIC
  DataFormatsCommon
)

install( TARGETS DataFormatsTestObjects EXPORT DataFormatsTestObjects DESTINATION  lib )

