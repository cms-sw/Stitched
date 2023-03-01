add_subdirectory(bin)
if(BUILDTEST)
  add_subdirectory(test)
endif()

add_subdirectory(plugins)

add_library(FWCoreMessageService SHARED ${FWCoreMessageService_EXTRA_SOURCES}
  src/ELadministrator.cc
  src/ELdestination.cc
  src/ELlimitsTable.cc
  src/ELoutput.cc
  src/ELstatistics.cc
  src/HardwiredDefaults.cc
  src/MessageLoggerDefaults.cc
  src/SingleThreadMSPresence.cc
  src/ThreadSafeLogMessageLoggerScribe.cc
)

set_target_properties(FWCoreMessageService PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_LIBS FWCoreMessageService)

target_include_directories(FWCoreMessageService PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(FWCoreMessageService PUBLIC
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

target_link_libraries(FWCoreMessageService PUBLIC
${TBB_LIBRARIES}
FWCoreMessageLogger
FWCoreParameterSet
FWCoreUtilities
)


add_python_rules(FWCore/MessageService)

add_script_rules(FWCore/MessageService)

install( TARGETS FWCoreMessageService DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

