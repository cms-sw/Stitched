if(BUILDTEST)
  add_subdirectory(test)
endif()

add_subdirectory(plugins)

add_library(IOPoolOutput SHARED ${IOPoolOutput_EXTRA_SOURCES}
  src/PoolOutputModule.cc
  src/RootOutputFile.cc
  src/RootOutputTree.cc
  src/TimeoutPoolOutputModule.cc
)

set_target_properties(IOPoolOutput PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_LIBS IOPoolOutput)

target_include_directories(IOPoolOutput PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(IOPoolOutput PUBLIC
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

target_link_libraries(IOPoolOutput PUBLIC
${TBB_LIBRARIES}
DataFormatsCommon
DataFormatsProvenance
FWCoreFramework
FWCoreMessageLogger
FWCoreParameterSet
FWCoreServiceRegistry
FWCoreUtilities
FWCoreVersion
IOPoolCommon
IOPoolProvenance
ROOT::Core
ROOT::MathCore
ROOT::Net
ROOT::RIO
ROOT::Thread
ROOT::Tree
)


add_python_rules(IOPool/Output)

add_script_rules(IOPool/Output)

install( TARGETS IOPoolOutput DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

