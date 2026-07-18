union _LARGE_INTEGER// Size=0x8 (Id=78)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct <unnamed-type-u>// Size=0x8 (Id=5241)
    {
        unsigned long LowPart;// Offset=0x0 Size=0x4
        long HighPart;// Offset=0x4 Size=0x4
    };
    struct _LARGE_INTEGER::<unnamed-type-u> u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _NDIS_GFT_PACKET_BYTE_COUNTER_VALUE// Size=0x18 (Id=1026)
{
    unsigned long long Packets;// Offset=0x0 Size=0x8
    unsigned long long Bytes;// Offset=0x8 Size=0x8
    union _LARGE_INTEGER LastUpdate;// Offset=0x10 Size=0x8
};

struct _NDIS_GFT_FLOW_STATE// Size=0x8 (Id=1997)
{
    unsigned long TcpSeqNum;// Offset=0x0 Size=0x4
    unsigned long TcpAckNum;// Offset=0x4 Size=0x4
};

struct _NDIS_GFT_PACKET_BYTE_COUNTER_VALUE_AND_STATE// Size=0x20 (Id=1998)
{
    struct _NDIS_GFT_PACKET_BYTE_COUNTER_VALUE PacketByteCounterValue;// Offset=0x0 Size=0x18
    struct _NDIS_GFT_FLOW_STATE FlowState;// Offset=0x18 Size=0x8
};
