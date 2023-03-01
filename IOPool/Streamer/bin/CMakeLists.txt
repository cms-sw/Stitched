add_executable(DiagStreamerFile
  DiagStreamerFile.cpp
)

set_target_properties( DiagStreamerFile PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

add_dependencies( ALL_BINS DiagStreamerFile)

target_include_directories(DiagStreamerFile PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(DiagStreamerFile PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${OPENSSL_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
${XZ_INCLUDE_DIR}
${ZLIB_INCLUDE_DIR}
/usr/include
)

add_compile_options("-D_FILE_OFFSET_BITS=64")

target_link_libraries(DiagStreamerFile PUBLIC
FWCoreUtilities
IOPoolStreamer
)


add_python_rules(IOPool/Streamer/bin/)

add_script_rules(IOPool/Streamer/bin/)

install( TARGETS DiagStreamerFile DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_BINDIR}  EXPORT stitched::)

add_executable(CalcAdler32
  CalcAdler32.cpp
)

set_target_properties( CalcAdler32 PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

add_dependencies( ALL_BINS CalcAdler32)

target_include_directories(CalcAdler32 PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(CalcAdler32 PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${OPENSSL_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
${XZ_INCLUDE_DIR}
${ZLIB_INCLUDE_DIR}
/usr/include
)

add_compile_options("-D_FILE_OFFSET_BITS=64")

target_link_libraries(CalcAdler32 PUBLIC
FWCoreUtilities
IOPoolStreamer
)


add_python_rules(IOPool/Streamer/bin/)

add_script_rules(IOPool/Streamer/bin/)

install( TARGETS CalcAdler32 DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_BINDIR}  EXPORT stitched::)

