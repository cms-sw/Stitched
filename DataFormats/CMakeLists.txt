add_subdirectory(WrappedStdDictionaries)
add_subdirectory(StdDictionaries)
add_subdirectory(FWLite)
add_subdirectory(Streamer)
add_subdirectory(FEDRawData)
add_subdirectory(Provenance)
add_subdirectory(TestObjects)
add_subdirectory(Common)


# Meta-target that builds everything in this subsystem
add_custom_target(DataFormats_all)
add_dependencies(DataFormats_all
  DataFormatsFWLite
  DataFormatsStreamer
  DataFormatsFEDRawData
  DataFormatsProvenance
  DataFormatsTestObjects
  DataFormatsCommon
)
