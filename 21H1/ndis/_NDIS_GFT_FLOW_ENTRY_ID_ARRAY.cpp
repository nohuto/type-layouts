struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=211)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

struct _NDIS_GFT_FLOW_ENTRY_ID_ARRAY// Size=0x1c (Id=1678)
{
    union // Size=0x10 (Id=0)
    {
        struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
        unsigned long Flags;// Offset=0x4 Size=0x4
        unsigned long TableId;// Offset=0x8 Size=0x4
        unsigned long VPortId;// Offset=0xc Size=0x4
        union <unnamed-type-IdArray>// Size=0xc (Id=6743)
        {
            struct <unnamed-type-FlowEntryIdArray>// Size=0xc (Id=6744)
            {
                unsigned long ProviderFlowEntryIdArrayOffset;// Offset=0x0 Size=0x4
                unsigned long ProviderFlowEntryIdArrayNumElements;// Offset=0x4 Size=0x4
                unsigned long ProviderFlowEntryIdArrayElementSize;// Offset=0x8 Size=0x4
            };
            struct _NDIS_GFT_FLOW_ENTRY_ID_ARRAY::<unnamed-type-IdArray>::<unnamed-type-FlowEntryIdArray> FlowEntryIdArray;// Offset=0x0 Size=0xc
            struct <unnamed-type-FlowEntryIdAndCounterArray>// Size=0xc (Id=6749)
            {
                unsigned long ProviderFlowEntryIdAndCounterArrayOffset;// Offset=0x0 Size=0x4
                unsigned long ProviderFlowEntryIdAndCounterArrayNumElements;// Offset=0x4 Size=0x4
                unsigned long ProviderFlowEntryIdAndCounterArrayElementSize;// Offset=0x8 Size=0x4
            };
            struct _NDIS_GFT_FLOW_ENTRY_ID_ARRAY::<unnamed-type-IdArray>::<unnamed-type-FlowEntryIdAndCounterArray> FlowEntryIdAndCounterArray;// Offset=0x0 Size=0xc
        };
        union _NDIS_GFT_FLOW_ENTRY_ID_ARRAY::<unnamed-type-IdArray> IdArray;// Offset=0x10 Size=0xc
    };
};
