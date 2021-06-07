add_executable(TestSecondaryInput
  TestSecondaryInput.cpp
)

add_test(NAME TestSecondaryInput_CTest COMMAND /bin/bash -x ${CMAKE_CURRENT_SOURCE_DIR}/TestSecondaryInput.sh)

add_test_properties(TestSecondaryInput_CTest)

set_target_properties(TestSecondaryInput PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS TestSecondaryInput)

add_dependencies( TestSecondaryInput ALL_PLUGINS)

target_include_directories(TestSecondaryInput PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(TestSecondaryInput PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(TestSecondaryInput PUBLIC
FWCoreUtilities
)


add_library(SecondaryProducer SHARED ${SecondaryProducer_EXTRA_SOURCES}
  SecondaryProducer.cc
)

set_target_properties(SecondaryProducer PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_TESTLIBS SecondaryProducer)

set_target_properties(SecondaryProducer PROPERTIES PREFIX "plugin")

add_dependencies( ALL_PLUGINS SecondaryProducer)

edm_write_config( SecondaryProducer IOPool/SecondaryInput)

target_include_directories(SecondaryProducer PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(SecondaryProducer PUBLIC
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

target_link_libraries(SecondaryProducer PUBLIC
DataFormatsProvenance
FWCoreFramework
FWCoreSources
FWCoreUtilities
)


add_python_rules(IOPool/SecondaryInput/test/)

add_script_rules(IOPool/SecondaryInput/test/)

install( TARGETS SecondaryProducer DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

