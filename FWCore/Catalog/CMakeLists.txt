if(BUILDTEST)
add_subdirectory(test)
endif()
add_library(FWCoreCatalog SHARED 
  src/InputFileCatalog.cc
  src/FileLocator.cc
)

target_include_directories(FWCoreCatalog PUBLIC ${Boost_INCLUDE_DIR})
target_include_directories(FWCoreCatalog PUBLIC ${TBB_INCLUDE_DIRS})
target_link_libraries(FWCoreCatalog PUBLIC
  ${Boost_REGEX_LIBRARY_RELEASE}
  dl
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  ${PYTHON_LIBRARY}
  xerces-c
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  FWCoreUtilities
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  FWCoreServiceRegistry
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  FWCoreConcurrency
  ${Boost_PYTHON_LIBRARY_RELEASE}
)

install( TARGETS FWCoreCatalog EXPORT FWCoreCatalog DESTINATION  lib )

