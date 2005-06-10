// ----------------------------------------------------------------------
// $Id: ParameterSet.h,v 1.1 2005/05/29 02:29:54 wmtan Exp $
//
// Declaration for ParameterSet(parameter set) and related types
// ----------------------------------------------------------------------


// ----------------------------------------------------------------------
// prolog

#ifndef  PARAMETERSET_H
#define  PARAMETERSET_H


// ----------------------------------------------------------------------
// prerequisite source files and headers

#include "FWCore/ParameterSet/interface/Entry.h"
#include <string>
#include <map>
#include <stdexcept>
#include <vector>


// ----------------------------------------------------------------------
// contents

namespace edm {

// ----------------------------------------------------------------------
// edm::ParameterSetError

  class ParameterSetError : public std::runtime_error {
  public:
    explicit ParameterSetError( std::string const& mesg ) : std::runtime_error( mesg ) {}

    virtual ~ParameterSetError() throw() {}

  };  // ParameterSetError


// ----------------------------------------------------------------------
// edm::ParameterSet

  class ParameterSet {
  public:
    // default-construct
    ParameterSet() : tbl() {}

    // construct from coded string
    explicit ParameterSet( std::string const& );

    // Entry-handling
    Entry const& retrieve( std::string const& ) const;
    Entry const* const retrieveUntracked( std::string const& ) const;
    void insert( bool ok_to_replace, std::string const& , Entry const& );
    void augment( ParameterSet const& from );

    // encode
    std::string toString() const;
    std::string toStringOfTracked() const;

    // value accessors

    // All untracked parameters with default values
    template< class T >
    T
    getUntracked( std::string const&, T const& defaultValue ) const;

    // Bool, vBool
    bool getBool( std::string const& ) const;

    // Int32, vInt32
    int              getInt32( std::string const& ) const;
    std::vector<int> getVInt32( std::string const& ) const;

    // Uint32, vUint32
    unsigned int              getUInt32( std::string const& ) const;
    std::vector<unsigned int> getVUInt32( std::string const& ) const;

    // Double, vDouble
    double              getDouble( std::string const& ) const;
    std::vector<double> getVDouble( std::string const& ) const;

    // String, vString
    std::string              getString( std::string const& ) const;
    std::vector<std::string> getVString( std::string const& ) const;

    // ParameterSet, vPSet
    ParameterSet              getPSet( std::string const& ) const;
    std::vector<ParameterSet> getVPSet( std::string const& ) const;

  private:
    typedef std::map<std::string, Entry> table;
    table tbl;

    // verify class invariant
    void validate() const;

    // decode
    bool fromString( std::string const& );

  };  // ParameterSet

  inline bool
  operator==( ParameterSet const& a, ParameterSet const& b ) {
    return a.toStringOfTracked() == b.toStringOfTracked();
  }

  inline bool
  operator!=( ParameterSet const& a, ParameterSet const& b ) {
    return !(a == b);
  }
} // namespace edm
// ----------------------------------------------------------------------
// epilog

#endif  // PARAMETERSET_H
