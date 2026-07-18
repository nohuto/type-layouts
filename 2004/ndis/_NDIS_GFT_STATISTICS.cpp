struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=212)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

struct _NDIS_GFT_STATISTICS// Size=0x58 (Id=907)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    unsigned long Flags;// Offset=0x4 Size=0x4
    unsigned long TableId;// Offset=0x8 Size=0x4
    unsigned long VPortId;// Offset=0xc Size=0x4
    unsigned long long ProviderFlowEntryId;// Offset=0x10 Size=0x8
    unsigned long long Packets;// Offset=0x18 Size=0x8
    unsigned long long Bytes;// Offset=0x20 Size=0x8
    unsigned long long L1CacheHits;// Offset=0x28 Size=0x8
    unsigned long long L2CacheHits;// Offset=0x30 Size=0x8
    unsigned long long L3CacheHits;// Offset=0x38 Size=0x8
    unsigned long long L1CacheMisses;// Offset=0x40 Size=0x8
    unsigned long long L2CacheMisses;// Offset=0x48 Size=0x8
    unsigned long long L3CacheMisses;// Offset=0x50 Size=0x8
};
