struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=212)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

struct _NDIS_TIMESTAMP_CAPABILITY_FLAGS// Size=0xe (Id=930)
{
    unsigned char PtpV2OverUdpIPv4EventMsgReceiveHw;// Offset=0x0 Size=0x1
    unsigned char PtpV2OverUdpIPv4AllMsgReceiveHw;// Offset=0x1 Size=0x1
    unsigned char PtpV2OverUdpIPv4EventMsgTransmitHw;// Offset=0x2 Size=0x1
    unsigned char PtpV2OverUdpIPv4AllMsgTransmitHw;// Offset=0x3 Size=0x1
    unsigned char PtpV2OverUdpIPv6EventMsgReceiveHw;// Offset=0x4 Size=0x1
    unsigned char PtpV2OverUdpIPv6AllMsgReceiveHw;// Offset=0x5 Size=0x1
    unsigned char PtpV2OverUdpIPv6EventMsgTransmitHw;// Offset=0x6 Size=0x1
    unsigned char PtpV2OverUdpIPv6AllMsgTransmitHw;// Offset=0x7 Size=0x1
    unsigned char AllReceiveHw;// Offset=0x8 Size=0x1
    unsigned char AllTransmitHw;// Offset=0x9 Size=0x1
    unsigned char TaggedTransmitHw;// Offset=0xa Size=0x1
    unsigned char AllReceiveSw;// Offset=0xb Size=0x1
    unsigned char AllTransmitSw;// Offset=0xc Size=0x1
    unsigned char TaggedTransmitSw;// Offset=0xd Size=0x1
};

struct _NDIS_TIMESTAMP_CAPABILITIES// Size=0x38 (Id=595)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    unsigned long long HardwareClockFrequencyHz;// Offset=0x8 Size=0x8
    unsigned char CrossTimestamp;// Offset=0x10 Size=0x1
    unsigned long long Reserved1;// Offset=0x18 Size=0x8
    unsigned long long Reserved2;// Offset=0x20 Size=0x8
    struct _NDIS_TIMESTAMP_CAPABILITY_FLAGS TimestampFlags;// Offset=0x28 Size=0xe
};
