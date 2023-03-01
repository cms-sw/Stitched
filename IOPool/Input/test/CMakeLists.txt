add_executable(TestPoolInput
  TestPoolInput.cpp
)

add_test(NAME TestPoolInput_CTest COMMAND /bin/bash -x ${CMAKE_CURRENT_SOURCE_DIR}/TestPoolInput.sh)

add_test_properties(TestPoolInput_CTest)

set_target_properties(TestPoolInput PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS TestPoolInput)

add_dependencies( TestPoolInput ALL_PLUGINS)

target_include_directories(TestPoolInput PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestPoolInput PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CLHEP_INCLUDE_DIR}
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${OPENSSL_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
/usr/include
)

add_compile_options("-D_FILE_OFFSET_BITS=64")

target_link_libraries(TestPoolInput PUBLIC
FWCoreUtilities
IOPoolInput
)


add_library(IOExerciser SHARED ${IOExerciser_EXTRA_SOURCES}
  IOExerciser.cc
)

set_target_properties(IOExerciser PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_TESTLIBS IOExerciser)

set_target_properties(IOExerciser PROPERTIES PREFIX "plugin")

add_dependencies( ALL_PLUGINS IOExerciser)

edm_write_config( IOExerciser IOPool/Input)

target_include_directories(IOExerciser PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(IOExerciser PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CLHEP_INCLUDE_DIR}
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${OPENSSL_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
/usr/include
)

add_compile_options("-D_FILE_OFFSET_BITS=64")

target_link_libraries(IOExerciser PUBLIC
FWCoreFramework
FWCoreParameterSet
IOPoolInput
)


add_python_rules(IOPool/Input/test/)

add_script_rules(IOPool/Input/test/)

install( TARGETS IOExerciser DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

