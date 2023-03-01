add_executable(cms_anycp
  anycp.cpp
)

set_target_properties( cms_anycp PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

add_dependencies( ALL_BINS cms_anycp)

target_include_directories(cms_anycp PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(cms_anycp PUBLIC
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
/usr/include
)

add_compile_options("-D_FILE_OFFSET_BITS=64")

target_link_libraries(cms_anycp PUBLIC
UtilitiesStorageFactory
XrdCl
XrdUtils
)


add_python_rules(Utilities/StorageFactory/bin/)

add_script_rules(Utilities/StorageFactory/bin/)

install( TARGETS cms_anycp DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_BINDIR}  EXPORT stitched::)

