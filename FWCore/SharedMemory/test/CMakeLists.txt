add_executable(testFWCoreSharedMemoryCatch2
  test_catch2_buffer.cc
  test_catch2_main.cc
  test_catch2_serialize.cc
)

add_test(NAME testFWCoreSharedMemoryCatch2_CTest COMMAND testFWCoreSharedMemoryCatch2)

add_test_properties(testFWCoreSharedMemoryCatch2_CTest)

set_target_properties(testFWCoreSharedMemoryCatch2 PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS testFWCoreSharedMemoryCatch2)

add_dependencies( testFWCoreSharedMemoryCatch2 ALL_PLUGINS)

target_include_directories(testFWCoreSharedMemoryCatch2 PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(testFWCoreSharedMemoryCatch2 PUBLIC
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

target_link_libraries(testFWCoreSharedMemoryCatch2 PUBLIC
DataFormatsTestObjects
FWCoreSharedMemory
)


add_executable(testFWCoreSharedMemoryChannels
  test_channels.cc
)

add_test(NAME testFWCoreSharedMemoryChannels_CTest COMMAND testFWCoreSharedMemoryChannels)

add_test_properties(testFWCoreSharedMemoryChannels_CTest)

set_target_properties(testFWCoreSharedMemoryChannels PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS testFWCoreSharedMemoryChannels)

add_dependencies( testFWCoreSharedMemoryChannels ALL_PLUGINS)

target_include_directories(testFWCoreSharedMemoryChannels PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(testFWCoreSharedMemoryChannels PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(testFWCoreSharedMemoryChannels PUBLIC
FWCoreSharedMemory
FWCoreUtilities
)


add_executable(testFWCoreSharedMemoryChannelsOkTimeout
  test_channels_okTimeout.cc
)

add_test(NAME testFWCoreSharedMemoryChannelsOkTimeout_CTest COMMAND testFWCoreSharedMemoryChannelsOkTimeout)

add_test_properties(testFWCoreSharedMemoryChannelsOkTimeout_CTest)

set_target_properties(testFWCoreSharedMemoryChannelsOkTimeout PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS testFWCoreSharedMemoryChannelsOkTimeout)

add_dependencies( testFWCoreSharedMemoryChannelsOkTimeout ALL_PLUGINS)

target_include_directories(testFWCoreSharedMemoryChannelsOkTimeout PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(testFWCoreSharedMemoryChannelsOkTimeout PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(testFWCoreSharedMemoryChannelsOkTimeout PUBLIC
FWCoreSharedMemory
FWCoreUtilities
)


add_executable(testFWCoreSharedMemoryChannelsStartupTimeout
  test_channels_startupTimeout.cc
)

add_test(NAME testFWCoreSharedMemoryChannelsStartupTimeout_CTest COMMAND testFWCoreSharedMemoryChannelsStartupTimeout)

add_test_properties(testFWCoreSharedMemoryChannelsStartupTimeout_CTest)

set_target_properties(testFWCoreSharedMemoryChannelsStartupTimeout PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS testFWCoreSharedMemoryChannelsStartupTimeout)

add_dependencies( testFWCoreSharedMemoryChannelsStartupTimeout ALL_PLUGINS)

target_include_directories(testFWCoreSharedMemoryChannelsStartupTimeout PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(testFWCoreSharedMemoryChannelsStartupTimeout PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(testFWCoreSharedMemoryChannelsStartupTimeout PUBLIC
FWCoreSharedMemory
FWCoreUtilities
)


add_executable(testFWCoreSharedMemoryChannelsTransitionTimeout
  test_channels_transitionTimeout.cc
)

add_test(NAME testFWCoreSharedMemoryChannelsTransitionTimeout_CTest COMMAND testFWCoreSharedMemoryChannelsTransitionTimeout)

add_test_properties(testFWCoreSharedMemoryChannelsTransitionTimeout_CTest)

set_target_properties(testFWCoreSharedMemoryChannelsTransitionTimeout PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS testFWCoreSharedMemoryChannelsTransitionTimeout)

add_dependencies( testFWCoreSharedMemoryChannelsTransitionTimeout ALL_PLUGINS)

target_include_directories(testFWCoreSharedMemoryChannelsTransitionTimeout PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(testFWCoreSharedMemoryChannelsTransitionTimeout PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(testFWCoreSharedMemoryChannelsTransitionTimeout PUBLIC
FWCoreSharedMemory
FWCoreUtilities
)


add_executable(testFWCoreSharedMemoryChannelsRetry
  test_channels_retry.cc
)

add_test(NAME testFWCoreSharedMemoryChannelsRetry_CTest COMMAND testFWCoreSharedMemoryChannelsRetry)

add_test_properties(testFWCoreSharedMemoryChannelsRetry_CTest)

set_target_properties(testFWCoreSharedMemoryChannelsRetry PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS testFWCoreSharedMemoryChannelsRetry)

add_dependencies( testFWCoreSharedMemoryChannelsRetry ALL_PLUGINS)

target_include_directories(testFWCoreSharedMemoryChannelsRetry PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(testFWCoreSharedMemoryChannelsRetry PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(testFWCoreSharedMemoryChannelsRetry PUBLIC
FWCoreSharedMemory
FWCoreUtilities
)


add_executable(testFWCoreSharedMemoryMonitorThread
  test_monitorthread.cc
)

add_test(NAME testFWCoreSharedMemoryMonitorThread_CTest COMMAND testFWCoreSharedMemoryMonitorThread)

add_test_properties(testFWCoreSharedMemoryMonitorThread_CTest)

set_target_properties(testFWCoreSharedMemoryMonitorThread PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS testFWCoreSharedMemoryMonitorThread)

add_dependencies( testFWCoreSharedMemoryMonitorThread ALL_PLUGINS)

target_include_directories(testFWCoreSharedMemoryMonitorThread PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(testFWCoreSharedMemoryMonitorThread PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(testFWCoreSharedMemoryMonitorThread PUBLIC
FWCoreSharedMemory
FWCoreUtilities
)


