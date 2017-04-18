add_executable(Enum_t
  Enum_t.cpp
)

target_include_directories(Enum_t PUBLIC ${CPPUNIT_INCLUDE_DIR})
include_directories(Enum_t PUBLIC ${CPPUNIT_INCLUDE_DIR})
target_include_directories(Enum_t PUBLIC ${ROOT_INCLUDE_DIR})
include_directories(Enum_t PUBLIC ${ROOT_INCLUDE_DIR})
target_link_libraries(Enum_t PUBLIC
  ${CPPUNIT_LIBRARY}
  DataFormatsStdDictionaries
  DataFormatsTestObjects
  DataFormatsWrappedStdDictionaries
)

add_test(NAME Enum_t COMMAND Enum_t)
