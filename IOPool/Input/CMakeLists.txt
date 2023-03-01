if(BUILDTEST)
  add_subdirectory(test)
endif()

add_library(IOPoolInput SHARED ${IOPoolInput_EXTRA_SOURCES}
  src/DuplicateChecker.cc
  src/EmbeddedRootSource.cc
  src/InputFile.cc
  src/Module.cc
  src/OneLumiPoolSource.cc
  src/PoolSource.cc
  src/ProvenanceAdaptor.cc
  src/RepeatingCachedRootSource.cc
  src/RootDelayedReader.cc
  src/RootEmbeddedFileSequence.cc
  src/RootFile.cc
  src/RootInputFileSequence.cc
  src/RootPrimaryFileSequence.cc
  src/RootSecondaryFileSequence.cc
  src/RootTree.cc
  src/RunHelper.cc
)

set_target_properties(IOPoolInput PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_LIBS IOPoolInput)

set_target_properties(IOPoolInput PROPERTIES PREFIX "plugin")

add_dependencies( ALL_PLUGINS IOPoolInput)

edm_write_config( IOPoolInput IOPool/Input)

target_include_directories(IOPoolInput PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(IOPoolInput PUBLIC
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
/usr/include
)

add_compile_options("-D_FILE_OFFSET_BITS=64")

target_link_libraries(IOPoolInput PUBLIC
${CLHEP_LIBRARIES}
DataFormatsCommon
DataFormatsProvenance
FWCoreCatalog
FWCoreFramework
FWCoreMessageLogger
FWCoreParameterSet
FWCoreServiceRegistry
FWCoreSources
FWCoreUtilities
IOPoolCommon
ROOT::Core
ROOT::MathCore
ROOT::Net
ROOT::RIO
ROOT::Thread
ROOT::Tree
UtilitiesStorageFactory
)


add_python_rules(IOPool/Input)

add_script_rules(IOPool/Input)

install( TARGETS IOPoolInput DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

