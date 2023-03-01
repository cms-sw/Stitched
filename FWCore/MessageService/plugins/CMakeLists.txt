add_library(FWCoreMessageServicePlugins SHARED ${FWCoreMessageServicePlugins_EXTRA_SOURCES}
  MessageLogger.cc
  MessageServicePSetValidation.cc
  Module.cc
)

set_target_properties(FWCoreMessageServicePlugins PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_dependencies( ALL_LIBS FWCoreMessageServicePlugins)

set_target_properties(FWCoreMessageServicePlugins PROPERTIES PREFIX "plugin")

add_dependencies( ALL_PLUGINS FWCoreMessageServicePlugins)

edm_write_config( FWCoreMessageServicePlugins FWCore/MessageService)

target_include_directories(FWCoreMessageServicePlugins PRIVATE ${CMAKE_SOURCE_DIR})

target_include_directories(FWCoreMessageServicePlugins PUBLIC
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

target_link_libraries(FWCoreMessageServicePlugins PUBLIC
DataFormatsProvenance
FWCoreMessageService
FWCoreServiceRegistry
)


add_python_rules(FWCore/MessageService/plugins/)

add_script_rules(FWCore/MessageService/plugins/)

install( TARGETS FWCoreMessageServicePlugins DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR} EXPORT stitched::)

