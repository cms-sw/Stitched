add_executable(test_TFileAdaptor_TFile
  tfileTest.cpp
)

target_include_directories(test_TFileAdaptor_TFile PUBLIC ${Boost_INCLUDE_DIR})
include_directories(test_TFileAdaptor_TFile PUBLIC ${Boost_INCLUDE_DIR})
target_include_directories(test_TFileAdaptor_TFile PUBLIC ${TBB_INCLUDE_DIRS})
include_directories(test_TFileAdaptor_TFile PUBLIC ${TBB_INCLUDE_DIRS})
target_include_directories(test_TFileAdaptor_TFile PUBLIC ${ROOT_INCLUDE_DIR})
include_directories(test_TFileAdaptor_TFile PUBLIC ${ROOT_INCLUDE_DIR})
target_link_libraries(test_TFileAdaptor_TFile PUBLIC
  Core
  MathCore
  Thread
  RIO
  UtilitiesStorageFactory
  IOPoolTFileAdaptor
  Net
  Tree
  FWCorePluginManager
)

add_test(NAME test_TFileAdaptor_TFile COMMAND test_TFileAdaptor_TFile)
