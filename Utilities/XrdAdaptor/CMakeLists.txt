add_subdirectory(plugins)
add_library(UtilitiesXrdAdaptor SHARED 
  src/QualityMetric.cc
  src/XrdFile.cc
  src/XrdRequest.cc
  src/XrdRequestManager.cc
  src/XrdSource.cc
  src/XrdStatistics.cc
)

target_include_directories(UtilitiesXrdAdaptor PRIVATE ${CMAKE_SOURCE_DIR})
target_include_directories(UtilitiesXrdAdaptor PUBLIC
 ${Boost_INCLUDE_DIR}
 ${Boost_INCLUDE_DIR}/python
 ${MD5_INCLUDE_DIR}
 ${OPENSSL_INCLUDE_DIR}
 ${Python2_INCLUDE_DIRS}
 ${ROOT_INCLUDE_DIR}
 ${TBB_INCLUDE_DIRS}
 ${TINYXML2_INCLUDE_DIR}
 ${UUID_INCLUDE_DIR}
 ${XROOTD_INCLUDE_DIR}
 ${XROOTD_INCLUDE_DIR}/xrootd
)
add_compile_options("-D_FILE_OFFSET_BITS=64 -D_LARGEFILE_SOURCE -D_LARGEFILE64_SOURCE -D_FILE_OFFSET_BITS=64")
target_link_libraries(UtilitiesXrdAdaptor PUBLIC
  FWCoreMessageLogger
  FWCoreUtilities
  UtilitiesStorageFactory
  XrdClient
  XrdUtils
)

install( TARGETS UtilitiesXrdAdaptor DESTINATION  lib  EXPORT stitched::UtilitiesXrdAdaptor)
