add_executable(Enum_t
  Enum_t.cpp
)

add_test(NAME Enum_t_CTest COMMAND Enum_t)

add_test_properties(Enum_t_CTest)

set_target_properties(Enum_t PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS Enum_t)

add_dependencies( Enum_t ALL_PLUGINS)

target_include_directories(Enum_t PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(Enum_t PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${CPPUNIT_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(Enum_t PUBLIC
DataFormatsTestObjects
FWCoreReflection
cppunit
)


