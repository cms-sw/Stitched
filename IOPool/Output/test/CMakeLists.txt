add_executable(TestPoolOutput
  TestPoolOutput.cpp
)

add_test(NAME TestPoolOutput_CTest COMMAND /bin/bash -x ${CMAKE_CURRENT_SOURCE_DIR}/TestPoolOutput.sh)

add_test_properties(TestPoolOutput_CTest)

set_target_properties(TestPoolOutput PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS TestPoolOutput)

add_dependencies( TestPoolOutput ALL_PLUGINS)

target_include_directories(TestPoolOutput PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestPoolOutput PUBLIC
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

target_link_libraries(TestPoolOutput PUBLIC
FWCoreUtilities
IOPoolOutput
)


