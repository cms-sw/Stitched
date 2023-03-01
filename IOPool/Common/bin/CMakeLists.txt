add_executable(edmProvDump
  EdmProvDump.cc
)

set_target_properties( edmProvDump PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

add_dependencies( ALL_BINS edmProvDump)

target_include_directories(edmProvDump PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(edmProvDump PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CLHEP_INCLUDE_DIR}
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(edmProvDump PUBLIC
Boost::program_options
DataFormatsCommon
DataFormatsProvenance
FWCoreCatalog
FWCoreParameterSet
FWCoreServiceRegistry
FWCoreServices
FWCoreUtilities
IOPoolCommon
ROOT::Core
ROOT::MathCore
ROOT::Net
ROOT::RIO
ROOT::Thread
ROOT::Tree
)


add_python_rules(IOPool/Common/bin/)

add_script_rules(IOPool/Common/bin/)

install( TARGETS edmProvDump DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_BINDIR}  EXPORT stitched::)

add_executable(edmFileUtil
  CollUtil.cc
  EdmFileUtil.cpp
)

set_target_properties( edmFileUtil PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

add_dependencies( ALL_BINS edmFileUtil)

target_include_directories(edmFileUtil PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(edmFileUtil PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CLHEP_INCLUDE_DIR}
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(edmFileUtil PUBLIC
Boost::program_options
DataFormatsProvenance
FWCoreCatalog
FWCoreParameterSet
FWCorePluginManager
FWCoreServiceRegistry
FWCoreServices
IOPoolCommon
ROOT::Core
ROOT::Hist
ROOT::MathCore
ROOT::Matrix
ROOT::Net
ROOT::RIO
ROOT::Thread
ROOT::Tree
Threads::Threads
crypt
dl
nsl
rt
)


add_python_rules(IOPool/Common/bin/)

add_script_rules(IOPool/Common/bin/)

install( TARGETS edmFileUtil DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_BINDIR}  EXPORT stitched::)

add_executable(edmCopyUtil
  EdmCopyUtil.cpp
)

set_target_properties( edmCopyUtil PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

add_dependencies( ALL_BINS edmCopyUtil)

target_include_directories(edmCopyUtil PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(edmCopyUtil PUBLIC
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

target_link_libraries(edmCopyUtil PUBLIC
Boost::program_options
FWCoreCatalog
FWCoreParameterSet
FWCoreServiceRegistry
FWCoreServices
IOPoolCommon
Threads::Threads
UtilitiesStorageFactory
crypt
dl
nsl
rt
stdc++fs
)


add_python_rules(IOPool/Common/bin/)

add_script_rules(IOPool/Common/bin/)

install( TARGETS edmCopyUtil DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_BINDIR}  EXPORT stitched::)

