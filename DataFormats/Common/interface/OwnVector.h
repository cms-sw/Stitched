#ifndef Common_OwnVector_h
#define Common_OwnVector_h
// $Id: OwnVector.h,v 1.30 2007/07/09 07:28:49 llista Exp $

#include <algorithm>
#include <functional>
#include <vector>

#include "DataFormats/Common/interface/EDProduct.h"
#include "DataFormats/Common/interface/ClonePolicy.h"
#include "DataFormats/Common/interface/traits.h"
#include "DataFormats/Common/interface/Ref.h"
#include "DataFormats/Common/interface/RefToBase.h"

#include "DataFormats/Provenance/interface/ProductID.h"

#include "FWCore/Utilities/interface/EDMException.h"

#include "FWCore/Utilities/interface/GCCPrerequisite.h"

#if defined CMS_USE_DEBUGGING_ALLOCATOR
#include "DataFormats/Common/interface/debugging_allocator.h"
#endif

namespace edm {
  namespace helpers {
    struct DoNoPostReadFixup {
      void touch() { }
      template<typename C>
      void operator()(const C &) const { }
    };
    
    struct PostReadFixup {
      PostReadFixup() : fixed_(false) { }
      void touch() { fixed_ = false; }
      template<typename C>
      void operator()(const C & c) const { 
	if (!fixed_) {
	  fixed_ = true;
	  for (typename C::const_iterator i = c.begin(), e = c.end(); i != e; ++i)
	    (*i)->fixup();
	}
      }
    private:
      mutable bool fixed_;
    };

    template<typename T>
    struct PostReadFixupTrait {
     typedef DoNoPostReadFixup type;
    };
  }

  template <typename T, typename P = ClonePolicy<T> >
  class OwnVector  {
  private:
#if defined(CMS_USE_DEBUGGING_ALLOCATOR)
    typedef std::vector<T*, debugging_allocator<T> > base;
#else
    typedef std::vector<T*> base;
#endif

  public:
    typedef typename base::size_type size_type;
    typedef T value_type;
    typedef T * pointer;
    typedef T & reference;
    typedef const T & const_reference;
    typedef P policy_type;
      
    class iterator;
    class const_iterator {
    public:
      typedef T value_type;
      typedef T * pointer;
      typedef T & reference;
      typedef ptrdiff_t difference_type;
      typedef typename base::const_iterator::iterator_category iterator_category;
      const_iterator(const typename base::const_iterator & it) : i(it) { }
      const_iterator(const const_iterator & it) : i(it.i) { }
      const_iterator(const iterator & it) : i(it.i) { }
      const_iterator() {}
      const_iterator & operator=(const const_iterator & it) { i = it.i; return *this; }
      const_iterator& operator++() { ++i; return *this; }
      const_iterator operator++(int) { const_iterator ci = *this; ++i; return ci; }
      const_iterator& operator--() { --i; return *this; }
      const_iterator operator--(int) { const_iterator ci = *this; --i; return ci; }
      difference_type operator-(const const_iterator & o) const { return i - o.i; }
      const_iterator operator+(difference_type n) const { return const_iterator(i + n); }
      const_iterator operator-(difference_type n) const { return const_iterator(i - n); }
      bool operator<(const const_iterator & o) const { return i < o.i; }
      bool operator==(const const_iterator& ci) const { return i == ci.i; }
      bool operator!=(const const_iterator& ci) const { return i != ci.i; }
      const T & operator *() const { return **i; }
      //    operator const T *() const { return & **i; }
      const T * operator->() const { return & (operator*()); }
      const_iterator & operator +=(difference_type d) { i += d; return *this; }
      const_iterator & operator -=(difference_type d) { i -= d; return *this; }
    private:
      typename base::const_iterator i;
    };
    class iterator {
    public:
      typedef T value_type;
      typedef T * pointer;
      typedef T & reference;
      typedef ptrdiff_t difference_type;
      typedef typename base::iterator::iterator_category iterator_category;
      iterator(const typename base::iterator & it) : i(it) { }
      iterator(const iterator & it) : i(it.i) { }
      iterator() {}
      iterator & operator=(const iterator & it) { i = it.i; return *this; }
      iterator& operator++() { ++i; return *this; }
      iterator operator++(int) { iterator ci = *this; ++i; return ci; }
      iterator& operator--() { --i; return *this; }
      iterator operator--(int) { iterator ci = *this; --i; return ci; }
      difference_type operator-(const iterator & o) const { return i - o.i; }
      iterator operator+(difference_type n) const { return iterator(i + n); }
      iterator operator-(difference_type n) const { return iterator(i - n); }
      bool operator<(const iterator & o) const { return i < o.i; }
      bool operator==(const iterator& ci) const { return i == ci.i; }
      bool operator!=(const iterator& ci) const { return i != ci.i; }
      T & operator *() const { return **i; }
      //    operator T *() const { return & **i; }
      //T *& get() { return *i; }
      T * operator->() const { return & (operator*()); }
      iterator & operator +=(difference_type d) { i += d; return *this; }
      iterator & operator -=(difference_type d) { i -= d; return *this; }
    private:
      typename base::iterator i;
      friend const_iterator::const_iterator(const iterator &);
      friend class OwnVector<T, P>;
   };
      
    OwnVector();
    OwnVector(size_type);
    OwnVector(const OwnVector &);
    ~OwnVector();
      
    iterator begin();
    iterator end();
    const_iterator begin() const;
    const_iterator end() const;
    size_type size() const;
    bool empty() const;
    reference operator[](size_type);
    const_reference operator[](size_type) const;
      
    OwnVector<T, P> & operator=(const OwnVector<T, P> &);
      
    void reserve(size_t);
    template <typename D> void push_back(D*& d);
    template <typename D> void push_back(D* const&  d);
    template <typename D> void push_back(std::auto_ptr<D> d);
    bool is_back_safe() const;
    void pop_back();
    reference back();
    const_reference back() const;
    reference front();
    const_reference front() const;
    const base & data() const; 
    void clear();
    iterator erase(iterator pos);
    iterator erase(iterator first, iterator last);
    template<typename S> 
    void sort(S s);
    void sort();

    void swap(OwnVector<T, P> & other);

    void fillView(ProductID const& id,
		  std::vector<void const*>& pointers,
		  helper_vector& helpers) const;

  private:
    void destroy();
    template<typename O>
    struct Ordering {
      Ordering(const O & c) : comp(c) { }
      bool operator()(const T * t1, const T * t2) const {
	return comp(*t1, *t2);
      }
    private:
      O comp;
    };
    template<typename O>
    static Ordering<O> ordering(const O & comp) {
      return Ordering<O>(comp);
    }
    base data_;      
    typename helpers::PostReadFixupTrait<T>::type fixup_;
    inline void fixup() const { fixup_(data_); }
    inline void touch() { fixup_.touch(); }
  };
  
  template<typename T, typename P>
  inline OwnVector<T, P>::OwnVector() : data_() { 
  }
  
  template<typename T, typename P>
  inline OwnVector<T, P>::OwnVector(size_type n) : data_(n) { 
  }
  
  template<typename T, typename P>
  inline OwnVector<T, P>::OwnVector(const OwnVector<T, P> & o) : data_(o.size()) {
    size_type current = 0;
    for (const_iterator i = o.begin(), e = o.end(); i != e; ++i,++current) 
      data_[current] = policy_type::clone(*i);
  }
  
  template<typename T, typename P>
  inline OwnVector<T, P>::~OwnVector() { 
    destroy();
  }
  
  template<typename T, typename P>
  inline OwnVector<T, P> & OwnVector<T, P>::operator=(const OwnVector<T, P> & o) {
    OwnVector<T,P> temp(o);
    swap(temp);
    fixup_ = o.fixup_;
    return *this;
  }
  
  template<typename T, typename P>
  inline typename OwnVector<T, P>::iterator OwnVector<T, P>::begin() {
    fixup();
    return iterator(data_.begin());
  }
  
  template<typename T, typename P>
  inline typename OwnVector<T, P>::iterator OwnVector<T, P>::end() {
    fixup();
    return iterator(data_.end());
  }
  
  template<typename T, typename P>
  inline typename OwnVector<T, P>::const_iterator OwnVector<T, P>::begin() const {
    fixup();
    return const_iterator(data_.begin());
  }
  
  template<typename T, typename P>
  inline typename OwnVector<T, P>::const_iterator OwnVector<T, P>::end() const {
    fixup();
    return const_iterator(data_.end());
  }
  
  template<typename T, typename P>
  inline typename OwnVector<T, P>::size_type OwnVector<T, P>::size() const {
    return data_.size();
  }
  
  template<typename T, typename P>
  inline bool OwnVector<T, P>::empty() const {
    return data_.empty();
  }
  
  template<typename T, typename P>
  inline typename OwnVector<T, P>::reference OwnVector<T, P>::operator[](size_type n) {
    fixup();
    return *data_[n];
  }
  
  template<typename T, typename P>
  inline typename OwnVector<T, P>::const_reference OwnVector<T, P>::operator[](size_type n) const {
    fixup();
    return *data_[n];
  }
  
  template<typename T, typename P>
  inline void OwnVector<T, P>::reserve(size_t n) {
    data_.reserve(n);
  }
  
  template<typename T, typename P>
  template<typename D>
  inline void OwnVector<T, P>::push_back(D*& d) {
    // C++ does not yet support rvalue references, so d should only be
    // able to bind to an lvalue.
    // This should be called only for lvalues.
    data_.push_back(d);
    d = 0;
    touch();
  }

  template<typename T, typename P>
  template<typename D>
  inline void OwnVector<T, P>::push_back(D* const& d) {

    // C++ allows d to be bound to an lvalue or rvalue. But the other
    // signature should be a better match for an lvalue (because it
    // does not require an lvalue->rvalue conversion). Thus this
    // signature should only be chosen for rvalues.
    data_.push_back(d);
    touch();
  }


  template<typename T, typename P>
  template<typename D>
  inline void OwnVector<T, P>::push_back(std::auto_ptr<D> d) {
    data_.push_back(d.release());
    touch();
  }


  template<typename T, typename P>
  inline void OwnVector<T, P>::pop_back() {
    // We have to delete the pointed-to thing, before we squeeze it
    // out of the vector...
    delete data_.back();
    data_.pop_back();
    touch();
  }

  template <typename T, typename P>
  inline bool OwnVector<T, P>::is_back_safe() const {
    return data_.back() != 0;
  }

  template<typename T, typename P>
  inline typename OwnVector<T, P>::reference OwnVector<T, P>::back() {
    T* result = data_.back();
    if (result == 0)
      throw edm::Exception(errors::NullPointerError)
	<< "In OwnVector::back() we have intercepted an attempt to dereference a null pointer\n"
	<< "Since OwnVector is allowed to contain null pointers, you much assure that the\n"
	<< "pointer at the end of the collection is not null before calling back()\n"
	<< "if you wish to avoid this exception.\n"
	<< "Consider using OwnVector::is_back_safe()\n";
    fixup();
    return *data_.back();
  }
  
  template<typename T, typename P>
  inline typename OwnVector<T, P>::const_reference OwnVector<T, P>::back() const {
    T* result = data_.back();
    if (result == 0)
      throw edm::Exception(errors::NullPointerError)
	<< "In OwnVector::back() we have intercepted an attempt to dereference a null pointer\n"
	<< "Since OwnVector is allowed to contain null pointers, you much assure that the\n"
	<< "pointer at the end of the collection is not null before calling back()\n"
	<< "if you wish to avoid this exception.\n"
	<< "Consider using OwnVector::is_back_safe()\n";
    fixup();
    return *data_.back();
  }
  
  template<typename T, typename P>
  inline typename OwnVector<T, P>::reference OwnVector<T, P>::front() {
    fixup();
    return *data_.front();
  }
  
  template<typename T, typename P>
  inline typename OwnVector<T, P>::const_reference OwnVector<T, P>::front() const {
    fixup();
    return *data_.front();
  }
  
  template<typename T, typename P>
  inline void OwnVector<T, P>::destroy() {
    typename base::const_iterator b = data_.begin(), e = data_.end();
    for( typename base::const_iterator i = b; i != e; ++ i )
      delete * i;
  }
  
  template<typename T, typename P>
  inline const typename OwnVector<T, P>::base & OwnVector<T, P>::data() const {
    fixup();
    return data_;
  }

  template<typename T, typename P>
  inline void OwnVector<T, P>::clear() {
    destroy();
    data_.clear();
  }

  template<typename T, typename P>
  typename OwnVector<T, P>::iterator OwnVector<T, P>::erase(iterator pos) {
    data_.erase(pos.i);
    touch();
  }

  template<typename T, typename P>
  typename OwnVector<T, P>::iterator OwnVector<T, P>::erase(iterator first, iterator last) {
    data_.erase(first.i, last.i);
    touch();
  }

  template<typename T, typename P> template<typename S>
  void OwnVector<T, P>::sort(S comp) {
    std::sort(data_.begin(), data_.end(), ordering(comp));
  }

  template<typename T, typename P>
  void OwnVector<T, P>::sort() {
    std::sort(data_.begin(), data_.end(), ordering(std::less<value_type>()));
  }

  template<typename T, typename P>
  inline void OwnVector<T, P>::swap(OwnVector<T, P>& other) {
    data_.swap(other.data_);
    std::swap(fixup_, other.fixup_);
  }

  template<typename T, typename P>
  void OwnVector<T, P>::fillView(ProductID const& id,
				 std::vector<void const*>& pointers,
				 helper_vector& helpers) const
  {
    typedef Ref<OwnVector>      ref_type ;
    typedef reftobase::RefHolder<ref_type> holder_type;

    size_type numElements = this->size();
    pointers.reserve(numElements);
    helpers.reserve(numElements);
    size_type key = 0;
    for(typename base::const_iterator i=data_.begin(), e=data_.end(); i!=e; ++i, ++key) {

      if (*i == 0) {
        throw edm::Exception(errors::NullPointerError)
	  << "In OwnVector::fillView() we have intercepted an attempt to put a null pointer\n"
	  << "into a View and that is not allowed.  It is probably an error that the null\n"
	  << "pointer was in the OwnVector in the first place.\n";
      }
      else {
	pointers.push_back(*i);
	holder_type h(ref_type(id, *i, key));
	helpers.push_back(&h);
      }
    }
  }

  template<typename T, typename P>
  inline void swap(OwnVector<T, P>& a, OwnVector<T, P>& b) {
    a.swap(b);
  }

  //----------------------------------------------------------------------
  //
  // Free function template to support creation of Views.

  template <typename T, typename P>
  inline
  void
  fillView(OwnVector<T,P> const& obj,
	   ProductID const& id,
	   std::vector<void const*>& pointers,
	   helper_vector& helpers) {
    obj.fillView(id, pointers, helpers);
  }

  template <typename T, typename P>
  struct has_fillView<edm::OwnVector<T, P> >
  {
    static bool const value = true;
  };

#if ! GCC_PREREQUISITE(3,4,4)
  /// has swap function
  template<typename T, typename P>
  struct has_swap<edm::OwnVector<T,P> > {
    static bool const value = true;
  };
#endif

}

#endif
