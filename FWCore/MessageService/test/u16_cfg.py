# Unit test configuration file for MessageLogger service:
# Explicit extensions and filenames, in normal distinations,
# statistics, and job reports.

import FWCore.ParameterSet.Config as cms

process = cms.Process("TEST")

import FWCore.Framework.test.cmsExceptionsFatal_cff
process.options = FWCore.Framework.test.cmsExceptionsFatal_cff.options

process.load("FWCore.MessageService.test.Services_cff")

process.MessageLogger = cms.Service("MessageLogger",
    # produce file u16_statistics.mslog
    u16_statistics = cms.untracked.PSet(
        threshold = cms.untracked.string('WARNING'),
        extension = cms.untracked.string('mslog'),
        enableStatistics = cms.untracked.bool(True),
        default = cms.untracked.PSet(
          limit = cms.untracked.int32(0)
        )
    ),
    default = cms.untracked.PSet(
        FwkTest = cms.untracked.PSet(
            limit = cms.untracked.int32(0)
        )
    ),
    # produce file u16_errors.mmlog
    u16_errors = cms.untracked.PSet(
        threshold = cms.untracked.string('ERROR'),
        noTimeStamps = cms.untracked.bool(True),
        extension = cms.untracked.string('mmlog'),
        enableStatistics = cms.untracked.bool(True)
    ),
    # produce file u16_altWarnings.log
    u16_warnings = cms.untracked.PSet(
        threshold = cms.untracked.string('WARNING'),
        noTimeStamps = cms.untracked.bool(True),
        filename = cms.untracked.string('u16_altWarnings')
    ),
    # produce file u16_default.log
    u16_default = cms.untracked.PSet(
        noTimeStamps = cms.untracked.bool(True),
        preEventProcessing = cms.untracked.PSet(
            limit = cms.untracked.int32(0)
        )
    ),
    # produce file u16_infos.mmlog
    u16_infos = cms.untracked.PSet(
        threshold = cms.untracked.string('INFO'),
        noTimeStamps = cms.untracked.bool(True),
        preEventProcessing = cms.untracked.PSet(
            limit = cms.untracked.int32(0)
        ),
        extension = cms.untracked.string('.mmlog')
    ),
    # produce file u16_altDebugs.mmlog
    u16_debugs = cms.untracked.PSet(
        threshold = cms.untracked.string('DEBUG'),
        noTimeStamps = cms.untracked.bool(True),
        preEventProcessing = cms.untracked.PSet(
            limit = cms.untracked.int32(0)
        ),
        extension = cms.untracked.string('mmlog'),
        filename = cms.untracked.string('u16_altDebugs')
    ),
    debugModules = cms.untracked.vstring('*'),
    categories = cms.untracked.vstring('preEventProcessing', 
        'FwkTest'),
    destinations = cms.untracked.vstring('u16_warnings', 
        'u16_errors', 
        'u16_infos', 
        'u16_debugs', 
        'u16_default',
        'u16_statistics')
)

process.maxEvents = cms.untracked.PSet(
    input = cms.untracked.int32(2)
)

process.source = cms.Source("EmptySource")

process.sendSomeMessages = cms.EDAnalyzer("UnitTestClient_Ad")

process.p = cms.Path(process.sendSomeMessages)
