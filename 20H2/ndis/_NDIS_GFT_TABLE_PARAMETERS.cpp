struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=212)
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

struct _NDIS_GFT_TABLE_PARAMETERS// Size=0x14 (Id=921)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    unsigned long Flags;// Offset=0x4 Size=0x4
    unsigned long TableId;// Offset=0x8 Size=0x4
    enum _NDIS_GFP_TABLE_TYPE TableType;// Offset=0xc Size=0x4
    unsigned long NextTableId;// Offset=0x10 Size=0x4
};
