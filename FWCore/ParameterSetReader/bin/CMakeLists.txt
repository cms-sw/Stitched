add_executable(edmConfigHash
  edmConfigHash.cpp
)

set_target_properties( edmConfigHash PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

add_dependencies( ALL_BINS edmConfigHash)

target_include_directories(edmConfigHash PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(edmConfigHash PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${PYBIND11_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(edmConfigHash PUBLIC
FWCoreParameterSet
FWCoreParameterSetReader
Threads::Threads
crypt
dl
nsl
rt
)


add_python_rules(FWCore/ParameterSetReader/bin/)

add_script_rules(FWCore/ParameterSetReader/bin/)

install( TARGETS edmConfigHash DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_BINDIR}  EXPORT stitched::)

add_executable(edmParameterSetDump
  edmParameterSetDump.cpp
)

set_target_properties( edmParameterSetDump PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

add_dependencies( ALL_BINS edmParameterSetDump)

target_include_directories(edmParameterSetDump PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(edmParameterSetDump PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${PYBIND11_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(edmParameterSetDump PUBLIC
FWCoreParameterSet
FWCoreParameterSetReader
Threads::Threads
crypt
dl
nsl
rt
)


add_python_rules(FWCore/ParameterSetReader/bin/)

add_script_rules(FWCore/ParameterSetReader/bin/)

install( TARGETS edmParameterSetDump DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_BINDIR}  EXPORT stitched::)

