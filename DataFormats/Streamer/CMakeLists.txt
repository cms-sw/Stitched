reflex_dictionary(DataFormatsStreamer src/classes.h src/classes_def.xml)
add_library(DataFormatsStreamer SHARED 
  src/StreamedProducts.cc
  DataFormatsStreamerDict.cpp
)

add_dependencies(DataFormatsStreamer DataFormatsStreamerDict)
target_include_directories(DataFormatsStreamer PUBLIC ${ROOT_INCLUDE_DIR})
target_link_libraries(DataFormatsStreamer PUBLIC
  DataFormatsProvenance
  DataFormatsStdDictionaries
)

install( TARGETS DataFormatsStreamer EXPORT DataFormatsStreamer DESTINATION  lib )

