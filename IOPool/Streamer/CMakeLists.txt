add_subdirectory(bin)
if(BUILDTEST)
  add_subdirectory(test)
endif()

add_subdirectory(plugins)

add_library(IOPoolStreamer SHARED ${IOPoolStreamer_EXTRA_SOURCES}
  src/ClassFiller.cc
  src/DumpTools.cc
  src/EventMessage.cc
  src/EventMsgBuilder.cc
  src/FRDEventMessage.cc
  src/InitMessage.cc
  src/InitMsgBuilder.cc
  src/StreamSerializer.cc
  src/StreamerFileIO.cc
  src/StreamerFileReader.cc
  src/StreamerFileWriter.cc
  src/StreamerInputFile.cc
  src/StreamerInputSource.cc
  src/StreamerOutputFile.cc
  src/StreamerOutputModuleBase.cc
  src/StreamerOutputModuleCommon.cc
)

set_target_properties(IOPoolStreamer PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_LIBS IOPoolStreamer)

target_include_directories(IOPoolStreamer PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(IOPoolStreamer PUBLIC
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

target_link_libraries(IOPoolStreamer PUBLIC
DataFormatsCommon
DataFormatsProvenance
DataFormatsStreamer
FWCoreCatalog
FWCoreFramework
FWCoreParameterSet
FWCoreReflection
FWCoreServiceRegistry
FWCoreSources
FWCoreUtilities
FWCoreVersion
ROOT::Core
ROOT::MathCore
ROOT::Net
ROOT::RIO
ROOT::Thread
ROOT::Tree
UtilitiesStorageFactory
lzma
z
)


add_python_rules(IOPool/Streamer)

add_script_rules(IOPool/Streamer)

install( TARGETS IOPoolStreamer DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

