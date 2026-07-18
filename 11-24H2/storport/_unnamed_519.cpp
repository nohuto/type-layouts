union _NVME_POLLING_VERSION// Size=0x2 (Id=1188)
{
    struct // Size=0x2 (Id=0)
    {
        unsigned short MNR:8;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x8
        unsigned short MJR:8;// Offset=0x0 Size=0x2 BitOffset=0x8 BitSize=0x8
    };
    unsigned short AsUshort;// Offset=0x0 Size=0x2
};

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

struct _NVME_POLLING_CONFIGURATION// Size=0x10 (Id=994)
{
    unsigned char PercentagePollingCount;// Offset=0x0 Size=0x1
    unsigned char Reserved[3];// Offset=0x1 Size=0x3
    unsigned long MaxIOPollingSize;// Offset=0x4 Size=0x4
    union _NVME_POLLING_HINTS Hints;// Offset=0x8 Size=0x4
    unsigned short IoCmdTimeout;// Offset=0xc Size=0x2
    unsigned short AdminCmdTimeout;// Offset=0xe Size=0x2
};

struct _unnamed_519// Size=0x14 (Id=519)
{
    union _NVME_POLLING_VERSION Version;// Offset=0x0 Size=0x2
    struct _NVME_POLLING_CONFIGURATION Config;// Offset=0x4 Size=0x10
};
