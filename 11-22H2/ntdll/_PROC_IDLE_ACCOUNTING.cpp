struct _PPM_SELECTION_STATISTICS// Size=0x88 (Id=780)
{
    unsigned long long SelectedCount;// Offset=0x0 Size=0x8
    unsigned long long VetoCount;// Offset=0x8 Size=0x8
    unsigned long long PreVetoCount;// Offset=0x10 Size=0x8
    unsigned long long WrongProcessorCount;// Offset=0x18 Size=0x8
    unsigned long long LatencyCount;// Offset=0x20 Size=0x8
    unsigned long long IdleDurationCount;// Offset=0x28 Size=0x8
    unsigned long long DeviceDependencyCount;// Offset=0x30 Size=0x8
    unsigned long long ProcessorDependencyCount;// Offset=0x38 Size=0x8
    unsigned long long PlatformOnlyCount;// Offset=0x40 Size=0x8
    unsigned long long InterruptibleCount;// Offset=0x48 Size=0x8
    unsigned long long LegacyOverrideCount;// Offset=0x50 Size=0x8
    unsigned long long CstateCheckCount;// Offset=0x58 Size=0x8
    unsigned long long NoCStateCount;// Offset=0x60 Size=0x8
    unsigned long long CoordinatedDependencyCount;// Offset=0x68 Size=0x8
    unsigned long long NotClockOwnerCount;// Offset=0x70 Size=0x8
    unsigned long long DependencyIdleDurationCount;// Offset=0x78 Size=0x8
    struct _PPM_VETO_ACCOUNTING * PreVetoAccounting;// Offset=0x80 Size=0x8
};

struct _PROC_IDLE_STATE_BUCKET// Size=0x20 (Id=767)
{
    unsigned long long TotalTime;// Offset=0x0 Size=0x8
    unsigned long long MinTime;// Offset=0x8 Size=0x8
    unsigned long long MaxTime;// Offset=0x10 Size=0x8
    unsigned long Count;// Offset=0x18 Size=0x4
};

struct _PROC_IDLE_STATE_ACCOUNTING// Size=0x3f0 (Id=753)
{
    unsigned long long TotalTime;// Offset=0x0 Size=0x8
    unsigned long CancelCount;// Offset=0x8 Size=0x4
    unsigned long FailureCount;// Offset=0xc Size=0x4
    unsigned long SuccessCount;// Offset=0x10 Size=0x4
    unsigned long InvalidBucketIndex;// Offset=0x14 Size=0x4
    unsigned long long MinTime;// Offset=0x18 Size=0x8
    unsigned long long MaxTime;// Offset=0x20 Size=0x8
    struct _PPM_SELECTION_STATISTICS SelectionStatistics;// Offset=0x28 Size=0x88
    struct _PROC_IDLE_STATE_BUCKET IdleTimeBuckets[26];// Offset=0xb0 Size=0x340
};

struct _PROC_IDLE_ACCOUNTING// Size=0x418 (Id=647)
{
    unsigned long StateCount;// Offset=0x0 Size=0x4
    unsigned long TotalTransitions;// Offset=0x4 Size=0x4
    unsigned long ResetCount;// Offset=0x8 Size=0x4
    unsigned long AbortCount;// Offset=0xc Size=0x4
    unsigned long long StartTime;// Offset=0x10 Size=0x8
    unsigned long long PriorIdleTime;// Offset=0x18 Size=0x8
    enum PPM_IDLE_BUCKET_TIME_TYPE TimeUnit;// Offset=0x20 Size=0x4
    struct _PROC_IDLE_STATE_ACCOUNTING State[1];// Offset=0x28 Size=0x3f0
};
