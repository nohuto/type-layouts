struct _MMINPAGE_FLAGS// Size=0x4 (Id=1818)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long GetExtents:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long VmType:4;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x4
        unsigned long VaPrefetchReadBlock:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long CollidedFlowThrough:1;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1
        unsigned long ForceCollisions:1;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x1
        unsigned long InPageExpanded:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
        unsigned long IssuedAtLowPriority:1;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x1
        unsigned long FaultFromStore:1;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x1
        unsigned long PagePriority:3;// Offset=0x0 Size=0x4 BitOffset=0xb BitSize=0x3
        unsigned long ClusteredPagePriority:3;// Offset=0x0 Size=0x4 BitOffset=0xe BitSize=0x3
        unsigned long MakeClusterValid:1;// Offset=0x0 Size=0x4 BitOffset=0x11 BitSize=0x1
        unsigned long ZeroLastPage:1;// Offset=0x0 Size=0x4 BitOffset=0x12 BitSize=0x1
        unsigned long UserFault:1;// Offset=0x0 Size=0x4 BitOffset=0x13 BitSize=0x1
        unsigned long StandbyProtectionNeeded:1;// Offset=0x0 Size=0x4 BitOffset=0x14 BitSize=0x1
        unsigned long PteChanged:1;// Offset=0x0 Size=0x4 BitOffset=0x15 BitSize=0x1
        unsigned long PageFileFault:1;// Offset=0x0 Size=0x4 BitOffset=0x16 BitSize=0x1
        unsigned long PageFilePageHashActive:1;// Offset=0x0 Size=0x4 BitOffset=0x17 BitSize=0x1
        unsigned long CoalescedIo:1;// Offset=0x0 Size=0x4 BitOffset=0x18 BitSize=0x1
        unsigned long VmLockNotNeeded:1;// Offset=0x0 Size=0x4 BitOffset=0x19 BitSize=0x1
        unsigned long PartitionReferenced:1;// Offset=0x0 Size=0x4 BitOffset=0x1a BitSize=0x1
        unsigned long Spare0:1;// Offset=0x0 Size=0x4 BitOffset=0x1b BitSize=0x1
        unsigned long Spare1:4;// Offset=0x0 Size=0x4 BitOffset=0x1c BitSize=0x4
    };
};

union _unnamed_1537// Size=0x4 (Id=1537)
{
    struct _MMINPAGE_FLAGS e1;// Offset=0x0 Size=0x4
    unsigned long LongFlags;// Offset=0x0 Size=0x4
};
