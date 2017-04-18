include_directories(${CMAKE_SOURCE_DIR})
include_directories(/usr/include/)
if(BUILDTEST)
add_subdirectory(test)
endif()
reflex_dictionary(FWCoreTFWLiteSelector src/classes.h src/classes_def.xml)
add_library(FWCoreTFWLiteSelector SHARED 
  src/TFWLiteSelectorBasic.cc
  FWCoreTFWLiteSelectorDict.cpp
)

add_dependencies(FWCoreTFWLiteSelector FWCoreTFWLiteSelectorDict)
target_include_directories(FWCoreTFWLiteSelector PUBLIC ${Boost_INCLUDE_DIR})
include_directories(FWCoreTFWLiteSelector PUBLIC ${Boost_INCLUDE_DIR})
target_include_directories(FWCoreTFWLiteSelector PUBLIC ${ROOT_INCLUDE_DIR})
include_directories(FWCoreTFWLiteSelector PUBLIC ${ROOT_INCLUDE_DIR})
target_link_libraries(FWCoreTFWLiteSelector PUBLIC
  FWCoreParameterSet
  Thread
  Core
  DataFormatsCommon
  FWCoreFramework
  Tree
  FWCoreUtilities
  RIO
  MathCore
  Net
  DataFormatsProvenance
)

install( TARGETS FWCoreTFWLiteSelector EXPORT FWCoreTFWLiteSelector DESTINATION  lib )
