#!/bin/sh

function die { echo $1: status $2 ;  exit $2; }

cmsRun --parameter-set ${LOCAL_TEST_DIR}/detsetvector_t.cfg || die 'Failed in detsetvector_t.cfg' $?

