add_subdirectory(Output)
add_subdirectory(Input)
add_subdirectory(Streamer)
add_subdirectory(TFileAdaptor)
add_subdirectory(Common)


# Meta-target that builds everything in this subsystem
add_custom_target(IOPool_all)
add_dependencies(IOPool_all
  IOPoolTFileAdaptor
)
