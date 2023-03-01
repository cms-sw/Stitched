add_executable(test_StorageFactory_t0Repack
  t0Repack.cpp
)

set_target_properties(test_StorageFactory_t0Repack PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS test_StorageFactory_t0Repack)

add_dependencies( test_StorageFactory_t0Repack ALL_PLUGINS)

target_include_directories(test_StorageFactory_t0Repack PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(test_StorageFactory_t0Repack PUBLIC
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

target_link_libraries(test_StorageFactory_t0Repack PUBLIC
FWCoreParameterSet
UtilitiesStorageFactory
)


add_executable(test_StorageFactory_randomread
  randomread.cpp
)

set_target_properties(test_StorageFactory_randomread PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS test_StorageFactory_randomread)

add_dependencies( test_StorageFactory_randomread ALL_PLUGINS)

target_include_directories(test_StorageFactory_randomread PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(test_StorageFactory_randomread PUBLIC
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

target_link_libraries(test_StorageFactory_randomread PUBLIC
FWCoreParameterSet
UtilitiesStorageFactory
)


add_executable(test_StorageFactory_Any
  any.cpp
)

set_target_properties(test_StorageFactory_Any PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS test_StorageFactory_Any)

add_dependencies( test_StorageFactory_Any ALL_PLUGINS)

target_include_directories(test_StorageFactory_Any PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(test_StorageFactory_Any PUBLIC
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

target_link_libraries(test_StorageFactory_Any PUBLIC
FWCoreParameterSet
UtilitiesStorageFactory
)


add_executable(test_StorageFactory_Local
  local.cpp
)

add_test(NAME test_StorageFactory_Local_CTest COMMAND test_StorageFactory_Local)

add_test_properties(test_StorageFactory_Local_CTest)

set_target_properties(test_StorageFactory_Local PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS test_StorageFactory_Local)

add_dependencies( test_StorageFactory_Local ALL_PLUGINS)

target_include_directories(test_StorageFactory_Local PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(test_StorageFactory_Local PUBLIC
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

target_link_libraries(test_StorageFactory_Local PUBLIC
FWCoreParameterSet
UtilitiesStorageFactory
)


add_executable(test_StorageFactory_Local2
  local2.cpp
)

add_test(NAME test_StorageFactory_Local2_CTest COMMAND test_StorageFactory_Local2)

add_test_properties(test_StorageFactory_Local2_CTest)

set_target_properties(test_StorageFactory_Local2 PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS test_StorageFactory_Local2)

add_dependencies( test_StorageFactory_Local2 ALL_PLUGINS)

target_include_directories(test_StorageFactory_Local2 PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(test_StorageFactory_Local2 PUBLIC
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

target_link_libraries(test_StorageFactory_Local2 PUBLIC
FWCoreParameterSet
UtilitiesStorageFactory
)


add_executable(test_StorageFactory_Local3
  local3.cpp
)

add_test(NAME test_StorageFactory_Local3_CTest COMMAND test_StorageFactory_Local3)

add_test_properties(test_StorageFactory_Local3_CTest)

set_target_properties(test_StorageFactory_Local3 PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS test_StorageFactory_Local3)

add_dependencies( test_StorageFactory_Local3 ALL_PLUGINS)

target_include_directories(test_StorageFactory_Local3 PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(test_StorageFactory_Local3 PUBLIC
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

target_link_libraries(test_StorageFactory_Local3 PUBLIC
FWCoreParameterSet
UtilitiesStorageFactory
)


add_executable(test_StorageFactory_Ftp
  ftp.cpp
)

set_target_properties(test_StorageFactory_Ftp PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS test_StorageFactory_Ftp)

add_dependencies( test_StorageFactory_Ftp ALL_PLUGINS)

target_include_directories(test_StorageFactory_Ftp PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(test_StorageFactory_Ftp PUBLIC
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

target_link_libraries(test_StorageFactory_Ftp PUBLIC
FWCoreParameterSet
UtilitiesStorageFactory
)


add_executable(test_StorageFactory_Ftp2
  ftp2.cpp
)

set_target_properties(test_StorageFactory_Ftp2 PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS test_StorageFactory_Ftp2)

add_dependencies( test_StorageFactory_Ftp2 ALL_PLUGINS)

target_include_directories(test_StorageFactory_Ftp2 PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(test_StorageFactory_Ftp2 PUBLIC
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

target_link_libraries(test_StorageFactory_Ftp2 PUBLIC
FWCoreParameterSet
UtilitiesStorageFactory
)


add_executable(test_StorageFactory_Rfio2
  rfio2.cpp
)

add_test(NAME test_StorageFactory_Rfio2_CTest COMMAND test_StorageFactory_Rfio2)

add_test_properties(test_StorageFactory_Rfio2_CTest)

set_target_properties(test_StorageFactory_Rfio2 PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS test_StorageFactory_Rfio2)

add_dependencies( test_StorageFactory_Rfio2 ALL_PLUGINS)

target_include_directories(test_StorageFactory_Rfio2 PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(test_StorageFactory_Rfio2 PUBLIC
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

target_link_libraries(test_StorageFactory_Rfio2 PUBLIC
FWCoreParameterSet
UtilitiesStorageFactory
)


add_executable(test_StorageFactory_Rfio3
  rfio3.cpp
)

add_test(NAME test_StorageFactory_Rfio3_CTest COMMAND test_StorageFactory_Rfio3)

add_test_properties(test_StorageFactory_Rfio3_CTest)

set_target_properties(test_StorageFactory_Rfio3 PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS test_StorageFactory_Rfio3)

add_dependencies( test_StorageFactory_Rfio3 ALL_PLUGINS)

target_include_directories(test_StorageFactory_Rfio3 PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(test_StorageFactory_Rfio3 PUBLIC
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

target_link_libraries(test_StorageFactory_Rfio3 PUBLIC
FWCoreParameterSet
UtilitiesStorageFactory
)


add_executable(test_StorageFactory_Write
  write.cpp
)

set_target_properties(test_StorageFactory_Write PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS test_StorageFactory_Write)

add_dependencies( test_StorageFactory_Write ALL_PLUGINS)

target_include_directories(test_StorageFactory_Write PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(test_StorageFactory_Write PUBLIC
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

target_link_libraries(test_StorageFactory_Write PUBLIC
FWCoreParameterSet
UtilitiesStorageFactory
)


add_executable(test_StorageFactory_Mkstemp
  mkstemp.cpp
)

add_test(NAME test_StorageFactory_Mkstemp_CTest COMMAND test_StorageFactory_Mkstemp)

add_test_properties(test_StorageFactory_Mkstemp_CTest)

set_target_properties(test_StorageFactory_Mkstemp PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS test_StorageFactory_Mkstemp)

add_dependencies( test_StorageFactory_Mkstemp ALL_PLUGINS)

target_include_directories(test_StorageFactory_Mkstemp PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(test_StorageFactory_Mkstemp PUBLIC
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

target_link_libraries(test_StorageFactory_Mkstemp PUBLIC
FWCoreParameterSet
UtilitiesStorageFactory
)


