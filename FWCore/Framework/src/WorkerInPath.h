#ifndef FWCore_Framework_WorkerInPath_h
#define FWCore_Framework_WorkerInPath_h

/*

	Author: Jim Kowalkowski 28-01-06


	A wrapper around a Worker, so that statistics can be managed
	per path.  A Path holds Workers as these things.

*/

#include "FWCore/Framework/src/Worker.h"
#include "FWCore/ServiceRegistry/interface/ParentContext.h"
#include "FWCore/ServiceRegistry/interface/PlaceInPathContext.h"

namespace edm {

  class PathContext;
  class StreamID;

  class WorkerInPath {
  public:
    enum FilterAction { Normal=0, Ignore, Veto };

    WorkerInPath(Worker*, FilterAction theAction, unsigned int placeInPath);

    template <typename T>
    bool runWorker(typename T::MyPrincipal const&, EventSetup const&,
		   StreamID streamID,
                   typename T::Context const* context);

    void skipWorker(EventPrincipal const& iPrincipal) {
      worker_->skipOnPath(iPrincipal);
    }
    void skipWorker(RunPrincipal const&) {}
    void skipWorker(LuminosityBlockPrincipal const&) {}
    
    void clearCounters() {
      timesVisited_ = timesPassed_ = timesFailed_ = timesExcept_ = 0;
    }
    
    int timesVisited() const { return timesVisited_; }
    int timesPassed() const { return timesPassed_; }
    int timesFailed() const { return timesFailed_; }
    int timesExcept() const { return timesExcept_; }

    FilterAction filterAction() const { return filterAction_; }
    Worker* getWorker() const { return worker_; }

    void setPathContext(PathContext const* v) { placeInPathContext_.setPathContext(v); }

  private:
    int timesVisited_;
    int timesPassed_;
    int timesFailed_;
    int timesExcept_;
    
    FilterAction filterAction_;
    Worker* worker_;

    PlaceInPathContext placeInPathContext_;
  };

  template <typename T>
  bool WorkerInPath::runWorker(typename T::MyPrincipal const& ep, EventSetup const & es,
                               StreamID streamID,
                               typename T::Context const* context) {

    if (T::isEvent_) {
      ++timesVisited_;
    }
    bool rc = true;

    try {
	// may want to change the return value from the worker to be 
	// the Worker::FilterAction so conditions in the path will be easier to 
	// identify
        if(T::isEvent_) {
          ParentContext parentContext(&placeInPathContext_);          
          rc = worker_->doWork<T>(ep, es,streamID, parentContext, context);
        } else {
          ParentContext parentContext(context);
          rc = worker_->doWork<T>(ep, es,streamID, parentContext, context);
        }
        // Ignore return code for non-event (e.g. run, lumi) calls
	if (!T::isEvent_) rc = true;
	else if (filterAction_ == Veto) rc = !rc;
        else if (filterAction_ == Ignore) rc = true;

	if (T::isEvent_) {
	  if(rc) ++timesPassed_; else ++timesFailed_;
	}
    }
    catch(...) {
	if (T::isEvent_) ++timesExcept_;
	throw;
    }

    return rc;
  }

}

#endif

