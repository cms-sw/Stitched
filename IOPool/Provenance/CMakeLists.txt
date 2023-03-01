add_library(IOPoolProvenance SHARED ${IOPoolProvenance_EXTRA_SOURCES}
  src/CommonProvenanceFiller.cc
)

set_target_properties(IOPoolProvenance PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_LIBS IOPoolProvenance)

target_include_directories(IOPoolProvenance PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(IOPoolProvenance PUBLIC
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

target_link_libraries(IOPoolProvenance PUBLIC
DataFormatsProvenance
FWCoreParameterSet
ROOT::Core
ROOT::MathCore
ROOT::Net
ROOT::RIO
ROOT::Thread
ROOT::Tree
)


add_python_rules(IOPool/Provenance)

add_script_rules(IOPool/Provenance)

install( TARGETS IOPoolProvenance DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

