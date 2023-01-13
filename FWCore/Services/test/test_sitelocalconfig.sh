#!/bin/bash

# Pass in name and status
function die { echo $1: status $2 ;  exit $2; }

mkdir -p ${CMSSW_BASE}/test/SITECONF
mkdir -p ${CMSSW_BASE}/test/SITECONF/local
mkdir -p ${CMSSW_BASE}/test/SITECONF/local/JobConfig
mkdir -p ${CMSSW_BASE}/test/SITECONF/DUMMY_CROSS_SITE

export SITECONFIG_PATH=${CMSSW_BASE}/test/SITECONF/local

cp ${LOCAL_TEST_DIR}/no-source-site-local-config.testfile ${CMSSW_BASE}/test/SITECONF/local/JobConfig/site-local-config.xml
F1=${LOCAL_TEST_DIR}/test_sitelocalconfig_no_source_cfg.py
(cmsRun $F1 ) || die "Failure using $F1" $?

cp ${LOCAL_TEST_DIR}/source-site-local-config.testfile ${CMSSW_BASE}/test/SITECONF/local/JobConfig/site-local-config.xml
F2=${LOCAL_TEST_DIR}/test_sitelocalconfig_source_cfg.py
(cmsRun $F2 ) || die "Failure using $F2" $?

F3=${LOCAL_TEST_DIR}/test_sitelocalconfig_override_cfg.py
(cmsRun $F3 ) || die "Failure using $F3" $?

cp ${LOCAL_TEST_DIR}/no-source-site-local-config.testfile ${CMSSW_BASE}/test/SITECONF/local/JobConfig/site-local-config.xml
F3=${LOCAL_TEST_DIR}/test_sitelocalconfig_override_cfg.py
(cmsRun $F3 ) || die "Failure using $F3 with no-source site-local-config" $?

cp ${LOCAL_TEST_DIR}/cross-site-local-config.testfile  ${CMSSW_BASE}/test/SITECONF/local/JobConfig/site-local-config.xml
cp ${LOCAL_TEST_DIR}/dummy_storage.json ${CMSSW_BASE}/test/SITECONF/local/storage.json
cp ${LOCAL_TEST_DIR}/dummycross_storage.json ${CMSSW_BASE}/test/SITECONF/DUMMY_CROSS_SITE/storage.json
F4=${LOCAL_TEST_DIR}/test_sitelocalconfig_catalog_cfg.py
(cmsRun $F4 ) || die "Failure using $F4" $?

