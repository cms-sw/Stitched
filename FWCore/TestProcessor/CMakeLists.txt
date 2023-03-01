if(BUILDTEST)
  add_subdirectory(test)
endif()

add_library(FWCoreTestProcessor SHARED ${FWCoreTestProcessor_EXTRA_SOURCES}
  src/Event.cc
  src/EventSetupTestHelper.cc
  src/LuminosityBlock.cc
  src/ProcessBlock.cc
  src/Run.cc
  src/TestProcessor.cc
)

set_target_properties(FWCoreTestProcessor PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_LIBS FWCoreTestProcessor)

target_include_directories(FWCoreTestProcessor PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(FWCoreTestProcessor PUBLIC
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

target_link_libraries(FWCoreTestProcessor PUBLIC
${TBB_LIBRARIES}
DataFormatsCommon
DataFormatsProvenance
FWCoreConcurrency
FWCoreFramework
FWCoreParameterSet
FWCoreParameterSetReader
FWCorePluginManager
FWCoreServiceRegistry
FWCoreUtilities
Threads::Threads
crypt
dl
nsl
rt
)


add_python_rules(FWCore/TestProcessor)

add_script_rules(FWCore/TestProcessor)

install( TARGETS FWCoreTestProcessor DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

