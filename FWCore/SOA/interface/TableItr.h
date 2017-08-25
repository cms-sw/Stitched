#ifndef FWCore_SOA_TableItr_h
#define FWCore_SOA_TableItr_h
// -*- C++ -*-
//
// Package:     FWCore/SOA
// Class  :     TableItr
// 
/**\class TableItr TableItr.h "TableItr.h"

 Description: An iterator for edm::soa::Table like classes

 Usage:
    <usage>

*/
//
// Original Author:  root
//         Created:  Thu, 24 Aug 2017 19:49:27 GMT
//

// system include files
#include <tuple>
#include <array>
#include <type_traits>

// user include files
#include "RowView.h"

// forward declarations

namespace edm {
namespace soa {
namespace impl {
  
  template<int I, typename... Args>
  struct TableItrAdvance {
    using Layout = std::tuple<Args...>;
    static void advance(std::array<void*, sizeof...(Args)>& iArray, long iStep) {
      using Type = typename std::tuple_element<I,Layout>::type::type;
      TableItrAdvance<I-1,Args...>::advance(iArray,iStep);
      auto p = static_cast<Type*>( iArray[I]);
      iArray[I] = p+iStep;
    }
  };
  
  template<typename... Args>
  struct TableItrAdvance<0,Args...> {
    using Layout = std::tuple<Args...>;
    static void advance(std::array<void*, sizeof...(Args)>& iArray, long iStep) {
      using Type = typename std::tuple_element<0,Layout>::type::type;
      auto p = static_cast<Type*>( iArray[0]);
      iArray[0] = p+iStep;
    }
  };
}
  
  
template <typename... Args>
class TableItr {
  using Layout = std::tuple<Args...>;
  std::array<void*, sizeof...(Args)> m_values;
public:
  using value_type = MutableRowView<Args...>;
  
  explicit TableItr( std::array<void*, sizeof...(Args)> const& iValues):
  m_values{iValues} {}
  
  explicit TableItr( std::array<void*, sizeof...(Args)> const& iValues, long iOffset):
  m_values{iValues} {
    impl::TableItrAdvance<sizeof...(Args)-1, Args...>::advance(m_values, iOffset);
  }

  explicit TableItr( std::array<void*, sizeof...(Args)> const& iValues, unsigned int iOffset):
  m_values{iValues} {
    impl::TableItrAdvance<sizeof...(Args)-1, Args...>::advance(m_values, static_cast<long>(iOffset));
  }

  value_type operator*() {
    return value_type{m_values};
  }
  
  TableItr& operator++() {
    impl::TableItrAdvance<sizeof...(Args)-1, Args...>::advance(m_values, 1);
    return *this;
  }
  
  bool operator==( const TableItr<Args...>& iOther) {
    return m_values[0] == iOther.m_values[0];
  }
  
  bool operator!=( const TableItr<Args...>& iOther) {
    return m_values[0] != iOther.m_values[0];
  }
};

template <typename... Args>
class ConstTableItr {
  using Layout = std::tuple<Args...>;
  std::array<void*, sizeof...(Args)> m_values;
public:
  using value_type = RowView<Args...>;
  
  explicit ConstTableItr( std::array<void*, sizeof...(Args)> const& iValues):
  m_values{iValues} {}
  
  ConstTableItr( std::array<void*, sizeof...(Args)> const& iValues, long iOffset):
  m_values{iValues} {
    impl::TableItrAdvance<sizeof...(Args)-1, Args...>::advance(m_values, iOffset);
  }

  ConstTableItr( std::array<void*, sizeof...(Args)> const& iValues, unsigned int iOffset):
  m_values{iValues} {
    impl::TableItrAdvance<sizeof...(Args)-1, Args...>::advance(m_values, static_cast<long>(iOffset));
  }

  value_type operator*() const {
    return value_type{m_values};
  }
  
  ConstTableItr& operator++() {
    impl::TableItrAdvance<sizeof...(Args)-1, Args...>::advance(m_values, 1);
    return *this;
  }
  
  bool operator==( const ConstTableItr<Args...>& iOther) {
    return m_values[0] == iOther.m_values[0];
  }
  
  bool operator!=( const ConstTableItr<Args...>& iOther) {
    return m_values[0] != iOther.m_values[0];
  }
};

}
}


#endif
