add_library(FWCorePrescaleServicePlugin SHARED 
  Module.cc
)

target_link_libraries(FWCorePrescaleServicePlugin PUBLIC
  FWCoreServiceRegistry
  FWCorePrescaleService
)

install( TARGETS FWCorePrescaleServicePlugin EXPORT FWCorePrescaleServicePlugin DESTINATION  lib )

