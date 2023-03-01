add_executable(testFEDRawData
  FEDNumbering_t.cpp
  FEDRawDataProduct_t.cc
  FEDRawData_t.cpp
)

add_test(NAME testFEDRawData_CTest COMMAND testFEDRawData)

add_test_properties(testFEDRawData_CTest)

set_target_properties(testFEDRawData PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS testFEDRawData)

add_dependencies( testFEDRawData ALL_PLUGINS)

target_include_directories(testFEDRawData PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(testFEDRawData PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${CPPUNIT_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(testFEDRawData PUBLIC
DataFormatsFEDRawData
cppunit
)


add_library(testDumpFEDRawDataProduct SHARED ${testDumpFEDRawDataProduct_EXTRA_SOURCES}
  DumpFEDRawDataProduct.cc
)

set_target_properties(testDumpFEDRawDataProduct PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_TESTLIBS testDumpFEDRawDataProduct)

set_target_properties(testDumpFEDRawDataProduct PROPERTIES PREFIX "plugin")

add_dependencies( ALL_PLUGINS testDumpFEDRawDataProduct)

edm_write_config( testDumpFEDRawDataProduct DataFormats/FEDRawData)

target_include_directories(testDumpFEDRawDataProduct PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(testDumpFEDRawDataProduct PUBLIC
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

target_link_libraries(testDumpFEDRawDataProduct PUBLIC
DataFormatsFEDRawData
FWCoreFramework
)


add_python_rules(DataFormats/FEDRawData/test/)

add_script_rules(DataFormats/FEDRawData/test/)

install( TARGETS testDumpFEDRawDataProduct DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

