add_library(IOPoolOutputPlugins SHARED 
  Module.cc
)

target_include_directories(IOPoolOutputPlugins PUBLIC ${PYTHON_INCLUDE_DIR})
target_include_directories(IOPoolOutputPlugins PUBLIC ${Boost_INCLUDE_DIR}/python)
target_include_directories(IOPoolOutputPlugins PUBLIC ${Boost_INCLUDE_DIR})
target_include_directories(IOPoolOutputPlugins PUBLIC ${TBB_INCLUDE_DIRS})
target_include_directories(IOPoolOutputPlugins PUBLIC ${ROOT_INCLUDE_DIR})
target_link_libraries(IOPoolOutputPlugins PUBLIC
  IOPoolOutput
)

install( TARGETS IOPoolOutputPlugins EXPORT IOPoolOutputPlugins DESTINATION  lib )

