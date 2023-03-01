add_subdirectory(bin)
if(BUILDTEST)
  add_subdirectory(test)
endif()

add_subdirectory(plugins)

add_library(FWCoreIntegration SHARED ${FWCoreIntegration_EXTRA_SOURCES}
  src/ESTestData.cc
  src/ESTestRecords.cc
)

set_target_properties(FWCoreIntegration PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_LIBS FWCoreIntegration)

target_include_directories(FWCoreIntegration PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(FWCoreIntegration PUBLIC
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

target_link_libraries(FWCoreIntegration PUBLIC
FWCoreFramework
FWCoreUtilities
)


add_python_rules(FWCore/Integration)

add_script_rules(FWCore/Integration)

install( TARGETS FWCoreIntegration DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

