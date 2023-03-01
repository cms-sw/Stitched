if(BUILDTEST)
  add_subdirectory(test)
endif()

add_library(FWCoreSharedMemory SHARED ${FWCoreSharedMemory_EXTRA_SOURCES}
  src/ControllerChannel.cc
  src/WorkerChannel.cc
  src/WorkerMonitorThread.cc
  src/WriteBuffer.cc
)

set_target_properties(FWCoreSharedMemory PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_LIBS FWCoreSharedMemory)

target_include_directories(FWCoreSharedMemory PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(FWCoreSharedMemory PUBLIC
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

target_link_libraries(FWCoreSharedMemory PUBLIC
FWCoreUtilities
ROOT::Core
ROOT::MathCore
ROOT::Net
ROOT::RIO
ROOT::Thread
ROOT::Tree
Threads::Threads
crypt
dl
nsl
rt
)


add_python_rules(FWCore/SharedMemory)

add_script_rules(FWCore/SharedMemory)

install( TARGETS FWCoreSharedMemory DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

