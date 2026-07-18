struct _unnamed_28// Size=0x8 (Id=28)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=29)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_28 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _LIST_ENTRY// Size=0x10 (Id=20)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _WORK_QUEUE_ITEM// Size=0x20 (Id=79)
{
    struct _LIST_ENTRY List;// Offset=0x0 Size=0x10
    void  ( * WorkerRoutine)(void * );// Offset=0x10 Size=0x8
    void * Parameter;// Offset=0x18 Size=0x8
};

struct _MI_BAD_MEMORY_EVENT_ENTRY// Size=0x38 (Id=966)
{
    unsigned long BugCheckCode;// Offset=0x0 Size=0x4
    long Active;// Offset=0x4 Size=0x4
    unsigned long Data;// Offset=0x8 Size=0x4
    union _LARGE_INTEGER PhysicalAddress;// Offset=0x10 Size=0x8
    struct _WORK_QUEUE_ITEM WorkItem;// Offset=0x18 Size=0x20
};

struct _MI_PROBE_RAISE_TRACKER// Size=0x40 (Id=1200)
{
    unsigned long UserRangeInKernel;// Offset=0x0 Size=0x4
    unsigned long FaultFailed;// Offset=0x4 Size=0x4
    unsigned long WriteFaultFailed;// Offset=0x8 Size=0x4
    unsigned long LargePageFailed;// Offset=0xc Size=0x4
    unsigned long UserAccessToKernelPte;// Offset=0x10 Size=0x4
    unsigned long BadPageLocation;// Offset=0x14 Size=0x4
    unsigned long InsufficientCharge;// Offset=0x18 Size=0x4
    unsigned long PageTableCharge;// Offset=0x1c Size=0x4
    unsigned long NoPhysicalMapping;// Offset=0x20 Size=0x4
    unsigned long NoIoReference;// Offset=0x24 Size=0x4
    unsigned long ProbeFailed;// Offset=0x28 Size=0x4
    unsigned long PteIsZero;// Offset=0x2c Size=0x4
    unsigned long StrongCodeWrite;// Offset=0x30 Size=0x4
    unsigned long ReducedCloneCommitChargeFailed;// Offset=0x34 Size=0x4
    unsigned long CopyOnWriteAtDispatchNoPages;// Offset=0x38 Size=0x4
    unsigned long EnclavePageFailed;// Offset=0x3c Size=0x4
};

struct _MI_FORCED_COMMITS// Size=0x8 (Id=1173)
{
    unsigned long Regular;// Offset=0x0 Size=0x4
    unsigned long Wrap;// Offset=0x4 Size=0x4
};

struct _MI_RESAVAIL_FAILURES// Size=0x8 (Id=1338)
{
    unsigned long Wrap;// Offset=0x0 Size=0x4
    unsigned long NoCharge;// Offset=0x4 Size=0x4
};

struct _MI_ERROR_STATE// Size=0xb8 (Id=755)
{
    struct _MI_BAD_MEMORY_EVENT_ENTRY BadMemoryEventEntry;// Offset=0x0 Size=0x38
    struct _MI_PROBE_RAISE_TRACKER ProbeRaises;// Offset=0x38 Size=0x40
    struct _MI_FORCED_COMMITS ForcedCommits;// Offset=0x78 Size=0x8
    unsigned long WsleFailures[2];// Offset=0x80 Size=0x8
    unsigned long WsLinear;// Offset=0x88 Size=0x4
    unsigned long PageHashErrors;// Offset=0x8c Size=0x4
    unsigned long CheckZeroCount;// Offset=0x90 Size=0x4
    long ZeroedPageSingleBitErrorsDetected;// Offset=0x94 Size=0x4
    long BadPagesDetected;// Offset=0x98 Size=0x4
    long ScrubPasses;// Offset=0x9c Size=0x4
    long ScrubBadPagesFound;// Offset=0xa0 Size=0x4
    unsigned long UserViewFailures;// Offset=0xa4 Size=0x4
    unsigned long UserViewCollisionFailures;// Offset=0xa8 Size=0x4
    struct _MI_RESAVAIL_FAILURES ResavailFailures;// Offset=0xac Size=0x8
    unsigned char PendingBadPages;// Offset=0xb4 Size=0x1
    unsigned char InitFailure;// Offset=0xb5 Size=0x1
    unsigned char StopBadMaps;// Offset=0xb6 Size=0x1
};
