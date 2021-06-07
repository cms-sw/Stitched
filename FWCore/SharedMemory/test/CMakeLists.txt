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


