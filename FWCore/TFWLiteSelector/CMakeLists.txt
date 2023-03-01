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

cms_rootdict(FWCoreTFWLiteSelector src/classes.h src/classes_def.xml)

add_rootdict_rules(FWCoreTFWLiteSelector)

add_library(FWCoreTFWLiteSelector SHARED ${FWCoreTFWLiteSelector_EXTRA_SOURCES}
  src/TFWLiteSelectorBasic.cc
)

set_target_properties(FWCoreTFWLiteSelector PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_LIBS FWCoreTFWLiteSelector)

target_include_directories(FWCoreTFWLiteSelector PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(FWCoreTFWLiteSelector PUBLIC
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

target_link_libraries(FWCoreTFWLiteSelector PUBLIC
DataFormatsCommon
DataFormatsProvenance
FWCoreFramework
FWCoreParameterSet
FWCoreReflection
FWCoreUtilities
ROOT::Core
ROOT::MathCore
ROOT::Net
ROOT::RIO
ROOT::Thread
ROOT::Tree
)


add_python_rules(FWCore/TFWLiteSelector)

add_script_rules(FWCore/TFWLiteSelector)

install( TARGETS FWCoreTFWLiteSelector DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

