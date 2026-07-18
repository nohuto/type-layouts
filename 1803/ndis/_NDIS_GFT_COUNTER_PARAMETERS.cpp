struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=334)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

enum _NDIS_GFT_COUNTER_UPDATE_FREQUENCY
{
    NdisGftCounterUpdateFrequencyUndefined=0,
    NdisGftCounterUpdateFrequencyOnQuery=1,
    NdisGftCounterUpdateFrequencyPerUpdatePeriod=2,
    NdisGftCounterUpdateFrequencyPerPacket=3,
    NdisGftCounterUpdateFrequencyMax=4
};

enum _NDIS_GFT_COUNTER_TYPE
{
    NdisGftCounterTypeUndefined=0,
    NdisGftCounterTypePacketCounter=1,
    NdisGftCounterTypeByteCounter=2,
    NdisGftCounterTypePacketAndByteCounter=3,
    NdisGftCounterTypeMax=4
};

struct _NDIS_GFT_COUNTER_PARAMETERS// Size=0x28 (Id=1377)
{
    union // Size=0x20 (Id=0)
    {
        struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
        unsigned long Flags;// Offset=0x4 Size=0x4
        unsigned long TableId;// Offset=0x8 Size=0x4
        enum _NDIS_GFT_COUNTER_UPDATE_FREQUENCY CounterUpdateFrequency;// Offset=0xc Size=0x4
        enum _NDIS_GFT_COUNTER_TYPE CounterType;// Offset=0x10 Size=0x4
        unsigned long CounterIdStart;// Offset=0x14 Size=0x4
        unsigned long NumCounters;// Offset=0x18 Size=0x4
        unsigned long UpdatePeriod;// Offset=0x1c Size=0x4
        union <unnamed-type-CounterValuesBufferStart>// Size=0x8 (Id=6715)
        {
            struct _NDIS_GFT_PACKET_COUNTER_VALUE * PacketCounters;// Offset=0x0 Size=0x8
            struct _NDIS_GFT_BYTE_COUNTER_VALUE * ByteCounters;// Offset=0x0 Size=0x8
            struct _NDIS_GFT_PACKET_AND_BYTE_COUNTER_VALUE * PacketAndByteCounters;// Offset=0x0 Size=0x8
        };
        union _NDIS_GFT_COUNTER_PARAMETERS::<unnamed-type-CounterValuesBufferStart> CounterValuesBufferStart;// Offset=0x20 Size=0x8
    };
};
