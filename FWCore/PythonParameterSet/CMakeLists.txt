if(BUILDTEST)
  add_subdirectory(test)
endif()

add_library(FWCorePythonParameterSet SHARED ${FWCorePythonParameterSet_EXTRA_SOURCES}
  src/MakePyBind11ParameterSets.cc
  src/PyBind11ProcessDesc.cc
  src/PyBind11Wrapper.cc
  src/Python11ParameterSet.cc
  src/initializePyBind11Module.cc
)

set_target_properties(FWCorePythonParameterSet PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_LIBS FWCorePythonParameterSet)

target_include_directories(FWCorePythonParameterSet PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(FWCorePythonParameterSet PUBLIC
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

target_link_libraries(FWCorePythonParameterSet PUBLIC
${Python_LIBRARY}
DataFormatsProvenance
FWCoreParameterSet
FWCoreUtilities
)


add_python_rules(FWCore/PythonParameterSet)

add_script_rules(FWCore/PythonParameterSet)

install( TARGETS FWCorePythonParameterSet DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

