add_executable(test_TFileAdaptor_TFile
  tfileTest.cpp
)

target_include_directories(test_TFileAdaptor_TFile PUBLIC ${Boost_INCLUDE_DIR})
target_include_directories(test_TFileAdaptor_TFile PUBLIC ${TBB_INCLUDE_DIRS})
target_include_directories(test_TFileAdaptor_TFile PUBLIC ${ROOT_INCLUDE_DIR})
target_link_libraries(test_TFileAdaptor_TFile PUBLIC
  Core
  Thread
  Tree
  RIO
  MathCore
  FWCorePluginManager
  UtilitiesStorageFactory
  IOPoolTFileAdaptor
  Net
)

install( TARGETS test_TFileAdaptor_TFile EXPORT test_TFileAdaptor_TFile DESTINATION  bin )

