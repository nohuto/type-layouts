struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=211)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

struct _NDIS_GFT_FLOW_ENTRY_INFO_ARRAY// Size=0x28 (Id=1142)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    unsigned long Flags;// Offset=0x4 Size=0x4
    unsigned long TableId;// Offset=0x8 Size=0x4
    unsigned long VPortId;// Offset=0xc Size=0x4
    unsigned long long ProviderFlowEntryIdStart;// Offset=0x10 Size=0x8
    unsigned long FlowEntryIdCount;// Offset=0x18 Size=0x4
    unsigned long FlowEntryInfoArrayOffset;// Offset=0x1c Size=0x4
    unsigned long FlowEntryInfoArrayNumElements;// Offset=0x20 Size=0x4
    unsigned long FlowEntryInfoArrayElementSize;// Offset=0x24 Size=0x4
};
