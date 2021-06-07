# Stitched

Stitched is an export of the CMSSW Framework packages and a minimal set of data packages needed for testing the Framework.

## Building and running with spack

- Clone spack and cmssw-spack and run build
```
git clone https://github.com/spack/spack.git
source spack/share/setup-env.sh
spack compiler add
cd spack/var/spack/repos
git clone -b stitched https://github.com/gartung/cmssw-spack.git
spack repo add $PWD/cmssw-spack
mkdir -p ~/.spack/cray
cd -
spack install stitched
spack activate py-setuptools
spack activate py-six
spack activate py-future
```

- Setup runtime environment with spack
```
source spack/share/setup-env.sh
spack load -r stitched
```
