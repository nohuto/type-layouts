struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=359)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

struct _NDIS_RECEIVE_FILTER_CAPABILITIES// Size=0x54 (Id=710)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    unsigned long Flags;// Offset=0x4 Size=0x4
    unsigned long EnabledFilterTypes;// Offset=0x8 Size=0x4
    unsigned long EnabledQueueTypes;// Offset=0xc Size=0x4
    unsigned long NumQueues;// Offset=0x10 Size=0x4
    unsigned long SupportedQueueProperties;// Offset=0x14 Size=0x4
    unsigned long SupportedFilterTests;// Offset=0x18 Size=0x4
    unsigned long SupportedHeaders;// Offset=0x1c Size=0x4
    unsigned long SupportedMacHeaderFields;// Offset=0x20 Size=0x4
    unsigned long MaxMacHeaderFilters;// Offset=0x24 Size=0x4
    unsigned long MaxQueueGroups;// Offset=0x28 Size=0x4
    unsigned long MaxQueuesPerQueueGroup;// Offset=0x2c Size=0x4
    unsigned long MinLookaheadSplitSize;// Offset=0x30 Size=0x4
    unsigned long MaxLookaheadSplitSize;// Offset=0x34 Size=0x4
    unsigned long SupportedARPHeaderFields;// Offset=0x38 Size=0x4
    unsigned long SupportedIPv4HeaderFields;// Offset=0x3c Size=0x4
    unsigned long SupportedIPv6HeaderFields;// Offset=0x40 Size=0x4
    unsigned long SupportedUdpHeaderFields;// Offset=0x44 Size=0x4
    unsigned long MaxFieldTestsPerPacketCoalescingFilter;// Offset=0x48 Size=0x4
    unsigned long MaxPacketCoalescingFilters;// Offset=0x4c Size=0x4
    unsigned long NdisReserved;// Offset=0x50 Size=0x4
};
