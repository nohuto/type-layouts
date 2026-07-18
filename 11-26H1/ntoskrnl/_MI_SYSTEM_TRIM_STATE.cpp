struct _MI_VERIFIER_TRIM_STATE// Size=0x20 (Id=1889)
{
    unsigned long long StartTime;// Offset=0x0 Size=0x8
    unsigned long long ActualTrimTime;// Offset=0x8 Size=0x8
    unsigned long long MaximumSingleTrimTimeReached;// Offset=0x10 Size=0x8
    unsigned long Instances;// Offset=0x18 Size=0x4
    long TrimInProgress;// Offset=0x1c Size=0x4
};

struct _MI_SYSTEM_TRIM_STATE// Size=0x80 (Id=1727)
{
    long ExpansionLock;// Offset=0x0 Size=0x4
    long TrimInProgressCount;// Offset=0x4 Size=0x4
    struct _MI_VERIFIER_TRIM_STATE Verifier;// Offset=0x8 Size=0x20
    unsigned long TrimAllPageFaultCount[4];// Offset=0x28 Size=0x10
    struct _ETHREAD * EmptyAllThread;// Offset=0x38 Size=0x8
    unsigned long FaultedInSystemPage;// Offset=0x40 Size=0x4
};
