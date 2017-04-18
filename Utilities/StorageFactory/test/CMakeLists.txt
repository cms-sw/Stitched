add_executable(test_StorageFactory_t0Repack
  t0Repack.cpp
)

target_include_directories(test_StorageFactory_t0Repack PUBLIC ${Boost_INCLUDE_DIR})
include_directories(test_StorageFactory_t0Repack PUBLIC ${Boost_INCLUDE_DIR})
target_include_directories(test_StorageFactory_t0Repack PUBLIC ${TBB_INCLUDE_DIRS})
include_directories(test_StorageFactory_t0Repack PUBLIC ${TBB_INCLUDE_DIRS})
target_include_directories(test_StorageFactory_t0Repack PUBLIC ${ROOT_INCLUDE_DIR})
include_directories(test_StorageFactory_t0Repack PUBLIC ${ROOT_INCLUDE_DIR})
target_link_libraries(test_StorageFactory_t0Repack PUBLIC
  UtilitiesStorageFactory
  FWCoreParameterSet
)

add_test(NAME test_StorageFactory_t0Repack COMMAND test_StorageFactory_t0Repack)
add_executable(test_StorageFactory_randomread
  randomread.cpp
)

target_link_libraries(test_StorageFactory_randomread PUBLIC
  UtilitiesStorageFactory
  FWCoreParameterSet
)

add_test(NAME test_StorageFactory_randomread COMMAND test_StorageFactory_randomread)
add_executable(test_StorageFactory_Any
  any.cpp
)

target_include_directories(test_StorageFactory_Any PUBLIC ${Boost_INCLUDE_DIR})
include_directories(test_StorageFactory_Any PUBLIC ${Boost_INCLUDE_DIR})
target_include_directories(test_StorageFactory_Any PUBLIC ${TBB_INCLUDE_DIRS})
include_directories(test_StorageFactory_Any PUBLIC ${TBB_INCLUDE_DIRS})
target_include_directories(test_StorageFactory_Any PUBLIC ${ROOT_INCLUDE_DIR})
include_directories(test_StorageFactory_Any PUBLIC ${ROOT_INCLUDE_DIR})
target_link_libraries(test_StorageFactory_Any PUBLIC
  UtilitiesStorageFactory
  FWCoreParameterSet
)

add_test(NAME test_StorageFactory_Any COMMAND test_StorageFactory_Any)
add_executable(test_StorageFactory_Local
  local.cpp
)

target_include_directories(test_StorageFactory_Local PUBLIC ${Boost_INCLUDE_DIR})
include_directories(test_StorageFactory_Local PUBLIC ${Boost_INCLUDE_DIR})
target_include_directories(test_StorageFactory_Local PUBLIC ${TBB_INCLUDE_DIRS})
include_directories(test_StorageFactory_Local PUBLIC ${TBB_INCLUDE_DIRS})
target_include_directories(test_StorageFactory_Local PUBLIC ${ROOT_INCLUDE_DIR})
include_directories(test_StorageFactory_Local PUBLIC ${ROOT_INCLUDE_DIR})
target_link_libraries(test_StorageFactory_Local PUBLIC
  UtilitiesStorageFactory
  FWCoreParameterSet
)

add_test(NAME test_StorageFactory_Local COMMAND test_StorageFactory_Local)
add_executable(test_StorageFactory_Local2
  local2.cpp
)

target_include_directories(test_StorageFactory_Local2 PUBLIC ${Boost_INCLUDE_DIR})
include_directories(test_StorageFactory_Local2 PUBLIC ${Boost_INCLUDE_DIR})
target_include_directories(test_StorageFactory_Local2 PUBLIC ${TBB_INCLUDE_DIRS})
include_directories(test_StorageFactory_Local2 PUBLIC ${TBB_INCLUDE_DIRS})
target_include_directories(test_StorageFactory_Local2 PUBLIC ${ROOT_INCLUDE_DIR})
include_directories(test_StorageFactory_Local2 PUBLIC ${ROOT_INCLUDE_DIR})
target_link_libraries(test_StorageFactory_Local2 PUBLIC
  UtilitiesStorageFactory
  FWCoreParameterSet
)

add_test(NAME test_StorageFactory_Local2 COMMAND test_StorageFactory_Local2)
add_executable(test_StorageFactory_Local3
  local3.cpp
)

target_include_directories(test_StorageFactory_Local3 PUBLIC ${Boost_INCLUDE_DIR})
include_directories(test_StorageFactory_Local3 PUBLIC ${Boost_INCLUDE_DIR})
target_include_directories(test_StorageFactory_Local3 PUBLIC ${TBB_INCLUDE_DIRS})
include_directories(test_StorageFactory_Local3 PUBLIC ${TBB_INCLUDE_DIRS})
target_include_directories(test_StorageFactory_Local3 PUBLIC ${ROOT_INCLUDE_DIR})
include_directories(test_StorageFactory_Local3 PUBLIC ${ROOT_INCLUDE_DIR})
target_link_libraries(test_StorageFactory_Local3 PUBLIC
  UtilitiesStorageFactory
  FWCoreParameterSet
)

add_test(NAME test_StorageFactory_Local3 COMMAND test_StorageFactory_Local3)
add_executable(test_StorageFactory_Ftp
  ftp.cpp
)

target_include_directories(test_StorageFactory_Ftp PUBLIC ${Boost_INCLUDE_DIR})
include_directories(test_StorageFactory_Ftp PUBLIC ${Boost_INCLUDE_DIR})
target_include_directories(test_StorageFactory_Ftp PUBLIC ${TBB_INCLUDE_DIRS})
include_directories(test_StorageFactory_Ftp PUBLIC ${TBB_INCLUDE_DIRS})
target_include_directories(test_StorageFactory_Ftp PUBLIC ${ROOT_INCLUDE_DIR})
include_directories(test_StorageFactory_Ftp PUBLIC ${ROOT_INCLUDE_DIR})
target_link_libraries(test_StorageFactory_Ftp PUBLIC
  UtilitiesStorageFactory
  FWCoreParameterSet
)

add_test(NAME test_StorageFactory_Ftp COMMAND test_StorageFactory_Ftp)
add_executable(test_StorageFactory_Ftp2
  ftp2.cpp
)

target_include_directories(test_StorageFactory_Ftp2 PUBLIC ${Boost_INCLUDE_DIR})
include_directories(test_StorageFactory_Ftp2 PUBLIC ${Boost_INCLUDE_DIR})
target_include_directories(test_StorageFactory_Ftp2 PUBLIC ${TBB_INCLUDE_DIRS})
include_directories(test_StorageFactory_Ftp2 PUBLIC ${TBB_INCLUDE_DIRS})
target_include_directories(test_StorageFactory_Ftp2 PUBLIC ${ROOT_INCLUDE_DIR})
include_directories(test_StorageFactory_Ftp2 PUBLIC ${ROOT_INCLUDE_DIR})
target_link_libraries(test_StorageFactory_Ftp2 PUBLIC
  UtilitiesStorageFactory
  FWCoreParameterSet
)

add_test(NAME test_StorageFactory_Ftp2 COMMAND test_StorageFactory_Ftp2)
add_executable(test_StorageFactory_Rfio2
  rfio2.cpp
)

target_include_directories(test_StorageFactory_Rfio2 PUBLIC ${Boost_INCLUDE_DIR})
include_directories(test_StorageFactory_Rfio2 PUBLIC ${Boost_INCLUDE_DIR})
target_include_directories(test_StorageFactory_Rfio2 PUBLIC ${TBB_INCLUDE_DIRS})
include_directories(test_StorageFactory_Rfio2 PUBLIC ${TBB_INCLUDE_DIRS})
target_include_directories(test_StorageFactory_Rfio2 PUBLIC ${ROOT_INCLUDE_DIR})
include_directories(test_StorageFactory_Rfio2 PUBLIC ${ROOT_INCLUDE_DIR})
target_link_libraries(test_StorageFactory_Rfio2 PUBLIC
  UtilitiesStorageFactory
  FWCoreParameterSet
)

add_test(NAME test_StorageFactory_Rfio2 COMMAND test_StorageFactory_Rfio2)
add_executable(test_StorageFactory_Rfio3
  rfio3.cpp
)

target_include_directories(test_StorageFactory_Rfio3 PUBLIC ${Boost_INCLUDE_DIR})
include_directories(test_StorageFactory_Rfio3 PUBLIC ${Boost_INCLUDE_DIR})
target_include_directories(test_StorageFactory_Rfio3 PUBLIC ${TBB_INCLUDE_DIRS})
include_directories(test_StorageFactory_Rfio3 PUBLIC ${TBB_INCLUDE_DIRS})
target_include_directories(test_StorageFactory_Rfio3 PUBLIC ${ROOT_INCLUDE_DIR})
include_directories(test_StorageFactory_Rfio3 PUBLIC ${ROOT_INCLUDE_DIR})
target_link_libraries(test_StorageFactory_Rfio3 PUBLIC
  UtilitiesStorageFactory
  FWCoreParameterSet
)

add_test(NAME test_StorageFactory_Rfio3 COMMAND test_StorageFactory_Rfio3)
add_executable(test_StorageFactory_Write
  write.cpp
)

target_include_directories(test_StorageFactory_Write PUBLIC ${Boost_INCLUDE_DIR})
include_directories(test_StorageFactory_Write PUBLIC ${Boost_INCLUDE_DIR})
target_include_directories(test_StorageFactory_Write PUBLIC ${TBB_INCLUDE_DIRS})
include_directories(test_StorageFactory_Write PUBLIC ${TBB_INCLUDE_DIRS})
target_include_directories(test_StorageFactory_Write PUBLIC ${ROOT_INCLUDE_DIR})
include_directories(test_StorageFactory_Write PUBLIC ${ROOT_INCLUDE_DIR})
target_link_libraries(test_StorageFactory_Write PUBLIC
  UtilitiesStorageFactory
  FWCoreParameterSet
)

add_test(NAME test_StorageFactory_Write COMMAND test_StorageFactory_Write)
add_executable(test_StorageFactory_Mkstemp
  mkstemp.cpp
)

target_include_directories(test_StorageFactory_Mkstemp PUBLIC ${Boost_INCLUDE_DIR})
include_directories(test_StorageFactory_Mkstemp PUBLIC ${Boost_INCLUDE_DIR})
target_include_directories(test_StorageFactory_Mkstemp PUBLIC ${TBB_INCLUDE_DIRS})
include_directories(test_StorageFactory_Mkstemp PUBLIC ${TBB_INCLUDE_DIRS})
target_link_libraries(test_StorageFactory_Mkstemp PUBLIC
  UtilitiesStorageFactory
  FWCoreParameterSet
)

add_test(NAME test_StorageFactory_Mkstemp COMMAND test_StorageFactory_Mkstemp)
