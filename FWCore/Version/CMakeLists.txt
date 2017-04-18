include_directories(${CMAKE_SOURCE_DIR})
include_directories(/usr/include/)
add_library(FWCoreVersion SHARED 
  src/GetReleaseVersion.cc
  src/GetFileFormatVersion.cc
)


install( TARGETS FWCoreVersion EXPORT FWCoreVersion DESTINATION  lib )

