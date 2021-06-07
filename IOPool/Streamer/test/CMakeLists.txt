add_executable(EventMessageTest
  EventMessageTest.cpp
)

add_test(NAME EventMessageTest_CTest COMMAND EventMessageTest)

add_test_properties(EventMessageTest_CTest)

set_target_properties(EventMessageTest PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS EventMessageTest)

add_dependencies( EventMessageTest ALL_PLUGINS)

target_include_directories(EventMessageTest PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(EventMessageTest PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${OPENSSL_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
${XZ_INCLUDE_DIR}
${ZLIB_INCLUDE_DIR}
/usr/include
)

add_compile_options("-D_FILE_OFFSET_BITS=64")

target_link_libraries(EventMessageTest PUBLIC
IOPoolStreamer
)


add_executable(ReadStreamerFile
  ReadStreamerFile.cpp
)

set_target_properties(ReadStreamerFile PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS ReadStreamerFile)

add_dependencies( ReadStreamerFile ALL_PLUGINS)

target_include_directories(ReadStreamerFile PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(ReadStreamerFile PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CLHEP_INCLUDE_DIR}
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${OPENSSL_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
${XZ_INCLUDE_DIR}
${ZLIB_INCLUDE_DIR}
/usr/include
)

add_compile_options("-D_FILE_OFFSET_BITS=64")

target_link_libraries(ReadStreamerFile PUBLIC
FWCoreCatalog
FWCorePluginManager
FWCoreServiceRegistry
FWCoreServices
IOPoolStreamer
)


add_executable(WriteStreamerFile
  WriteStreamerFile.cpp
)

add_test(NAME WriteStreamerFile_CTest COMMAND WriteStreamerFile)

add_test_properties(WriteStreamerFile_CTest)

set_target_properties(WriteStreamerFile PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS WriteStreamerFile)

add_dependencies( WriteStreamerFile ALL_PLUGINS)

target_include_directories(WriteStreamerFile PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(WriteStreamerFile PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${OPENSSL_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
${XZ_INCLUDE_DIR}
${ZLIB_INCLUDE_DIR}
/usr/include
)

add_compile_options("-D_FILE_OFFSET_BITS=64")

target_link_libraries(WriteStreamerFile PUBLIC
IOPoolStreamer
)


add_executable(NewStreamerUNCOMPRESSED
  RunThis_t.cpp
)

add_test(NAME NewStreamerUNCOMPRESSED_CTest COMMAND /bin/bash -x ${CMAKE_CURRENT_SOURCE_DIR}/RunUNCOMPRESSED.sh)

add_test_properties(NewStreamerUNCOMPRESSED_CTest)

set_target_properties(NewStreamerUNCOMPRESSED PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS NewStreamerUNCOMPRESSED)

add_dependencies( NewStreamerUNCOMPRESSED ALL_PLUGINS)

target_include_directories(NewStreamerUNCOMPRESSED PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(NewStreamerUNCOMPRESSED PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${OPENSSL_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
${XZ_INCLUDE_DIR}
${ZLIB_INCLUDE_DIR}
/usr/include
)

add_compile_options("-D_FILE_OFFSET_BITS=64")

target_link_libraries(NewStreamerUNCOMPRESSED PUBLIC
IOPoolStreamer
)


add_executable(NewStreamerZLIB
  RunThis_t.cpp
)

add_test(NAME NewStreamerZLIB_CTest COMMAND /bin/bash -x ${CMAKE_CURRENT_SOURCE_DIR}/RunZLIB.sh)

add_test_properties(NewStreamerZLIB_CTest)

set_target_properties(NewStreamerZLIB PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS NewStreamerZLIB)

add_dependencies( NewStreamerZLIB ALL_PLUGINS)

target_include_directories(NewStreamerZLIB PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(NewStreamerZLIB PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${OPENSSL_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
${XZ_INCLUDE_DIR}
${ZLIB_INCLUDE_DIR}
/usr/include
)

add_compile_options("-D_FILE_OFFSET_BITS=64")

target_link_libraries(NewStreamerZLIB PUBLIC
IOPoolStreamer
)


add_executable(NewStreamerLZMA
  RunThis_t.cpp
)

add_test(NAME NewStreamerLZMA_CTest COMMAND /bin/bash -x ${CMAKE_CURRENT_SOURCE_DIR}/RunLZMA.sh)

add_test_properties(NewStreamerLZMA_CTest)

set_target_properties(NewStreamerLZMA PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS NewStreamerLZMA)

add_dependencies( NewStreamerLZMA ALL_PLUGINS)

target_include_directories(NewStreamerLZMA PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(NewStreamerLZMA PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${OPENSSL_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
${XZ_INCLUDE_DIR}
${ZLIB_INCLUDE_DIR}
/usr/include
)

add_compile_options("-D_FILE_OFFSET_BITS=64")

target_link_libraries(NewStreamerLZMA PUBLIC
IOPoolStreamer
)


add_executable(NewStreamerZSTD
  RunThis_t.cpp
)

add_test(NAME NewStreamerZSTD_CTest COMMAND /bin/bash -x ${CMAKE_CURRENT_SOURCE_DIR}/RunZSTD.sh)

add_test_properties(NewStreamerZSTD_CTest)

set_target_properties(NewStreamerZSTD PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS NewStreamerZSTD)

add_dependencies( NewStreamerZSTD ALL_PLUGINS)

target_include_directories(NewStreamerZSTD PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(NewStreamerZSTD PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${OPENSSL_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
${XZ_INCLUDE_DIR}
${ZLIB_INCLUDE_DIR}
/usr/include
)

add_compile_options("-D_FILE_OFFSET_BITS=64")

target_link_libraries(NewStreamerZSTD PUBLIC
IOPoolStreamer
)


add_library(StreamThingProducer SHARED ${StreamThingProducer_EXTRA_SOURCES}
  StreamThingProducer.cc
)

set_target_properties(StreamThingProducer PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_TESTLIBS StreamThingProducer)

set_target_properties(StreamThingProducer PROPERTIES PREFIX "plugin")

add_dependencies( ALL_PLUGINS StreamThingProducer)

edm_write_config( StreamThingProducer IOPool/Streamer)

target_include_directories(StreamThingProducer PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(StreamThingProducer PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${OPENSSL_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
${XZ_INCLUDE_DIR}
${ZLIB_INCLUDE_DIR}
/usr/include
)

add_compile_options("-D_FILE_OFFSET_BITS=64")

target_link_libraries(StreamThingProducer PUBLIC
DataFormatsTestObjects
IOPoolStreamer
)


add_python_rules(IOPool/Streamer/test/)

add_script_rules(IOPool/Streamer/test/)

install( TARGETS StreamThingProducer DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

add_library(StreamThingAnalyzer SHARED ${StreamThingAnalyzer_EXTRA_SOURCES}
  StreamThingAnalyzer.cc
)

set_target_properties(StreamThingAnalyzer PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_TESTLIBS StreamThingAnalyzer)

set_target_properties(StreamThingAnalyzer PROPERTIES PREFIX "plugin")

add_dependencies( ALL_PLUGINS StreamThingAnalyzer)

edm_write_config( StreamThingAnalyzer IOPool/Streamer)

target_include_directories(StreamThingAnalyzer PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(StreamThingAnalyzer PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${OPENSSL_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
${XZ_INCLUDE_DIR}
${ZLIB_INCLUDE_DIR}
/usr/include
)

add_compile_options("-D_FILE_OFFSET_BITS=64")

target_link_libraries(StreamThingAnalyzer PUBLIC
IOPoolStreamer
)


add_python_rules(IOPool/Streamer/test/)

add_script_rules(IOPool/Streamer/test/)

install( TARGETS StreamThingAnalyzer DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

