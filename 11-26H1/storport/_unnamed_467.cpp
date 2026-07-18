struct _unnamed_466// Size=0x4 (Id=466)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long UseGlobalIndex:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long UsePreciseTimestamp:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long Reserved:30;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1e
    };
};

struct _unnamed_1296// Size=0x8 (Id=1296)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long SubmitRequest:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long CompleteRequest:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
        unsigned long long SubmitControllerRequest:1;// Offset=0x0 Size=0x8 BitOffset=0x2 BitSize=0x1
        unsigned long long CompleteSyncRequest:1;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x1
        unsigned long long ResetAfterTimeout:1;// Offset=0x0 Size=0x8 BitOffset=0x4 BitSize=0x1
        unsigned long long CriticalEvent:1;// Offset=0x0 Size=0x8 BitOffset=0x5 BitSize=0x1
        unsigned long long Reserved:58;// Offset=0x0 Size=0x8 BitOffset=0x6 BitSize=0x3a
    };
};

union _unnamed_1297// Size=0x8 (Id=1297)
{
    struct _unnamed_1296 u;// Offset=0x0 Size=0x8
    unsigned long long AsUlong64;// Offset=0x0 Size=0x8
};

struct _NVME_DBG_LOG_CONTROL// Size=0x10 (Id=1298)
{
    unsigned long Revision;// Offset=0x0 Size=0x4
    union _unnamed_1297 Enable;// Offset=0x8 Size=0x8
};

struct _unnamed_467// Size=0x18 (Id=467)
{
    struct _unnamed_466 Config;// Offset=0x0 Size=0x4
    unsigned long ListEntryCount;// Offset=0x4 Size=0x4
    struct _NVME_DBG_LOG_CONTROL Control;// Offset=0x8 Size=0x10
};
