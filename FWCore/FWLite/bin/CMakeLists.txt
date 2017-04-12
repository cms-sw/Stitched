add_executable(edmClassStorageSize
  storageSize.cc
)

target_include_directories(edmClassStorageSize PUBLIC ${Boost_INCLUDE_DIR})
target_include_directories(edmClassStorageSize PUBLIC ${ROOT_INCLUDE_DIR})
target_link_libraries(edmClassStorageSize PUBLIC
  RIO
  FWCoreFWLite
  dl
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  Thread
  ${Boost_REGEX_LIBRARY_RELEASE}
  Tree
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  ${Boost_THREAD_LIBRARY_RELEASE}
  Core
  MathCore
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  Net
  ${PYTHON_LIBRARY}
)

install( TARGETS edmClassStorageSize EXPORT edmClassStorageSize DESTINATION  bin )

add_executable(edmBranchStorageSize
  storageSizeForBranch.cc
)

target_include_directories(edmBranchStorageSize PUBLIC ${Boost_INCLUDE_DIR})
target_include_directories(edmBranchStorageSize PUBLIC ${ROOT_INCLUDE_DIR})
target_link_libraries(edmBranchStorageSize PUBLIC
  RIO
  FWCoreFWLite
  dl
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  Thread
  ${Boost_REGEX_LIBRARY_RELEASE}
  Tree
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  ${Boost_THREAD_LIBRARY_RELEASE}
  Core
  MathCore
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  Net
  ${PYTHON_LIBRARY}
)

install( TARGETS edmBranchStorageSize EXPORT edmBranchStorageSize DESTINATION  bin )

