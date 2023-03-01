add_executable(testFWCoreCommonCatch2
  test_catch2_ProcessBlockHelpers.cc
  test_catch2_TriggerNames.cc
)

add_test(NAME testFWCoreCommonCatch2_CTest COMMAND testFWCoreCommonCatch2)

add_test_properties(testFWCoreCommonCatch2_CTest)

set_target_properties(testFWCoreCommonCatch2 PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS testFWCoreCommonCatch2)

add_dependencies( testFWCoreCommonCatch2 ALL_PLUGINS)

target_include_directories(testFWCoreCommonCatch2 PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(testFWCoreCommonCatch2 PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CATCH2_INCLUDE_DIRS}
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(testFWCoreCommonCatch2 PUBLIC
FWCoreCommon
)


