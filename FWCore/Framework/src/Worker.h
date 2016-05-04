#ifndef FWCore_Framework_Worker_h
#define FWCore_Framework_Worker_h

/*----------------------------------------------------------------------

Worker: this is a basic scheduling unit - an abstract base class to
something that is really a producer or filter.

A worker will not actually call through to the module unless it is
in a Ready state.  After a module is actually run, the state will not
be Ready.  The Ready state can only be reestablished by doing a reset().

Pre/post module signals are posted only in the Ready state.

Execution statistics are kept here.

If a module has thrown an exception during execution, that exception
will be rethrown if the worker is entered again and the state is not Ready.
In other words, execution results (status) are cached and reused until
the worker is reset().

----------------------------------------------------------------------*/

#include "DataFormats/Provenance/interface/ModuleDescription.h"
#include "FWCore/MessageLogger/interface/ExceptionMessages.h"
#include "FWCore/Framework/src/WorkerParams.h"
#include "FWCore/Framework/interface/ExceptionActions.h"
#include "FWCore/Framework/interface/ModuleContextSentry.h"
#include "FWCore/Framework/interface/OccurrenceTraits.h"
#include "FWCore/Framework/interface/ProductResolverIndexAndSkipBit.h"
#include "FWCore/Concurrency/interface/WaitingTaskList.h"
#include "FWCore/MessageLogger/interface/MessageLogger.h"
#include "FWCore/ServiceRegistry/interface/ActivityRegistry.h"
#include "FWCore/ServiceRegistry/interface/ConsumesInfo.h"
#include "FWCore/ServiceRegistry/interface/InternalContext.h"
#include "FWCore/ServiceRegistry/interface/ModuleCallingContext.h"
#include "FWCore/ServiceRegistry/interface/ParentContext.h"
#include "FWCore/ServiceRegistry/interface/PathContext.h"
#include "FWCore/ServiceRegistry/interface/PlaceInPathContext.h"
#include "FWCore/Utilities/interface/Exception.h"
#include "FWCore/Utilities/interface/ConvertException.h"
#include "FWCore/Utilities/interface/BranchType.h"
#include "FWCore/Utilities/interface/ProductResolverIndex.h"
#include "FWCore/Utilities/interface/StreamID.h"
#include "FWCore/Utilities/interface/propagate_const.h"

#include "FWCore/Framework/interface/Frameworkfwd.h"

#include <map>
#include <memory>
#include <sstream>
#include <string>
#include <vector>

namespace edm {
  class EventPrincipal;
  class EarlyDeleteHelper;
  class ProductResolverIndexHelper;
  class ProductResolverIndexAndSkipBit;
  class StreamID;
  class StreamContext;
  class ProductRegistry;
  class ThinnedAssociationsHelper;
  class WaitingTask;

  namespace workerhelper {
    template< typename O> class CallImpl;
  }

  class Worker {
  public:
    enum State { Ready, Pass, Fail, Exception };
    enum Types { kAnalyzer, kFilter, kProducer, kOutputModule};

    Worker(ModuleDescription const& iMD, ExceptionToActionTable const* iActions);
    virtual ~Worker();

    Worker(Worker const&) = delete; // Disallow copying and moving
    Worker& operator=(Worker const&) = delete; // Disallow copying and moving

    template <typename T>
    bool doWork(typename T::MyPrincipal const&, EventSetup const& c,
                StreamID stream,
                ParentContext const& parentContext,
                typename T::Context const* context);
    void beginJob() ;
    void endJob();
    void beginStream(StreamID id, StreamContext& streamContext);
    void endStream(StreamID id, StreamContext& streamContext);
    void respondToOpenInputFile(FileBlock const& fb) {implRespondToOpenInputFile(fb);}
    void respondToCloseInputFile(FileBlock const& fb) {implRespondToCloseInputFile(fb);}

    void preForkReleaseResources() {implPreForkReleaseResources();}
    void postForkReacquireResources(unsigned int iChildIndex, unsigned int iNumberOfChildren) {implPostForkReacquireResources(iChildIndex, iNumberOfChildren);}
    void registerThinnedAssociations(ProductRegistry const& registry, ThinnedAssociationsHelper& helper) { implRegisterThinnedAssociations(registry, helper); }

    void reset() { state_ = Ready; }

    void pathFinished(EventPrincipal const&);
    void postDoEvent(EventPrincipal const&);

    ModuleDescription const& description() const {return *(moduleCallingContext_.moduleDescription());}
    ModuleDescription const* descPtr() const {return moduleCallingContext_.moduleDescription(); }
    ///The signals are required to live longer than the last call to 'doWork'
    /// this was done to improve performance based on profiling
    void setActivityRegistry(std::shared_ptr<ActivityRegistry> areg);

    void setEarlyDeleteHelper(EarlyDeleteHelper* iHelper);

    //Used to make EDGetToken work
    virtual void updateLookup(BranchType iBranchType,
                      ProductResolverIndexHelper const&) = 0;

    virtual void modulesDependentUpon(std::vector<const char*>& oModuleLabels, bool iPrint) const = 0;

    virtual void modulesWhoseProductsAreConsumed(std::vector<ModuleDescription const*>& modules,
                                                 ProductRegistry const& preg,
                                                 std::map<std::string, ModuleDescription const*> const& labelsToDesc) const = 0;

    virtual std::vector<ConsumesInfo> consumesInfo() const = 0;

    virtual Types moduleType() const =0;

    void clearCounters() {
      timesRun_ = timesVisited_ = timesPassed_ = timesFailed_ = timesExcept_ = 0;
    }

    int timesRun() const { return timesRun_; }
    int timesVisited() const { return timesVisited_; }
    int timesPassed() const { return timesPassed_; }
    int timesFailed() const { return timesFailed_; }
    int timesExcept() const { return timesExcept_; }
    State state() const { return state_; }

    int timesPass() const { return timesPassed(); } // for backward compatibility only - to be removed soon

  protected:
    template<typename O> friend class workerhelper::CallImpl;
    virtual std::string workerType() const = 0;
    virtual bool implDo(EventPrincipal const&, EventSetup const& c,
                        ModuleCallingContext const* mcc) = 0;
    virtual bool implDoPrePrefetchSelection(StreamID id,
                                            EventPrincipal const& ep,
                                            ModuleCallingContext const* mcc) = 0;
    virtual bool implDoBegin(RunPrincipal const& rp, EventSetup const& c,
                             ModuleCallingContext const* mcc) = 0;
    virtual bool implDoStreamBegin(StreamID id, RunPrincipal const& rp, EventSetup const& c,
                                   ModuleCallingContext const* mcc) = 0;
    virtual bool implDoStreamEnd(StreamID id, RunPrincipal const& rp, EventSetup const& c,
                                 ModuleCallingContext const* mcc) = 0;
    virtual bool implDoEnd(RunPrincipal const& rp, EventSetup const& c,
                           ModuleCallingContext const* mcc) = 0;
    virtual bool implDoBegin(LuminosityBlockPrincipal const& lbp, EventSetup const& c,
                             ModuleCallingContext const* mcc) = 0;
    virtual bool implDoStreamBegin(StreamID id, LuminosityBlockPrincipal const& lbp, EventSetup const& c,
                                   ModuleCallingContext const* mcc) = 0;
    virtual bool implDoStreamEnd(StreamID id, LuminosityBlockPrincipal const& lbp, EventSetup const& c,
                                 ModuleCallingContext const* mcc) = 0;
    virtual bool implDoEnd(LuminosityBlockPrincipal const& lbp, EventSetup const& c,
                           ModuleCallingContext const* mcc) = 0;
    virtual void implBeginJob() = 0;
    virtual void implEndJob() = 0;
    virtual void implBeginStream(StreamID) = 0;
    virtual void implEndStream(StreamID) = 0;

    void resetModuleDescription(ModuleDescription const*);

    ActivityRegistry* activityRegistry() { return actReg_.get(); }

  private:
    
    template <typename T>
    bool runModule(typename T::MyPrincipal const&, EventSetup const& c,
                StreamID stream,
                ParentContext const& parentContext,
                typename T::Context const* context);

    virtual void itemsToGet(BranchType, std::vector<ProductResolverIndexAndSkipBit>&) const = 0;
    virtual void itemsMayGet(BranchType, std::vector<ProductResolverIndexAndSkipBit>&) const = 0;

    virtual std::vector<ProductResolverIndexAndSkipBit> const& itemsToGetFromEvent() const = 0;

    void prefetchAsync(WaitingTask*, Principal const& );
    virtual void implRespondToOpenInputFile(FileBlock const& fb) = 0;
    virtual void implRespondToCloseInputFile(FileBlock const& fb) = 0;

    virtual void implPreForkReleaseResources() = 0;
    virtual void implPostForkReacquireResources(unsigned int iChildIndex,
                                               unsigned int iNumberOfChildren) = 0;
    virtual void implRegisterThinnedAssociations(ProductRegistry const&, ThinnedAssociationsHelper&) = 0;
    
    static void exceptionContext(const std::string& iID,
                          bool iIsEvent,
                          cms::Exception& ex,
                          ModuleCallingContext const* mcc);


    int timesRun_;
    int timesVisited_;
    int timesPassed_;
    int timesFailed_;
    int timesExcept_;
    State state_;

    ModuleCallingContext moduleCallingContext_;

    ExceptionToActionTable const* actions_; // memory assumed to be managed elsewhere
    edm::propagate_const<std::shared_ptr<cms::Exception>> cached_exception_; // if state is 'exception'

    std::shared_ptr<ActivityRegistry> actReg_; // We do not use propagate_const because the registry itself is mutable.

    edm::propagate_const<EarlyDeleteHelper*> earlyDeleteHelper_;
    
    edm::WaitingTaskList m_waitingTasks;
  };

  namespace {
    template <typename T>
    class ModuleSignalSentry {
    public:
      ModuleSignalSentry(ActivityRegistry *a,
                         typename T::Context const* context,
                         ModuleCallingContext const* moduleCallingContext) :
        a_(a), context_(context), moduleCallingContext_(moduleCallingContext) {

	if(a_) T::preModuleSignal(a_, context, moduleCallingContext_);
      }

      ~ModuleSignalSentry() {
	if(a_) T::postModuleSignal(a_, context_, moduleCallingContext_);
      }

    private:
      ActivityRegistry* a_; // We do not use propagate_const because the registry itself is mutable.
      typename T::Context const* context_;
      ModuleCallingContext const* moduleCallingContext_;
    };

  }

  namespace workerhelper {
    template<>
    class CallImpl<OccurrenceTraits<EventPrincipal, BranchActionStreamBegin>> {
    public:
      typedef OccurrenceTraits<EventPrincipal, BranchActionStreamBegin> Arg;
      static bool call(Worker* iWorker, StreamID,
                       EventPrincipal const& ep, EventSetup const& es,
                       ActivityRegistry* /* actReg */,
                       ModuleCallingContext const* mcc,
                       Arg::Context const* /* context*/) {
        //Signal sentry is handled by the module
        return iWorker->implDo(ep,es, mcc);
      }
      static bool prePrefetchSelection(Worker* iWorker,StreamID id,
                                       typename Arg::MyPrincipal const& ep,
                                       ModuleCallingContext const* mcc) {
        return iWorker->implDoPrePrefetchSelection(id,ep,mcc);
      }
    };

    template<>
    class CallImpl<OccurrenceTraits<RunPrincipal, BranchActionGlobalBegin>>{
    public:
      typedef OccurrenceTraits<RunPrincipal, BranchActionGlobalBegin> Arg;
      static bool call(Worker* iWorker,StreamID,
                       RunPrincipal const& ep, EventSetup const& es,
                       ActivityRegistry* actReg,
                       ModuleCallingContext const* mcc,
                       Arg::Context const* context) {
        ModuleSignalSentry<Arg> cpp(actReg, context, mcc);
        return iWorker->implDoBegin(ep,es, mcc);
      }
      static bool prePrefetchSelection(Worker* iWorker,StreamID id,
                                       typename Arg::MyPrincipal const& ep,
                                       ModuleCallingContext const* mcc) {
        return true;
      }
    };
    template<>
    class CallImpl<OccurrenceTraits<RunPrincipal, BranchActionStreamBegin>>{
    public:
      typedef OccurrenceTraits<RunPrincipal, BranchActionStreamBegin> Arg;
      static bool call(Worker* iWorker,StreamID id,
                       RunPrincipal const & ep, EventSetup const& es,
                       ActivityRegistry* actReg,
                       ModuleCallingContext const* mcc,
                       Arg::Context const* context) {
        ModuleSignalSentry<Arg> cpp(actReg, context, mcc);
        return iWorker->implDoStreamBegin(id,ep,es, mcc);
      }
      static bool prePrefetchSelection(Worker* iWorker,StreamID id,
                                       typename Arg::MyPrincipal const& ep,
                                       ModuleCallingContext const* mcc) {
        return true;
      }
    };
    template<>
    class CallImpl<OccurrenceTraits<RunPrincipal, BranchActionGlobalEnd>>{
    public:
      typedef OccurrenceTraits<RunPrincipal, BranchActionGlobalEnd> Arg;
      static bool call(Worker* iWorker,StreamID,
                       RunPrincipal const& ep, EventSetup const& es,
                       ActivityRegistry* actReg,
                       ModuleCallingContext const* mcc,
                       Arg::Context const* context) {
        ModuleSignalSentry<Arg> cpp(actReg, context, mcc);
        return iWorker->implDoEnd(ep,es, mcc);
      }
      static bool prePrefetchSelection(Worker* iWorker,StreamID id,
                                       typename Arg::MyPrincipal const& ep,
                                       ModuleCallingContext const* mcc) {
        return true;
      }
    };
    template<>
    class CallImpl<OccurrenceTraits<RunPrincipal, BranchActionStreamEnd>>{
    public:
      typedef OccurrenceTraits<RunPrincipal, BranchActionStreamEnd> Arg;
      static bool call(Worker* iWorker,StreamID id,
                       RunPrincipal const& ep, EventSetup const& es,
                       ActivityRegistry* actReg,
                       ModuleCallingContext const* mcc,
                       Arg::Context const* context) {
        ModuleSignalSentry<Arg> cpp(actReg, context, mcc);
        return iWorker->implDoStreamEnd(id,ep,es, mcc);
      }
      static bool prePrefetchSelection(Worker* iWorker,StreamID id,
                                       typename Arg::MyPrincipal const& ep,
                                       ModuleCallingContext const* mcc) {
        return true;
      }
    };

    template<>
    class CallImpl<OccurrenceTraits<LuminosityBlockPrincipal, BranchActionGlobalBegin>>{
    public:
      typedef OccurrenceTraits<LuminosityBlockPrincipal, BranchActionGlobalBegin> Arg;
      static bool call(Worker* iWorker,StreamID,
                       LuminosityBlockPrincipal const& ep, EventSetup const& es,
                       ActivityRegistry* actReg,
                       ModuleCallingContext const* mcc,
                       Arg::Context const* context) {
        ModuleSignalSentry<Arg> cpp(actReg, context, mcc);
        return iWorker->implDoBegin(ep,es, mcc);
      }

      static bool prePrefetchSelection(Worker* iWorker,StreamID id,
                                       typename Arg::MyPrincipal const& ep,
                                       ModuleCallingContext const* mcc) {
        return true;
      }
    };
    template<>
    class CallImpl<OccurrenceTraits<LuminosityBlockPrincipal, BranchActionStreamBegin>>{
    public:
      typedef OccurrenceTraits<LuminosityBlockPrincipal, BranchActionStreamBegin> Arg;
      static bool call(Worker* iWorker,StreamID id,
                       LuminosityBlockPrincipal const& ep, EventSetup const& es,
                       ActivityRegistry* actReg,
                       ModuleCallingContext const* mcc,
                       Arg::Context const* context) {
        ModuleSignalSentry<Arg> cpp(actReg, context, mcc);
        return iWorker->implDoStreamBegin(id,ep,es, mcc);
      }

      static bool prePrefetchSelection(Worker* iWorker,StreamID id,
                                       typename Arg::MyPrincipal const& ep,
                                       ModuleCallingContext const* mcc) {
        return true;
      }
};

    template<>
    class CallImpl<OccurrenceTraits<LuminosityBlockPrincipal, BranchActionGlobalEnd>>{
    public:
      typedef OccurrenceTraits<LuminosityBlockPrincipal, BranchActionGlobalEnd> Arg;
      static bool call(Worker* iWorker,StreamID,
                       LuminosityBlockPrincipal const& ep, EventSetup const& es,
                       ActivityRegistry* actReg,
                       ModuleCallingContext const* mcc,
                       Arg::Context const* context) {
        ModuleSignalSentry<Arg> cpp(actReg, context, mcc);
        return iWorker->implDoEnd(ep,es, mcc);
      }
      static bool prePrefetchSelection(Worker* iWorker,StreamID id,
                                       typename Arg::MyPrincipal const& ep,
                                       ModuleCallingContext const* mcc) {
        return true;
      }

    };
    template<>
    class CallImpl<OccurrenceTraits<LuminosityBlockPrincipal, BranchActionStreamEnd>>{
    public:
      typedef OccurrenceTraits<LuminosityBlockPrincipal, BranchActionStreamEnd> Arg;
      static bool call(Worker* iWorker,StreamID id,
                       LuminosityBlockPrincipal const& ep, EventSetup const& es,
                       ActivityRegistry* actReg,
                       ModuleCallingContext const* mcc,
                       Arg::Context const* context) {
        ModuleSignalSentry<Arg> cpp(actReg, context, mcc);
        return iWorker->implDoStreamEnd(id,ep,es, mcc);
      }
      
      static bool prePrefetchSelection(Worker* iWorker,StreamID id,
                                       typename Arg::MyPrincipal const& ep,
                                       ModuleCallingContext const* mcc) {
        return true;
      }
    };
  }

  template <typename T>
  bool Worker::doWork(typename T::MyPrincipal const& ep,
                      EventSetup const& es,
                      StreamID streamID,
                      ParentContext const& parentContext,
                      typename T::Context const* context) {

    if (T::isEvent_) {
      ++timesVisited_;
    }
    bool rc = false;

    switch(state_) {
      case Ready: break;
      case Pass: return true;
      case Fail: return false;
      case Exception: {
	  cached_exception_->raise();
      }
    }

    //Need the context to be set until after any exception is resolved
    moduleCallingContext_.setContext(ModuleCallingContext::State::kPrefetching,parentContext,nullptr);
    auto resetContext = [](ModuleCallingContext* iContext) {iContext->setContext(ModuleCallingContext::State::kInvalid,ParentContext(),nullptr); };
    std::unique_ptr<ModuleCallingContext, decltype(resetContext)> prefetchSentry(&moduleCallingContext_,resetContext);
    
    try {
      convertException::wrap([&]() {

        if (T::isEvent_) {

          ++timesRun_;
          
          //if have TriggerResults based selection we want to reject the event before doing prefetching
          if( not workerhelper::CallImpl<T>::prePrefetchSelection(this,streamID,ep,&moduleCallingContext_) ) {
            state_ = Pass;
            ++timesPassed_;
            rc = true;
            return;
          }
          std::shared_ptr<edm::WaitingTask> waitTask{new (tbb::task::allocate_root()) edm::EmptyWaitingTask{},
            [](edm::WaitingTask* iTask){tbb::task::destroy(*iTask);} };
          waitTask->increment_ref_count();
          
          prefetchAsync(waitTask.get(),ep);
          waitTask->wait_for_all();
          if(waitTask->exceptionPtr() != nullptr) {
            std::rethrow_exception(*(waitTask->exceptionPtr()));
          }
        }
        //successful prefetch so no reset necessary
        prefetchSentry.release();
        rc = runModule<T>(ep,es,streamID,parentContext,context);
      });
    }
    catch(cms::Exception& ex) {

      // NOTE: the warning printed as a result of ignoring or failing
      // a module will only be printed during the full true processing
      // pass of this module

      // Get the action corresponding to this exception.  However, if processing
      // something other than an event (e.g. run, lumi) always rethrow.
      exception_actions::ActionCodes action = (T::isEvent_ ? actions_->find(ex.category()) : exception_actions::Rethrow);

      ModuleCallingContext tempContext(&description(),ModuleCallingContext::State::kInvalid, parentContext, nullptr);

      // If we are processing an endpath and the module was scheduled, treat SkipEvent or FailPath
      // as IgnoreCompletely, so any subsequent OutputModules are still run.
      // For unscheduled modules only treat FailPath as IgnoreCompletely but still allow SkipEvent to throw
      ModuleCallingContext const* top_mcc = tempContext.getTopModuleCallingContext();
      if(top_mcc->type() == ParentContext::Type::kPlaceInPath &&
         top_mcc->placeInPathContext()->pathContext()->isEndPath()) {

          if ((action == exception_actions::SkipEvent && tempContext.type() == ParentContext::Type::kPlaceInPath) ||
               action == exception_actions::FailPath) action = exception_actions::IgnoreCompletely;
      }
      //NOTE: runModule had set cached_exception_ and advanced timesExcept_. These may need to be modified.
      switch(action) {
        case exception_actions::IgnoreCompletely:
        {
          rc = true;
          ++timesPassed_;
          state_ = Pass;
          std::ostringstream iost;
          iost<<ep.id();
          exceptionContext(iost.str(), T::isEvent_, ex, &tempContext);
          edm::printCmsExceptionWarning("IgnoreCompletely", ex);
          //now ignore the fact we had thrown an exception
          if(cached_exception_) {
            --timesExcept_;
            cached_exception_ = nullptr;
          }
          break;
        }
        default:
          if(not cached_exception_) {
            cached_exception_ =std::shared_ptr<cms::Exception>(ex.clone());
          }
          cached_exception_->raise();
      }
    }
    return rc;
  }
  
  
  template <typename T>
  bool Worker::runModule(typename T::MyPrincipal const& ep,
                      EventSetup const& es,
                      StreamID streamID,
                      ParentContext const& parentContext,
                      typename T::Context const* context) {
    //unscheduled producers should advance this
    //if (T::isEvent_) {
    //  ++timesVisited_;
    //}
    bool rc = false;
    
    ModuleContextSentry moduleContextSentry(&moduleCallingContext_, parentContext);
    if (T::isEvent_) {
      ++timesRun_;
    }
    
    try {
      convertException::wrap([&]() {
        rc = workerhelper::CallImpl<T>::call(this,streamID,ep,es, actReg_.get(), &moduleCallingContext_, context);
        
        if (rc) {
          state_ = Pass;
          if (T::isEvent_) ++timesPassed_;
        } else {
          state_ = Fail;
          if (T::isEvent_) ++timesFailed_;
        }
      });
    }
    catch(cms::Exception& ex) {
      if (T::isEvent_) ++timesExcept_;
      state_ = Exception;
      cached_exception_ = std::shared_ptr<cms::Exception>(ex.clone()); // propagate_const<T> has no reset() function
      cached_exception_->raise();
    }
    return rc;
  }
}
#endif
