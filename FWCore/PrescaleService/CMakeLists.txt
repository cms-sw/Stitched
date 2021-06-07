add_subdirectory(plugins)

add_library(FWCorePrescaleService SHARED ${FWCorePrescaleService_EXTRA_SOURCES}
  src/PrescaleService.cc
)

set_target_properties(FWCorePrescaleService PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_LIBS FWCorePrescaleService)

target_include_directories(FWCorePrescaleService PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(FWCorePrescaleService PUBLIC
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

target_link_libraries(FWCorePrescaleService PUBLIC
DataFormatsProvenance
FWCoreParameterSet
FWCoreServiceRegistry
FWCoreUtilities
)


add_python_rules(FWCore/PrescaleService)

add_script_rules(FWCore/PrescaleService)

install( TARGETS FWCorePrescaleService DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

