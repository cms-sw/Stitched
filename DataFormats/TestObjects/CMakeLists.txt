if(BUILDTEST)
  add_subdirectory(test)
endif()

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

cms_rootdict(DataFormatsTestObjects src/classes.h src/classes_def.xml)

add_rootdict_rules(DataFormatsTestObjects)

add_library(DataFormatsTestObjects SHARED ${DataFormatsTestObjects_EXTRA_SOURCES}
  src/DeleteEarly.cc
  src/StreamTestThing.cc
  src/ThingWithIsEqual.cc
  src/ThingWithMerge.cc
  src/ToyProducts.cc
)

set_target_properties(DataFormatsTestObjects PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_LIBS DataFormatsTestObjects)

target_include_directories(DataFormatsTestObjects PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(DataFormatsTestObjects PUBLIC
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

target_link_libraries(DataFormatsTestObjects PUBLIC
DataFormatsCommon
DataFormatsProvenance
FWCoreUtilities
)


add_python_rules(DataFormats/TestObjects)

add_script_rules(DataFormats/TestObjects)

install( TARGETS DataFormatsTestObjects DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

