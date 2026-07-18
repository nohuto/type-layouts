struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=232)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

enum _NDIS_GFT_HEADER_GROUP_TRANSPOSITION_ACTION
{
    NdisGftHeaderGroupTranspositionActionUndefined=0,
    NdisGftHeaderGroupTranspositionActionModify=1,
    NdisGftHeaderGroupTranspositionActionIgnore=2,
    NdisGftHeaderGroupTranspositionActionPush=3,
    NdisGftHeaderGroupTranspositionActionPop=4,
    NdisGftHeaderGroupTranspositionActionMax=5
};

struct _NDIS_GFT_HEADER_GROUP_TRANSPOSITION_PROFILE// Size=0x14 (Id=976)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    unsigned long Flags;// Offset=0x4 Size=0x4
    enum _NDIS_GFT_HEADER_GROUP_TRANSPOSITION_ACTION Action;// Offset=0x8 Size=0x4
    unsigned long HeadersPresent;// Offset=0xc Size=0x4
    unsigned long HeaderFields;// Offset=0x10 Size=0x4
};
