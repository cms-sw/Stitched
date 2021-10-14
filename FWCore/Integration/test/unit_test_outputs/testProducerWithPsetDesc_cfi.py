import FWCore.ParameterSet.Config as cms

testProducerWithPsetDesc = cms.EDProducer('ProducerWithPSetDesc',
  testingAutoGeneratedCfi = cms.untracked.bool(True),
  p_int = cms.int32(2147483647),
  p_int_untracked = cms.untracked.int32(-2147483647),
  p_int_opt = cms.int32(0),
  p_int_optuntracked = cms.untracked.int32(7),
  p_int_opt_nd = cms.optional.int32,
  p_int_optuntracked_nd = cms.optional.untracked.int32,
  vint1 = cms.vint32(),
  vint2 = cms.vint32(2147483647),
  vint3 = cms.vint32(
    2147483647,
    -2147483647
  ),
  vint4 = cms.vint32(
    2147483647,
    -2147483647,
    0
  ),
  uint1 = cms.uint32(4294967295),
  uint2 = cms.untracked.uint32(0),
  vuint1 = cms.vuint32(),
  vuint2 = cms.vuint32(4294967295),
  vuint3 = cms.vuint32(
    4294967295,
    0
  ),
  vuint4 = cms.vuint32(
    4294967295,
    0,
    11
  ),
  vuint5 = cms.vuint32(
    4294967295,
    0,
    11,
    21,
    31,
    41
  ),
  int64v1 = cms.int64(9000000000000000000),
  int64v2 = cms.int64(-9000000000000000000),
  int64v3 = cms.int64(0),
  vint64v1 = cms.vint64(),
  vint64v2 = cms.vint64(9000000000000000000),
  vint64v3 = cms.vint64(
    9000000000000000000,
    -9000000000000000000
  ),
  vint64v4 = cms.vint64(
    9000000000000000000,
    -9000000000000000000,
    0
  ),
  uint64v1 = cms.uint64(18000000000000000000),
  uint64v2 = cms.untracked.uint64(0),
  vuint64v1 = cms.vuint64(),
  vuint64v2 = cms.vuint64(18000000000000000000),
  vuint64v3 = cms.vuint64(
    18000000000000000000,
    0
  ),
  vuint64v4 = cms.vuint64(
    18000000000000000000,
    0,
    11
  ),
  doublev1 = cms.double(2.2250738585072014e-308),
  doublev2 = cms.untracked.double(0),
  doublev3 = cms.untracked.double(0.3),
  vdoublev1 = cms.vdouble(),
  vdoublev2 = cms.vdouble(1e+300),
  vdoublev3 = cms.vdouble(
    1e+300,
    0
  ),
  vdoublev4 = cms.vdouble(
    1e+300,
    0,
    11
  ),
  vdoublev5 = cms.vdouble(
    1e+300,
    0,
    11,
    0.3
  ),
  boolv1 = cms.bool(True),
  boolv2 = cms.bool(False),
  stringv1 = cms.string('Hello'),
  stringv2 = cms.string(''),
  vstringv1 = cms.vstring(),
  vstringv2 = cms.vstring('Hello'),
  vstringv3 = cms.vstring(
    'Hello',
    'World'
  ),
  vstringv4 = cms.vstring(
    'Hello',
    'World',
    ''
  ),
  eventIDv1 = cms.EventID(11, 0, 12),
  eventIDv2 = cms.EventID(101, 0, 102),
  vEventIDv1 = cms.VEventID(),
  vEventIDv2 = cms.VEventID('1000:1100'),
  vEventIDv3 = cms.VEventID(
    '1000:1100',
    '10000:11000'
  ),
  vEventIDv4 = cms.VEventID(
    '1000:1100',
    '10000:11000',
    '100000:110000'
  ),
  luminosityIDv1 = cms.LuminosityBlockID(11, 12),
  luminosityIDv2 = cms.LuminosityBlockID(101, 102),
  vLuminosityBlockIDv1 = cms.VLuminosityBlockID(),
  vLuminosityBlockIDv2 = cms.VLuminosityBlockID('1000:1100'),
  vLuminosityBlockIDv3 = cms.VLuminosityBlockID(
    '1000:1100',
    '10000:11000'
  ),
  vLuminosityBlockIDv4 = cms.VLuminosityBlockID(
    '1000:1100',
    '10000:11000',
    '100000:110000'
  ),
  lumiRangev1 = cms.LuminosityBlockRange('1:1-9:9'),
  lumiRangev2 = cms.LuminosityBlockRange('3:4-1000:1000'),
  vLumiRangev1 = cms.VLuminosityBlockRange(),
  vLumiRangev2 = cms.VLuminosityBlockRange('1:1-9:9'),
  vLumiRangev3 = cms.VLuminosityBlockRange(
    '1:1-9:9',
    '3:4-1000:1000'
  ),
  eventRangev1 = cms.EventRange('1:1-8:8'),
  eventRangev2 = cms.EventRange('3:4-1001:1002'),
  vEventRangev1 = cms.VEventRange(),
  vEventRangev2 = cms.VEventRange('1:1-8:8'),
  vEventRangev3 = cms.VEventRange(
    '1:1-8:8',
    '3:4-1001:1002'
  ),
  inputTagv1 = cms.InputTag('One', 'Two', 'Three'),
  inputTagv2 = cms.InputTag('One', 'Two'),
  inputTagv3 = cms.InputTag('One'),
  inputTagv4 = cms.InputTag('One', '', 'Three'),
  vInputTagv1 = cms.VInputTag(),
  vInputTagv2 = cms.VInputTag('One:Two:Three'),
  vInputTagv3 = cms.VInputTag(
    'One:Two:Three',
    'One:Two'
  ),
  vInputTagv4 = cms.VInputTag(
    'One:Two:Three',
    'One:Two',
    'One'
  ),
  vInputTagv5 = cms.VInputTag(
    'One:Two:Three',
    'One:Two',
    'One',
    'One::Three'
  ),
  esinputTagv1 = cms.ESInputTag('One', 'Two'),
  esinputTagv2 = cms.ESInputTag('One', ''),
  esinputTagv3 = cms.ESInputTag('', 'Two'),
  vESInputTagv1 = cms.VESInputTag(),
  vESInputTagv2 = cms.VESInputTag('One:Two'),
  vESInputTagv3 = cms.VESInputTag(
    'One:Two',
    'One:'
  ),
  vESInputTagv4 = cms.VESInputTag(
    'One:Two',
    'One:',
    ':Two'
  ),
  fileInPath = cms.FileInPath('FWCore/Integration/test/ProducerWithPSetDesc.cc'),
  bar = cms.PSet(
    Drinks = cms.uint32(5),
    uDrinks = cms.untracked.uint32(5),
    oDrinks = cms.uint32(5),
    ouDrinks = cms.untracked.uint32(5)
  ),
  test104 = cms.untracked.VPSet(
    cms.PSet()
  ),
  test105 = cms.untracked.VPSet(
  ),
  test1 = cms.double(0.1),
  test2 = cms.double(0.2),
  testA = cms.string('fooA'),
  testB = cms.int32(100),
  testC = cms.int32(101),
  oiswitch = cms.int32(1),
  oivalue1 = cms.double(101),
  oivalue2 = cms.double(101),
  testDeeplyNested2 = cms.PSet(
    bswitch = cms.bool(False),
    bvalue1 = cms.double(101),
    bvalue2 = cms.double(101),
    iswitch = cms.int32(1),
    ivalue1 = cms.double(101),
    ivalue2 = cms.untracked.double(101),
    sswitch = cms.string('1'),
    svalue1 = cms.double(101),
    svalue2 = cms.double(101),
    testint = cms.int32(1000)
  ),
  bars = cms.VPSet(
    cms.PSet(
      oDrinks = cms.uint32(11)
    ),
    cms.PSet(
      ndouDrinks = cms.untracked.uint32(11),
      oDrinks = cms.uint32(11),
      ouDrinks = cms.untracked.uint32(11),
      testDeeplyNested = cms.PSet(
        testint = cms.int32(2)
      ),
      anotherVPSet = cms.VPSet(
        cms.PSet(),
        cms.PSet(
          xvalue = cms.int32(17)
        )
      )
    )
  ),
  subpset = cms.PSet(
    xvalue = cms.int32(11),
    bar = cms.untracked.PSet(
      Drinks = cms.uint32(5),
      uDrinks = cms.untracked.uint32(5),
      oDrinks = cms.uint32(5),
      ouDrinks = cms.untracked.uint32(5)
    )
  ),
  wildcardPset = cms.PSet(
    p_uint_opt = cms.uint32(0)
  ),
  switchPset = cms.PSet(
    iswitch = cms.int32(1),
    ivalue1 = cms.double(101),
    ivalue2 = cms.double(101),
    addTeVRefits = cms.bool(True),
    pickySrc = cms.InputTag(''),
    tpfmsSrc = cms.InputTag('')
  ),
  xorPset = cms.PSet(
    name = cms.string('11'),
    name1 = cms.string('11'),
    name3 = cms.string('11')
  ),
  orPset = cms.PSet(
    x1 = cms.string('11'),
    y1 = cms.string('11')
  ),
  andPset = cms.PSet(
    x1 = cms.string('11'),
    x2 = cms.uint32(11),
    y1 = cms.string('11'),
    y2 = cms.uint32(11),
    z1 = cms.string('11'),
    z2 = cms.uint32(11),
    b1 = cms.string('11'),
    b2 = cms.uint32(11),
    b3 = cms.uint32(11),
    b4 = cms.uint32(11),
    b5 = cms.uint32(11),
    b6 = cms.uint32(11)
  ),
  ifExistsPset = cms.PSet(
    x1 = cms.uint32(11),
    x2 = cms.string('11'),
    z1 = cms.uint32(11),
    z2 = cms.string('11')
  ),
  allowedLabelsPset = cms.PSet(
    p_int_opt = cms.int32(0),
    testAllowedLabels = cms.vstring(),
    testAllowedLabelsUntracked = cms.untracked.vstring(),
    testWithSet = cms.untracked.vstring(),
    testWithVectorOfSets = cms.untracked.vstring()
  ),
  noDefaultPset3 = cms.PSet(
    noDefault1 = cms.optional.int32,
    noDefault2 = cms.optional.vint32,
    noDefault3 = cms.optional.uint32,
    noDefault4 = cms.optional.vuint32,
    noDefault5 = cms.optional.int64,
    noDefault6 = cms.optional.vint64,
    noDefault7 = cms.optional.uint64,
    noDefault8 = cms.optional.vuint64,
    noDefault9 = cms.optional.double,
    noDefault10 = cms.optional.vdouble,
    noDefault11 = cms.optional.bool,
    noDefault12 = cms.optional.string,
    noDefault13 = cms.optional.vstring,
    noDefault14 = cms.optional.EventID,
    noDefault15 = cms.optional.VEventID,
    noDefault16 = cms.optional.LuminosityBlockID,
    noDefault17 = cms.optional.VLuminosityBlockID,
    noDefault18 = cms.optional.InputTag,
    noDefault19 = cms.optional.VInputTag,
    noDefault20 = cms.optional.FileInPath,
    noDefault21 = cms.optional.LuminosityBlockRange,
    noDefault22 = cms.optional.VLuminosityBlockRange,
    noDefault23 = cms.optional.EventRange,
    noDefault24 = cms.optional.VEventRange
  ),
  noDefaultPset4 = cms.PSet(
    noDefault1 = cms.optional.untracked.int32,
    noDefault2 = cms.optional.untracked.vint32,
    noDefault3 = cms.optional.untracked.uint32,
    noDefault4 = cms.optional.untracked.vuint32,
    noDefault5 = cms.optional.untracked.int64,
    noDefault6 = cms.optional.untracked.vint64,
    noDefault7 = cms.optional.untracked.uint64,
    noDefault8 = cms.optional.untracked.vuint64,
    noDefault9 = cms.optional.untracked.double,
    noDefault10 = cms.optional.untracked.vdouble,
    noDefault11 = cms.optional.untracked.bool,
    noDefault12 = cms.optional.untracked.string,
    noDefault13 = cms.optional.untracked.vstring,
    noDefault14 = cms.optional.untracked.EventID,
    noDefault15 = cms.optional.untracked.VEventID,
    noDefault16 = cms.optional.untracked.LuminosityBlockID,
    noDefault17 = cms.optional.untracked.VLuminosityBlockID,
    noDefault18 = cms.optional.untracked.InputTag,
    noDefault19 = cms.optional.untracked.VInputTag,
    noDefault20 = cms.optional.untracked.FileInPath,
    noDefault21 = cms.optional.untracked.LuminosityBlockRange,
    noDefault22 = cms.optional.untracked.VLuminosityBlockRange,
    noDefault23 = cms.optional.untracked.EventRange,
    noDefault24 = cms.optional.untracked.VEventRange
  ),
  plugin = cms.PSet(
    value = cms.int32(5),
    type = cms.string('edmtestAnotherValueMaker')
  
  ),
  plugin1 = cms.PSet(),
  plugin2 = cms.VPSet(
  ),
  plugin3 = cms.VPSet(
    cms.PSet(
      type = cms.string('edmtestAnotherOneMaker')
    ),
    cms.PSet(
      type = cms.string('edmtestAnotherValueMaker'),
      value = cms.int32(11)
    )
  ),
  mightGet = cms.optional.untracked.vstring
)
