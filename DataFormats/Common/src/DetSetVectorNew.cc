#include "DataFormats/Common/interface/DetSetVectorNew.h"
#include "FWCore/Utilities/interface/EDMException.h"

namespace edmNew {
  namespace dstvdetails {
    void errorFilling() {
      throw edm::Exception(edm::errors::LogicError,"Instantiating a second DetSetVector::FastFiller")
	<< "only one DetSetVector::FastFiller can be active at a given time!";
    }
    void throw_range(det_id_type i) {
      throw edm::Exception(errors::InvalidReference)
	<< "DetSetVector::operator[] called with index not in collection;\n"
	<< "index value: " << i;
    }
 
  }
}
