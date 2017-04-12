add_subdirectory(bin)
if(BUILDTEST)
add_subdirectory(test)
endif()
add_subdirectory(plugins)
add_library(FWCoreMessageService SHARED 
  src/ELdestination.cc
  src/ELlimitsTable.cc
  src/ELdestControl.cc
  src/SingleThreadMSPresence.cc
  src/ELadministrator.cc
  src/MessageLoggerDefaults.cc
  src/HardwiredDefaults.cc
  src/ELstatistics.cc
  src/ThreadQueue.cc
  src/MessageServicePresence.cc
  src/ELoutput.cc
  src/ThreadSafeLogMessageLoggerScribe.cc
  src/MessageLoggerScribe.cc
  src/MessageLogger.cc
  src/MainThreadMLscribe.cc
  src/MessageServicePSetValidation.cc
)

target_include_directories(FWCoreMessageService PUBLIC ${PYTHON_INCLUDE_DIR})
target_include_directories(FWCoreMessageService PUBLIC ${MD5_INCLUDE_DIR})
target_include_directories(FWCoreMessageService PUBLIC ${Boost_INCLUDE_DIR}/python)
target_include_directories(FWCoreMessageService PUBLIC ${ROOT_INCLUDE_DIR})
target_include_directories(FWCoreMessageService PUBLIC ${Boost_INCLUDE_DIR})
target_include_directories(FWCoreMessageService PUBLIC ${TBB_INCLUDE_DIRS})
target_include_directories(FWCoreMessageService PUBLIC ${TINYXML_INCLUDE_DIR})
target_link_libraries(FWCoreMessageService PUBLIC
  ${Boost_REGEX_LIBRARY_RELEASE}
  dl
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  FWCoreParameterSet
  FWCoreUtilities
  FWCoreMessageLogger
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  FWCoreServiceRegistry
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  ${TBB_LIBRARIES}
  ${PYTHON_LIBRARY}
  DataFormatsProvenance
)

install( TARGETS FWCoreMessageService EXPORT FWCoreMessageService DESTINATION  lib )

