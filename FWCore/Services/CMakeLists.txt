add_subdirectory(bin)
if(BUILDTEST)
  add_subdirectory(test)
endif()

add_subdirectory(plugins)

add_library(FWCoreServices SHARED ${FWCoreServices_EXTRA_SOURCES}
  src/ExternalRandomNumberGeneratorService.cc
  src/JobReportService.cc
  src/SiteLocalConfigService.cc
  src/setupSiteLocalConfig.cc
)

set_target_properties(FWCoreServices PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_LIBS FWCoreServices)

target_include_directories(FWCoreServices PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(FWCoreServices PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CLHEP_INCLUDE_DIR}
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(FWCoreServices PUBLIC
${CLHEP_LIBRARIES}
${TINYXML2_LIBRARY}
FWCoreCatalog
FWCoreMessageLogger
FWCoreParameterSet
FWCoreServiceRegistry
FWCoreUtilities
ROOT::Core
ROOT::Hist
ROOT::MathCore
ROOT::Matrix
ROOT::Net
ROOT::RIO
ROOT::Thread
ROOT::Tree
SimDataFormatsRandomEngine
Threads::Threads
crypt
dl
nsl
rt
)


add_python_rules(FWCore/Services)

add_script_rules(FWCore/Services)

install( TARGETS FWCoreServices DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

