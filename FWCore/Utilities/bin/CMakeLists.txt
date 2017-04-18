add_executable(edmToFriendlyClassName
  edmToFriendlyClassName.cc
)

target_include_directories(edmToFriendlyClassName PUBLIC ${ROOT_INCLUDE_DIR})
include_directories(edmToFriendlyClassName PUBLIC ${ROOT_INCLUDE_DIR})
target_include_directories(edmToFriendlyClassName PUBLIC ${Boost_INCLUDE_DIR})
include_directories(edmToFriendlyClassName PUBLIC ${Boost_INCLUDE_DIR})
target_include_directories(edmToFriendlyClassName PUBLIC ${TBB_INCLUDE_DIRS})
include_directories(edmToFriendlyClassName PUBLIC ${TBB_INCLUDE_DIRS})
target_include_directories(edmToFriendlyClassName PUBLIC ${MD5_INCLUDE_DIR})
include_directories(edmToFriendlyClassName PUBLIC ${MD5_INCLUDE_DIR})
target_link_libraries(edmToFriendlyClassName PUBLIC
  FWCoreUtilities
)

install( TARGETS edmToFriendlyClassName EXPORT edmToFriendlyClassName DESTINATION  bin )

add_executable(cms_adler32
  adler32.c
)

target_link_libraries(cms_adler32 PUBLIC
  z
  FWCoreUtilities
)

install( TARGETS cms_adler32 EXPORT cms_adler32 DESTINATION  bin )

