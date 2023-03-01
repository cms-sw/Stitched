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

cms_rootdict(DataFormatsWrappedStdDictionaries src/classes.h src/classes_def.xml)

add_rootdict_rules(DataFormatsWrappedStdDictionaries)

add_library(DataFormatsWrappedStdDictionaries SHARED ${DataFormatsWrappedStdDictionaries_EXTRA_SOURCES})

set_target_properties(DataFormatsWrappedStdDictionaries PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

 add_dependencies( ALL_LIBS DataFormatsWrappedStdDictionaries)

install( TARGETS DataFormatsWrappedStdDictionaries DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

