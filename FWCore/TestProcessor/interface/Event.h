#ifndef FWCore_TestProcessor_Event_h
#define FWCore_TestProcessor_Event_h
// -*- C++ -*-
//
// Package:     FWCore/TestProcessor
// Class  :     Event
// 
/**\class Event Event.h "Event.h"

 Description: [one line class summary]

 Usage:
    <usage>

*/
//
// Original Author:  Chris Jones
//         Created:  Mon, 30 Apr 2018 18:51:27 GMT
//

// system include files
#include <string>

// user include files
#include "FWCore/TestProcessor/interface/TestHandle.h"
#include "FWCore/Framework/interface/EventPrincipal.h"
#include "FWCore/Utilities/interface/TypeID.h"


// forward declarations

namespace edm {
  class EventPrincipal;
  
namespace test {
  
class Event
{

public:
  Event(EventPrincipal const& iPrincipal, std::string iModuleLabel, std::string iProcessName, bool modulePassed);
  
  // ---------- const member functions ---------------------
  template<typename T>
  TestHandle<T> get() const {
    static const std::string s_null;
    return get<T>(s_null);
  }
  
  template<typename T>
  TestHandle<T> get(std::string const& iInstanceLabel) const {
    auto h = principal_->getByLabel(edm::PRODUCT_TYPE, edm::TypeID(typeid(T)),
                                    label_, iInstanceLabel, processName_,
                                    nullptr,nullptr,nullptr
                                    );
    if(h.failedToGet()) {
      return TestHandle<T>(std::move(h.whyFailedFactory()));
    }
    void const* basicWrapper = h.wrapper();
    assert(basicWrapper);
    Wrapper<T> const* wrapper = static_cast<Wrapper<T> const*>(basicWrapper);
    return TestHandle<T>(wrapper->product());
  }
  
  bool modulePassed() const { return modulePassed_;}
  // ---------- static member functions --------------------
  
  // ---------- member functions ---------------------------
  
private:
  
  // ---------- member data --------------------------------
  EventPrincipal const* principal_;
  std::string label_;
  std::string processName_;
  bool modulePassed_;
};
}
}


#endif
