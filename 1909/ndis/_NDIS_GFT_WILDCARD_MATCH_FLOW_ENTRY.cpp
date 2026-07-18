struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=359)
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

enum _NDIS_GFT_WILDCARD_ACTION
{
    NdisGftWildcardActionUndefined=0,
    NdisGftWildcardActionAllow=1,
    NdisGftWildcardActionDrop=2,
    NdisGftWildcardActionMax=3
};

enum _NDIS_GFT_FLOW_ENTRY_CACHE_HINT
{
    NdisGftFlowEntryCacheHintUndefined=0,
    NdisGftFlowEntryCacheHintLowFrequency=100,
    NdisGftFlowEntryCacheHintMediumFrequency=200,
    NdisGftFlowEntryCacheHintHighFrequency=300,
    NdisGftFlowEntryCacheHintMax=1000
};

enum _NDIS_GFT_FLOW_ENTRY_STATE
{
    NdisGftFlowEntryStateUndefined=0,
    NdisGftFlowEntryStateDeactivated=1,
    NdisGftFlowEntryStateActivated=2,
    NdisGftFlowEntryStateMax=3
};

struct _NDIS_GFT_WILDCARD_MATCH_FLOW_ENTRY// Size=0x98 (Id=961)
{
    union // Size=0x2c (Id=0)
    {
        struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
        unsigned long Flags;// Offset=0x4 Size=0x4
        unsigned long TableId;// Offset=0x8 Size=0x4
        unsigned long VPortId;// Offset=0xc Size=0x4
        unsigned long MatchProfileId;// Offset=0x10 Size=0x4
        int MatchRequestStatus;// Offset=0x14 Size=0x4
        int ActionRequestStatus;// Offset=0x18 Size=0x4
        unsigned long CounterFlags;// Offset=0x1c Size=0x4
        enum _NDIS_GFT_COUNTER_UPDATE_FREQUENCY CounterUpdateFrequency;// Offset=0x20 Size=0x4
        enum _NDIS_GFT_COUNTER_TYPE CounterType;// Offset=0x24 Size=0x4
        unsigned long UpdatePeriod;// Offset=0x28 Size=0x4
        union <unnamed-type-CounterValueBuffer>// Size=0x8 (Id=7211)
        {
            struct _NDIS_GFT_PACKET_COUNTER_VALUE * PacketCounterAddress;// Offset=0x0 Size=0x8
            struct _NDIS_GFT_BYTE_COUNTER_VALUE * ByteCounterAddress;// Offset=0x0 Size=0x8
            struct _NDIS_GFT_PACKET_AND_BYTE_COUNTER_VALUE * PacketAndByteCounterAddress;// Offset=0x0 Size=0x8
        };
        union _NDIS_GFT_WILDCARD_MATCH_FLOW_ENTRY::<unnamed-type-CounterValueBuffer> CounterValueBuffer;// Offset=0x30 Size=0x8
    };
    unsigned long Priority;// Offset=0x38 Size=0x4
    enum _NDIS_GFT_WILDCARD_ACTION Action;// Offset=0x3c Size=0x4
    unsigned long RedirectionVPortId;// Offset=0x40 Size=0x4
    unsigned long TtlIsOneRedirectionVPortId;// Offset=0x44 Size=0x4
    unsigned long NumCounterObjects;// Offset=0x48 Size=0x4
    unsigned long CounterIdArray[8];// Offset=0x4c Size=0x20
    enum _NDIS_GFT_FLOW_ENTRY_CACHE_HINT CacheHint;// Offset=0x6c Size=0x4
    unsigned long long ClientFlowEntryId;// Offset=0x70 Size=0x8
    unsigned long long ProviderFlowEntryId;// Offset=0x78 Size=0x8
    enum _NDIS_GFT_FLOW_ENTRY_STATE FlowState;// Offset=0x80 Size=0x4
    unsigned long HeaderGroupWildcardMatchArrayOffset;// Offset=0x84 Size=0x4
    unsigned long HeaderGroupWildcardMatchArrayNumElements;// Offset=0x88 Size=0x4
    unsigned long HeaderGroupWildcardMatchArrayElementSize;// Offset=0x8c Size=0x4
    unsigned long CustomActionOffset;// Offset=0x90 Size=0x4
};
