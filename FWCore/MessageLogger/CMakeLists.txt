reflex_dictionary(FWCoreMessageLogger src/classes.h src/classes_def.xml)
add_library(FWCoreMessageLogger SHARED 
  src/MessageDrop.cc
  src/ELextendedID.cc
  src/AbstractMLscribe.cc
  src/JobReport.cc
  src/ErrorObj.cc
  src/SilentMLscribe.cc
  src/MessageLoggerQ.cc
  src/ELmap.cc
  src/ELstring.cc
  src/ELseverityLevel.cc
  src/MessageLogger.cc
  src/MessageSender.cc
  src/ExceptionMessages.cc
  FWCoreMessageLoggerDict.cpp
)

add_dependencies(FWCoreMessageLogger FWCoreMessageLoggerDict)
target_include_directories(FWCoreMessageLogger PUBLIC ${Boost_INCLUDE_DIR})
target_include_directories(FWCoreMessageLogger PUBLIC ${TBB_INCLUDE_DIRS})
target_include_directories(FWCoreMessageLogger PUBLIC ${TINYXML_INCLUDE_DIR})
target_link_libraries(FWCoreMessageLogger PUBLIC
  ${Boost_REGEX_LIBRARY_RELEASE}
  dl
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  ${TINYXML_LIBRARY}
  ${PYTHON_LIBRARY}
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  FWCoreUtilities
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  ${TBB_LIBRARIES}
  ${Boost_PYTHON_LIBRARY_RELEASE}
)

install( TARGETS FWCoreMessageLogger EXPORT FWCoreMessageLogger DESTINATION  lib )

