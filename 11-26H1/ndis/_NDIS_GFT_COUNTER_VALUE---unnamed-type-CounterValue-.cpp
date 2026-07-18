union _LARGE_INTEGER// Size=0x8 (Id=2201)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct <unnamed-type-u>// Size=0x8 (Id=5940)
    {
        unsigned long LowPart;// Offset=0x0 Size=0x4
        long HighPart;// Offset=0x4 Size=0x4
    };
    struct _LARGE_INTEGER::<unnamed-type-u> u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _NDIS_GFT_PACKET_COUNTER_VALUE// Size=0x10 (Id=1202)
{
    unsigned long long Packets;// Offset=0x0 Size=0x8
    union _LARGE_INTEGER LastUpdate;// Offset=0x8 Size=0x8
};

struct _NDIS_GFT_BYTE_COUNTER_VALUE// Size=0x10 (Id=933)
{
    unsigned long long Bytes;// Offset=0x0 Size=0x8
    union _LARGE_INTEGER LastUpdate;// Offset=0x8 Size=0x8
};

struct _NDIS_GFT_PACKET_BYTE_COUNTER_VALUE// Size=0x18 (Id=1437)
{
    unsigned long long Packets;// Offset=0x0 Size=0x8
    unsigned long long Bytes;// Offset=0x8 Size=0x8
    union _LARGE_INTEGER LastUpdate;// Offset=0x10 Size=0x8
};

struct _NDIS_GFT_FLOW_STATE// Size=0x8 (Id=2233)
{
    unsigned long TcpSeqNum;// Offset=0x0 Size=0x4
    unsigned long TcpAckNum;// Offset=0x4 Size=0x4
};

struct _NDIS_GFT_PACKET_BYTE_COUNTER_VALUE_AND_STATE// Size=0x20 (Id=1830)
{
    struct _NDIS_GFT_PACKET_BYTE_COUNTER_VALUE PacketByteCounterValue;// Offset=0x0 Size=0x18
    struct _NDIS_GFT_FLOW_STATE FlowState;// Offset=0x18 Size=0x8
};

union _NDIS_GFT_COUNTER_VALUE::<unnamed-type-CounterValue>// Size=0x20 (Id=2147)
{
    struct _NDIS_GFT_PACKET_COUNTER_VALUE Packets;// Offset=0x0 Size=0x10
    struct _NDIS_GFT_BYTE_COUNTER_VALUE Bytes;// Offset=0x0 Size=0x10
    struct _NDIS_GFT_PACKET_BYTE_COUNTER_VALUE PacketsBytes;// Offset=0x0 Size=0x18
    struct _NDIS_GFT_PACKET_BYTE_COUNTER_VALUE_AND_STATE PacketsBytesAndState;// Offset=0x0 Size=0x20
};
