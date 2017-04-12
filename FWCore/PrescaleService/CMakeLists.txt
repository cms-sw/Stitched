add_subdirectory(plugins)
add_library(FWCorePrescaleService SHARED 
  src/PrescaleService.cc
)

target_link_libraries(FWCorePrescaleService PUBLIC
  FWCoreParameterSet
  FWCoreMessageLogger
  DataFormatsProvenance
  FWCoreUtilities
)

install( TARGETS FWCorePrescaleService EXPORT FWCorePrescaleService DESTINATION  lib )

