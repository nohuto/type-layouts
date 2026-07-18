enum _NDIS_GFT_COUNTER_TYPE
{
    NdisGftCounterTypeUndefined=0,
    NdisGftCounterTypePacketCounter=1,
    NdisGftCounterTypeByteCounter=2,
    NdisGftCounterTypePacketAndByteCounter=3,
    NdisGftCounterTypeMax=4
};

union _LARGE_INTEGER// Size=0x8 (Id=72)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct <unnamed-type-u>// Size=0x8 (Id=5263)
    {
        unsigned long LowPart;// Offset=0x0 Size=0x4
        long HighPart;// Offset=0x4 Size=0x4
    };
    struct _LARGE_INTEGER::<unnamed-type-u> u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _NDIS_GFT_PACKET_COUNTER_VALUE// Size=0x10 (Id=934)
{
    unsigned long long Packets;// Offset=0x0 Size=0x8
    union _LARGE_INTEGER LastUpdate;// Offset=0x8 Size=0x8
};

struct _NDIS_GFT_BYTE_COUNTER_VALUE// Size=0x10 (Id=679)
{
    unsigned long long Bytes;// Offset=0x0 Size=0x8
    union _LARGE_INTEGER LastUpdate;// Offset=0x8 Size=0x8
};

struct _NDIS_GFT_PACKET_AND_BYTE_COUNTER_VALUE// Size=0x18 (Id=635)
{
    unsigned long long Packets;// Offset=0x0 Size=0x8
    unsigned long long Bytes;// Offset=0x8 Size=0x8
    union _LARGE_INTEGER LastUpdate;// Offset=0x10 Size=0x8
};

struct _NDIS_GFT_COUNTER_VALUE// Size=0x20 (Id=975)
{
    union // Size=0x4 (Id=0)
    {
        enum _NDIS_GFT_COUNTER_TYPE CounterType;// Offset=0x0 Size=0x4
        union <unnamed-type-CounterValue>// Size=0x18 (Id=6734)
        {
            struct _NDIS_GFT_PACKET_COUNTER_VALUE Packets;// Offset=0x0 Size=0x10
            struct _NDIS_GFT_BYTE_COUNTER_VALUE Bytes;// Offset=0x0 Size=0x10
            struct _NDIS_GFT_PACKET_AND_BYTE_COUNTER_VALUE PacketsAndBytes;// Offset=0x0 Size=0x18
        };
    };
    union _NDIS_GFT_COUNTER_VALUE::<unnamed-type-CounterValue> CounterValue;// Offset=0x8 Size=0x18
};

struct _NDIS_GFT_FLOW_ENTRY_ID_AND_COUNTER// Size=0x28 (Id=809)
{
    unsigned long long FlowEntryId;// Offset=0x0 Size=0x8
    struct _NDIS_GFT_COUNTER_VALUE CounterValue;// Offset=0x8 Size=0x20
};
