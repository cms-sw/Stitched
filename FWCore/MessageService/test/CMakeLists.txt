add_library(UnitTestClient_A SHARED ${UnitTestClient_A_EXTRA_SOURCES}
  UnitTestClient_A.cc
)

set_target_properties(UnitTestClient_A PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_TESTLIBS UnitTestClient_A)

set_target_properties(UnitTestClient_A PROPERTIES PREFIX "plugin")

add_dependencies( ALL_PLUGINS UnitTestClient_A)

edm_write_config( UnitTestClient_A FWCore/MessageService)

target_include_directories(UnitTestClient_A PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(UnitTestClient_A PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(UnitTestClient_A PUBLIC
FWCoreFramework
FWCoreMessageLogger
FWCoreMessageService
)


add_python_rules(FWCore/MessageService/test/)

add_script_rules(FWCore/MessageService/test/)

install( TARGETS UnitTestClient_A DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

add_library(UnitTestClient_Ad SHARED ${UnitTestClient_Ad_EXTRA_SOURCES}
  UnitTestClient_Ad.cc
)

set_target_properties(UnitTestClient_Ad PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_TESTLIBS UnitTestClient_Ad)

set_target_properties(UnitTestClient_Ad PROPERTIES PREFIX "plugin")

add_dependencies( ALL_PLUGINS UnitTestClient_Ad)

edm_write_config( UnitTestClient_Ad FWCore/MessageService)

target_include_directories(UnitTestClient_Ad PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(UnitTestClient_Ad PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(UnitTestClient_Ad PUBLIC
FWCoreFramework
FWCoreMessageLogger
FWCoreMessageService
)


add_python_rules(FWCore/MessageService/test/)

add_script_rules(FWCore/MessageService/test/)

install( TARGETS UnitTestClient_Ad DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

add_library(UnitTestClient_B SHARED ${UnitTestClient_B_EXTRA_SOURCES}
  UnitTestClient_B.cc
)

set_target_properties(UnitTestClient_B PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_TESTLIBS UnitTestClient_B)

set_target_properties(UnitTestClient_B PROPERTIES PREFIX "plugin")

add_dependencies( ALL_PLUGINS UnitTestClient_B)

edm_write_config( UnitTestClient_B FWCore/MessageService)

target_include_directories(UnitTestClient_B PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(UnitTestClient_B PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(UnitTestClient_B PUBLIC
FWCoreFramework
FWCoreMessageLogger
FWCoreMessageService
)


add_python_rules(FWCore/MessageService/test/)

add_script_rules(FWCore/MessageService/test/)

install( TARGETS UnitTestClient_B DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

add_library(UnitTestClient_C SHARED ${UnitTestClient_C_EXTRA_SOURCES}
  UnitTestClient_C.cc
)

set_target_properties(UnitTestClient_C PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_TESTLIBS UnitTestClient_C)

set_target_properties(UnitTestClient_C PROPERTIES PREFIX "plugin")

add_dependencies( ALL_PLUGINS UnitTestClient_C)

edm_write_config( UnitTestClient_C FWCore/MessageService)

target_include_directories(UnitTestClient_C PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(UnitTestClient_C PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(UnitTestClient_C PUBLIC
FWCoreFramework
FWCoreMessageLogger
FWCoreMessageService
)


add_python_rules(FWCore/MessageService/test/)

add_script_rules(FWCore/MessageService/test/)

install( TARGETS UnitTestClient_C DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

add_library(UnitTestClient_D SHARED ${UnitTestClient_D_EXTRA_SOURCES}
  UnitTestClient_D.cc
)

set_target_properties(UnitTestClient_D PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_TESTLIBS UnitTestClient_D)

set_target_properties(UnitTestClient_D PROPERTIES PREFIX "plugin")

add_dependencies( ALL_PLUGINS UnitTestClient_D)

edm_write_config( UnitTestClient_D FWCore/MessageService)

target_include_directories(UnitTestClient_D PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(UnitTestClient_D PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(UnitTestClient_D PUBLIC
FWCoreFramework
FWCoreMessageLogger
FWCoreMessageService
)


add_python_rules(FWCore/MessageService/test/)

add_script_rules(FWCore/MessageService/test/)

install( TARGETS UnitTestClient_D DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

add_library(UnitTestClient_E SHARED ${UnitTestClient_E_EXTRA_SOURCES}
  UnitTestClient_E.cc
)

set_target_properties(UnitTestClient_E PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_TESTLIBS UnitTestClient_E)

set_target_properties(UnitTestClient_E PROPERTIES PREFIX "plugin")

add_dependencies( ALL_PLUGINS UnitTestClient_E)

edm_write_config( UnitTestClient_E FWCore/MessageService)

target_include_directories(UnitTestClient_E PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(UnitTestClient_E PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(UnitTestClient_E PUBLIC
FWCoreFramework
FWCoreMessageLogger
FWCoreMessageService
)


add_python_rules(FWCore/MessageService/test/)

add_script_rules(FWCore/MessageService/test/)

install( TARGETS UnitTestClient_E DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

add_library(UnitTestClient_F SHARED ${UnitTestClient_F_EXTRA_SOURCES}
  UnitTestClient_F.cc
)

set_target_properties(UnitTestClient_F PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_TESTLIBS UnitTestClient_F)

set_target_properties(UnitTestClient_F PROPERTIES PREFIX "plugin")

add_dependencies( ALL_PLUGINS UnitTestClient_F)

edm_write_config( UnitTestClient_F FWCore/MessageService)

target_include_directories(UnitTestClient_F PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(UnitTestClient_F PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(UnitTestClient_F PUBLIC
FWCoreFramework
FWCoreMessageLogger
FWCoreMessageService
)


add_python_rules(FWCore/MessageService/test/)

add_script_rules(FWCore/MessageService/test/)

install( TARGETS UnitTestClient_F DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

add_library(UnitTestClient_G SHARED ${UnitTestClient_G_EXTRA_SOURCES}
  UnitTestClient_G.cc
)

set_target_properties(UnitTestClient_G PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_TESTLIBS UnitTestClient_G)

set_target_properties(UnitTestClient_G PROPERTIES PREFIX "plugin")

add_dependencies( ALL_PLUGINS UnitTestClient_G)

edm_write_config( UnitTestClient_G FWCore/MessageService)

target_include_directories(UnitTestClient_G PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(UnitTestClient_G PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(UnitTestClient_G PUBLIC
FWCoreFramework
FWCoreMessageLogger
FWCoreMessageService
)


add_python_rules(FWCore/MessageService/test/)

add_script_rules(FWCore/MessageService/test/)

install( TARGETS UnitTestClient_G DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

add_library(UnitTestClient_H SHARED ${UnitTestClient_H_EXTRA_SOURCES}
  UnitTestClient_H.cc
)

set_target_properties(UnitTestClient_H PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_TESTLIBS UnitTestClient_H)

set_target_properties(UnitTestClient_H PROPERTIES PREFIX "plugin")

add_dependencies( ALL_PLUGINS UnitTestClient_H)

edm_write_config( UnitTestClient_H FWCore/MessageService)

target_include_directories(UnitTestClient_H PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(UnitTestClient_H PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(UnitTestClient_H PUBLIC
FWCoreFramework
FWCoreMessageLogger
FWCoreMessageService
)


add_python_rules(FWCore/MessageService/test/)

add_script_rules(FWCore/MessageService/test/)

install( TARGETS UnitTestClient_H DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

add_library(UnitTestClient_Hd SHARED ${UnitTestClient_Hd_EXTRA_SOURCES}
  UnitTestClient_Hd.cc
)

set_target_properties(UnitTestClient_Hd PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_TESTLIBS UnitTestClient_Hd)

set_target_properties(UnitTestClient_Hd PROPERTIES PREFIX "plugin")

add_dependencies( ALL_PLUGINS UnitTestClient_Hd)

edm_write_config( UnitTestClient_Hd FWCore/MessageService)

target_include_directories(UnitTestClient_Hd PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(UnitTestClient_Hd PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(UnitTestClient_Hd PUBLIC
FWCoreFramework
FWCoreMessageLogger
FWCoreMessageService
)


add_python_rules(FWCore/MessageService/test/)

add_script_rules(FWCore/MessageService/test/)

install( TARGETS UnitTestClient_Hd DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

add_library(UnitTestClient_I SHARED ${UnitTestClient_I_EXTRA_SOURCES}
  UnitTestClient_I.cc
)

set_target_properties(UnitTestClient_I PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_TESTLIBS UnitTestClient_I)

set_target_properties(UnitTestClient_I PROPERTIES PREFIX "plugin")

add_dependencies( ALL_PLUGINS UnitTestClient_I)

edm_write_config( UnitTestClient_I FWCore/MessageService)

target_include_directories(UnitTestClient_I PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(UnitTestClient_I PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(UnitTestClient_I PUBLIC
FWCoreFramework
FWCoreMessageLogger
FWCoreMessageService
)


add_python_rules(FWCore/MessageService/test/)

add_script_rules(FWCore/MessageService/test/)

install( TARGETS UnitTestClient_I DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

add_library(UnitTestClient_J SHARED ${UnitTestClient_J_EXTRA_SOURCES}
  UnitTestClient_J.cc
)

set_target_properties(UnitTestClient_J PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_TESTLIBS UnitTestClient_J)

set_target_properties(UnitTestClient_J PROPERTIES PREFIX "plugin")

add_dependencies( ALL_PLUGINS UnitTestClient_J)

edm_write_config( UnitTestClient_J FWCore/MessageService)

target_include_directories(UnitTestClient_J PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(UnitTestClient_J PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(UnitTestClient_J PUBLIC
FWCoreFramework
FWCoreMessageLogger
FWCoreMessageService
)


add_python_rules(FWCore/MessageService/test/)

add_script_rules(FWCore/MessageService/test/)

install( TARGETS UnitTestClient_J DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

add_library(UnitTestClient_K SHARED ${UnitTestClient_K_EXTRA_SOURCES}
  UnitTestClient_K.cc
)

set_target_properties(UnitTestClient_K PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_TESTLIBS UnitTestClient_K)

set_target_properties(UnitTestClient_K PROPERTIES PREFIX "plugin")

add_dependencies( ALL_PLUGINS UnitTestClient_K)

edm_write_config( UnitTestClient_K FWCore/MessageService)

target_include_directories(UnitTestClient_K PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(UnitTestClient_K PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(UnitTestClient_K PUBLIC
FWCoreFramework
FWCoreMessageLogger
FWCoreMessageService
)


add_python_rules(FWCore/MessageService/test/)

add_script_rules(FWCore/MessageService/test/)

install( TARGETS UnitTestClient_K DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

add_library(UnitTestClient_M SHARED ${UnitTestClient_M_EXTRA_SOURCES}
  UnitTestClient_M.cc
)

set_target_properties(UnitTestClient_M PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_TESTLIBS UnitTestClient_M)

set_target_properties(UnitTestClient_M PROPERTIES PREFIX "plugin")

add_dependencies( ALL_PLUGINS UnitTestClient_M)

edm_write_config( UnitTestClient_M FWCore/MessageService)

target_include_directories(UnitTestClient_M PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(UnitTestClient_M PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(UnitTestClient_M PUBLIC
FWCoreFramework
FWCoreMessageLogger
FWCoreMessageService
)


add_python_rules(FWCore/MessageService/test/)

add_script_rules(FWCore/MessageService/test/)

install( TARGETS UnitTestClient_M DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

add_library(UnitTestClient_N SHARED ${UnitTestClient_N_EXTRA_SOURCES}
  UnitTestClient_N.cc
)

set_target_properties(UnitTestClient_N PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_TESTLIBS UnitTestClient_N)

set_target_properties(UnitTestClient_N PROPERTIES PREFIX "plugin")

add_dependencies( ALL_PLUGINS UnitTestClient_N)

edm_write_config( UnitTestClient_N FWCore/MessageService)

target_include_directories(UnitTestClient_N PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(UnitTestClient_N PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(UnitTestClient_N PUBLIC
FWCoreFramework
FWCoreMessageLogger
FWCoreMessageService
)


add_python_rules(FWCore/MessageService/test/)

add_script_rules(FWCore/MessageService/test/)

install( TARGETS UnitTestClient_N DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

add_library(UnitTestClient_Nd SHARED ${UnitTestClient_Nd_EXTRA_SOURCES}
  UnitTestClient_Nd.cc
)

set_target_properties(UnitTestClient_Nd PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_TESTLIBS UnitTestClient_Nd)

set_target_properties(UnitTestClient_Nd PROPERTIES PREFIX "plugin")

add_dependencies( ALL_PLUGINS UnitTestClient_Nd)

edm_write_config( UnitTestClient_Nd FWCore/MessageService)

target_include_directories(UnitTestClient_Nd PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(UnitTestClient_Nd PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(UnitTestClient_Nd PUBLIC
FWCoreFramework
FWCoreMessageLogger
FWCoreMessageService
)


add_python_rules(FWCore/MessageService/test/)

add_script_rules(FWCore/MessageService/test/)

install( TARGETS UnitTestClient_Nd DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

add_library(UnitTestClient_O SHARED ${UnitTestClient_O_EXTRA_SOURCES}
  UnitTestClient_O.cc
)

set_target_properties(UnitTestClient_O PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_TESTLIBS UnitTestClient_O)

set_target_properties(UnitTestClient_O PROPERTIES PREFIX "plugin")

add_dependencies( ALL_PLUGINS UnitTestClient_O)

edm_write_config( UnitTestClient_O FWCore/MessageService)

target_include_directories(UnitTestClient_O PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(UnitTestClient_O PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(UnitTestClient_O PUBLIC
FWCoreFramework
FWCoreMessageLogger
FWCoreMessageService
)


add_python_rules(FWCore/MessageService/test/)

add_script_rules(FWCore/MessageService/test/)

install( TARGETS UnitTestClient_O DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

add_library(UnitTestClient_P SHARED ${UnitTestClient_P_EXTRA_SOURCES}
  UnitTestClient_P.cc
)

set_target_properties(UnitTestClient_P PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_TESTLIBS UnitTestClient_P)

set_target_properties(UnitTestClient_P PROPERTIES PREFIX "plugin")

add_dependencies( ALL_PLUGINS UnitTestClient_P)

edm_write_config( UnitTestClient_P FWCore/MessageService)

target_include_directories(UnitTestClient_P PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(UnitTestClient_P PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(UnitTestClient_P PUBLIC
FWCoreFramework
FWCoreMessageLogger
FWCoreMessageService
)


add_python_rules(FWCore/MessageService/test/)

add_script_rules(FWCore/MessageService/test/)

install( TARGETS UnitTestClient_P DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

add_library(UnitTestClient_Q SHARED ${UnitTestClient_Q_EXTRA_SOURCES}
  UnitTestClient_Q.cc
)

set_target_properties(UnitTestClient_Q PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_TESTLIBS UnitTestClient_Q)

set_target_properties(UnitTestClient_Q PROPERTIES PREFIX "plugin")

add_dependencies( ALL_PLUGINS UnitTestClient_Q)

edm_write_config( UnitTestClient_Q FWCore/MessageService)

target_include_directories(UnitTestClient_Q PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(UnitTestClient_Q PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(UnitTestClient_Q PUBLIC
FWCoreFramework
FWCoreMessageLogger
FWCoreMessageService
)


add_python_rules(FWCore/MessageService/test/)

add_script_rules(FWCore/MessageService/test/)

install( TARGETS UnitTestClient_Q DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

add_library(UnitTestClient_R SHARED ${UnitTestClient_R_EXTRA_SOURCES}
  UnitTestClient_R.cc
)

set_target_properties(UnitTestClient_R PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_TESTLIBS UnitTestClient_R)

set_target_properties(UnitTestClient_R PROPERTIES PREFIX "plugin")

add_dependencies( ALL_PLUGINS UnitTestClient_R)

edm_write_config( UnitTestClient_R FWCore/MessageService)

target_include_directories(UnitTestClient_R PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(UnitTestClient_R PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(UnitTestClient_R PUBLIC
FWCoreFramework
FWCoreMessageLogger
FWCoreMessageService
)


add_python_rules(FWCore/MessageService/test/)

add_script_rules(FWCore/MessageService/test/)

install( TARGETS UnitTestClient_R DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

add_library(UnitTestClient_S SHARED ${UnitTestClient_S_EXTRA_SOURCES}
  UnitTestClient_S.cc
)

set_target_properties(UnitTestClient_S PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_TESTLIBS UnitTestClient_S)

set_target_properties(UnitTestClient_S PROPERTIES PREFIX "plugin")

add_dependencies( ALL_PLUGINS UnitTestClient_S)

edm_write_config( UnitTestClient_S FWCore/MessageService)

target_include_directories(UnitTestClient_S PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(UnitTestClient_S PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(UnitTestClient_S PUBLIC
FWCoreFramework
FWCoreMessageLogger
FWCoreMessageService
)


add_python_rules(FWCore/MessageService/test/)

add_script_rules(FWCore/MessageService/test/)

install( TARGETS UnitTestClient_S DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

add_library(UnitTestClient_T SHARED ${UnitTestClient_T_EXTRA_SOURCES}
  UnitTestClient_T.cc
)

set_target_properties(UnitTestClient_T PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_TESTLIBS UnitTestClient_T)

set_target_properties(UnitTestClient_T PROPERTIES PREFIX "plugin")

add_dependencies( ALL_PLUGINS UnitTestClient_T)

edm_write_config( UnitTestClient_T FWCore/MessageService)

target_include_directories(UnitTestClient_T PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(UnitTestClient_T PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(UnitTestClient_T PUBLIC
FWCoreFramework
FWCoreMessageLogger
FWCoreMessageService
)


add_python_rules(FWCore/MessageService/test/)

add_script_rules(FWCore/MessageService/test/)

install( TARGETS UnitTestClient_T DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

add_library(UnitTestClient_V SHARED ${UnitTestClient_V_EXTRA_SOURCES}
  UnitTestClient_V.cc
)

set_target_properties(UnitTestClient_V PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_TESTLIBS UnitTestClient_V)

set_target_properties(UnitTestClient_V PROPERTIES PREFIX "plugin")

add_dependencies( ALL_PLUGINS UnitTestClient_V)

edm_write_config( UnitTestClient_V FWCore/MessageService)

target_include_directories(UnitTestClient_V PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(UnitTestClient_V PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(UnitTestClient_V PUBLIC
FWCoreFramework
FWCoreMessageLogger
FWCoreMessageService
)


add_python_rules(FWCore/MessageService/test/)

add_script_rules(FWCore/MessageService/test/)

install( TARGETS UnitTestClient_V DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

add_library(UnitTestClient_Vd SHARED ${UnitTestClient_Vd_EXTRA_SOURCES}
  UnitTestClient_Vd.cc
)

set_target_properties(UnitTestClient_Vd PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_TESTLIBS UnitTestClient_Vd)

set_target_properties(UnitTestClient_Vd PROPERTIES PREFIX "plugin")

add_dependencies( ALL_PLUGINS UnitTestClient_Vd)

edm_write_config( UnitTestClient_Vd FWCore/MessageService)

target_include_directories(UnitTestClient_Vd PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(UnitTestClient_Vd PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(UnitTestClient_Vd PUBLIC
FWCoreFramework
FWCoreMessageLogger
FWCoreMessageService
)


add_python_rules(FWCore/MessageService/test/)

add_script_rules(FWCore/MessageService/test/)

install( TARGETS UnitTestClient_Vd DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

add_library(UnitTestClient_W SHARED ${UnitTestClient_W_EXTRA_SOURCES}
  UnitTestClient_W.cc
)

set_target_properties(UnitTestClient_W PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_TESTLIBS UnitTestClient_W)

set_target_properties(UnitTestClient_W PROPERTIES PREFIX "plugin")

add_dependencies( ALL_PLUGINS UnitTestClient_W)

edm_write_config( UnitTestClient_W FWCore/MessageService)

target_include_directories(UnitTestClient_W PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(UnitTestClient_W PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(UnitTestClient_W PUBLIC
FWCoreFramework
FWCoreMessageLogger
FWCoreMessageService
)


add_python_rules(FWCore/MessageService/test/)

add_script_rules(FWCore/MessageService/test/)

install( TARGETS UnitTestClient_W DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

add_library(UnitTestClient_X SHARED ${UnitTestClient_X_EXTRA_SOURCES}
  UnitTestClient_X.cc
)

set_target_properties(UnitTestClient_X PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_TESTLIBS UnitTestClient_X)

set_target_properties(UnitTestClient_X PROPERTIES PREFIX "plugin")

add_dependencies( ALL_PLUGINS UnitTestClient_X)

edm_write_config( UnitTestClient_X FWCore/MessageService)

target_include_directories(UnitTestClient_X PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(UnitTestClient_X PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(UnitTestClient_X PUBLIC
FWCoreFramework
FWCoreMessageLogger
FWCoreMessageService
)


add_python_rules(FWCore/MessageService/test/)

add_script_rules(FWCore/MessageService/test/)

install( TARGETS UnitTestClient_X DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

add_library(ProblemTestClient_t1 SHARED ${ProblemTestClient_t1_EXTRA_SOURCES}
  ProblemTestClient_t1.cc
)

set_target_properties(ProblemTestClient_t1 PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_TESTLIBS ProblemTestClient_t1)

set_target_properties(ProblemTestClient_t1 PROPERTIES PREFIX "plugin")

add_dependencies( ALL_PLUGINS ProblemTestClient_t1)

edm_write_config( ProblemTestClient_t1 FWCore/MessageService)

target_include_directories(ProblemTestClient_t1 PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(ProblemTestClient_t1 PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(ProblemTestClient_t1 PUBLIC
FWCoreFramework
FWCoreMessageLogger
FWCoreMessageService
)


add_python_rules(FWCore/MessageService/test/)

add_script_rules(FWCore/MessageService/test/)

install( TARGETS ProblemTestClient_t1 DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

add_library(MessageLoggerClient SHARED ${MessageLoggerClient_EXTRA_SOURCES}
  MessageLoggerClient.cc
)

set_target_properties(MessageLoggerClient PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_TESTLIBS MessageLoggerClient)

set_target_properties(MessageLoggerClient PROPERTIES PREFIX "plugin")

add_dependencies( ALL_PLUGINS MessageLoggerClient)

edm_write_config( MessageLoggerClient FWCore/MessageService)

target_include_directories(MessageLoggerClient PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(MessageLoggerClient PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(MessageLoggerClient PUBLIC
FWCoreFramework
FWCoreMessageLogger
FWCoreMessageService
)


add_python_rules(FWCore/MessageService/test/)

add_script_rules(FWCore/MessageService/test/)

install( TARGETS MessageLoggerClient DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

add_library(makeSignals SHARED ${makeSignals_EXTRA_SOURCES}
  makeSignals.cc
)

set_target_properties(makeSignals PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_TESTLIBS makeSignals)

set_target_properties(makeSignals PROPERTIES PREFIX "plugin")

add_dependencies( ALL_PLUGINS makeSignals)

edm_write_config( makeSignals FWCore/MessageService)

target_include_directories(makeSignals PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(makeSignals PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(makeSignals PUBLIC
FWCoreFramework
FWCoreMessageLogger
FWCoreMessageService
ROOT::Core
ROOT::MathCore
ROOT::Net
ROOT::RIO
ROOT::Thread
ROOT::Tree
)


add_python_rules(FWCore/MessageService/test/)

add_script_rules(FWCore/MessageService/test/)

install( TARGETS makeSignals DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

add_library(MemoryTestClient_A SHARED ${MemoryTestClient_A_EXTRA_SOURCES}
  MemoryTestClient_A.cc
)

set_target_properties(MemoryTestClient_A PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_TESTLIBS MemoryTestClient_A)

set_target_properties(MemoryTestClient_A PROPERTIES PREFIX "plugin")

add_dependencies( ALL_PLUGINS MemoryTestClient_A)

edm_write_config( MemoryTestClient_A FWCore/MessageService)

target_include_directories(MemoryTestClient_A PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(MemoryTestClient_A PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(MemoryTestClient_A PUBLIC
FWCoreFramework
FWCoreMessageLogger
FWCoreMessageService
)


add_python_rules(FWCore/MessageService/test/)

add_script_rules(FWCore/MessageService/test/)

install( TARGETS MemoryTestClient_A DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

add_library(UnitTestClient_SLumi SHARED ${UnitTestClient_SLumi_EXTRA_SOURCES}
  UnitTestClient_SLumi.cc
)

set_target_properties(UnitTestClient_SLumi PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_TESTLIBS UnitTestClient_SLumi)

set_target_properties(UnitTestClient_SLumi PROPERTIES PREFIX "plugin")

add_dependencies( ALL_PLUGINS UnitTestClient_SLumi)

edm_write_config( UnitTestClient_SLumi FWCore/MessageService)

target_include_directories(UnitTestClient_SLumi PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(UnitTestClient_SLumi PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(UnitTestClient_SLumi PUBLIC
FWCoreFramework
FWCoreMessageLogger
FWCoreMessageService
)


add_python_rules(FWCore/MessageService/test/)

add_script_rules(FWCore/MessageService/test/)

install( TARGETS UnitTestClient_SLumi DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

add_library(PSetTestClient_A SHARED ${PSetTestClient_A_EXTRA_SOURCES}
  PSetTestClient_A.cc
)

set_target_properties(PSetTestClient_A PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_TESTLIBS PSetTestClient_A)

set_target_properties(PSetTestClient_A PROPERTIES PREFIX "plugin")

add_dependencies( ALL_PLUGINS PSetTestClient_A)

edm_write_config( PSetTestClient_A FWCore/MessageService)

target_include_directories(PSetTestClient_A PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(PSetTestClient_A PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(PSetTestClient_A PUBLIC
FWCoreFramework
FWCoreMessageLogger
FWCoreMessageService
)


add_python_rules(FWCore/MessageService/test/)

add_script_rules(FWCore/MessageService/test/)

install( TARGETS PSetTestClient_A DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

add_library(MLexampleModule_1 SHARED ${MLexampleModule_1_EXTRA_SOURCES}
  MLexampleModule_1.cc
)

set_target_properties(MLexampleModule_1 PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_TESTLIBS MLexampleModule_1)

set_target_properties(MLexampleModule_1 PROPERTIES PREFIX "plugin")

add_dependencies( ALL_PLUGINS MLexampleModule_1)

edm_write_config( MLexampleModule_1 FWCore/MessageService)

target_include_directories(MLexampleModule_1 PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(MLexampleModule_1 PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(MLexampleModule_1 PUBLIC
FWCoreFramework
FWCoreMessageLogger
FWCoreMessageService
)


add_python_rules(FWCore/MessageService/test/)

add_script_rules(FWCore/MessageService/test/)

install( TARGETS MLexampleModule_1 DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

add_executable(standAloneWithMessageLogger
  standAloneTest.cpp
)

set_target_properties(standAloneWithMessageLogger PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS standAloneWithMessageLogger)

add_dependencies( standAloneWithMessageLogger ALL_PLUGINS)

target_compile_definitions( standAloneWithMessageLogger PUBLIC EDM_ML_DEBUG)

target_include_directories(standAloneWithMessageLogger PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(standAloneWithMessageLogger PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(standAloneWithMessageLogger PUBLIC
FWCoreMessageLogger
FWCoreMessageService
FWCoreUtilities
Threads::Threads
crypt
dl
nsl
rt
)


add_executable(standAloneWithMessageLoggerRunner
  testRunner.cpp
)

add_test(NAME standAloneWithMessageLoggerRunner_CTest COMMAND /bin/bash -x ${CMAKE_CURRENT_SOURCE_DIR}/standAlone_1.sh)

add_test_properties(standAloneWithMessageLoggerRunner_CTest)

set_tests_properties(standAloneWithMessageLoggerRunner_CTest PROPERTIES DEPENDS standAloneWithMessageLogger)

set_target_properties(standAloneWithMessageLoggerRunner PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS standAloneWithMessageLoggerRunner)

add_dependencies( standAloneWithMessageLoggerRunner ALL_PLUGINS)

target_include_directories(standAloneWithMessageLoggerRunner PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(standAloneWithMessageLoggerRunner PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(standAloneWithMessageLoggerRunner PUBLIC
FWCoreMessageService
FWCoreUtilities
Threads::Threads
crypt
dl
nsl
rt
)


add_executable(trivial_main
  trivial_main.cpp
)

add_test(NAME trivial_main_CTest COMMAND trivial_main)

add_test_properties(trivial_main_CTest)

set_target_properties(trivial_main PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS trivial_main)

add_dependencies( trivial_main ALL_PLUGINS)

target_include_directories(trivial_main PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(trivial_main PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(trivial_main PUBLIC
FWCoreMessageLogger
FWCoreMessageService
FWCoreUtilities
Threads::Threads
crypt
dl
nsl
rt
)


add_executable(testLoggerInCmsRun
  testLoggerInCmsRun.cpp
)

add_test(NAME testLoggerInCmsRun_CTest COMMAND /bin/bash -x ${CMAKE_CURRENT_SOURCE_DIR}/testLoggerInCmsRun.sh)

add_test_properties(testLoggerInCmsRun_CTest)

set_target_properties(testLoggerInCmsRun PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS testLoggerInCmsRun)

add_dependencies( testLoggerInCmsRun ALL_PLUGINS)

target_include_directories(testLoggerInCmsRun PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(testLoggerInCmsRun PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(testLoggerInCmsRun PUBLIC
FWCoreMessageService
FWCoreUtilities
Threads::Threads
crypt
dl
nsl
rt
)


add_executable(unitTestsGroup_d
  unitTestsGroup_d.cpp
)

add_test(NAME unitTestsGroup_d_2_CTest COMMAND /bin/bash -x ${CMAKE_CURRENT_SOURCE_DIR}/u1d.sh)

add_test_properties(unitTestsGroup_d_2_CTest)

add_test(NAME unitTestsGroup_d_3_CTest COMMAND /bin/bash -x ${CMAKE_CURRENT_SOURCE_DIR}/u13d.sh)

add_test_properties(unitTestsGroup_d_3_CTest)

add_test(NAME unitTestsGroup_d_4_CTest COMMAND /bin/bash -x ${CMAKE_CURRENT_SOURCE_DIR}/u16.sh)

add_test_properties(unitTestsGroup_d_4_CTest)

add_test(NAME unitTestsGroup_d_5_CTest COMMAND /bin/bash -x ${CMAKE_CURRENT_SOURCE_DIR}/u19d.sh)

add_test_properties(unitTestsGroup_d_5_CTest)

add_test(NAME unitTestsGroup_d_6_CTest COMMAND /bin/bash -x ${CMAKE_CURRENT_SOURCE_DIR}/u33d.sh)

add_test_properties(unitTestsGroup_d_6_CTest)

set_target_properties(unitTestsGroup_d PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS unitTestsGroup_d)

add_dependencies( unitTestsGroup_d ALL_PLUGINS)

target_include_directories(unitTestsGroup_d PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(unitTestsGroup_d PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(unitTestsGroup_d PUBLIC
FWCoreMessageService
FWCoreUtilities
Threads::Threads
crypt
dl
nsl
rt
)


add_executable(unitTestsGroup_1
  unitTestsGroup_1.cpp
)

add_test(NAME unitTestsGroup_1_2_CTest COMMAND /bin/bash -x ${CMAKE_CURRENT_SOURCE_DIR}/u1.sh)

add_test_properties(unitTestsGroup_1_2_CTest)

add_test(NAME unitTestsGroup_1_3_CTest COMMAND /bin/bash -x ${CMAKE_CURRENT_SOURCE_DIR}/u2.sh)

add_test_properties(unitTestsGroup_1_3_CTest)

add_test(NAME unitTestsGroup_1_4_CTest COMMAND /bin/bash -x ${CMAKE_CURRENT_SOURCE_DIR}/u6.sh)

add_test_properties(unitTestsGroup_1_4_CTest)

add_test(NAME unitTestsGroup_1_5_CTest COMMAND /bin/bash -x ${CMAKE_CURRENT_SOURCE_DIR}/u21.sh)

add_test_properties(unitTestsGroup_1_5_CTest)

set_target_properties(unitTestsGroup_1 PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS unitTestsGroup_1)

add_dependencies( unitTestsGroup_1 ALL_PLUGINS)

target_include_directories(unitTestsGroup_1 PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(unitTestsGroup_1 PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(unitTestsGroup_1 PUBLIC
FWCoreMessageService
FWCoreUtilities
Threads::Threads
crypt
dl
nsl
rt
)


add_executable(unitTestsStatistics
  unitTestsStatistics.cpp
)

add_test(NAME unitTestsStatistics_2_CTest COMMAND /bin/bash -x ${CMAKE_CURRENT_SOURCE_DIR}/u3.sh)

add_test_properties(unitTestsStatistics_2_CTest)

add_test(NAME unitTestsStatistics_3_CTest COMMAND /bin/bash -x ${CMAKE_CURRENT_SOURCE_DIR}/u4.sh)

add_test_properties(unitTestsStatistics_3_CTest)

add_test(NAME unitTestsStatistics_4_CTest COMMAND /bin/bash -x ${CMAKE_CURRENT_SOURCE_DIR}/u5.sh)

add_test_properties(unitTestsStatistics_4_CTest)

add_test(NAME unitTestsStatistics_5_CTest COMMAND /bin/bash -x ${CMAKE_CURRENT_SOURCE_DIR}/u28.sh)

add_test_properties(unitTestsStatistics_5_CTest)

set_target_properties(unitTestsStatistics PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS unitTestsStatistics)

add_dependencies( unitTestsStatistics ALL_PLUGINS)

target_include_directories(unitTestsStatistics PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(unitTestsStatistics PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(unitTestsStatistics PUBLIC
FWCoreMessageService
FWCoreUtilities
Threads::Threads
crypt
dl
nsl
rt
)


add_executable(unitTestsLimits
  unitTestsLimits.cpp
)

add_test(NAME unitTestsLimits_2_CTest COMMAND /bin/bash -x ${CMAKE_CURRENT_SOURCE_DIR}/u7.sh)

add_test_properties(unitTestsLimits_2_CTest)

add_test(NAME unitTestsLimits_3_CTest COMMAND /bin/bash -x ${CMAKE_CURRENT_SOURCE_DIR}/u8.sh)

add_test_properties(unitTestsLimits_3_CTest)

add_test(NAME unitTestsLimits_4_CTest COMMAND /bin/bash -x ${CMAKE_CURRENT_SOURCE_DIR}/u11.sh)

add_test_properties(unitTestsLimits_4_CTest)

add_test(NAME unitTestsLimits_5_CTest COMMAND /bin/bash -x ${CMAKE_CURRENT_SOURCE_DIR}/u36.sh)

add_test_properties(unitTestsLimits_5_CTest)

set_target_properties(unitTestsLimits PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS unitTestsLimits)

add_dependencies( unitTestsLimits ALL_PLUGINS)

target_include_directories(unitTestsLimits PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(unitTestsLimits PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(unitTestsLimits PUBLIC
FWCoreMessageService
FWCoreUtilities
Threads::Threads
crypt
dl
nsl
rt
)


add_executable(unitTestsGroup_2
  unitTestsGroup_2.cpp
)

add_test(NAME unitTestsGroup_2_2_CTest COMMAND /bin/bash -x ${CMAKE_CURRENT_SOURCE_DIR}/u9.sh)

add_test_properties(unitTestsGroup_2_2_CTest)

add_test(NAME unitTestsGroup_2_3_CTest COMMAND /bin/bash -x ${CMAKE_CURRENT_SOURCE_DIR}/u12.sh)

add_test_properties(unitTestsGroup_2_3_CTest)

add_test(NAME unitTestsGroup_2_4_CTest COMMAND /bin/bash -x ${CMAKE_CURRENT_SOURCE_DIR}/u13.sh)

add_test_properties(unitTestsGroup_2_4_CTest)

add_test(NAME unitTestsGroup_2_5_CTest COMMAND /bin/bash -x ${CMAKE_CURRENT_SOURCE_DIR}/u14.sh)

add_test_properties(unitTestsGroup_2_5_CTest)

add_test(NAME unitTestsGroup_2_6_CTest COMMAND /bin/bash -x ${CMAKE_CURRENT_SOURCE_DIR}/u15.sh)

add_test_properties(unitTestsGroup_2_6_CTest)

set_target_properties(unitTestsGroup_2 PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS unitTestsGroup_2)

add_dependencies( unitTestsGroup_2 ALL_PLUGINS)

target_include_directories(unitTestsGroup_2 PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(unitTestsGroup_2 PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(unitTestsGroup_2 PUBLIC
FWCoreMessageService
FWCoreUtilities
Threads::Threads
crypt
dl
nsl
rt
)


add_executable(unitTestsGroup_3
  unitTestsGroup_3.cpp
)

add_test(NAME unitTestsGroup_3_2_CTest COMMAND /bin/bash -x ${CMAKE_CURRENT_SOURCE_DIR}/u10.sh)

add_test_properties(unitTestsGroup_3_2_CTest)

add_test(NAME unitTestsGroup_3_3_CTest COMMAND /bin/bash -x ${CMAKE_CURRENT_SOURCE_DIR}/u17.sh)

add_test_properties(unitTestsGroup_3_3_CTest)

add_test(NAME unitTestsGroup_3_4_CTest COMMAND /bin/bash -x ${CMAKE_CURRENT_SOURCE_DIR}/u34.sh)

add_test_properties(unitTestsGroup_3_4_CTest)

add_test(NAME unitTestsGroup_3_5_CTest COMMAND /bin/bash -x ${CMAKE_CURRENT_SOURCE_DIR}/u35.sh)

add_test_properties(unitTestsGroup_3_5_CTest)

set_target_properties(unitTestsGroup_3 PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS unitTestsGroup_3)

add_dependencies( unitTestsGroup_3 ALL_PLUGINS)

target_include_directories(unitTestsGroup_3 PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(unitTestsGroup_3 PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(unitTestsGroup_3 PUBLIC
FWCoreMessageService
FWCoreUtilities
Threads::Threads
crypt
dl
nsl
rt
)


add_executable(unitTestsGroup_4
  unitTestsGroup_4.cpp
)

add_test(NAME unitTestsGroup_4_2_CTest COMMAND /bin/bash -x ${CMAKE_CURRENT_SOURCE_DIR}/u18.sh)

add_test_properties(unitTestsGroup_4_2_CTest)

add_test(NAME unitTestsGroup_4_3_CTest COMMAND /bin/bash -x ${CMAKE_CURRENT_SOURCE_DIR}/u19.sh)

add_test_properties(unitTestsGroup_4_3_CTest)

add_test(NAME unitTestsGroup_4_4_CTest COMMAND /bin/bash -x ${CMAKE_CURRENT_SOURCE_DIR}/u20.sh)

add_test_properties(unitTestsGroup_4_4_CTest)

set_target_properties(unitTestsGroup_4 PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS unitTestsGroup_4)

add_dependencies( unitTestsGroup_4 ALL_PLUGINS)

target_include_directories(unitTestsGroup_4 PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(unitTestsGroup_4 PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(unitTestsGroup_4 PUBLIC
FWCoreMessageService
FWCoreUtilities
Threads::Threads
crypt
dl
nsl
rt
)


add_executable(unitTestsGroup_5
  unitTestsGroup_5.cpp
)

add_test(NAME unitTestsGroup_5_2_CTest COMMAND /bin/bash -x ${CMAKE_CURRENT_SOURCE_DIR}/u22.sh)

add_test_properties(unitTestsGroup_5_2_CTest)

add_test(NAME unitTestsGroup_5_3_CTest COMMAND /bin/bash -x ${CMAKE_CURRENT_SOURCE_DIR}/u24.sh)

add_test_properties(unitTestsGroup_5_3_CTest)

add_test(NAME unitTestsGroup_5_4_CTest COMMAND /bin/bash -x ${CMAKE_CURRENT_SOURCE_DIR}/u25.sh)

add_test_properties(unitTestsGroup_5_4_CTest)

set_target_properties(unitTestsGroup_5 PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS unitTestsGroup_5)

add_dependencies( unitTestsGroup_5 ALL_PLUGINS)

target_include_directories(unitTestsGroup_5 PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(unitTestsGroup_5 PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(unitTestsGroup_5 PUBLIC
FWCoreMessageService
FWCoreUtilities
Threads::Threads
crypt
dl
nsl
rt
)


add_executable(unitTestsGroup_6
  unitTestsGroup_6.cpp
)

add_test(NAME unitTestsGroup_6_2_CTest COMMAND /bin/bash -x ${CMAKE_CURRENT_SOURCE_DIR}/u23.sh)

add_test_properties(unitTestsGroup_6_2_CTest)

add_test(NAME unitTestsGroup_6_3_CTest COMMAND /bin/bash -x ${CMAKE_CURRENT_SOURCE_DIR}/u27.sh)

add_test_properties(unitTestsGroup_6_3_CTest)

add_test(NAME unitTestsGroup_6_4_CTest COMMAND /bin/bash -x ${CMAKE_CURRENT_SOURCE_DIR}/u30.sh)

add_test_properties(unitTestsGroup_6_4_CTest)

add_test(NAME unitTestsGroup_6_5_CTest COMMAND /bin/bash -x ${CMAKE_CURRENT_SOURCE_DIR}/u31.sh)

add_test_properties(unitTestsGroup_6_5_CTest)

add_test(NAME unitTestsGroup_6_6_CTest COMMAND /bin/bash -x ${CMAKE_CURRENT_SOURCE_DIR}/u33.sh)

add_test_properties(unitTestsGroup_6_6_CTest)

set_target_properties(unitTestsGroup_6 PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS unitTestsGroup_6)

add_dependencies( unitTestsGroup_6 ALL_PLUGINS)

target_include_directories(unitTestsGroup_6 PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(unitTestsGroup_6 PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(unitTestsGroup_6 PUBLIC
FWCoreMessageService
FWCoreUtilities
Threads::Threads
crypt
dl
nsl
rt
)


add_executable(makeJobReport
  makeJobReport.cpp
)

add_test(NAME makeJobReport_CTest COMMAND makeJobReport)

add_test_properties(makeJobReport_CTest)

set_target_properties(makeJobReport PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS makeJobReport)

add_dependencies( makeJobReport ALL_PLUGINS)

target_include_directories(makeJobReport PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(makeJobReport PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(makeJobReport PUBLIC
Boost::program_options
FWCoreFramework
FWCoreMessageLogger
FWCoreMessageService
FWCoreUtilities
Threads::Threads
crypt
dl
nsl
rt
)


add_executable(fmt_test
  fmt_test.cppunit.cpp
)

add_test(NAME fmt_test_CTest COMMAND fmt_test)

add_test_properties(fmt_test_CTest)

set_target_properties(fmt_test PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/test)

add_dependencies( ALL_TESTBINS fmt_test)

add_dependencies( fmt_test ALL_PLUGINS)

target_include_directories(fmt_test PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(fmt_test PUBLIC
${Boost_INCLUDE_DIR}
${Boost_INCLUDE_DIR}/python
${CMSMD5_INCLUDE_DIR}
${CPPUNIT_INCLUDE_DIR}
${FMT_INCLUDE_DIR}
${Python_INCLUDE_DIR}
${ROOT_INCLUDE_DIR}
${TBB_INCLUDE_DIRS}
${TINYXML2_INCLUDE_DIR}
${UUID_INCLUDE_DIR}
/usr/include
)

target_link_libraries(fmt_test PUBLIC
FWCoreMessageService
FWCoreUtilities
Threads::Threads
cppunit
crypt
dl
fmt::fmt
nsl
rt
)


