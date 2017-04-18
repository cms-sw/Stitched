# Stitched

A framework for stitching together threads.

## Build Requirements

* GNU c++ 5.3.0+ (recommend installing devtoolset-4 scl)
* Boost 1.57+ 
* TBB 4.4+
* ROOT 6.08.00+
* CASTOR headers
* CLHEP
* CppUnit
* TinyXML
* CMS-md5 
https://github.com/cms-externals/md5


## Building
```
source <path to ROOT>/bin/thisroot.sh
export CMAKE_PREFIX_PATH=<path to Stitched>/cmaketools/modules:$CMAKE_PREFIX_PATH
mkdir build
cd build
cmake <path to Stitched> -DCLHEP_ROOT_DIR=<path to clhep> -DCASTOR_INCLUDE_DIR=<path to castor>/include -DBOOST_ROOT=<path to boost> -DTBB_ROOT_DIR=<path to tbb> -DTINYXMLROOT=<path to tinyxml>  -DMD5ROOT=<path to cms md5> -DCPPUNITROOT=<path to cppunit>
```

