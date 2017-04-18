add_executable(TestRunnerFWCoreTFWLiteSelector
  TestRunnerFWCoreTFWLiteSelector.cpp
)

target_link_libraries(TestRunnerFWCoreTFWLiteSelector PUBLIC
  FWCoreFWLite
  FWCoreTFWLiteSelectorTest
  FWCoreTFWLiteSelector
  FWCoreUtilities
)

add_test(NAME TestRunnerFWCoreTFWLiteSelector COMMAND TestRunnerFWCoreTFWLiteSelector)
