struct _MI_PARTITION_FLAGS// Size=0x4 (Id=1482)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long BeingDeleted:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long PageListsInitialized:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long StoreReservedPagesCharged:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long PureHoldingPartition:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
    };
};

union _unnamed_1053// Size=0x4 (Id=1053)
{
    unsigned long LongFlags;// Offset=0x0 Size=0x4
    struct _MI_PARTITION_FLAGS Flags;// Offset=0x0 Size=0x4
};
