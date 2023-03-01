include_directories(${CMAKE_SOURCE_DIR}
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

cms_rootdict(DataFormatsStreamer src/classes.h src/classes_def.xml)

add_rootdict_rules(DataFormatsStreamer)

add_library(DataFormatsStreamer SHARED ${DataFormatsStreamer_EXTRA_SOURCES}
  src/StreamedProducts.cc
)

set_target_properties(DataFormatsStreamer PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_LIBS DataFormatsStreamer)

target_include_directories(DataFormatsStreamer PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(DataFormatsStreamer PUBLIC
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

target_link_libraries(DataFormatsStreamer PUBLIC
DataFormatsCommon
DataFormatsProvenance
FWCoreUtilities
)


add_python_rules(DataFormats/Streamer)

add_script_rules(DataFormats/Streamer)

install( TARGETS DataFormatsStreamer DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

