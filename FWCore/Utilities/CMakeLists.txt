add_subdirectory(bin)
if(BUILDTEST)
add_subdirectory(test)
endif()
add_library(FWCoreUtilities SHARED 
  src/Digest.cc
  src/DebugMacros.cc
  src/CPUServiceBase.cc
  src/TestHelper.cc
  src/ESInputTag.cc
  src/GlobalIdentifier.cc
  src/TypeWithDict.cc
  src/resolveSymbolicLinks.cc
  src/BaseWithDict.cc
  src/Presence.cc
  src/RunIndex.cc
  src/typelookup.cc
  src/InputTag.cc
  src/EDMException.cc
  src/WrappedClassName.cc
  src/LuminosityBlockIndex.cc
  src/UnixSignalHandlers.cc
  src/ReleaseVersion.cc
  src/ExceptionPropagate.cc
  src/Guid.cc
  src/RandomNumberGenerator.cc
  src/ConvertException.cc
  src/WallclockTimer.cc
  src/CPUTimer.cc
  src/TypeDemangler.cc
  src/FunctionWithDict.cc
  src/MemberWithDict.cc
  src/DictionaryTools.cc
  src/IterWithDict.cc
  src/CRC32Calculator.cc
  src/RegexMatch.cc
  src/TypeID.cc
  src/Adler32Calculator.cc
  src/MallocOpts.cc
  src/Exception.cc
  src/SingleConsumerQ.cc
  src/ExceptionCollector.cc
  src/ObjectWithDict.cc
  src/TimingServiceBase.cc
  src/Parse.cc
  src/FriendlyName.cc
  src/TimeOfDay.cc
)

target_include_directories(FWCoreUtilities PUBLIC ${Boost_INCLUDE_DIR})
target_include_directories(FWCoreUtilities PUBLIC ${TBB_INCLUDE_DIRS})
target_include_directories(FWCoreUtilities PUBLIC ${ROOT_INCLUDE_DIR})
target_include_directories(FWCoreUtilities PUBLIC ${MD5_INCLUDE_DIR})
target_link_libraries(FWCoreUtilities PUBLIC
  ${Boost_REGEX_LIBRARY_RELEASE}
  dl
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  Thread
  Tree
  ${Boost_THREAD_LIBRARY_RELEASE}
  MathCore
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  Net
  ${PYTHON_LIBRARY}
  Core
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  uuid
  ${MD5_LIBRARY}
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  RIO
  ${TBB_LIBRARIES}
)

install( TARGETS FWCoreUtilities EXPORT FWCoreUtilities DESTINATION  lib )

