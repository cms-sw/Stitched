add_library(FWCorePrescaleServicePlugin SHARED ${FWCorePrescaleServicePlugin_EXTRA_SOURCES}
  Module.cc
)

set_target_properties(FWCorePrescaleServicePlugin PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_LIBS FWCorePrescaleServicePlugin)

set_target_properties(FWCorePrescaleServicePlugin PROPERTIES PREFIX "plugin")

add_dependencies( ALL_PLUGINS FWCorePrescaleServicePlugin)

edm_write_config( FWCorePrescaleServicePlugin FWCore/PrescaleService)

target_include_directories(FWCorePrescaleServicePlugin PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(FWCorePrescaleServicePlugin PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(FWCorePrescaleServicePlugin PUBLIC
FWCorePrescaleService
FWCoreServiceRegistry
)


add_python_rules(FWCore/PrescaleService/plugins/)

add_script_rules(FWCore/PrescaleService/plugins/)

install( TARGETS FWCorePrescaleServicePlugin DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

