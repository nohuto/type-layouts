struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=320)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
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

struct _NDIS_GFP_WILDCARD_MATCH_PROFILE// Size=0x20 (Id=583)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    unsigned long Flags;// Offset=0x4 Size=0x4
    enum _NDIS_GFP_TABLE_TYPE TableType;// Offset=0x8 Size=0x4
    unsigned long ProfileId;// Offset=0xc Size=0x4
    unsigned long NumSupportedEntries;// Offset=0x10 Size=0x4
    unsigned long HeaderGroupWildcardMatchProfileArrayOffset;// Offset=0x14 Size=0x4
    unsigned long HeaderGroupWildcardMatchProfileArrayNumElements;// Offset=0x18 Size=0x4
    unsigned long HeaderGroupWildcardMatchProfileArrayElementSize;// Offset=0x1c Size=0x4
};
