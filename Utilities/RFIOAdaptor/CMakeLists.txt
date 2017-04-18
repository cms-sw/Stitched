include_directories(${CMAKE_SOURCE_DIR})
include_directories(/usr/include/)
add_subdirectory(plugins)
add_library(UtilitiesRFIOAdaptor SHARED 
  src/RFIOFile.cc
  src/RFIOPluginFactory.cc
)

target_compile_options(UtilitiesRFIOAdaptor PUBLIC -D_FILE_OFFSET_BITS=64)
target_link_libraries(UtilitiesRFIOAdaptor PUBLIC
  UtilitiesStorageFactory
  FWCorePluginManager
  FWCoreMessageLogger
  FWCoreUtilities
)

install( TARGETS UtilitiesRFIOAdaptor EXPORT UtilitiesRFIOAdaptor DESTINATION  lib )

