# Stitched

A framework for stitching together threads.

## Build Requirements

* GNU c++ 7.3.0+ (recommend installing devtoolset-7 scl)
* Boost 1.59 
* TBB 2019.1+
* ROOT 6.12.00+
* CLHEP 2.4.0.X
* CppUnit
* TinyXML2
* CMS-md5 
https://github.com/cms-externals/md5
* HSF Cmaketools
https://github.com/HSF/cmaketools
* Buildfile2cmake
https://github.com/gartung/buildfile2cmake

## Building
```
git checkout https://github.com/cms-sw/Stitched.git
git checkout https://github.com/gartung/buildfile2cmake.git
cd Stitched
../buildfile2cmake/buildfile2cmake
git checkout https://github.com/HSF/cmaketools.git
source <path to ROOT>/bin/thisroot.sh
export CMAKE_PREFIX_PATH=<path to Stitched>/cmaketools/modules:$CMAKE_PREFIX_PATH
mkdir ../build
cd build
cmake <path to Stitched> -DCLHEP_ROOT_DIR=<path to clhep> -DBOOST_ROOT=<path to boost> -DTBB_ROOT_DIR=<path to tbb> -DTINYXMLROOT=<path to tinyxml>  -DMD5ROOT=<path to cms md5> -DCPPUNITROOT=<path to cppunit>
```

