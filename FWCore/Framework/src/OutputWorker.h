#ifndef Framework_OutputWorker_h
#define Framework_OutputWorker_h

/*----------------------------------------------------------------------
  
OutputWorker: The OutputModule as the schedule sees it.  The job of
this object is to call the output module.

According to our current definition, a single output module can only
appear in one worker.

$Id: OutputWorker.h,v 1.15 2005/12/28 00:21:58 wmtan Exp $
----------------------------------------------------------------------*/

#include <memory>

#include "boost/shared_ptr.hpp"

#include "FWCore/Framework/src/Worker.h"

namespace edm
{
  class ModuleDescription;
  class OutputModule;
  class WorkerParams;

  class OutputWorker : public Worker
  {
  public:
    OutputWorker(std::auto_ptr<OutputModule> mod, 
		 const ModuleDescription&,
		 const WorkerParams&);

    virtual ~OutputWorker();

    template <class ModType>
    static std::auto_ptr<OutputModule> makeOne(const ModuleDescription& md,
					const WorkerParams& wp);
  private:
    virtual bool implDoWork(EventPrincipal& e, EventSetup const& c);

    virtual void implBeginJob(EventSetup const&) ;
    virtual void implEndJob() ;
    virtual std::string workerType() const;
    
    boost::shared_ptr<OutputModule> mod_;
  };

  template <> 
  struct WorkerType<OutputModule>
  {
    typedef OutputModule ModuleType;
    typedef OutputWorker worker_type;
  };

  template <class ModType>
  std::auto_ptr<OutputModule> OutputWorker::makeOne(const ModuleDescription&,
						    const WorkerParams& wp)
  {
    return std::auto_ptr<OutputModule>(new ModType(*wp.pset_));
  }

}

#endif
