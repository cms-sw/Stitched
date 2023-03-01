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

cms_rootdict(FWCoreTFWLiteSelectorTest src/classes.h src/classes_def.xml)

add_rootdict_rules(FWCoreTFWLiteSelectorTest)

add_library(FWCoreTFWLiteSelectorTest SHARED ${FWCoreTFWLiteSelectorTest_EXTRA_SOURCES}
  src/ThingsTSelector.cc
  src/ThingsTSelector2.cc
)

set_target_properties(FWCoreTFWLiteSelectorTest PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_LIBS FWCoreTFWLiteSelectorTest)

target_include_directories(FWCoreTFWLiteSelectorTest PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(FWCoreTFWLiteSelectorTest PUBLIC
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

target_link_libraries(FWCoreTFWLiteSelectorTest PUBLIC
DataFormatsCommon
DataFormatsTestObjects
FWCoreFramework
FWCoreTFWLiteSelector
FWCoreUtilities
ROOT::Core
ROOT::Gpad
ROOT::Graf
ROOT::Graf3d
ROOT::Hist
ROOT::MathCore
ROOT::Matrix
ROOT::Net
ROOT::Postscript
ROOT::RIO
ROOT::Thread
ROOT::Tree
ROOT::TreePlayer
)


add_python_rules(FWCore/TFWLiteSelectorTest)

add_script_rules(FWCore/TFWLiteSelectorTest)

install( TARGETS FWCoreTFWLiteSelectorTest DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

