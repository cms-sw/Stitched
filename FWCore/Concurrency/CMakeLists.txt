if(BUILDTEST)
  add_subdirectory(test)
endif()

add_library(FWCoreConcurrency SHARED ${FWCoreConcurrency_EXTRA_SOURCES}
  src/SerialTaskQueue.cc
  src/SharedResourceNames.cc
  src/ThreadSafeOutputFileStream.cc
  src/ThreadsController.cc
  src/WaitingTaskList.cc
  src/WaitingTaskWithArenaHolder.cc
  src/setNThreads.cc
)

set_target_properties(FWCoreConcurrency PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_LIBS FWCoreConcurrency)

target_include_directories(FWCoreConcurrency PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(FWCoreConcurrency PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(FWCoreConcurrency PUBLIC
${TBB_LIBRARIES}
FWCoreUtilities
)


add_python_rules(FWCore/Concurrency)

add_script_rules(FWCore/Concurrency)

install( TARGETS FWCoreConcurrency DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

