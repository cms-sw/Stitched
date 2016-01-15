/*----------------------------------------------------------------------
----------------------------------------------------------------------*/
#include "ProductHolders.h"
#include "FWCore/Framework/interface/Principal.h"
#include "FWCore/Framework/interface/ProductDeletedException.h"

#include "FWCore/MessageLogger/interface/MessageLogger.h"
#include "FWCore/Utilities/interface/TypeID.h"

#include <cassert>

namespace edm {

  ProductData const*
  InputProductHolder::resolveProduct_(ResolveStatus& resolveStatus,
                                      Principal const& principal,
                                      bool,
                                      SharedResourcesAcquirer* ,
                                      ModuleCallingContext const* mcc) const {
    if(productWasDeleted()) {
      throwProductDeletedException();
    }
    if(!productUnavailable()) {
      principal.readFromSource(*this, mcc);
      // If the product is a dummy filler, product holder will now be marked unavailable.
      if(product() && !productUnavailable()) {
        // Found the match
        resolveStatus = ProductFound;
        return &productData_;
      }
    }
    resolveStatus = ProductNotFound;
    return nullptr;
  }

  ProductData const*
  PuttableProductHolder::resolveProduct_(ResolveStatus& resolveStatus,
                                          Principal const&,
                                          bool skipCurrentProcess,
                                          SharedResourcesAcquirer*,
                                          ModuleCallingContext const*) const {
    if (!skipCurrentProcess) {
      if(productWasDeleted()) {
        throwProductDeletedException();
      }
      if(product() && product()->isPresent()) {
        resolveStatus = ProductFound;
        return &productData_;
      }
    }
    resolveStatus = ProductNotFound;
    return nullptr;
  }

  ProductData const*
  UnscheduledProductHolder::resolveProduct_(ResolveStatus& resolveStatus,
                                            Principal const& principal,
                                            bool skipCurrentProcess,
                                            SharedResourcesAcquirer* sra,
                                            ModuleCallingContext const* mcc) const {
    if (!skipCurrentProcess) {
      if(productWasDeleted()) {
        throwProductDeletedException();
      }
      if(product() && product()->isPresent()) {
        resolveStatus = ProductFound;
        return &productData_;
      }
      principal.unscheduledFill(moduleLabel(), sra, mcc);
      if(product() && product()->isPresent()) {
        resolveStatus = ProductFound;
        return &productData_;
      }
    }
    resolveStatus = ProductNotFound;
    return nullptr;
  }

  void
  ProducedProductHolder::putProduct_(
        std::unique_ptr<WrapperBase> edp,
        ProductProvenance const& productProvenance) const {
    if(product()) {
      throw Exception(errors::InsertFailure)
          << "Attempt to insert more than one product on branch " << branchDescription().branchName() << "\n";
    }
    assert(branchDescription().produced());
    assert(edp.get() != nullptr);
    assert(status() != Present);
    assert(status() != Uninitialized);
    productData().unsafe_setWrapper(std::move(edp)); // ProductHolder takes ownership
    status_() = Present;
  }

  bool
  ProducedProductHolder::putOrMergeProduct_() const {
    return productUnavailable();
  }

  void
  ProducedProductHolder::mergeProduct_(std::unique_ptr<WrapperBase> edp) const {
    assert(status() == Present);
    mergeTheProduct(std::move(edp));
  }

  void
  ProducedProductHolder::putProduct_(std::unique_ptr<WrapperBase> edp) const {
    if(product()) {
      throw Exception(errors::InsertFailure)
          << "Attempt to insert more than one product on branch " << branchDescription().branchName() << "\n";
    }
    assert(branchDescription().produced());
    assert(edp.get() != nullptr);
    assert(status() != Present);
    assert(status() != Uninitialized);
    productData().unsafe_setWrapper(std::move(edp));  // ProductHolder takes ownership
    status_() = Present;
  }

  void
  InputProductHolder::putProduct_(
        std::unique_ptr<WrapperBase> edp,
        ProductProvenance const& productProvenance) const {
    assert(!product());
    setProduct(std::move(edp));
  }

  void
  InputProductHolder::mergeProduct_(std::unique_ptr<WrapperBase> edp) const {
    mergeTheProduct(std::move(edp));
  }

  bool
  InputProductHolder::putOrMergeProduct_() const {
    return(!product());
  }

  void
  InputProductHolder::putProduct_(std::unique_ptr<WrapperBase> edp) const {
    assert(!product());
    setProduct(std::move(edp));
  }

  void
  InputProductHolder::setProduct(std::unique_ptr<WrapperBase> prod) const {
    assert (!product());
    if(prod.get() == nullptr || !prod->isPresent()) {
      setProductUnavailable();
    }
    productData().unsafe_setWrapper(std::move(prod));  // ProductHolder takes ownership
  }

  void InputProductHolder::setProvenance_(ProductProvenanceRetriever const* provRetriever, ProcessHistory const& ph, ProductID const& pid) {
    productData().setProvenance(provRetriever,ph,pid);
  }

  void InputProductHolder::setProcessHistory_(ProcessHistory const& ph) {
    productData().setProcessHistory(ph);
  }

  ProductProvenance const* InputProductHolder::productProvenancePtr_() const {
    return provenance()->productProvenance();
  }

  void InputProductHolder::resetProductData_() {
    productData().resetProductData();
    resetStatus();
  }

  bool InputProductHolder::singleProduct_() const {
    return true;
  }

  // This routine returns true if it is known that currently there is no real product.
  // If there is a real product, it returns false.
  // If it is not known if there is a real product, it returns false.
  bool
  InputProductHolder::productUnavailable_() const {
    if(productIsUnavailable()) {
      return true;
    }
    // If there is a product, we know if it is real or a dummy.
    if(product()) {
      bool unavailable = !(product()->isPresent());
      if(unavailable) {
        setProductUnavailable();
      }
      return unavailable;
    }
    return false;
  }

  // This routine returns true if it is known that currently there is no real product.
  // If there is a real product, it returns false.
  // If it is not known if there is a real product, it returns false.
  bool
  ProducedProductHolder::productUnavailable_() const {
    // If unscheduled production, the product is potentially available.
    if(onDemand()) return false;
    // The product is available if and only if a product has been put.
    bool unavailable = !(product() && product()->isPresent());
    return unavailable;
  }

  // This routine returns true if the product was deleted early in order to save memory
  bool
  ProducedProductHolder::productWasDeleted_() const {
    return status() == ProductDeleted;
  }

  void 
  ProducedProductHolder::setProductDeleted_() const {
    status() = ProductDeleted;
  }

  void ProducedProductHolder::setProvenance_(ProductProvenanceRetriever const* provRetriever, ProcessHistory const& ph, ProductID const& pid) {
    productData().setProvenance(provRetriever,ph,pid);
  }

  void ProducedProductHolder::setProcessHistory_(ProcessHistory const& ph) {
    productData().setProcessHistory(ph);
  }
  
  ProductProvenance const* ProducedProductHolder::productProvenancePtr_() const {
    return provenance()->productProvenance();
  }

  void ProducedProductHolder::resetProductData_() {
    productData().resetProductData();
    resetStatus();
  }

  bool ProducedProductHolder::singleProduct_() const {
    return true;
  }

  NoProcessProductHolder::
  NoProcessProductHolder(std::vector<ProductHolderIndex> const&  matchingHolders,
                         std::vector<bool> const& ambiguous) :
    matchingHolders_(matchingHolders),
    ambiguous_(ambiguous) {
    assert(ambiguous_.size() == matchingHolders_.size());
  }

  ProductData const& NoProcessProductHolder::getProductData() const {
    throw Exception(errors::LogicError)
      << "NoProcessProductHolder::getProductData() not implemented and should never be called.\n"
      << "Contact a Framework developer\n";
  }

  ProductData& NoProcessProductHolder::getProductData() {
    throw Exception(errors::LogicError)
      << "NoProcessProductHolder::getProductData() not implemented and should never be called.\n"
      << "Contact a Framework developer\n";
  }

  ProductData const* NoProcessProductHolder::resolveProduct_(ResolveStatus& resolveStatus,
                                                             Principal const& principal,
                                                             bool skipCurrentProcess,
                                                             SharedResourcesAcquirer* sra,
                                                             ModuleCallingContext const* mcc) const {
    std::vector<unsigned int> const& lookupProcessOrder = principal.lookupProcessOrder();
    for(unsigned int k : lookupProcessOrder) {
      assert(k < ambiguous_.size());
      if(k == 0) break; // Done
      if(ambiguous_[k]) {
        resolveStatus = Ambiguous;
        return nullptr;
      }
      if (matchingHolders_[k] != ProductHolderIndexInvalid) {
        ProductHolderBase const* productHolder = principal.getProductHolderByIndex(matchingHolders_[k]);
        ProductData const* pd =  productHolder->resolveProduct(resolveStatus, principal, skipCurrentProcess, sra, mcc);
        if(pd != nullptr) return pd;
      }
    }
    resolveStatus = ProductNotFound;
    return nullptr;
  }

  void AliasProductHolder::setProvenance_(ProductProvenanceRetriever const* provRetriever, ProcessHistory const& ph, ProductID const& pid) {
    productData().setProvenance(provRetriever,ph,pid);
  }

  void AliasProductHolder::setProcessHistory_(ProcessHistory const& ph) {
    productData().setProcessHistory(ph);
  }

  ProductProvenance const* AliasProductHolder::productProvenancePtr_() const {
    return provenance()->productProvenance();
  }

  void AliasProductHolder::resetProductData_() {
    productData().resetProductData();
    resetStatus();
  }

  bool AliasProductHolder::singleProduct_() const {
    return true;
  }

  void NoProcessProductHolder::swap_(ProductHolderBase& rhs) {
    NoProcessProductHolder& other = dynamic_cast<NoProcessProductHolder&>(rhs);
    ambiguous_.swap(other.ambiguous_);
    matchingHolders_.swap(other.matchingHolders_);
  }

  void NoProcessProductHolder::resetStatus_() {
  }

  void NoProcessProductHolder::setProvenance_(ProductProvenanceRetriever const* , ProcessHistory const& , ProductID const& ) {
  }

  void NoProcessProductHolder::setProcessHistory_(ProcessHistory const& ) {
  }

  ProductProvenance const* NoProcessProductHolder::productProvenancePtr_() const {
    return nullptr;
  }

  void NoProcessProductHolder::resetProductData_() {
  }

  bool NoProcessProductHolder::singleProduct_() const {
    return false;
  }

  bool NoProcessProductHolder::onDemand_() const {
    throw Exception(errors::LogicError)
      << "NoProcessProductHolder::onDemand_() not implemented and should never be called.\n"
      << "Contact a Framework developer\n";
  }

  bool NoProcessProductHolder::productUnavailable_() const {
    throw Exception(errors::LogicError)
      << "NoProcessProductHolder::productUnavailable_() not implemented and should never be called.\n"
      << "Contact a Framework developer\n";
  }

  bool NoProcessProductHolder::productWasDeleted_() const {
    throw Exception(errors::LogicError)
      << "NoProcessProductHolder::productWasDeleted_() not implemented and should never be called.\n"
      << "Contact a Framework developer\n";
  }

  void NoProcessProductHolder::putProduct_(std::unique_ptr<WrapperBase> , ProductProvenance const& ) const {
    throw Exception(errors::LogicError)
      << "NoProcessProductHolder::putProduct_() not implemented and should never be called.\n"
      << "Contact a Framework developer\n";
  }

  void NoProcessProductHolder::putProduct_(std::unique_ptr<WrapperBase> ) const {
    throw Exception(errors::LogicError)
      << "NoProcessProductHolder::putProduct_() not implemented and should never be called.\n"
      << "Contact a Framework developer\n";
  }

  void NoProcessProductHolder::mergeProduct_(std::unique_ptr<WrapperBase>) const {
    throw Exception(errors::LogicError)
      << "NoProcessProductHolder::mergeProduct_() not implemented and should never be called.\n"
      << "Contact a Framework developer\n";
  }

  bool NoProcessProductHolder::putOrMergeProduct_() const {
    throw Exception(errors::LogicError)
      << "NoProcessProductHolder::putOrMergeProduct_() not implemented and should never be called.\n"
      << "Contact a Framework developer\n";
  }

  void NoProcessProductHolder::checkType_(WrapperBase const&) const {
    throw Exception(errors::LogicError)
      << "NoProcessProductHolder::checkType_() not implemented and should never be called.\n"
      << "Contact a Framework developer\n";
  }

  void NoProcessProductHolder::setProductDeleted_() const {
    throw Exception(errors::LogicError)
      << "NoProcessProductHolder::setProductDeleted_() not implemented and should never be called.\n"
      << "Contact a Framework developer\n";
  }

  BranchDescription const& NoProcessProductHolder::branchDescription_() const {
    throw Exception(errors::LogicError)
      << "NoProcessProductHolder::branchDescription_() not implemented and should never be called.\n"
      << "Contact a Framework developer\n";
  }

  void NoProcessProductHolder::resetBranchDescription_(std::shared_ptr<BranchDescription const>) {
    throw Exception(errors::LogicError)
      << "NoProcessProductHolder::resetBranchDescription_() not implemented and should never be called.\n"
      << "Contact a Framework developer\n";
  }
}
