add_executable(TestRunnerFWCoreTFWLiteSelector
  TestRunnerFWCoreTFWLiteSelector.cpp
)

target_link_libraries(TestRunnerFWCoreTFWLiteSelector PUBLIC
  FWCoreUtilities
  FWCoreFWLite
  FWCoreTFWLiteSelector
  FWCoreTFWLiteSelectorTest
)

add_test(NAME TestRunnerFWCoreTFWLiteSelector COMMAND TestRunnerFWCoreTFWLiteSelector)
