struct _NDIS_OID_REQUEST_FLAGS// Size=0x4 (Id=1071)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long Completed:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long FreeRequest:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long OidInTable:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long SignalEvent:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long CoNdis:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long FromProtocol:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long FromFilter:1;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1
        unsigned long Passthrough:1;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x1
        unsigned long LastRestoreFilter:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
        unsigned long OnlyDerefOpen:1;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x1
        unsigned long SignalAndExit:1;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x1
        unsigned long MpSaveBuf:1;// Offset=0x0 Size=0x4 BitOffset=0xb BitSize=0x1
        unsigned long Reserved2:1;// Offset=0x0 Size=0x4 BitOffset=0xc BitSize=0x1
        unsigned long DownLevel:1;// Offset=0x0 Size=0x4 BitOffset=0xd BitSize=0x1
        unsigned long Cloned:1;// Offset=0x0 Size=0x4 BitOffset=0xe BitSize=0x1
        unsigned long Mandatory:1;// Offset=0x0 Size=0x4 BitOffset=0xf BitSize=0x1
        unsigned long SentToMiniport:1;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x1
        unsigned long SentToFilter:1;// Offset=0x0 Size=0x4 BitOffset=0x11 BitSize=0x1
        unsigned long ForReset:1;// Offset=0x0 Size=0x4 BitOffset=0x12 BitSize=0x1
        unsigned long ForRestore:1;// Offset=0x0 Size=0x4 BitOffset=0x13 BitSize=0x1
        unsigned long ForMpDirect:1;// Offset=0x0 Size=0x4 BitOffset=0x14 BitSize=0x1
        unsigned long DirectRequest:1;// Offset=0x0 Size=0x4 BitOffset=0x15 BitSize=0x1
        unsigned long RevisionChanged:1;// Offset=0x0 Size=0x4 BitOffset=0x16 BitSize=0x1
        unsigned long SkipPreProc:1;// Offset=0x0 Size=0x4 BitOffset=0x17 BitSize=0x1
        unsigned long SkipPostProc:1;// Offset=0x0 Size=0x4 BitOffset=0x18 BitSize=0x1
        unsigned long SkipSourceCompletion:1;// Offset=0x0 Size=0x4 BitOffset=0x19 BitSize=0x1
        unsigned long SourceCompletionOnly:1;// Offset=0x0 Size=0x4 BitOffset=0x1a BitSize=0x1
        unsigned long InternalClone:1;// Offset=0x0 Size=0x4 BitOffset=0x1b BitSize=0x1
        unsigned long TelemetryFilter:2;// Offset=0x0 Size=0x4 BitOffset=0x1c BitSize=0x2
        unsigned long Remainder:2;// Offset=0x0 Size=0x4 BitOffset=0x1e BitSize=0x2
    };
};
