add_executable(TestRunnerFWCoreTFWLiteSelector
  TestRunnerFWCoreTFWLiteSelector.cpp
)

target_link_libraries(TestRunnerFWCoreTFWLiteSelector PUBLIC
  FWCoreFWLite
  FWCoreTFWLiteSelector
  FWCoreUtilities
  FWCoreTFWLiteSelectorTest
)

install( TARGETS TestRunnerFWCoreTFWLiteSelector EXPORT TestRunnerFWCoreTFWLiteSelector DESTINATION  bin )

