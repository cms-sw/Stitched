add_library(IOMCRandomEngineTestRandomNumberServiceGlobal SHARED ${IOMCRandomEngineTestRandomNumberServiceGlobal_EXTRA_SOURCES}
  TestRandomNumberServiceGlobal.cc
)

set_target_properties(IOMCRandomEngineTestRandomNumberServiceGlobal PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_TESTLIBS IOMCRandomEngineTestRandomNumberServiceGlobal)

set_target_properties(IOMCRandomEngineTestRandomNumberServiceGlobal PROPERTIES PREFIX "plugin")

add_dependencies( ALL_PLUGINS IOMCRandomEngineTestRandomNumberServiceGlobal)

edm_write_config( IOMCRandomEngineTestRandomNumberServiceGlobal IOMC/RandomEngine)

target_include_directories(IOMCRandomEngineTestRandomNumberServiceGlobal PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(IOMCRandomEngineTestRandomNumberServiceGlobal PUBLIC
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

target_link_libraries(IOMCRandomEngineTestRandomNumberServiceGlobal PUBLIC
${CLHEP_LIBRARIES}
DataFormatsProvenance
FWCoreFramework
FWCoreServiceRegistry
FWCoreUtilities
IOMCRandomEngine
)


add_python_rules(IOMC/RandomEngine/test/)

add_script_rules(IOMC/RandomEngine/test/)

install( TARGETS IOMCRandomEngineTestRandomNumberServiceGlobal DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

add_executable(TestIOMCRandomEngineService
  TestIOMCRandomEngineService.cpp
)

add_test(NAME TestIOMCRandomEngineService_CTest COMMAND /bin/bash -x ${CMAKE_CURRENT_SOURCE_DIR}/testRandomService.sh)

add_test_properties(TestIOMCRandomEngineService_CTest)

set_target_properties(TestIOMCRandomEngineService PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS TestIOMCRandomEngineService)

add_dependencies( TestIOMCRandomEngineService ALL_PLUGINS)

target_include_directories(TestIOMCRandomEngineService PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestIOMCRandomEngineService PUBLIC
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

target_link_libraries(TestIOMCRandomEngineService PUBLIC
${CLHEP_LIBRARIES}
DataFormatsProvenance
FWCoreFramework
FWCoreServiceRegistry
FWCoreUtilities
IOMCRandomEngine
)


