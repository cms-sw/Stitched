reflex_dictionary(FWCoreCommon src/classes.h src/classes_def.xml)
add_library(FWCoreCommon SHARED 
  src/TriggerNames.cc
  src/RunBase.cc
  src/EventBase.cc
  src/LuminosityBlockBase.cc
  src/Provenance.cc
  src/TriggerResultsByName.cc
  FWCoreCommonDict.cpp
)

add_dependencies(FWCoreCommon FWCoreCommonDict)
target_link_libraries(FWCoreCommon PUBLIC
  FWCoreParameterSet
  DataFormatsProvenance
  FWCoreUtilities
)

install( TARGETS FWCoreCommon EXPORT FWCoreCommon DESTINATION  lib )

