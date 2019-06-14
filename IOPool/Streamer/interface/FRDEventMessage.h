#ifndef IOPool_Streamer_FRDEventMessage_h
#define IOPool_Streamer_FRDEventMessage_h

/**
 * This class is used to view the contents of "FED Raw Data" (FRD) events.
 * Initially, the only time that such events are created is
 * when an error occurs in the HLT.
 * So, in the beginning, "error event" == "FRD event".
 * However, if new ways of creating events of this type are added
 * to the HLT, hopefully this class can be used or upgraded to handle those
 * events as well.
 *
 * 08-Aug-2008 - KAB  - Initial Implementation
 * 06-Oct-2008 - KAB  - Added version number and lumi block number (version #2)
 * 14-Nov-2013 - RKM  - Added event size, adler32 and padding size (version #3)
 * 15-Oct-2014 - WDD  - Event number from 32 bits to 64 bits (version #4)
 * 01-Apr-2015 - SM   - replaced adler32 with crc32c which is accelerated in SSE 4.2 (version #5)
 *
 * Version 5 Format:
 *   uint32 - format version number
 *   uint32 - run number
 *   uint32 - lumi number
 *   uint32 - event number
 *   uint32 - event size
 *   uint32 - crc32c checksum of FED data (excluding event header)
 *   variable size - FED data
 *
 * Version 4 Format:
 *   uint32 - format version number
 *   uint32 - run number
 *   uint32 - lumi number
 *   uint32 - event number low 32 bits
 *   uint32 - event number high 32 bits
 *   uint32 - event size
 *   uint32 - padding size needed to fill memory page size (_SC_PAGE_SIZE)
 *   uint32 - adler32 checksum of FED data (excluding event header)
 *   variable size - FED data
 *
 * Version 3 Format:
 *   uint32 - format version number
 *   uint32 - run number
 *   uint32 - lumi number
 *   uint32 - event number
 *   uint32 - event size
 *   uint32 - padding size needed to fill memory page size (_SC_PAGE_SIZE)
 *   uint32 - adler32 checksum of FED data (excluding event header)
 *   variable size - FED data
 *
 * Version 2 Format:
 *   uint32 - format version number
 *   uint32 - run number
 *   uint32 - lumi number
 *   uint32 - event number
 *   1024 * uint32 - size values for all 1024 FED buffers
 *   variable size - FED data
 */

#include "IOPool/Streamer/interface/MsgTools.h"

struct FRDEventHeader_V5 {
  uint32 version_;
  uint32 run_;
  uint32 lumi_;
  uint32 eventLow_;
  uint32 eventHigh_;
  uint32 eventSize_;
  uint32 paddingSize_;
  uint32 crc32c_;
};

struct FRDEventHeader_V4 {
  uint32 version_;
  uint32 run_;
  uint32 lumi_;
  uint32 eventLow_;
  uint32 eventHigh_;
  uint32 eventSize_;
  uint32 paddingSize_;
  uint32 adler32_;
};

struct FRDEventHeader_V3 {
  uint32 version_;
  uint32 run_;
  uint32 lumi_;
  uint32 event_;
  uint32 eventSize_;
  uint32 paddingSize_;
  uint32 adler32_;
};

struct FRDEventHeader_V2 {
  uint32 version_;
  uint32 run_;
  uint32 lumi_;
  uint32 event_;
};

struct FRDEventHeader_V1 {
  uint32 run_;
  uint32 event_;
};

const uint32 FRDHeaderVersionSize[6] = {
    0, 2 * sizeof(uint32), (4 + 1024) * sizeof(uint32), 7 * sizeof(uint32), 8 * sizeof(uint32), 6 * sizeof(uint32)};

class FRDEventMsgView {
public:
  FRDEventMsgView(void* buf);

  uint8* startAddress() const { return buf_; }
  void* payload() const { return payload_; }
  uint32 size() const { return size_; }

  uint32 version() const { return version_; }
  uint32 run() const { return run_; }
  uint32 lumi() const { return lumi_; }
  uint64 event() const { return event_; }
  uint32 eventSize() const { return eventSize_; }
  uint32 paddingSize() const { return paddingSize_; }
  uint32 adler32() const { return adler32_; }
  uint32 crc32c() const { return crc32c_; }

private:
  uint8* buf_;
  void* payload_;
  uint32 size_;
  uint32 version_;
  uint32 run_;
  uint32 lumi_;
  uint64 event_;
  uint32 eventSize_;
  uint32 paddingSize_;
  uint32 adler32_;
  uint32 crc32c_;
};

/*
 * FRD File Header optionally found at the beginning of the FRD RAW file
 *
 * Version 1 Format:
 *   uint8_t [4] - id contanining 4 characters: 0x52, 0x41, 0x57, 0x5f  "RAW_"
 *   uint8_t [4] - version string 4 characters: 0x30, 0x30, 0x30, 0x31  "0001"
 *   uint16_t - header size: 24
 *   uint16_t - reserved (padding)
 *   uint32_t - number of events in the RAW file
 *   uint64_t - total size of the raw file (including header)
 *
 * */
#define FRDHEADERID  {0x52, 0x41, 0x57, 0x5f}
#define FRDVERSION_1 {0x30, 0x30, 0x30, 0x31}
constexpr unsigned char FRDFileHeader_id[4] = FRDHEADERID;
constexpr unsigned char FRDFileVersion_1[4] = FRDVERSION_1;

struct FRDFileHeader_v1 {

  FRDFileHeader_v1() = default;

  FRDFileHeader_v1(uint16_t eventCount, uint32_t lumiSection, uint64_t fileSize):
    id_ FRDHEADERID,
    version_ FRDVERSION_1,
    headerSize_(sizeof(FRDFileHeader_v1)),
    eventCount_(eventCount),
    lumiSection_(lumiSection),
    fileSize_(fileSize) {}

  uint8_t id_[4];
  uint8_t version_[4];
  uint16_t headerSize_;
  uint16_t eventCount_;
  uint32_t lumiSection_;
  uint64_t fileSize_;
};


inline uint16_t getFRDFileHeaderVersion(const uint8_t* id, const uint8_t* version) {
  size_t i;
  for (i = 0; i < 4; i++)
    if (id[i] != FRDFileHeader_id[i])
      return 0;  //not FRD file header
  uint16_t ret = 0;
  for (i = 0; i<4; i++) {
    if (version[i] > '9' || version[i] < '0')
      return 0;  //NaN sequence
    ret = ret*10 + (uint16_t)(version[i]-'0');
  }
  return ret;
}

#endif
