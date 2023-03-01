add_library(FWCoreVersion SHARED ${FWCoreVersion_EXTRA_SOURCES}
  src/GetFileFormatVersion.cc
  src/GetReleaseVersion.cc
)

set_target_properties(FWCoreVersion PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_LIBS FWCoreVersion)

target_include_directories(FWCoreVersion PRIVATE ${CMAKE_SOURCE_DIR})


add_python_rules(FWCore/Version)

add_script_rules(FWCore/Version)

install( TARGETS FWCoreVersion DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

