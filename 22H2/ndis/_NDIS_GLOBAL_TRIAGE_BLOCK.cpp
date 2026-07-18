struct _NDIS_GLOBAL_TRIAGE_BLOCK// Size=0x1f0 (Id=1392)
{
    union // Size=0x1e0 (Id=0)
    {
        unsigned long Signature;// Offset=0x0 Size=0x4
        unsigned short Revision;// Offset=0x4 Size=0x2
        unsigned short Size;// Offset=0x6 Size=0x2
        unsigned short MiniportBlockSize;// Offset=0x8 Size=0x2
        unsigned short MiniportAdapterContextOffset;// Offset=0xa Size=0x2
        unsigned short AdapterInstanceNameOffset;// Offset=0xc Size=0x2
        unsigned short MiniportLowestFilterOffset;// Offset=0xe Size=0x2
        unsigned short MiniportOpenQueueOffset;// Offset=0x10 Size=0x2
        unsigned short MiniportDriverHandleOffset;// Offset=0x12 Size=0x2
        unsigned short MiniportPendingOidOffset;// Offset=0x14 Size=0x2
        unsigned short MiniportSymbolicLinkOffset;// Offset=0x16 Size=0x2
        unsigned short MDriverBlockSize;// Offset=0x18 Size=0x2
        unsigned short MiniportServiceNameOffset;// Offset=0x1a Size=0x2
        unsigned short MiniportImageNameOffset;// Offset=0x1c Size=0x2
        unsigned short FilterBlockSize;// Offset=0x1e Size=0x2
        unsigned short FilterDriverOffset;// Offset=0x20 Size=0x2
        unsigned short FilterModuleContextOffset;// Offset=0x22 Size=0x2
        unsigned short FilterHigherFilterOffset;// Offset=0x24 Size=0x2
        unsigned short FilterFriendlyNameOffset;// Offset=0x26 Size=0x2
        unsigned short FilterPendingOidOffset;// Offset=0x28 Size=0x2
        unsigned short FilterMiniportOffset;// Offset=0x2a Size=0x2
        unsigned short FilterDriverBlockSize;// Offset=0x2c Size=0x2
        unsigned short FilterDriverFriendlyNameOffset;// Offset=0x2e Size=0x2
        unsigned short FilterServiceNameOffset;// Offset=0x30 Size=0x2
        unsigned short FilterImageNameOffset;// Offset=0x32 Size=0x2
        unsigned short OpenBlockSize;// Offset=0x34 Size=0x2
        unsigned short ProtocolHandleOffset;// Offset=0x36 Size=0x2
        unsigned short ProtocolBindingContextOffset;// Offset=0x38 Size=0x2
        unsigned short MiniportNextOpenOffset;// Offset=0x3a Size=0x2
        unsigned short OpenMiniportOffset;// Offset=0x3c Size=0x2
        unsigned short ProtocolBlockSize;// Offset=0x3e Size=0x2
        unsigned short ProtocolNameOffset;// Offset=0x40 Size=0x2
        unsigned short ProtocolImageNameOffset;// Offset=0x42 Size=0x2
        unsigned short NBLPoolListOffset;// Offset=0x44 Size=0x2
        unsigned short AllocatedListOffset;// Offset=0x46 Size=0x2
        unsigned short OwnerHandleOffset;// Offset=0x48 Size=0x2
        unsigned short LookasideListOffset;// Offset=0x4a Size=0x2
        unsigned short EntryLinkageOffset;// Offset=0x4c Size=0x2
        unsigned short EntryHeaderSize;// Offset=0x4e Size=0x2
        unsigned short LookasideListSize;// Offset=0x50 Size=0x2
        unsigned short SListHeadOffset;// Offset=0x52 Size=0x2
        unsigned short BackupSListHeadOffset;// Offset=0x54 Size=0x2
        unsigned short NblSize;// Offset=0x56 Size=0x2
        unsigned short NblCurrentOwnerOffset;// Offset=0x58 Size=0x2
        unsigned short SourceHandleOffset;// Offset=0x5a Size=0x2
        unsigned short NdisOidRequestSize;// Offset=0x5c Size=0x2
        unsigned short NdisTrackNblOwner;// Offset=0x5e Size=0x2
        unsigned short MaxNumberOfProcessors;// Offset=0x60 Size=0x2
        unsigned long long GlobalNetBufferListPoolList;// Offset=0x68 Size=0x8
        unsigned long long BugcheckMiniport;// Offset=0x70 Size=0x8
        unsigned long long PendingNBL[32];// Offset=0x78 Size=0x100
        unsigned short PendingNBLCount[32];// Offset=0x178 Size=0x40
        unsigned short NblTrackerContextOffset;// Offset=0x1b8 Size=0x2
        unsigned short MiniportPnPEventLogOffset;// Offset=0x1ba Size=0x2
        unsigned short MiniportSelectiveSuspendOffset;// Offset=0x1bc Size=0x2
        unsigned short MiniportSelectiveSuspendSize;// Offset=0x1be Size=0x2
        unsigned short MiniportAoAcOffset;// Offset=0x1c0 Size=0x2
        unsigned short MiniportAoAcSize;// Offset=0x1c2 Size=0x2
        struct <unnamed-type-MiniportBlockBindings>// Size=0x8 (Id=6931)
        {
            unsigned short NumProtocolsOffset;// Offset=0x0 Size=0x2
            unsigned short ProtocolListOffset;// Offset=0x2 Size=0x2
            unsigned short NumFiltersOffset;// Offset=0x4 Size=0x2
            unsigned short FilterListOffset;// Offset=0x6 Size=0x2
        };
        struct _NDIS_GLOBAL_TRIAGE_BLOCK::<unnamed-type-MiniportBlockBindings> MiniportBlockBindings;// Offset=0x1c4 Size=0x8
        struct <unnamed-type-BindProtocolLink>// Size=0x8 (Id=6937)
        {
            unsigned short Size;// Offset=0x0 Size=0x2
            unsigned short BindStateOffset;// Offset=0x2 Size=0x2
            unsigned short BindDriverOffset;// Offset=0x4 Size=0x2
            unsigned short BindDriverSize;// Offset=0x6 Size=0x2
        };
        struct _NDIS_GLOBAL_TRIAGE_BLOCK::<unnamed-type-BindProtocolLink> BindProtocolLink;// Offset=0x1cc Size=0x8
        struct <unnamed-type-BindFilterLink>// Size=0x8 (Id=6943)
        {
            unsigned short Size;// Offset=0x0 Size=0x2
            unsigned short BindStateOffset;// Offset=0x2 Size=0x2
            unsigned short BindDriverOffset;// Offset=0x4 Size=0x2
            unsigned short BindDriverSize;// Offset=0x6 Size=0x2
        };
        struct _NDIS_GLOBAL_TRIAGE_BLOCK::<unnamed-type-BindFilterLink> BindFilterLink;// Offset=0x1d4 Size=0x8
        struct <unnamed-type-BindState>// Size=0x4 (Id=6949)
        {
            unsigned short NumContextsOffset;// Offset=0x0 Size=0x2
            unsigned short ContextListOffset;// Offset=0x2 Size=0x2
        };
        struct _NDIS_GLOBAL_TRIAGE_BLOCK::<unnamed-type-BindState> BindState;// Offset=0x1dc Size=0x4
        struct <unnamed-type-NdisEventLog>// Size=0x6 (Id=6953)
        {
            unsigned short Size;// Offset=0x0 Size=0x2
            unsigned short NumEntriesOffset;// Offset=0x2 Size=0x2
            unsigned short EntrySizeOffset;// Offset=0x4 Size=0x2
        };
        struct _NDIS_GLOBAL_TRIAGE_BLOCK::<unnamed-type-NdisEventLog> NdisEventLog;// Offset=0x1e0 Size=0x6
    };
    unsigned short MiniportHookAdapterHandleOffset;// Offset=0x1e6 Size=0x2
    unsigned short MDriverHookDriverHandleOffset;// Offset=0x1e8 Size=0x2
    unsigned short MDriverHookDriverTypeOffset;// Offset=0x1ea Size=0x2
    unsigned short MDriverHookRegisteredOffset;// Offset=0x1ec Size=0x2
    unsigned short NblTrackerSize;// Offset=0x1ee Size=0x2
};
