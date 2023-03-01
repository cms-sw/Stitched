add_executable(cmsGetFnConnect
  cmsGetFnConnect.cc
)

set_target_properties( cmsGetFnConnect PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

add_dependencies( ALL_BINS cmsGetFnConnect)

target_include_directories(cmsGetFnConnect PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(cmsGetFnConnect PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CLHEP_INCLUDE_DIR}
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(cmsGetFnConnect PUBLIC
FWCoreCatalog
FWCoreParameterSet
FWCoreServiceRegistry
FWCoreServices
FWCoreUtilities
)


add_python_rules(FWCore/Services/bin/)

add_script_rules(FWCore/Services/bin/)

install( TARGETS cmsGetFnConnect DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_BINDIR}  EXPORT stitched::)

