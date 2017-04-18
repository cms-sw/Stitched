include_directories(${CMAKE_SOURCE_DIR})
include_directories(/usr/include/)
if(BUILDTEST)
add_subdirectory(test)
endif()
reflex_dictionary(DataFormatsCommon src/classes.h src/classes_def.xml)
add_library(DataFormatsCommon SHARED 
  src/traits.cc
  src/RefCoreStreamer.cc
  src/PtrVectorBase.cc
  src/ThinnedAssociation.cc
  src/HandleExceptionFactory.cc
  src/ConvertHandle.cc
  src/ProductData.cc
  src/WrapperBase.cc
  src/EDProductGetter.cc
  src/RefCore.cc
  src/OrphanHandleBase.cc
  src/DetSetVectorNew.cc
  src/DataFrameContainer.cc
  src/MultiAssociation.cc
  src/CommonExceptions.cc
  src/RefCoreWithIndex.cc
  src/HandleBase.cc
  src/MergeableCounter.cc
  src/View.cc
  DataFormatsCommonDict.cpp
)

add_dependencies(DataFormatsCommon DataFormatsCommonDict)
target_include_directories(DataFormatsCommon PUBLIC ${Boost_INCLUDE_DIR})
include_directories(DataFormatsCommon PUBLIC ${Boost_INCLUDE_DIR})
target_include_directories(DataFormatsCommon PUBLIC ${ROOT_INCLUDE_DIR})
include_directories(DataFormatsCommon PUBLIC ${ROOT_INCLUDE_DIR})
target_link_libraries(DataFormatsCommon PUBLIC
  ${Boost_REGEX_LIBRARY_RELEASE}
  dl
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  FWCoreMessageLogger
  ${PYTHON_LIBRARY}
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  FWCoreUtilities
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  DataFormatsStdDictionaries
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  DataFormatsProvenance
)

install( TARGETS DataFormatsCommon EXPORT DataFormatsCommon DESTINATION  lib )

