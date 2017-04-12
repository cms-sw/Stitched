add_library(FWCoreMessageServicePlugins SHARED 
  Module.cc
)

target_link_libraries(FWCoreMessageServicePlugins PUBLIC
  FWCoreMessageService
)

install( TARGETS FWCoreMessageServicePlugins EXPORT FWCoreMessageServicePlugins DESTINATION  lib )

