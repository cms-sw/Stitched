#ifndef FWCore_Framework_stream_EDProducerBase_h
#define FWCore_Framework_stream_EDProducerBase_h
// -*- C++ -*-
//
// Package:     FWCore/Framework
// Class  :     EDProducerBase
// 
/**\class edm::stream::EDProducerBase EDProducerBase.h "FWCore/Framework/interface/stream/EDProducerBase.h"

 Description: [one line class summary]

 Usage:
    <usage>

*/
//
// Original Author:  Chris Jones
//         Created:  Fri, 02 Aug 2013 00:11:27 GMT
//

// system include files

// user include files
#include "FWCore/Framework/interface/ProducerBase.h"
#include "FWCore/Framework/interface/EDConsumerBase.h"
#include "FWCore/Framework/interface/Frameworkfwd.h"
#include "DataFormats/Provenance/interface/ModuleDescription.h"
#include "FWCore/ParameterSet/interface/ParameterSetfwd.h"

// forward declarations
namespace edm {
  namespace stream {
    class EDProducerAdaptorBase;
    class StreamProducerWorker;
    
    class EDProducerBase : public edm::ProducerBase, public edm::EDConsumerBase
    {
      //This needs access to the parentage cache info
      friend class EDProducerAdaptorBase;
      typedef EDProducerBase ModuleType;
      //WorkerType is used to call the 'makeModule<T>' call which constructs
      // the actual module. We can use the StreamWorker to create the actual
      // module which holds the various stream modules
      typedef StreamProducerWorker WorkerType;

    public:
      EDProducerBase();
      virtual ~EDProducerBase();
      
      static void fillDescriptions(ConfigurationDescriptions& descriptions);
      static void prevalidate(ConfigurationDescriptions& descriptions);
      static const std::string& baseType();
      
    private:
      EDProducerBase(const EDProducerBase&) = delete; // stop default
      
      const EDProducerBase& operator=(const EDProducerBase&) = delete; // stop default
      
      virtual void beginStream() {}
      virtual void beginRun(edm::Run const&, edm::EventSetup const&) {}
      virtual void beginLuminosityBlock(edm::LuminosityBlock const&, edm::EventSetup const&) {}
      virtual void produce(Event&, EventSetup const&) = 0;
      virtual void endLuminosityBlock(edm::LuminosityBlock const&, edm::EventSetup const&) {}
      virtual void endRun(edm::Run const&, edm::EventSetup const&) {}
      virtual void endStream(){}

      // ---------- member data --------------------------------
      CurrentProcessingContext const* current_context_;

      std::vector<BranchID> previousParentage_;
      ParentageID previousParentageId_;

    };
    
  }
}



#endif
