if(BUILDTEST)
add_subdirectory(test)
endif()
add_library(UtilitiesGeneral SHARED 
  src/FileInPath.cc
  src/ClassName.cc
  src/Tokenizer.cc
)

target_include_directories(UtilitiesGeneral PUBLIC ${Boost_INCLUDE_DIR})
target_link_libraries(UtilitiesGeneral PUBLIC
  ${Boost_REGEX_LIBRARY_RELEASE}
  dl
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  ${PYTHON_LIBRARY}
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  FWCoreUtilities
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
)

install( TARGETS UtilitiesGeneral EXPORT UtilitiesGeneral DESTINATION  lib )

