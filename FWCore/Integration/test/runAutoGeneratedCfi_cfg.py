# Runs using configuration cfi file that was autogenerated
# The purpose is to test the generation of cfi files

import FWCore.ParameterSet.Config as cms

process = cms.Process("TEST")

process.load("FWCore.Framework.test.cmsExceptionsFatal_cff")

process.maxEvents = cms.untracked.PSet(
    input = cms.untracked.int32(1)
)

process.source = cms.Source("EmptySource")

# test the autogenerated cfi
from FWCore.Integration.testProducerWithPsetDesc_cfi import *

process.testProducerWithPsetDesc = testProducerWithPsetDesc
process.testProducerWithPsetDesc.plugin1.type = cms.string("edmtestAnotherOneMaker")

process.p1 = cms.Path(process.testProducerWithPsetDesc)

# also run a test module using a helper plugin
process.load("FWCore.Integration.pluginUsingProducer_cfi")
process.p2 = cms.Path(process.pluginUsingProducer)
