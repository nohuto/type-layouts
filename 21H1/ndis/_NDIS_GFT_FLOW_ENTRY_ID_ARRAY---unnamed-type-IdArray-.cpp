union _NDIS_GFT_FLOW_ENTRY_ID_ARRAY::<unnamed-type-IdArray>// Size=0xc (Id=1885)
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
