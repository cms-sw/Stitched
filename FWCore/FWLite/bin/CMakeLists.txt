add_executable(edmClassStorageSize
  storageSize.cc
)

set_target_properties( edmClassStorageSize PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

add_dependencies( ALL_BINS edmClassStorageSize)

target_include_directories(edmClassStorageSize PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(edmClassStorageSize PUBLIC
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

target_link_libraries(edmClassStorageSize PUBLIC
Boost::program_options
FWCoreFWLite
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


add_python_rules(FWCore/FWLite/bin/)

add_script_rules(FWCore/FWLite/bin/)

install( TARGETS edmClassStorageSize DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_BINDIR}  EXPORT stitched::)

add_executable(edmBranchStorageSize
  storageSizeForBranch.cc
)

set_target_properties( edmBranchStorageSize PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

add_dependencies( ALL_BINS edmBranchStorageSize)

target_include_directories(edmBranchStorageSize PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(edmBranchStorageSize PUBLIC
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

target_link_libraries(edmBranchStorageSize PUBLIC
Boost::program_options
FWCoreFWLite
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


add_python_rules(FWCore/FWLite/bin/)

add_script_rules(FWCore/FWLite/bin/)

install( TARGETS edmBranchStorageSize DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_BINDIR}  EXPORT stitched::)

