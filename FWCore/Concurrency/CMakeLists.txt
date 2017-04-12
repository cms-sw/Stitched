if(BUILDTEST)
add_subdirectory(test)
endif()
add_library(FWCoreConcurrency SHARED 
  src/SerialTaskQueue.cc
  src/WaitingTaskList.cc
  src/Xerces.cc
  src/SharedResourceNames.cc
)

target_include_directories(FWCoreConcurrency PUBLIC ${TBB_INCLUDE_DIRS})
target_link_libraries(FWCoreConcurrency PUBLIC
  ${TBB_LIBRARIES}
  xerces-c
)

install( TARGETS FWCoreConcurrency EXPORT FWCoreConcurrency DESTINATION  lib )

