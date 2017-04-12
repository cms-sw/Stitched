reflex_dictionary(SimDataFormatsRandomEngine src/classes.h src/classes_def.xml)
add_library(SimDataFormatsRandomEngine SHARED 
  src/RandomEngineStates.cc
  src/RandomEngineState.cc
  SimDataFormatsRandomEngineDict.cpp
)

add_dependencies(SimDataFormatsRandomEngine SimDataFormatsRandomEngineDict)
target_include_directories(SimDataFormatsRandomEngine PUBLIC ${Boost_INCLUDE_DIR})
target_include_directories(SimDataFormatsRandomEngine PUBLIC ${ROOT_INCLUDE_DIR})
target_link_libraries(SimDataFormatsRandomEngine PUBLIC
  ${Boost_REGEX_LIBRARY_RELEASE}
  dl
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  DataFormatsCommon
  ${PYTHON_LIBRARY}
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  FWCoreUtilities
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
)

install( TARGETS SimDataFormatsRandomEngine EXPORT SimDataFormatsRandomEngine DESTINATION  lib )

