if(BUILDTEST)
  add_subdirectory(test)
endif()

add_subdirectory(plugins)

include_directories(${CMAKE_SOURCE_DIR}
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
/usr/include
)

cms_rootdict(IOPoolTFileAdaptor src/classes.h src/classes_def.xml)

add_rootdict_rules(IOPoolTFileAdaptor)

add_library(IOPoolTFileAdaptor SHARED ${IOPoolTFileAdaptor_EXTRA_SOURCES}
  src/ReadRepacker.cc
  src/TFileAdaptor.cc
  src/TStorageFactoryFile.cc
  src/TStorageFactorySystem.cc
)

set_target_properties(IOPoolTFileAdaptor PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_LIBS IOPoolTFileAdaptor)

target_include_directories(IOPoolTFileAdaptor PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(IOPoolTFileAdaptor PUBLIC
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
/usr/include
)

add_compile_options("-D_FILE_OFFSET_BITS=64")

target_link_libraries(IOPoolTFileAdaptor PUBLIC
FWCoreCatalog
FWCoreMessageLogger
FWCoreParameterSet
FWCoreServiceRegistry
ROOT::Core
ROOT::MathCore
ROOT::Net
ROOT::RIO
ROOT::Thread
ROOT::Tree
UtilitiesStorageFactory
)


add_python_rules(IOPool/TFileAdaptor)

add_script_rules(IOPool/TFileAdaptor)

install( TARGETS IOPoolTFileAdaptor DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

