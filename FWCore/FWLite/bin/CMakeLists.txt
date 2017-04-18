add_executable(edmClassStorageSize
  storageSize.cc
)

target_include_directories(edmClassStorageSize PUBLIC ${Boost_INCLUDE_DIR})
include_directories(edmClassStorageSize PUBLIC ${Boost_INCLUDE_DIR})
target_include_directories(edmClassStorageSize PUBLIC ${ROOT_INCLUDE_DIR})
include_directories(edmClassStorageSize PUBLIC ${ROOT_INCLUDE_DIR})
target_link_libraries(edmClassStorageSize PUBLIC
  ${Boost_REGEX_LIBRARY_RELEASE}
  dl
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  Thread
  Core
  Tree
  ${Boost_THREAD_LIBRARY_RELEASE}
  MathCore
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  Net
  ${PYTHON_LIBRARY}
  FWCoreFWLite
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  RIO
)

install( TARGETS edmClassStorageSize EXPORT edmClassStorageSize DESTINATION  bin )

add_executable(edmBranchStorageSize
  storageSizeForBranch.cc
)

target_include_directories(edmBranchStorageSize PUBLIC ${Boost_INCLUDE_DIR})
include_directories(edmBranchStorageSize PUBLIC ${Boost_INCLUDE_DIR})
target_include_directories(edmBranchStorageSize PUBLIC ${ROOT_INCLUDE_DIR})
include_directories(edmBranchStorageSize PUBLIC ${ROOT_INCLUDE_DIR})
target_link_libraries(edmBranchStorageSize PUBLIC
  ${Boost_REGEX_LIBRARY_RELEASE}
  dl
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  Thread
  Core
  Tree
  ${Boost_THREAD_LIBRARY_RELEASE}
  MathCore
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  Net
  ${PYTHON_LIBRARY}
  FWCoreFWLite
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  RIO
)

install( TARGETS edmBranchStorageSize EXPORT edmBranchStorageSize DESTINATION  bin )

