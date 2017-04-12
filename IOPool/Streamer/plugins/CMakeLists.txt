add_library(IOPoolStreamerPlugins SHARED 
  Module.cc
)

target_link_libraries(IOPoolStreamerPlugins PUBLIC
  IOPoolStreamer
  FWCoreFramework
  FWCoreServiceRegistry
)

install( TARGETS IOPoolStreamerPlugins EXPORT IOPoolStreamerPlugins DESTINATION  lib )

