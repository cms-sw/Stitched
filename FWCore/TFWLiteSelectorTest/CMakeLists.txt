reflex_dictionary(FWCoreTFWLiteSelectorTest src/classes.h src/classes_def.xml)
add_library(FWCoreTFWLiteSelectorTest SHARED 
  src/ThingsTSelector.cc
  src/ThingsTSelector2.cc
  FWCoreTFWLiteSelectorTestDict.cpp
)

add_dependencies(FWCoreTFWLiteSelectorTest FWCoreTFWLiteSelectorTestDict)
target_include_directories(FWCoreTFWLiteSelectorTest PUBLIC ${Boost_INCLUDE_DIR})
target_include_directories(FWCoreTFWLiteSelectorTest PUBLIC ${ROOT_INCLUDE_DIR})
target_link_libraries(FWCoreTFWLiteSelectorTest PUBLIC
  Core
  Matrix
  Thread
  RIO
  Gpad
  FWCoreTFWLiteSelector
  Tree
  Hist
  Postscript
  MathCore
  TreePlayer
  Net
  DataFormatsCommon
  Graf
  Graf3d
)

install( TARGETS FWCoreTFWLiteSelectorTest EXPORT FWCoreTFWLiteSelectorTest DESTINATION  lib )

