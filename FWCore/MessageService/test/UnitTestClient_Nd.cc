#ifndef EDM_ML_DEBUG
#define EDM_ML_DEBUG
#endif

#include "FWCore/Framework/interface/Frameworkfwd.h"
#include "FWCore/Framework/interface/global/EDAnalyzer.h"
#include "FWCore/Framework/interface/MakerMacros.h"
#include "FWCore/MessageLogger/interface/MessageLogger.h"
#include "FWCore/Utilities/interface/StreamID.h"

namespace edmtest {

  class UnitTestClient_Nd : public edm::global::EDAnalyzer<> {
  public:
    explicit UnitTestClient_Nd(edm::ParameterSet const&) {}

    void analyze(edm::StreamID, edm::Event const&, edm::EventSetup const&) const override;
  };

  void UnitTestClient_Nd::analyze(edm::StreamID, edm::Event const&, edm::EventSetup const&) const {
    LogDebug("ridiculously_long_category_name_to_make_header_wrap_A") << "LogDebug was used to send this message";
    LogDebug("ridiculously_long_category_name_to_make_header_wrap_B") << "LogDebug was used to send this other message";
    edm::LogInfo("ridiculously_long_category_name_to_make_header_wrap_A") << "LogInfo was used to send this message";
    edm::LogInfo("ridiculously_long_category_name_to_make_header_wrap_B")
        << "LogInfo was used to send this other message";
  }

}  // namespace edmtest

using edmtest::UnitTestClient_Nd;
DEFINE_FWK_MODULE(UnitTestClient_Nd);
