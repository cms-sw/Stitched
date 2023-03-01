add_executable(TestFWCoreModules
  TestIntegration.cpp
)

add_test(NAME TestFWCoreModules_CTest COMMAND /bin/bash -x ${CMAKE_CURRENT_SOURCE_DIR}/FWCoreModulesTest.sh)

add_test_properties(TestFWCoreModules_CTest)

set_target_properties(TestFWCoreModules PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS TestFWCoreModules)

add_dependencies( TestFWCoreModules ALL_PLUGINS)

target_include_directories(TestFWCoreModules PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestFWCoreModules PUBLIC
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

target_link_libraries(TestFWCoreModules PUBLIC
FWCoreModules
FWCoreUtilities
)


add_executable(TestFWCoreModulesTP
  test_catch2_LogErrorFilter.cc
  test_catch2_ModuloEventIDFilter.cc
  test_catch2_PathStatusFilter.cc
  test_catch2_Prescaler.cc
  test_catch2_main.cc
)

add_test(NAME TestFWCoreModulesTP_CTest COMMAND TestFWCoreModulesTP)

add_test_properties(TestFWCoreModulesTP_CTest)

set_target_properties(TestFWCoreModulesTP PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS TestFWCoreModulesTP)

add_dependencies( TestFWCoreModulesTP ALL_PLUGINS)

target_include_directories(TestFWCoreModulesTP PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestFWCoreModulesTP PUBLIC
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

target_link_libraries(TestFWCoreModulesTP PUBLIC
FWCoreModules
FWCoreTestProcessor
)


