add_executable(standAloneWithMessageLogger
  standAloneTest.cpp
)

target_include_directories(standAloneWithMessageLogger PUBLIC ${Boost_INCLUDE_DIR})
include_directories(standAloneWithMessageLogger PUBLIC ${Boost_INCLUDE_DIR})
target_link_libraries(standAloneWithMessageLogger PUBLIC
  ${Boost_REGEX_LIBRARY_RELEASE}
  dl
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  FWCoreMessageService
  FWCoreUtilities
  FWCoreMessageLogger
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  ${PYTHON_LIBRARY}
)

add_test(NAME standAloneWithMessageLogger COMMAND standAloneWithMessageLogger)
add_executable(trivial_main
  trivial_main.cpp
)

target_include_directories(trivial_main PUBLIC ${PYTHON_INCLUDE_DIR})
include_directories(trivial_main PUBLIC ${PYTHON_INCLUDE_DIR})
target_include_directories(trivial_main PUBLIC ${Boost_INCLUDE_DIR}/python)
include_directories(trivial_main PUBLIC ${Boost_INCLUDE_DIR}/python)
target_include_directories(trivial_main PUBLIC ${TINYXML_INCLUDE_DIR})
include_directories(trivial_main PUBLIC ${TINYXML_INCLUDE_DIR})
target_include_directories(trivial_main PUBLIC ${Boost_INCLUDE_DIR})
include_directories(trivial_main PUBLIC ${Boost_INCLUDE_DIR})
target_include_directories(trivial_main PUBLIC ${MD5_INCLUDE_DIR})
include_directories(trivial_main PUBLIC ${MD5_INCLUDE_DIR})
target_include_directories(trivial_main PUBLIC ${TBB_INCLUDE_DIRS})
include_directories(trivial_main PUBLIC ${TBB_INCLUDE_DIRS})
target_include_directories(trivial_main PUBLIC ${ROOT_INCLUDE_DIR})
include_directories(trivial_main PUBLIC ${ROOT_INCLUDE_DIR})
target_link_libraries(trivial_main PUBLIC
  ${Boost_REGEX_LIBRARY_RELEASE}
  dl
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  FWCoreMessageService
  FWCoreUtilities
  FWCoreMessageLogger
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  ${PYTHON_LIBRARY}
)

add_test(NAME trivial_main COMMAND trivial_main)
add_executable(testLoggerInCmsRun
  testLoggerInCmsRun.cpp
)

target_include_directories(testLoggerInCmsRun PUBLIC ${Boost_INCLUDE_DIR})
include_directories(testLoggerInCmsRun PUBLIC ${Boost_INCLUDE_DIR})
target_link_libraries(testLoggerInCmsRun PUBLIC
  ${Boost_REGEX_LIBRARY_RELEASE}
  dl
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  FWCoreMessageService
  FWCoreUtilities
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  ${PYTHON_LIBRARY}
)

add_test(NAME testLoggerInCmsRun COMMAND testLoggerInCmsRun)
add_executable(unitTestsGroup_d
  unitTestsGroup_d.cpp
)

target_include_directories(unitTestsGroup_d PUBLIC ${ROOT_INCLUDE_DIR})
include_directories(unitTestsGroup_d PUBLIC ${ROOT_INCLUDE_DIR})
target_include_directories(unitTestsGroup_d PUBLIC ${Boost_INCLUDE_DIR})
include_directories(unitTestsGroup_d PUBLIC ${Boost_INCLUDE_DIR})
target_include_directories(unitTestsGroup_d PUBLIC ${TBB_INCLUDE_DIRS})
include_directories(unitTestsGroup_d PUBLIC ${TBB_INCLUDE_DIRS})
target_include_directories(unitTestsGroup_d PUBLIC ${MD5_INCLUDE_DIR})
include_directories(unitTestsGroup_d PUBLIC ${MD5_INCLUDE_DIR})
target_link_libraries(unitTestsGroup_d PUBLIC
  ${Boost_REGEX_LIBRARY_RELEASE}
  dl
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  FWCoreMessageService
  FWCoreUtilities
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  ${PYTHON_LIBRARY}
)

add_test(NAME unitTestsGroup_d COMMAND unitTestsGroup_d)
add_executable(unitTestsGroup_1
  unitTestsGroup_1.cpp
)

target_include_directories(unitTestsGroup_1 PUBLIC ${ROOT_INCLUDE_DIR})
include_directories(unitTestsGroup_1 PUBLIC ${ROOT_INCLUDE_DIR})
target_include_directories(unitTestsGroup_1 PUBLIC ${Boost_INCLUDE_DIR})
include_directories(unitTestsGroup_1 PUBLIC ${Boost_INCLUDE_DIR})
target_include_directories(unitTestsGroup_1 PUBLIC ${TBB_INCLUDE_DIRS})
include_directories(unitTestsGroup_1 PUBLIC ${TBB_INCLUDE_DIRS})
target_include_directories(unitTestsGroup_1 PUBLIC ${MD5_INCLUDE_DIR})
include_directories(unitTestsGroup_1 PUBLIC ${MD5_INCLUDE_DIR})
target_link_libraries(unitTestsGroup_1 PUBLIC
  ${Boost_REGEX_LIBRARY_RELEASE}
  dl
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  FWCoreMessageService
  FWCoreUtilities
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  ${PYTHON_LIBRARY}
)

add_test(NAME unitTestsGroup_1 COMMAND unitTestsGroup_1)
add_executable(unitTestsStatistics
  unitTestsStatistics.cpp
)

target_include_directories(unitTestsStatistics PUBLIC ${PYTHON_INCLUDE_DIR})
include_directories(unitTestsStatistics PUBLIC ${PYTHON_INCLUDE_DIR})
target_include_directories(unitTestsStatistics PUBLIC ${Boost_INCLUDE_DIR}/python)
include_directories(unitTestsStatistics PUBLIC ${Boost_INCLUDE_DIR}/python)
target_include_directories(unitTestsStatistics PUBLIC ${TINYXML_INCLUDE_DIR})
include_directories(unitTestsStatistics PUBLIC ${TINYXML_INCLUDE_DIR})
target_include_directories(unitTestsStatistics PUBLIC ${Boost_INCLUDE_DIR})
include_directories(unitTestsStatistics PUBLIC ${Boost_INCLUDE_DIR})
target_include_directories(unitTestsStatistics PUBLIC ${MD5_INCLUDE_DIR})
include_directories(unitTestsStatistics PUBLIC ${MD5_INCLUDE_DIR})
target_include_directories(unitTestsStatistics PUBLIC ${TBB_INCLUDE_DIRS})
include_directories(unitTestsStatistics PUBLIC ${TBB_INCLUDE_DIRS})
target_include_directories(unitTestsStatistics PUBLIC ${ROOT_INCLUDE_DIR})
include_directories(unitTestsStatistics PUBLIC ${ROOT_INCLUDE_DIR})
target_link_libraries(unitTestsStatistics PUBLIC
  ${Boost_REGEX_LIBRARY_RELEASE}
  dl
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  FWCoreMessageService
  FWCoreUtilities
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  ${PYTHON_LIBRARY}
)

add_test(NAME unitTestsStatistics COMMAND unitTestsStatistics)
add_executable(unitTestsLimits
  unitTestsLimits.cpp
)

target_include_directories(unitTestsLimits PUBLIC ${ROOT_INCLUDE_DIR})
include_directories(unitTestsLimits PUBLIC ${ROOT_INCLUDE_DIR})
target_include_directories(unitTestsLimits PUBLIC ${Boost_INCLUDE_DIR})
include_directories(unitTestsLimits PUBLIC ${Boost_INCLUDE_DIR})
target_include_directories(unitTestsLimits PUBLIC ${TBB_INCLUDE_DIRS})
include_directories(unitTestsLimits PUBLIC ${TBB_INCLUDE_DIRS})
target_include_directories(unitTestsLimits PUBLIC ${MD5_INCLUDE_DIR})
include_directories(unitTestsLimits PUBLIC ${MD5_INCLUDE_DIR})
target_link_libraries(unitTestsLimits PUBLIC
  ${Boost_REGEX_LIBRARY_RELEASE}
  dl
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  FWCoreMessageService
  FWCoreUtilities
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  ${PYTHON_LIBRARY}
)

add_test(NAME unitTestsLimits COMMAND unitTestsLimits)
add_executable(unitTestsGroup_2
  unitTestsGroup_2.cpp
)

target_include_directories(unitTestsGroup_2 PUBLIC ${ROOT_INCLUDE_DIR})
include_directories(unitTestsGroup_2 PUBLIC ${ROOT_INCLUDE_DIR})
target_include_directories(unitTestsGroup_2 PUBLIC ${Boost_INCLUDE_DIR})
include_directories(unitTestsGroup_2 PUBLIC ${Boost_INCLUDE_DIR})
target_include_directories(unitTestsGroup_2 PUBLIC ${TBB_INCLUDE_DIRS})
include_directories(unitTestsGroup_2 PUBLIC ${TBB_INCLUDE_DIRS})
target_include_directories(unitTestsGroup_2 PUBLIC ${MD5_INCLUDE_DIR})
include_directories(unitTestsGroup_2 PUBLIC ${MD5_INCLUDE_DIR})
target_link_libraries(unitTestsGroup_2 PUBLIC
  ${Boost_REGEX_LIBRARY_RELEASE}
  dl
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  FWCoreMessageService
  FWCoreUtilities
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  ${PYTHON_LIBRARY}
)

add_test(NAME unitTestsGroup_2 COMMAND unitTestsGroup_2)
add_executable(unitTestsGroup_3
  unitTestsGroup_3.cpp
)

target_include_directories(unitTestsGroup_3 PUBLIC ${ROOT_INCLUDE_DIR})
include_directories(unitTestsGroup_3 PUBLIC ${ROOT_INCLUDE_DIR})
target_include_directories(unitTestsGroup_3 PUBLIC ${Boost_INCLUDE_DIR})
include_directories(unitTestsGroup_3 PUBLIC ${Boost_INCLUDE_DIR})
target_include_directories(unitTestsGroup_3 PUBLIC ${TBB_INCLUDE_DIRS})
include_directories(unitTestsGroup_3 PUBLIC ${TBB_INCLUDE_DIRS})
target_include_directories(unitTestsGroup_3 PUBLIC ${MD5_INCLUDE_DIR})
include_directories(unitTestsGroup_3 PUBLIC ${MD5_INCLUDE_DIR})
target_link_libraries(unitTestsGroup_3 PUBLIC
  ${Boost_REGEX_LIBRARY_RELEASE}
  dl
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  FWCoreMessageService
  FWCoreUtilities
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  ${PYTHON_LIBRARY}
)

add_test(NAME unitTestsGroup_3 COMMAND unitTestsGroup_3)
add_executable(unitTestsGroup_4
  unitTestsGroup_4.cpp
)

target_include_directories(unitTestsGroup_4 PUBLIC ${ROOT_INCLUDE_DIR})
include_directories(unitTestsGroup_4 PUBLIC ${ROOT_INCLUDE_DIR})
target_include_directories(unitTestsGroup_4 PUBLIC ${Boost_INCLUDE_DIR})
include_directories(unitTestsGroup_4 PUBLIC ${Boost_INCLUDE_DIR})
target_include_directories(unitTestsGroup_4 PUBLIC ${TBB_INCLUDE_DIRS})
include_directories(unitTestsGroup_4 PUBLIC ${TBB_INCLUDE_DIRS})
target_include_directories(unitTestsGroup_4 PUBLIC ${MD5_INCLUDE_DIR})
include_directories(unitTestsGroup_4 PUBLIC ${MD5_INCLUDE_DIR})
target_link_libraries(unitTestsGroup_4 PUBLIC
  ${Boost_REGEX_LIBRARY_RELEASE}
  dl
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  FWCoreMessageService
  FWCoreUtilities
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  ${PYTHON_LIBRARY}
)

add_test(NAME unitTestsGroup_4 COMMAND unitTestsGroup_4)
add_executable(unitTestsGroup_5
  unitTestsGroup_5.cpp
)

target_include_directories(unitTestsGroup_5 PUBLIC ${ROOT_INCLUDE_DIR})
include_directories(unitTestsGroup_5 PUBLIC ${ROOT_INCLUDE_DIR})
target_include_directories(unitTestsGroup_5 PUBLIC ${Boost_INCLUDE_DIR})
include_directories(unitTestsGroup_5 PUBLIC ${Boost_INCLUDE_DIR})
target_include_directories(unitTestsGroup_5 PUBLIC ${TBB_INCLUDE_DIRS})
include_directories(unitTestsGroup_5 PUBLIC ${TBB_INCLUDE_DIRS})
target_include_directories(unitTestsGroup_5 PUBLIC ${MD5_INCLUDE_DIR})
include_directories(unitTestsGroup_5 PUBLIC ${MD5_INCLUDE_DIR})
target_link_libraries(unitTestsGroup_5 PUBLIC
  ${Boost_REGEX_LIBRARY_RELEASE}
  dl
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  FWCoreMessageService
  FWCoreUtilities
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  ${PYTHON_LIBRARY}
)

add_test(NAME unitTestsGroup_5 COMMAND unitTestsGroup_5)
add_executable(unitTestsGroup_6
  unitTestsGroup_6.cpp
)

target_include_directories(unitTestsGroup_6 PUBLIC ${ROOT_INCLUDE_DIR})
include_directories(unitTestsGroup_6 PUBLIC ${ROOT_INCLUDE_DIR})
target_include_directories(unitTestsGroup_6 PUBLIC ${Boost_INCLUDE_DIR})
include_directories(unitTestsGroup_6 PUBLIC ${Boost_INCLUDE_DIR})
target_include_directories(unitTestsGroup_6 PUBLIC ${TBB_INCLUDE_DIRS})
include_directories(unitTestsGroup_6 PUBLIC ${TBB_INCLUDE_DIRS})
target_include_directories(unitTestsGroup_6 PUBLIC ${MD5_INCLUDE_DIR})
include_directories(unitTestsGroup_6 PUBLIC ${MD5_INCLUDE_DIR})
target_link_libraries(unitTestsGroup_6 PUBLIC
  ${Boost_REGEX_LIBRARY_RELEASE}
  dl
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  FWCoreMessageService
  FWCoreUtilities
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  ${PYTHON_LIBRARY}
)

add_test(NAME unitTestsGroup_6 COMMAND unitTestsGroup_6)
add_executable(makeJobReport
  makeJobReport.cpp
)

target_include_directories(makeJobReport PUBLIC ${PYTHON_INCLUDE_DIR})
include_directories(makeJobReport PUBLIC ${PYTHON_INCLUDE_DIR})
target_include_directories(makeJobReport PUBLIC ${Boost_INCLUDE_DIR}/python)
include_directories(makeJobReport PUBLIC ${Boost_INCLUDE_DIR}/python)
target_include_directories(makeJobReport PUBLIC ${TINYXML_INCLUDE_DIR})
include_directories(makeJobReport PUBLIC ${TINYXML_INCLUDE_DIR})
target_include_directories(makeJobReport PUBLIC ${Boost_INCLUDE_DIR})
include_directories(makeJobReport PUBLIC ${Boost_INCLUDE_DIR})
target_include_directories(makeJobReport PUBLIC ${MD5_INCLUDE_DIR})
include_directories(makeJobReport PUBLIC ${MD5_INCLUDE_DIR})
target_include_directories(makeJobReport PUBLIC ${TBB_INCLUDE_DIRS})
include_directories(makeJobReport PUBLIC ${TBB_INCLUDE_DIRS})
target_include_directories(makeJobReport PUBLIC ${ROOT_INCLUDE_DIR})
include_directories(makeJobReport PUBLIC ${ROOT_INCLUDE_DIR})
target_link_libraries(makeJobReport PUBLIC
  ${Boost_REGEX_LIBRARY_RELEASE}
  dl
  ${Boost_FILESYSTEM_LIBRARY_RELEASE}
  FWCoreMessageService
  FWCoreMessageLogger
  FWCoreFramework
  ${Boost_THREAD_LIBRARY_RELEASE}
  ${Boost_SYSTEM_LIBRARY_RELEASE}
  FWCoreServiceRegistry
  ${Boost_SERIALIZATION_LIBRARY_RELEASE}
  ${Boost_PYTHON_LIBRARY_RELEASE}
  ${Boost_IOSTREAMS_LIBRARY_RELEASE}
  ${PYTHON_LIBRARY}
  ${Boost_PROGRAM_OPTIONS_LIBRARY_RELEASE}
  FWCoreUtilities
  FWCorePluginManager
)

add_test(NAME makeJobReport COMMAND makeJobReport)
