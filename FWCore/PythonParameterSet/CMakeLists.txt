add_subdirectory(bin)
if(BUILDTEST)
add_subdirectory(test)
endif()
add_library(FWCorePythonParameterSet SHARED 
  src/pythonFileToConfigure.cc
  src/initializeModule.cc
  src/PythonProcessDesc.cc
  src/MakeParameterSets.cc
  src/PythonParameterSet.cc
  src/PythonWrapper.cc
)

target_include_directories(FWCorePythonParameterSet PUBLIC ${Boost_INCLUDE_DIR}/python)
target_include_directories(FWCorePythonParameterSet PUBLIC ${PYTHON_INCLUDE_DIR})
target_include_directories(FWCorePythonParameterSet PUBLIC ${Boost_INCLUDE_DIR})
target_link_libraries(FWCorePythonParameterSet PUBLIC
  ${Boost_REGEX_LIBRARY_RELEASE}
  dl
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  FWCoreParameterSet
  FWCoreUtilities
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${PYTHON_LIBRARY}
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  DataFormatsProvenance
)

install( TARGETS FWCorePythonParameterSet EXPORT FWCorePythonParameterSet DESTINATION  lib )

