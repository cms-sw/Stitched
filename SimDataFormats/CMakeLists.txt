add_subdirectory(RandomEngine)


# Meta-target that builds everything in this subsystem
add_custom_target(SimDataFormats_all)
add_dependencies(SimDataFormats_all
  SimDataFormatsRandomEngine
)
