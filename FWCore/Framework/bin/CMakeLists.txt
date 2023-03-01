add_executable(cmsRunGlibC
  cmsRun.cpp
)

set_target_properties( cmsRunGlibC PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

add_dependencies( ALL_BINS cmsRunGlibC)

target_include_directories(cmsRunGlibC PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(cmsRunGlibC PUBLIC
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

target_link_libraries(cmsRunGlibC PUBLIC
${TBB_LIBRARIES}
Boost::program_options
FWCoreFramework
FWCoreMessageLogger
FWCoreParameterSet
FWCoreParameterSetReader
FWCorePluginManager
FWCoreServiceRegistry
FWCoreUtilities
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


add_python_rules(FWCore/Framework/bin/)

add_script_rules(FWCore/Framework/bin/)

install( TARGETS cmsRunGlibC DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_BINDIR}  EXPORT stitched::)

add_executable(cmsRunTC
  cmsRun.cpp
)

set_target_properties( cmsRunTC PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

add_dependencies( ALL_BINS cmsRunTC)

target_include_directories(cmsRunTC PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(cmsRunTC PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TCMALLOC_INCLUDE_DIR}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(cmsRunTC PUBLIC
${TBB_LIBRARIES}
${tcmalloc_minimal}
Boost::program_options
FWCoreFramework
FWCoreMessageLogger
FWCoreParameterSet
FWCoreParameterSetReader
FWCorePluginManager
FWCoreServiceRegistry
FWCoreUtilities
Threads::Threads
crypt
dl
nsl
rt
)


add_python_rules(FWCore/Framework/bin/)

add_script_rules(FWCore/Framework/bin/)

install( TARGETS cmsRunTC DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_BINDIR}  EXPORT stitched::)

add_executable(cmsRun
  cmsRun.cpp
)

set_target_properties( cmsRun PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

add_dependencies( ALL_BINS cmsRun)

target_include_directories(cmsRun PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(cmsRun PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${JEMALLOC_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(cmsRun PUBLIC
${TBB_LIBRARIES}
${jemalloc}
Boost::program_options
FWCoreFramework
FWCoreMessageLogger
FWCoreParameterSet
FWCoreParameterSetReader
FWCorePluginManager
FWCoreServiceRegistry
FWCoreUtilities
Threads::Threads
crypt
dl
nsl
rt
)


add_python_rules(FWCore/Framework/bin/)

add_script_rules(FWCore/Framework/bin/)

install( TARGETS cmsRun DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_BINDIR}  EXPORT stitched::)

add_executable(cmsRunVDT
  cmsRun.cpp
)

set_target_properties( cmsRunVDT PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

add_dependencies( ALL_BINS cmsRunVDT)

target_include_directories(cmsRunVDT PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(cmsRunVDT PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${JEMALLOC_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
${VDT_INCLUDE_DIR}
/usr/include
)

target_link_libraries(cmsRunVDT PUBLIC
${TBB_LIBRARIES}
${VDT_LIBRARIES}
${jemalloc}
Boost::program_options
FWCoreFramework
FWCoreMessageLogger
FWCoreParameterSet
FWCoreParameterSetReader
FWCorePluginManager
FWCoreServiceRegistry
FWCoreUtilities
Threads::Threads
crypt
dl
nsl
rt
)


add_python_rules(FWCore/Framework/bin/)

add_script_rules(FWCore/Framework/bin/)

install( TARGETS cmsRunVDT DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_BINDIR}  EXPORT stitched::)

add_executable(cmsRunJE
  cmsRun.cpp
)

set_target_properties( cmsRunJE PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

add_dependencies( ALL_BINS cmsRunJE)

target_include_directories(cmsRunJE PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(cmsRunJE PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${JEMALLOC_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(cmsRunJE PUBLIC
${TBB_LIBRARIES}
${jemalloc}
Boost::program_options
FWCoreFramework
FWCoreMessageLogger
FWCoreParameterSet
FWCoreParameterSetReader
FWCorePluginManager
FWCoreServiceRegistry
FWCoreUtilities
Threads::Threads
crypt
dl
nsl
rt
)


add_python_rules(FWCore/Framework/bin/)

add_script_rules(FWCore/Framework/bin/)

install( TARGETS cmsRunJE DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_BINDIR}  EXPORT stitched::)

add_executable(cmsRunGP
  cmsRun.cpp
)

set_target_properties( cmsRunGP PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

add_dependencies( ALL_BINS cmsRunGP)

target_include_directories(cmsRunGP PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(cmsRunGP PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${GPERF_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(cmsRunGP PUBLIC
${TBB_LIBRARIES}
Boost::program_options
FWCoreFramework
FWCoreMessageLogger
FWCoreParameterSet
FWCoreParameterSetReader
FWCorePluginManager
FWCoreServiceRegistry
FWCoreUtilities
Threads::Threads
crypt
dl
nsl
profiler
rt
)


add_python_rules(FWCore/Framework/bin/)

add_script_rules(FWCore/Framework/bin/)

install( TARGETS cmsRunGP DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_BINDIR}  EXPORT stitched::)

