add_executable(test_TFileAdaptor_TFile
  tfileTest.cpp
)

add_test(NAME test_TFileAdaptor_TFile_CTest COMMAND test_TFileAdaptor_TFile)

add_test_properties(test_TFileAdaptor_TFile_CTest)

set_target_properties(test_TFileAdaptor_TFile PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS test_TFileAdaptor_TFile)

add_dependencies( test_TFileAdaptor_TFile ALL_PLUGINS)

target_include_directories(test_TFileAdaptor_TFile PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(test_TFileAdaptor_TFile PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${OPENSSL_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
/usr/include
)

add_compile_options("-D_FILE_OFFSET_BITS=64")

target_link_libraries(test_TFileAdaptor_TFile PUBLIC
FWCorePluginManager
IOPoolTFileAdaptor
ROOT::Core
ROOT::MathCore
ROOT::Net
ROOT::RIO
ROOT::Thread
ROOT::Tree
)


