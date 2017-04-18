include_directories(${CMAKE_SOURCE_DIR})
include_directories(/usr/include/)
if(BUILDTEST)
add_subdirectory(test)
endif()
reflex_dictionary(DataFormatsFEDRawData src/classes.h src/classes_def.xml)
add_library(DataFormatsFEDRawData SHARED 
  src/FEDHeader.cc
  src/FEDRawData.cc
  src/FEDRawDataCollection.cc
  src/FEDNumbering.cc
  src/FEDTrailer.cc
  DataFormatsFEDRawDataDict.cpp
)

add_dependencies(DataFormatsFEDRawData DataFormatsFEDRawDataDict)
target_include_directories(DataFormatsFEDRawData PUBLIC ${MD5_INCLUDE_DIR})
include_directories(DataFormatsFEDRawData PUBLIC ${MD5_INCLUDE_DIR})
target_include_directories(DataFormatsFEDRawData PUBLIC ${Boost_INCLUDE_DIR})
include_directories(DataFormatsFEDRawData PUBLIC ${Boost_INCLUDE_DIR})
target_include_directories(DataFormatsFEDRawData PUBLIC ${TBB_INCLUDE_DIRS})
include_directories(DataFormatsFEDRawData PUBLIC ${TBB_INCLUDE_DIRS})
target_include_directories(DataFormatsFEDRawData PUBLIC ${ROOT_INCLUDE_DIR})
include_directories(DataFormatsFEDRawData PUBLIC ${ROOT_INCLUDE_DIR})
target_link_libraries(DataFormatsFEDRawData PUBLIC
  DataFormatsCommon
  FWCoreUtilities
)

install( TARGETS DataFormatsFEDRawData EXPORT DataFormatsFEDRawData DESTINATION  lib )

