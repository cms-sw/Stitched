add_library(IOMCRandomEnginePlugins SHARED 
  Module.cc
)

target_include_directories(IOMCRandomEnginePlugins PUBLIC ${PYTHON_INCLUDE_DIR})
target_include_directories(IOMCRandomEnginePlugins PUBLIC ${Boost_INCLUDE_DIR}/python)
target_include_directories(IOMCRandomEnginePlugins PUBLIC ${ROOT_INCLUDE_DIR})
target_include_directories(IOMCRandomEnginePlugins PUBLIC ${Boost_INCLUDE_DIR})
target_include_directories(IOMCRandomEnginePlugins PUBLIC ${MD5_INCLUDE_DIR})
target_include_directories(IOMCRandomEnginePlugins PUBLIC ${CLHEP_INCLUDE_DIR})
target_include_directories(IOMCRandomEnginePlugins PUBLIC ${TBB_INCLUDE_DIRS})
target_include_directories(IOMCRandomEnginePlugins PUBLIC ${TINYXML_INCLUDE_DIR})
target_link_libraries(IOMCRandomEnginePlugins PUBLIC
  IOMCRandomEngine
  FWCoreFramework
  FWCoreServiceRegistry
)

install( TARGETS IOMCRandomEnginePlugins EXPORT IOMCRandomEnginePlugins DESTINATION  lib )

