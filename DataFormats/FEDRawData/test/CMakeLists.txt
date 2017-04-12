add_executable(testFEDRawData
  FEDRawData_t.cpp
  FEDRawDataProduct_t.cc
)

target_include_directories(testFEDRawData PUBLIC ${CPPUNIT_INCLUDE_DIR})
target_link_libraries(testFEDRawData PUBLIC
  ${CPPUNIT_LIBRARY}
  DataFormatsFEDRawData
)

install( TARGETS testFEDRawData EXPORT testFEDRawData DESTINATION  bin )

add_library(testDumpFEDRawDataProduct SHARED 
  DumpFEDRawDataProduct.cc
)

target_link_libraries(testDumpFEDRawDataProduct PUBLIC
  FWCoreFramework
  DataFormatsFEDRawData
)

install( TARGETS testDumpFEDRawDataProduct EXPORT testDumpFEDRawDataProduct DESTINATION  lib )

