if(BUILDTEST)
  add_subdirectory(test)
endif()

add_library(FWCoreCatalog SHARED ${FWCoreCatalog_EXTRA_SOURCES}
  src/FileLocator.cc
  src/InputFileCatalog.cc
)

set_target_properties(FWCoreCatalog PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_LIBS FWCoreCatalog)

target_include_directories(FWCoreCatalog PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(FWCoreCatalog PUBLIC
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

target_link_libraries(FWCoreCatalog PUBLIC
${TINYXML2_LIBRARY}
FWCoreServiceRegistry
FWCoreUtilities
Threads::Threads
crypt
dl
nsl
rt
)


add_python_rules(FWCore/Catalog)

add_script_rules(FWCore/Catalog)

install( TARGETS FWCoreCatalog DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

