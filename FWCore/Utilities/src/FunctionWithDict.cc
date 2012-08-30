
#include "Reflex/Object.h"
#include "Reflex/Type.h"

#include "FWCore/Utilities/interface/FunctionWithDict.h"
#include "FWCore/Utilities/interface/ObjectWithDict.h"
#include "FWCore/Utilities/interface/TypeWithDict.h"

namespace edm {

  std::string
  FunctionWithDict::typeName() const {return function_.TypeOf().Name();}

  TypeWithDict
  FunctionWithDict::typeOf() const {
    return (TypeWithDict(function_.TypeOf()));
  }

  TypeWithDict
  FunctionWithDict::returnType() const {
    return (TypeWithDict(function_.TypeOf().ReturnType()));
  }

  TypeWithDict
  FunctionWithDict::declaringType() const {
    return (TypeWithDict(function_.DeclaringType()));
  }

  void
  FunctionWithDict::invoke(ObjectWithDict const& obj, ObjectWithDict* ret, std::vector<void*> const& values) const {
    function_.Invoke(obj.object_, &ret->object_, values);
  }

  Reflex::Type_Iterator
  FunctionWithDict::begin() const {
    return function_.TypeOf().FunctionParameter_Begin();
  }

  Reflex::Type_Iterator
  FunctionWithDict::end() const {
    return function_.TypeOf().FunctionParameter_End();
  }
}
