struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=242)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

enum _NDIS_GFT_PROFILE_TYPE
{
    NdisGftProfileTypeUndefined=0,
    NdisGftProfileTypeExactMatch=1,
    NdisGftProfileTypeHeaderTransposition=2,
    NdisGftProfileTypeWildcardMatch=3,
    NdisGftProfileTypeMax=4
};

enum _NDIS_GFP_TABLE_TYPE
{
    NdisGfpTableTypeUndefined=0,
    NdisGfpTableTypeWildcardIngress=1,
    NdisGfpTableTypeWildcardEgress=2,
    NdisGfpTableTypeExactMatchIngress=3,
    NdisGfpTableTypeExactMatchEgress=4,
    NdisGfpTableTypePacketDirect=5,
    NdisGfpTableTypeMax=6
};

struct _NDIS_GFT_PROFILE_INFO// Size=0x28 (Id=1756)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    unsigned long Flags;// Offset=0x4 Size=0x4
    enum _NDIS_GFT_PROFILE_TYPE ProfileType;// Offset=0x8 Size=0x4
    enum _NDIS_GFP_TABLE_TYPE TableType;// Offset=0xc Size=0x4
    unsigned long ProfileId;// Offset=0x10 Size=0x4
    unsigned long NumSupportedFlowEntries;// Offset=0x14 Size=0x4
    unsigned long NumCurrentFlowEntries;// Offset=0x18 Size=0x4
    unsigned long HeaderGroupArrayOffset;// Offset=0x1c Size=0x4
    unsigned long HeaderGroupArrayNumElements;// Offset=0x20 Size=0x4
    unsigned long HeaderGroupArrayElementSize;// Offset=0x24 Size=0x4
};
