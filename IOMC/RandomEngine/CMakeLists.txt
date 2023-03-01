if(BUILDTEST)
  add_subdirectory(test)
endif()

add_subdirectory(plugins)

add_library(IOMCRandomEngine SHARED ${IOMCRandomEngine_EXTRA_SOURCES}
  src/TRandomAdaptor.cc
  src/cloneEngine.cc
)

set_target_properties(IOMCRandomEngine PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_LIBS IOMCRandomEngine)

target_include_directories(IOMCRandomEngine PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(IOMCRandomEngine PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CLHEP_INCLUDE_DIR}
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${GSL_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(IOMCRandomEngine PUBLIC
${CLHEP_LIBRARIES}
DataFormatsProvenance
FWCoreFramework
FWCoreMessageLogger
FWCoreParameterSet
FWCoreServiceRegistry
FWCoreUtilities
ROOT::Core
ROOT::GenVector
ROOT::MathCore
ROOT::MathMore
ROOT::Net
ROOT::RIO
ROOT::Thread
ROOT::Tree
SimDataFormatsRandomEngine
gsl
)


add_python_rules(IOMC/RandomEngine)

add_script_rules(IOMC/RandomEngine)

install( TARGETS IOMCRandomEngine DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

