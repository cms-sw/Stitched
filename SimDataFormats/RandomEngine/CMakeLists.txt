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

cms_rootdict(SimDataFormatsRandomEngine src/classes.h src/classes_def.xml)

add_rootdict_rules(SimDataFormatsRandomEngine)

add_library(SimDataFormatsRandomEngine SHARED ${SimDataFormatsRandomEngine_EXTRA_SOURCES}
  src/RandomEngineState.cc
  src/RandomEngineStates.cc
)

set_target_properties(SimDataFormatsRandomEngine PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_LIBS SimDataFormatsRandomEngine)

target_include_directories(SimDataFormatsRandomEngine PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(SimDataFormatsRandomEngine PUBLIC
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

target_link_libraries(SimDataFormatsRandomEngine PUBLIC
DataFormatsCommon
FWCoreUtilities
Threads::Threads
crypt
dl
nsl
rt
)


add_python_rules(SimDataFormats/RandomEngine)

add_script_rules(SimDataFormats/RandomEngine)

install( TARGETS SimDataFormatsRandomEngine DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

