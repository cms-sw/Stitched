add_executable(cmsGetFnConnect
  cmsGetFnConnect.cc
)

target_include_directories(cmsGetFnConnect PUBLIC ${Boost_INCLUDE_DIR}/python)
include_directories(cmsGetFnConnect PUBLIC ${Boost_INCLUDE_DIR}/python)
target_include_directories(cmsGetFnConnect PUBLIC ${PYTHON_INCLUDE_DIR})
include_directories(cmsGetFnConnect PUBLIC ${PYTHON_INCLUDE_DIR})
target_include_directories(cmsGetFnConnect PUBLIC ${Boost_INCLUDE_DIR})
include_directories(cmsGetFnConnect PUBLIC ${Boost_INCLUDE_DIR})
target_include_directories(cmsGetFnConnect PUBLIC ${TBB_INCLUDE_DIRS})
include_directories(cmsGetFnConnect PUBLIC ${TBB_INCLUDE_DIRS})
target_link_libraries(cmsGetFnConnect PUBLIC
  FWCoreParameterSet
  FWCoreCatalog
  FWCoreServiceRegistry
  FWCorePluginManager
  FWCoreServices
  FWCoreUtilities
)

install( TARGETS cmsGetFnConnect EXPORT cmsGetFnConnect DESTINATION  bin )

