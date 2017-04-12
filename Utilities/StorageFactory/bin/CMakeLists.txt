add_executable(cms_anycp
  anycp.cpp
)

target_include_directories(cms_anycp PUBLIC ${Boost_INCLUDE_DIR})
target_include_directories(cms_anycp PUBLIC ${TBB_INCLUDE_DIRS})
target_link_libraries(cms_anycp PUBLIC
  UtilitiesStorageFactory
)

install( TARGETS cms_anycp EXPORT cms_anycp DESTINATION  bin )

