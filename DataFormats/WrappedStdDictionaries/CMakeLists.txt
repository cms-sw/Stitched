include_directories(${CMAKE_SOURCE_DIR})
include_directories(/usr/include/)
reflex_dictionary(DataFormatsWrappedStdDictionaries src/classes.h src/classes_def.xml)
add_library(DataFormatsWrappedStdDictionaries SHARED 
  DataFormatsWrappedStdDictionariesDict.cpp
)

add_dependencies(DataFormatsWrappedStdDictionaries DataFormatsWrappedStdDictionariesDict)
target_link_libraries(DataFormatsWrappedStdDictionaries PUBLIC
  DataFormatsCommon
)

install( TARGETS DataFormatsWrappedStdDictionaries EXPORT DataFormatsWrappedStdDictionaries DESTINATION  lib )

