add_library(FWCoreVersion SHARED 
  src/GetReleaseVersion.cc
  src/GetFileFormatVersion.cc
)


install( TARGETS FWCoreVersion EXPORT FWCoreVersion DESTINATION  lib )

