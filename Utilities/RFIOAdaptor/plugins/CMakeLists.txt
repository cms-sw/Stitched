add_library(UtilitiesRFIOAdaptorPlugin SHARED 
  RFIOStorageMaker.cc
)

target_include_directories(UtilitiesRFIOAdaptorPlugin PUBLIC ${PYTHON_INCLUDE_DIR})
target_include_directories(UtilitiesRFIOAdaptorPlugin PUBLIC ${CASTOR_INCLUDE_DIRS}/shift)
target_include_directories(UtilitiesRFIOAdaptorPlugin PUBLIC ${MD5_INCLUDE_DIR})
target_include_directories(UtilitiesRFIOAdaptorPlugin PUBLIC ${Boost_INCLUDE_DIR}/python)
target_include_directories(UtilitiesRFIOAdaptorPlugin PUBLIC ${Boost_INCLUDE_DIR})
target_include_directories(UtilitiesRFIOAdaptorPlugin PUBLIC ${TBB_INCLUDE_DIRS})
target_include_directories(UtilitiesRFIOAdaptorPlugin PUBLIC ${ROOT_INCLUDE_DIR})
target_include_directories(UtilitiesRFIOAdaptorPlugin PUBLIC ${CASTOR_INCLUDE_DIRS})
target_link_libraries(UtilitiesRFIOAdaptorPlugin PUBLIC
  UtilitiesStorageFactory
  UtilitiesRFIOAdaptor
  FWCoreCatalog
  FWCoreServiceRegistry
  FWCoreUtilities
)

install( TARGETS UtilitiesRFIOAdaptorPlugin EXPORT UtilitiesRFIOAdaptorPlugin DESTINATION  lib )

add_library(RFIOCastorPlugin SHARED 
  RFIOCastorPlugin.cc
)

target_link_libraries(RFIOCastorPlugin PUBLIC
  UtilitiesRFIOAdaptor
)

install( TARGETS RFIOCastorPlugin EXPORT RFIOCastorPlugin DESTINATION  lib )

add_library(RFIODPMPlugin SHARED 
  RFIODPMPlugin.cc
)

target_link_libraries(RFIODPMPlugin PUBLIC
  UtilitiesRFIOAdaptor
)

install( TARGETS RFIODPMPlugin EXPORT RFIODPMPlugin DESTINATION  lib )

