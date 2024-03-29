#ifndef FWCore_Framework_ESProducer_h
#define FWCore_Framework_ESProducer_h
// -*- C++ -*-
//
// Package:     Framework
// Class  :     ESProducer
//
/**\class edm::ESProducer

 Description: An EventSetup algorithmic Provider that encapsulates the algorithm as a member method

 Usage:
    Inheriting from this class is the simplest way to create an algorithm which gets called when a new
  data item is needed for the EventSetup.  This class is designed to call a member method of inheriting
  classes each time the algorithm needs to be run.  (A more flexible system in which the algorithms can be
  set at run-time instead of compile time can be obtained by inheriting from ESProxyFactoryProducer instead.)

    If only one algorithm is being encapsulated then the user needs to
      1) add a method name 'produce' to the class.  The 'produce' takes as its argument a const reference
         to the record that is to hold the data item being produced.  If only one data item is being produced,
         the 'produce' method must return either an 'std::unique_ptr' or 'std::shared_ptr' to the object being
         produced.  (The choice depends on if the EventSetup or the ESProducer is managing the lifetime of
         the object).  If multiple items are being Produced they the 'produce' method must return an
         ESProducts<> object which holds all of the items.
      2) add 'setWhatProduced(this);' to their classes constructor

Example: one algorithm creating only one object
\code
    class FooProd : public edm::ESProducer {
       std::unique_ptr<Foo> produce(const FooRecord&);
       ...
    };
    FooProd::FooProd(const edm::ParameterSet&) {
       setWhatProduced(this);
       ...
    }
\endcode
Example: one algorithm creating two objects
\code
   class FoosProd : public edm::ESProducer {
      edm::ESProducts<std::unique_ptr<Foo1>, std::unique_ptr<Foo2>> produce(const FooRecord&);
      ...
   };
\endcode

  If multiple algorithms are being encapsulated then
      1) like 1 above except the methods can have any names you want
      2) add 'setWhatProduced(this, &<class name>::<method name>);' for each method in the class' constructor
   NOTE: the algorithms can put data into the same record or into different records

Example: two algorithms each creating only one objects
\code
   class FooBarProd : public edm::eventsetup::ESProducer {
      std::unique_ptr<Foo> produceFoo(const FooRecord&);
      std::unique_ptr<Bar> produceBar(const BarRecord&);
      ...
   };
   FooBarProd::FooBarProd(const edm::ParameterSet&) {
      setWhatProduced(this,&FooBarProd::produceFoo);
      setWhatProduced(this,&FooBarProd::produceBar);
      ...
   }
\endcode

*/
//
// Author:      Chris Jones
// Created:     Thu Apr  7 17:08:14 CDT 2005
//

// system include files
#include <memory>
#include <string>
#include <optional>

// user include files
#include "FWCore/Framework/interface/ESConsumesCollector.h"
#include "FWCore/Framework/interface/es_impl/MayConsumeChooserBase.h"
#include "FWCore/Framework/interface/es_impl/ReturnArgumentTypes.h"
#include "FWCore/Framework/interface/ESProxyFactoryProducer.h"
#include "FWCore/Framework/interface/ProxyArgumentFactoryTemplate.h"

#include "FWCore/Framework/interface/CallbackProxy.h"
#include "FWCore/Framework/interface/Callback.h"
#include "FWCore/Framework/interface/produce_helpers.h"
#include "FWCore/Framework/interface/eventsetup_dependsOn.h"
#include "FWCore/Framework/interface/es_Label.h"

#include "FWCore/Framework/interface/SharedResourcesAcquirer.h"

// forward declarations
namespace edm {
  namespace eventsetup {
    class ESRecordsToProxyIndices;
    //used by ESProducer to create the proper Decorator based on the
    //  argument type passed.  The default it to just 'pass through'
    //  the argument as the decorator itself
    template <typename T, typename TRecord, typename TDecorator>
    inline const TDecorator& createDecoratorFrom(T*, const TRecord*, const TDecorator& iDec) {
      return iDec;
    }
  }  // namespace eventsetup

  class ESProducer : public ESProxyFactoryProducer {
  public:
    ESProducer();
    ~ESProducer() noexcept(false) override;
    ESProducer(const ESProducer&) = delete;                   // stop default
    ESProducer const& operator=(const ESProducer&) = delete;  // stop default

    void updateLookup(eventsetup::ESRecordsToProxyIndices const&) final;
    ESProxyIndex const* getTokenIndices(unsigned int iIndex) const {
      if (itemsToGetFromRecords_.empty()) {
        return nullptr;
      }
      return (itemsToGetFromRecords_[iIndex].empty()) ? static_cast<ESProxyIndex const*>(nullptr)
                                                      : &(itemsToGetFromRecords_[iIndex].front());
    }
    ESRecordIndex const* getTokenRecordIndices(unsigned int iIndex) const {
      if (recordsUsedDuringGet_.empty()) {
        return nullptr;
      }
      return (recordsUsedDuringGet_[iIndex].empty()) ? static_cast<ESRecordIndex const*>(nullptr)
                                                     : &(recordsUsedDuringGet_[iIndex].front());
    }
    size_t numberOfTokenIndices(unsigned int iIndex) const {
      if (itemsToGetFromRecords_.empty()) {
        return 0;
      }
      return itemsToGetFromRecords_[iIndex].size();
    }

    bool hasMayConsumes() const noexcept { return hasMayConsumes_; }

    template <typename Record>
    std::optional<std::vector<ESProxyIndex>> updateFromMayConsumes(unsigned int iIndex, const Record& iRecord) const {
      if (not hasMayConsumes()) {
        return {};
      }
      std::vector<ESProxyIndex> ret = itemsToGetFromRecords_[iIndex];
      auto const info = consumesInfos_[iIndex].get();
      for (size_t i = 0; i < info->size(); ++i) {
        auto chooserBase = (*info)[i].chooser_.get();
        if (chooserBase) {
          auto chooser = static_cast<eventsetup::impl::MayConsumeChooserBase<Record>*>(chooserBase);
          ret[i] = chooser->makeChoice(iRecord);
        }
      }
      return ret;
    }

    SerialTaskQueueChain& queue() { return acquirer_.serialQueueChain(); }

  protected:
    /** Specify the names of the shared resources used by this ESProducer */
    void usesResources(std::vector<std::string> const&);

    /** \param iThis the 'this' pointer to an inheriting class instance
        The method determines the Record argument and return value of the 'produce'
        method in order to do the registration with the EventSetup
    */
    template <typename T>
    auto setWhatProduced(T* iThis, const es::Label& iLabel = {}) {
      return setWhatProduced(iThis, &T::produce, iLabel);
    }

    template <typename T>
    auto setWhatProduced(T* iThis, const char* iLabel) {
      return setWhatProduced(iThis, es::Label(iLabel));
    }
    template <typename T>
    auto setWhatProduced(T* iThis, const std::string& iLabel) {
      return setWhatProduced(iThis, es::Label(iLabel));
    }

    template <typename T, typename TDecorator>
    auto setWhatProduced(T* iThis, const TDecorator& iDec, const es::Label& iLabel = {}) {
      return setWhatProduced(iThis, &T::produce, iDec, iLabel);
    }
    /** \param iThis the 'this' pointer to an inheriting class instance
        \param iMethod a member method of then inheriting class
        The method determines the Record argument and return value of the iMethod argument
        method in order to do the registration with the EventSetup
    */
    template <typename T, typename TReturn, typename TRecord>
    auto setWhatProduced(T* iThis, TReturn (T ::*iMethod)(const TRecord&), const es::Label& iLabel = {}) {
      return setWhatProduced(iThis, iMethod, eventsetup::CallbackSimpleDecorator<TRecord>(), iLabel);
    }
    /** \param iThis the 'this' pointer to an inheriting class instance
        \param iMethod a member method of then inheriting class
        \param iDecorator a class with 'pre'&'post' methods which are placed around the method call
        The method determines the Record argument and return value of the iMethod argument
        method in order to do the registration with the EventSetup
    */
    template <typename T, typename TReturn, typename TRecord, typename TArg>
    auto setWhatProduced(T* iThis,
                         TReturn (T ::*iMethod)(const TRecord&),
                         const TArg& iDec,
                         const es::Label& iLabel = {}) {
      return setWhatProduced<TReturn, TRecord>(
          [iThis, iMethod](TRecord const& iRecord) { return (iThis->*iMethod)(iRecord); },
          createDecoratorFrom(iThis, static_cast<const TRecord*>(nullptr), iDec),
          iLabel);
    }

    /**
     * This overload allows lambdas (functors) to be used as the
     * production function. As of now it is not intended for wide use
     * (we are thinking for a better API for users)
     *
     * The decorator functionality is not implemented yet. In
     * principle the lambda provides the ability for pre(Record
     * const&) and post(Record const&) functions (in addition to much
     * more). The main use case of dependsOn() also in practice became
     * unused with the concurrent IOVs, so it is not clear if the
     * decorator functionality would really be needed. In principle it
     * should be straightforward to add.
     */
    template <typename TFunc>
    auto setWhatProduced(TFunc&& func, const es::Label& iLabel = {}) {
      using Types = eventsetup::impl::ReturnArgumentTypes<TFunc>;
      using TReturn = typename Types::return_type;
      using TRecord = typename Types::argument_type;
      using DecoratorType = eventsetup::CallbackSimpleDecorator<TRecord>;
      return setWhatProduced<TReturn, TRecord>(std::forward<TFunc>(func), DecoratorType(), iLabel);
    }

    template <typename TReturn, typename TRecord, typename TFunc, typename TDecorator>
    ESConsumesCollectorT<TRecord> setWhatProduced(TFunc&& func, TDecorator&& iDec, const es::Label& iLabel = {}) {
      const auto id = consumesInfos_.size();
      using DecoratorType = std::decay_t<TDecorator>;
      using CallbackType = eventsetup::Callback<ESProducer, TFunc, TReturn, TRecord, DecoratorType>;
      unsigned int iovIndex = 0;  // Start with 0, but later will cycle through all of them
      auto temp = std::make_shared<CallbackType>(this, std::forward<TFunc>(func), id, std::forward<TDecorator>(iDec));
      auto callback =
          std::make_shared<std::pair<unsigned int, std::shared_ptr<CallbackType>>>(iovIndex, std::move(temp));
      registerProducts(std::move(callback),
                       static_cast<const typename eventsetup::produce::product_traits<TReturn>::type*>(nullptr),
                       static_cast<const TRecord*>(nullptr),
                       iLabel);
      consumesInfos_.push_back(std::make_unique<ESConsumesInfo>());
      return ESConsumesCollectorT<TRecord>(consumesInfos_.back().get(), id);
    }

  private:
    template <typename CallbackT, typename TList, typename TRecord>
    void registerProducts(std::shared_ptr<std::pair<unsigned int, std::shared_ptr<CallbackT>>> iCallback,
                          const TList*,
                          const TRecord* iRecord,
                          const es::Label& iLabel) {
      registerProduct(iCallback, static_cast<const typename TList::tail_type*>(nullptr), iRecord, iLabel);
      registerProducts(std::move(iCallback), static_cast<const typename TList::head_type*>(nullptr), iRecord, iLabel);
    }

    template <typename CallbackT, typename TRecord>
    void registerProducts(std::shared_ptr<std::pair<unsigned int, std::shared_ptr<CallbackT>>>,
                          const eventsetup::produce::Null*,
                          const TRecord*,
                          const es::Label&) {
      //do nothing
    }

    template <typename CallbackT, typename TProduct, typename TRecord>
    void registerProduct(std::shared_ptr<std::pair<unsigned int, std::shared_ptr<CallbackT>>> iCallback,
                         const TProduct*,
                         const TRecord*,
                         const es::Label& iLabel) {
      using ProxyType = eventsetup::CallbackProxy<CallbackT, TRecord, TProduct>;
      using FactoryType = eventsetup::ProxyArgumentFactoryTemplate<ProxyType, CallbackT>;
      registerFactory(std::make_unique<FactoryType>(std::move(iCallback)), iLabel.default_);
    }

    template <typename CallbackT, typename TProduct, typename TRecord, int IIndex>
    void registerProduct(std::shared_ptr<std::pair<unsigned int, std::shared_ptr<CallbackT>>> iCallback,
                         const es::L<TProduct, IIndex>*,
                         const TRecord*,
                         const es::Label& iLabel) {
      if (iLabel.labels_.size() <= IIndex || iLabel.labels_[IIndex] == es::Label::def()) {
        Exception::throwThis(errors::Configuration,
                             "Unnamed Label\nthe index ",
                             IIndex,
                             " was never assigned a name in the 'setWhatProduced' method");
      }
      using ProxyType = eventsetup::CallbackProxy<CallbackT, TRecord, es::L<TProduct, IIndex>>;
      using FactoryType = eventsetup::ProxyArgumentFactoryTemplate<ProxyType, CallbackT>;
      registerFactory(std::make_unique<FactoryType>(std::move(iCallback)), iLabel.labels_[IIndex]);
    }

    std::vector<std::unique_ptr<ESConsumesInfo>> consumesInfos_;
    std::vector<std::vector<ESProxyIndex>> itemsToGetFromRecords_;
    //need another structure to say which record to get the data from in
    // order to make prefetching work
    std::vector<std::vector<ESRecordIndex>> recordsUsedDuringGet_;

    SharedResourcesAcquirer acquirer_;
    std::unique_ptr<std::vector<std::string>> sharedResourceNames_;
    bool hasMayConsumes_ = false;
  };
}  // namespace edm
#endif
