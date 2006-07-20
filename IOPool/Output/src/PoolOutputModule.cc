// $Id: PoolOutputModule.cc,v 1.35 2006/07/14 03:52:45 wmtan Exp $

#include "IOPool/Output/src/PoolOutputModule.h"
#include "IOPool/Common/interface/PoolDataSvc.h"
#include "IOPool/Common/interface/ClassFiller.h"
#include "IOPool/Common/interface/RefStreamer.h"
#include "IOPool/Common/interface/CustomStreamer.h"

#include "DataFormats/Common/interface/BranchKey.h"
#include "DataFormats/Common/interface/FileFormatVersion.h"
#include "DataFormats/Common/interface/LuminosityBlock.h"
#include "DataFormats/Common/interface/RunBlock.h"
#include "FWCore/Utilities/interface/GetFileFormatVersion.h"
#include "FWCore/Framework/interface/EventPrincipal.h"
#include "DataFormats/Common/interface/ModuleDescriptionRegistry.h"
#include "DataFormats/Common/interface/ProcessHistoryRegistry.h"
#include "DataFormats/Common/interface/ProductRegistry.h"
#include "DataFormats/Common/interface/ParameterSetBlob.h"
#include "DataFormats/Common/interface/Wrapper.h"
#include "FWCore/ParameterSet/interface/ParameterSet.h"
#include "FWCore/ParameterSet/interface/Registry.h"
#include "FWCore/MessageLogger/interface/MessageLogger.h"
#include "FWCore/ServiceRegistry/interface/Service.h"
#include "FWCore/MessageLogger/interface/JobReport.h"

#include "DataSvc/Ref.h"
#include "DataSvc/IDataSvc.h"
#include "PersistencySvc/ITransaction.h"
#include "PersistencySvc/ISession.h"
#include "StorageSvc/DbType.h"

#include "TTree.h"
#include "TFile.h"

#include <map>
#include <vector>
#include <string>
#include <iomanip>

namespace edm {
  PoolOutputModule::PoolOutputModule(ParameterSet const& pset) :
    OutputModule(pset),
    catalog_(pset),
    context_(catalog_, false),
    fileName_(FileCatalog::toPhysical(pset.getUntrackedParameter<std::string>("fileName"))),
    logicalFileName_(pset.getUntrackedParameter<std::string>("logicalFileName", std::string())),
    commitInterval_(pset.getUntrackedParameter<unsigned int>("commitInterval", 100U)),
    maxFileSize_(pset.getUntrackedParameter<int>("maxSize", 0x7f000000)),
    moduleLabel_(pset.getParameter<std::string>("@module_label")),
    fileCount_(0),
    poolFile_() {
    ClassFiller();
    // We need to set a custom streamer for edm::RefCore so that it will not be split.
    // even though a custom streamer is not otherwise necessary.
    SetRefStreamer();
    // We need to set a custom streamer for top level provenance objects so they will not be split,
    // This facilitates backward compatibility, since custom streamers can be used for reading
    // if the branch is not split.
    // Note: The map classes already have a custom streamer, so this is not needed now.
    // We do this only to protect against future root changes.
    typedef std::map<ParameterSetID, ParameterSetBlob> ParameterSetMap;
    SetCustomStreamer<EventAux>();
    SetCustomStreamer<ProductRegistry>();
    SetCustomStreamer<ParameterSetMap>();
    SetCustomStreamer<ProcessHistoryMap>();
    SetCustomStreamer<ModuleDescriptionMap>();
    SetCustomStreamer<FileFormatVersion>();
    SetCustomStreamer<BranchEntryDescription>();
    SetCustomStreamer<LuminosityBlock>();
    SetCustomStreamer<RunBlock>();
  }

  void PoolOutputModule::beginJob(EventSetup const&) {
    poolFile_ = boost::shared_ptr<PoolFile>(new PoolFile(this));
  }

  void PoolOutputModule::endJob() {
    poolFile_->endFile();
  }

  PoolOutputModule::~PoolOutputModule() {
  }

  void PoolOutputModule::write(EventPrincipal const& e) {
      if (poolFile_->writeOne(e)) {
	++fileCount_;
	poolFile_ = boost::shared_ptr<PoolFile>(new PoolFile(this));
      }
  }

  PoolOutputModule::PoolFile::PoolFile(PoolOutputModule *om) :
    outputItemList_(), branchNames_(),
      file_(), lfn_(),
      reportToken_(0), eventCount_(0),
      fileSizeCheckEvent_(100),
      auxiliaryPlacement_(),
      productDescriptionPlacement_(),
      parameterSetPlacement_(),
      moduleDescriptionPlacement_(),
      processHistoryPlacement_(),
      fileFormatVersionPlacement_(),
      runBlockPlacement_(),
      luminosityBlockPlacement_(),
      om_(om) {
    std::string const suffix(".root");
    std::string::size_type offset = om_->fileName_.rfind(suffix);
    bool ext = (offset == om_->fileName_.size() - suffix.size());
    std::string fileBase(ext ? om_->fileName_.substr(0, offset): om_->fileName_);
    if (om_->fileCount_) {
      std::ostringstream ofilename;
      ofilename << fileBase << std::setw(3) << std::setfill('0') << om_->fileCount_ << suffix;
      file_ = ofilename.str();
      if (!om_->logicalFileName_.empty()) {
	std::ostringstream lfilename;
	lfilename << om_->logicalFileName_ << std::setw(3) << std::setfill('0') << om_->fileCount_;
	lfn_ = lfilename.str();
      }
    } else {
      file_ = fileBase + suffix;
      lfn_ = om_->logicalFileName_;
    }
    makePlacement(poolNames::eventTreeName(), poolNames::auxiliaryBranchName(), auxiliaryPlacement_);
    makePlacement(poolNames::metaDataTreeName(), poolNames::productDescriptionBranchName(),
	productDescriptionPlacement_);
    makePlacement(poolNames::metaDataTreeName(), poolNames::parameterSetMapBranchName(),
	parameterSetPlacement_);
    makePlacement(poolNames::metaDataTreeName(), poolNames::moduleDescriptionMapBranchName(),
	moduleDescriptionPlacement_);
    makePlacement(poolNames::metaDataTreeName(), poolNames::processHistoryMapBranchName(),
	processHistoryPlacement_);
    makePlacement(poolNames::metaDataTreeName(), poolNames::fileFormatVersionBranchName(),
	fileFormatVersionPlacement_);
    makePlacement(poolNames::runTreeName(), poolNames::runBranchName(),
	runBlockPlacement_);
    makePlacement(poolNames::luminosityBlockTreeName(), poolNames::luminosityBlockBranchName(),
	luminosityBlockPlacement_);
    ProductRegistry pReg;
    pReg.setNextID(om_->nextID());
   
    for (Selections::const_iterator it = om_->descVec_.begin();
      it != om_->descVec_.end(); ++it) {
      pReg.copyProduct(**it);
      pool::Placement provenancePlacement;
      pool::Placement eventPlacement;
      makePlacement(poolNames::eventMetaDataTreeName(), (*it)->branchName(), provenancePlacement);
      makePlacement(poolNames::eventTreeName(), (*it)->branchName(), eventPlacement);
      outputItemList_.push_back(OutputItem(*it, true, provenancePlacement, eventPlacement));
      branchNames_.push_back((*it)->branchName());
    }
    for (Selections::const_iterator it = om_->droppedVec_.begin();
      it != om_->droppedVec_.end(); ++it) {
      pReg.copyProduct(**it);
      pool::Placement provenancePlacement;
      makePlacement(poolNames::eventMetaDataTreeName(), (*it)->branchName(), provenancePlacement);
      outputItemList_.push_back(OutputItem(*it, false, provenancePlacement));
    }

    startTransaction();

    pool::Ref<ProductRegistry const> rp(om_->context(), &pReg);
    rp.markWrite(productDescriptionPlacement_);

    pool::Ref<ModuleDescriptionMap const> rmod(om_->context(), &ModuleDescriptionRegistry::instance()->data());
    rmod.markWrite(moduleDescriptionPlacement_);

    typedef std::map<ParameterSetID, ParameterSetBlob> ParameterSetMap;
    ParameterSetMap psetMap;
    pset::Registry const* psetRegistry = pset::Registry::instance();    
    for (pset::Registry::const_iterator it = psetRegistry->begin(); it != psetRegistry->end(); ++it) {
      psetMap.insert(std::make_pair(it->first, ParameterSetBlob(it->second.toStringOfTracked())));
    }
    pool::Ref<ParameterSetMap const> rpparam(om_->context(), &psetMap);
    rpparam.markWrite(parameterSetPlacement_);

    FileFormatVersion fileFormatVersion(edm::getFileFormatVersion());

    pool::Ref<FileFormatVersion const> fft(om_->context(), &fileFormatVersion);
    fft.markWrite(fileFormatVersionPlacement_);

    // For now, just one run block per file.
    RunBlock runBlock;
    pool::Ref<RunBlock const> rblk(om_->context(), &runBlock);
    rblk.markWrite(runBlockPlacement_);

    // For now, just one luminosity block per file.
    LuminosityBlock luminosityBlock;
    pool::Ref<LuminosityBlock const> lblk(om_->context(), &luminosityBlock);
    lblk.markWrite(luminosityBlockPlacement_);

    commitAndFlushTransaction();
    // Register the output file with the JobReport service
    // and get back the token for it.
    std::string moduleName = "PoolOutputModule";
    Service<JobReport> reportSvc;
    reportToken_ = reportSvc->outputFileOpened(
		      file_, lfn_,  // PFN and LFN
		      om_->catalog_.url(),  // catalog
		      moduleName,   // module class name
		      om_->moduleLabel_,  // module label
		      branchNames_); // branch names being written
    om_->catalog_.registerFile(file_, lfn_);
  }

  void PoolOutputModule::PoolFile::startTransaction() const {
    context()->transaction().start(pool::ITransaction::UPDATE);
  }

  void PoolOutputModule::PoolFile::commitTransaction() const {
    context()->transaction().commitAndHold();
  }

  void PoolOutputModule::PoolFile::commitAndFlushTransaction() const {
    context()->transaction().commit();
  }

  void PoolOutputModule::PoolFile::makePlacement(std::string const& treeName_, std::string const& branchName, pool::Placement& placement) {
    placement.setTechnology(pool::ROOTTREE_StorageType.type());
    placement.setDatabase(file_, pool::DatabaseSpecification::PFN);
    placement.setContainerName(poolNames::containerName(treeName_, branchName));
  }

  bool PoolOutputModule::PoolFile::writeOne(EventPrincipal const& e) {
    ++eventCount_;
    startTransaction();
    // Write auxiliary branch
    EventAux aux;
    aux.processHistoryID_ = e.processHistoryID();
    aux.id_ = e.id();
    aux.time_ = e.time();

    pool::Ref<EventAux const> ra(context(), &aux);
    ra.markWrite(auxiliaryPlacement_);	

    std::list<BranchEntryDescription> dummyProvenances;

    // Loop over EDProduct branches, fill the provenance, and write the branch.
    for (OutputItemList::const_iterator i = outputItemList_.begin();
	 i != outputItemList_.end(); ++i) {
      ProductID const& id = i->branchDescription_->productID_;

      if (id == ProductID()) {
	throw edm::Exception(edm::errors::ProductNotFound,"InvalidID")
	  << "PoolOutputModule::write: invalid ProductID supplied in productRegistry\n";
      }

      EDProduct const* product = 0;
      EventPrincipal::SharedGroupPtr const g = e.getGroup(id, i->selected_);
      if (g.get() == 0) {
	// No Group with this ID is in the event.
	// Create the provenance.
	if (i->branchDescription_->produced_) {
          BranchEntryDescription event;
	  event.moduleDescriptionID_ = i->branchDescription_->moduleDescriptionID_;
	  event.productID_ = id;
	  event.status_ = BranchEntryDescription::CreatorNotRun;
	  event.isPresent_ = false;
	  event.cid_ = 0;
	  
	  dummyProvenances.push_front(event); 
	  pool::Ref<BranchEntryDescription const> refp(context(), &*dummyProvenances.begin());
	  refp.markWrite(i->provenancePlacement_);
	} else {
	    throw edm::Exception(errors::ProductNotFound,"NoMatch")
	      << "PoolOutputModule: Unexpected internal error.  Contact the framework group.\n"
	      << "No group in event " << aux.id_ << "\nfor branch" << i->branchDescription_->branchName_ << '\n';
	}
      } else {
	if (!i->selected_) {
	  g->provenance().event.isPresent_ = false;
	}
	pool::Ref<BranchEntryDescription const> refp(context(), &g->provenance().event);
	refp.markWrite(i->provenancePlacement_);
	product = g->product();
      }
      if (i->selected_) {
	if (product == 0) {
	  // Add a null product.
	  std::string const& name = i->branchDescription_->className();
	  std::string const className = wrappedClassName(name);
	  TClass *cp = gROOT->GetClass(className.c_str());
	  if (cp == 0) {
	    throw edm::Exception(errors::ProductNotFound,"NoMatch")
	      << "TypeID::className: No dictionary for class " << className << '\n'
	      << "Add an entry for this class\n"
	      << "to the appropriate 'classes_def.xml' and 'classes.h' files." << '\n';
	  }
	  product = static_cast<EDProduct *>(cp->New());
	}
	pool::Ref<EDProduct const> ref(context(), product);
	ref.markWrite(i->eventPlacement_);
      }
    }

    commitTransaction();
    // Report event written 
    Service<JobReport> reportSvc;
    reportSvc->eventWrittenToFile(reportToken_, e.id());

    if (eventCount_ >= fileSizeCheckEvent_) {
	unsigned int const oneK = 1024;
	size_t size = om_->context_.getFileSize(file_)/oneK;
	unsigned long eventSize = std::max(size/eventCount_, 1UL);
	if (size + 2*eventSize >= om_->maxFileSize_) {
	  endFile();
	  return true;
	} else {
	  unsigned long increment = (om_->maxFileSize_ - size)/eventSize;
	  increment -= increment/8;	// Prevents overshoot
	  fileSizeCheckEvent_ = eventCount_ + increment;
	}
    }
    if (eventCount_ % om_->commitInterval_ == 0) {
      commitAndFlushTransaction();
      startTransaction();
    }
    return false;
  }

  void PoolOutputModule::PoolFile::endFile() {
    startTransaction();
    pool::Ref<ProcessHistoryMap const> rhist(om_->context(), &ProcessHistoryRegistry::instance()->data());
    rhist.markWrite(processHistoryPlacement_);

    commitAndFlushTransaction();
    om_->catalog_.commitCatalog();
    context()->session().disconnectAll();
    setBranchAliases();
    // report that file has been closed
    Service<JobReport> reportSvc;
    reportSvc->outputFileClosed(reportToken_);
  }


  // For now, we must use root directly to set branch aliases, since there is no way to do this in POOL
  // We do this after POOL has closed the file.
  void
  PoolOutputModule::PoolFile::setBranchAliases() const {
    TFile f(file_.c_str(), "update");
    TTree *t = dynamic_cast<TTree *>(f.Get(poolNames::eventTreeName().c_str()));
    if (t) {
      t->BuildIndex("id_.run_", "id_.event_");
      for (Selections::const_iterator it = om_->descVec_.begin();
	it != om_->descVec_.end(); ++it) {
	BranchDescription const& pd = **it;
	std::string const& full = pd.branchName() + "obj";
	if (pd.branchAliases().empty()) {
	  std::string const& alias =
	      (pd.productInstanceName().empty() ? pd.moduleLabel() : pd.productInstanceName());
	  t->SetAlias(alias.c_str(), full.c_str());
	} else {
	  std::set<std::string>::const_iterator it = pd.branchAliases().begin();
	  std::set<std::string>::const_iterator itend = pd.branchAliases().end();
	  for (; it != itend; ++it) {
	    t->SetAlias((*it).c_str(), full.c_str());
	  }
	}
      }
      t->Write(t->GetName(), TObject::kWriteDelete);
    }
    f.Purge();
    f.Close();
  }
}
