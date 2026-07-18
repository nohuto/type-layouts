struct _unnamed_1360// Size=0x4 (Id=1360)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long EnablePollingHints:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long ConsistentPolling:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long HighPriority:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long RedirectDPC:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long TargetNearbyProc:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long DisableLockDPC:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long HybridPolling:1;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1
        unsigned long PollingOnlyMode:1;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x1
        unsigned long DisableIdlePM:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
        unsigned long Reserved0:23;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x17
    };
};

union _NVME_POLLING_HINTS// Size=0x4 (Id=1361)
{
    struct _unnamed_1360 NDH;// Offset=0x0 Size=0x4
    unsigned long AsUlong;// Offset=0x0 Size=0x4
};
