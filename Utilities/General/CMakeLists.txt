if(BUILDTEST)
  add_subdirectory(test)
endif()

add_library(UtilitiesGeneral SHARED ${UtilitiesGeneral_EXTRA_SOURCES}
  src/ClassName.cc
)

set_target_properties(UtilitiesGeneral PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_LIBS UtilitiesGeneral)

target_include_directories(UtilitiesGeneral PRIVATE ${CMAKE_SOURCE_DIR})


add_python_rules(Utilities/General)

add_script_rules(Utilities/General)

install( TARGETS UtilitiesGeneral DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

