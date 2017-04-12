add_executable(Enum_t
  Enum_t.cpp
)

target_include_directories(Enum_t PUBLIC ${CPPUNIT_INCLUDE_DIR})
target_include_directories(Enum_t PUBLIC ${ROOT_INCLUDE_DIR})
target_link_libraries(Enum_t PUBLIC
  ${CPPUNIT_LIBRARY}
  DataFormatsStdDictionaries
  DataFormatsTestObjects
  DataFormatsWrappedStdDictionaries
)

install( TARGETS Enum_t EXPORT Enum_t DESTINATION  bin )

