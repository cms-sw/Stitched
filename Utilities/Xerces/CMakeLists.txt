if(BUILDTEST)
  add_subdirectory(test)
endif()

add_library(UtilitiesXerces SHARED ${UtilitiesXerces_EXTRA_SOURCES}
  src/Xerces.cc
)

set_target_properties(UtilitiesXerces PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_LIBS UtilitiesXerces)

target_include_directories(UtilitiesXerces PRIVATE ${CMAKE_SOURCE_DIR})

target_link_libraries(UtilitiesXerces PUBLIC
xerces-c
)


add_python_rules(Utilities/Xerces)

add_script_rules(Utilities/Xerces)

install( TARGETS UtilitiesXerces DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

