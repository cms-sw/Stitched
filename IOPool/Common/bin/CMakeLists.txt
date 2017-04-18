add_executable(edmProvDump
  EdmProvDump.cc
)

target_include_directories(edmProvDump PUBLIC ${PYTHON_INCLUDE_DIR})
include_directories(edmProvDump PUBLIC ${PYTHON_INCLUDE_DIR})
target_include_directories(edmProvDump PUBLIC ${MD5_INCLUDE_DIR})
include_directories(edmProvDump PUBLIC ${MD5_INCLUDE_DIR})
target_include_directories(edmProvDump PUBLIC ${Boost_INCLUDE_DIR}/python)
include_directories(edmProvDump PUBLIC ${Boost_INCLUDE_DIR}/python)
target_include_directories(edmProvDump PUBLIC ${Boost_INCLUDE_DIR})
include_directories(edmProvDump PUBLIC ${Boost_INCLUDE_DIR})
target_include_directories(edmProvDump PUBLIC ${TBB_INCLUDE_DIRS})
include_directories(edmProvDump PUBLIC ${TBB_INCLUDE_DIRS})
target_include_directories(edmProvDump PUBLIC ${ROOT_INCLUDE_DIR})
include_directories(edmProvDump PUBLIC ${ROOT_INCLUDE_DIR})
target_link_libraries(edmProvDump PUBLIC
  FWCoreParameterSet
  IOPoolCommon
  Thread
  Core
  FWCoreServices
  Tree
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  FWCoreUtilities
  RIO
  MathCore
  FWCoreCatalog
  DataFormatsStdDictionaries
  Net
  DataFormatsWrappedStdDictionaries
  DataFormatsProvenance
  FWCoreServiceRegistry
)

install( TARGETS edmProvDump EXPORT edmProvDump DESTINATION  bin )

add_executable(edmFileUtil
  EdmFileUtil.cpp
  CollUtil.cc
)

target_include_directories(edmFileUtil PUBLIC ${Boost_INCLUDE_DIR})
include_directories(edmFileUtil PUBLIC ${Boost_INCLUDE_DIR})
target_include_directories(edmFileUtil PUBLIC ${ROOT_INCLUDE_DIR})
include_directories(edmFileUtil PUBLIC ${ROOT_INCLUDE_DIR})
target_link_libraries(edmFileUtil PUBLIC
  FWCoreParameterSet
  dl
  Matrix
  Thread
  ${Boost_REGEX_LIBRARY_RELEASE}
  Tree
  Hist
  ${Boost_THREAD_LIBRARY_RELEASE}
  MathCore
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  FWCoreServiceRegistry
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  FWCorePluginManager
  Net
  ${Boost_PYTHON_LIBRARY_RELEASE}
  DataFormatsProvenance
  Core
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  FWCoreServices
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${PYTHON_LIBRARY}
  RIO
  IOPoolCommon
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  FWCoreCatalog
)

install( TARGETS edmFileUtil EXPORT edmFileUtil DESTINATION  bin )

add_executable(edmCopyUtil
  EdmCopyUtil.cpp
)

target_include_directories(edmCopyUtil PUBLIC ${Boost_INCLUDE_DIR})
include_directories(edmCopyUtil PUBLIC ${Boost_INCLUDE_DIR})
target_link_libraries(edmCopyUtil PUBLIC
  FWCoreParameterSet
  dl
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  ${Boost_REGEX_LIBRARY_RELEASE}
  FWCoreServices
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  ${Boost_THREAD_LIBRARY_RELEASE}
  FWCoreCatalog
  IOPoolCommon
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  UtilitiesStorageFactory
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${PYTHON_LIBRARY}
  FWCoreServiceRegistry
)

install( TARGETS edmCopyUtil EXPORT edmCopyUtil DESTINATION  bin )

