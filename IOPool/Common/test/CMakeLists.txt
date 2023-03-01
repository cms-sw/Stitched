add_executable(TestEdmFastMerge
  TestIOPoolCommon.cpp
)

add_test(NAME TestEdmFastMerge_CTest COMMAND /bin/bash -x ${CMAKE_CURRENT_SOURCE_DIR}/TestEdmFastMerge.sh)

add_test_properties(TestEdmFastMerge_CTest)

set_target_properties(TestEdmFastMerge PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS TestEdmFastMerge)

add_dependencies( TestEdmFastMerge ALL_PLUGINS)

target_include_directories(TestEdmFastMerge PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestEdmFastMerge PUBLIC
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

target_link_libraries(TestEdmFastMerge PUBLIC
FWCoreUtilities
IOPoolCommon
)


add_executable(TestEdmConfigDump
  TestIOPoolCommon.cpp
)

add_test(NAME TestEdmConfigDump_CTest COMMAND /bin/bash -x ${CMAKE_CURRENT_SOURCE_DIR}/run_TestEdmConfigDump.sh)

add_test_properties(TestEdmConfigDump_CTest)

set_target_properties(TestEdmConfigDump PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS TestEdmConfigDump)

add_dependencies( TestEdmConfigDump ALL_PLUGINS)

target_include_directories(TestEdmConfigDump PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestEdmConfigDump PUBLIC
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

target_link_libraries(TestEdmConfigDump PUBLIC
FWCoreUtilities
IOPoolCommon
)


