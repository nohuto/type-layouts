struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=359)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

enum _NDIS_GFT_FLOW_ENTRY_TYPE
{
    NdisGftFlowEntryTypeUndefined=0,
    NdisGftFlowEntryTypeExactMatch=1,
    NdisGftFlowEntryTypeWildcard=2,
    NdisGftFlowEntryTypeMax=3
};

struct _NDIS_GFT_FLOW_ENTRY_ARRAY// Size=0x18 (Id=818)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    unsigned long Flags;// Offset=0x4 Size=0x4
    enum _NDIS_GFT_FLOW_ENTRY_TYPE EntryType;// Offset=0x8 Size=0x4
    unsigned long FlowEntryArrayOffset;// Offset=0xc Size=0x4
    unsigned long FlowEntryArrayNumElements;// Offset=0x10 Size=0x4
    unsigned long FlowEntryArrayElementSize;// Offset=0x14 Size=0x4
};
