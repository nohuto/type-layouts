struct _unnamed_9// Size=0x8 (Id=9)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=253)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_9 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _LIST_ENTRY// Size=0x10 (Id=3)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _WORK_QUEUE_ITEM// Size=0x20 (Id=21)
{
    struct _LIST_ENTRY List;// Offset=0x0 Size=0x10
    void  ( * WorkerRoutine)(void * );// Offset=0x10 Size=0x8
    void * Parameter;// Offset=0x18 Size=0x8
};

struct _MI_BAD_MEMORY_EVENT_ENTRY// Size=0x38 (Id=2353)
{
    unsigned long BugCheckCode;// Offset=0x0 Size=0x4
    long Active;// Offset=0x4 Size=0x4
    unsigned long Data;// Offset=0x8 Size=0x4
    union _LARGE_INTEGER PhysicalAddress;// Offset=0x10 Size=0x8
    struct _WORK_QUEUE_ITEM WorkItem;// Offset=0x18 Size=0x20
};

struct _MI_PROBE_RAISE_TRACKER// Size=0x40 (Id=2427)
{
    unsigned long UserRangeInKernel;// Offset=0x0 Size=0x4
    unsigned long FaultFailed;// Offset=0x4 Size=0x4
    unsigned long WriteFaultFailed;// Offset=0x8 Size=0x4
    unsigned long LargePageFailed;// Offset=0xc Size=0x4
    unsigned long UserAccessToKernelPte;// Offset=0x10 Size=0x4
    unsigned long BadPageLocation;// Offset=0x14 Size=0x4
    unsigned long InsufficientCharge;// Offset=0x18 Size=0x4
    unsigned long PageTableCharge;// Offset=0x1c Size=0x4
    unsigned long NoIoReference;// Offset=0x20 Size=0x4
    unsigned long ProbeFailed;// Offset=0x24 Size=0x4
    unsigned long PteIsZero;// Offset=0x28 Size=0x4
    unsigned long StrongCodeWrite;// Offset=0x2c Size=0x4
    unsigned long ReducedCloneCommitChargeFailed;// Offset=0x30 Size=0x4
    unsigned long CopyOnWriteAtDispatchNoPages;// Offset=0x34 Size=0x4
    unsigned long NoPageTablesAllowed;// Offset=0x38 Size=0x4
    unsigned long EnclavePageFailed;// Offset=0x3c Size=0x4
};

struct _MI_FORCED_COMMITS// Size=0x8 (Id=2384)
{
    long Regular;// Offset=0x0 Size=0x4
    long Wrap;// Offset=0x4 Size=0x4
};

enum _MI_PRE_PHASE0_BUGCHECK_PARAMETER
{
    LoaderPfnDatabaseAllGood=0,
    LoaderPfnDatabaseNoRegionSpace=1
};

enum _MI_PAGE_HASH_ERROR_BEHAVIOR
{
    MiPageHashErrorBugcheck=0,
    MiPageHashErrorReturnError=1,
    MiPageHashErrorIgnore=2
};

struct _MI_RESAVAIL_FAILURES// Size=0x8 (Id=2411)
{
    unsigned long Wrap;// Offset=0x0 Size=0x4
    unsigned long NoCharge;// Offset=0x4 Size=0x4
};

struct _MI_ERROR_STATE// Size=0x120 (Id=2255)
{
    struct _MI_BAD_MEMORY_EVENT_ENTRY BadMemoryEventEntry;// Offset=0x0 Size=0x38
    struct _MI_PROBE_RAISE_TRACKER ProbeRaises;// Offset=0x38 Size=0x40
    struct _MI_FORCED_COMMITS ForcedCommits;// Offset=0x78 Size=0x8
    enum _MI_PRE_PHASE0_BUGCHECK_PARAMETER PrePhase0BugCheckParameter;// Offset=0x80 Size=0x4
    unsigned long WsleFailures;// Offset=0x84 Size=0x4
    unsigned char PendingBadPages;// Offset=0x88 Size=0x1
    unsigned char BadPagesInsertSignalState;// Offset=0x89 Size=0x1
    unsigned char BootConditions;// Offset=0x8a Size=0x1
    long BadModeCopies[3];// Offset=0x8c Size=0xc
    long BadModeCopyReadWriteVm;// Offset=0x98 Size=0x4
    long TaggedPointerViolation;// Offset=0x9c Size=0x4
    enum _MI_PAGE_HASH_ERROR_BEHAVIOR PageHashErrorBehavior;// Offset=0xa0 Size=0x4
    unsigned long PageHashReadErrors;// Offset=0xa4 Size=0x4
    unsigned long PageHashStandbyErrors;// Offset=0xa8 Size=0x4
    unsigned long PageHashTransferErrors;// Offset=0xac Size=0x4
    unsigned long PageHashAllocationErrors;// Offset=0xb0 Size=0x4
    unsigned long long FailedHashPageFrameIndex;// Offset=0xb8 Size=0x8
    unsigned long CheckZeroCount;// Offset=0xc0 Size=0x4
    unsigned long ZeroedPageSingleBitErrorsDetected;// Offset=0xc4 Size=0x4
    unsigned long BadPagesDetected;// Offset=0xc8 Size=0x4
    unsigned long BadPagesInserted;// Offset=0xcc Size=0x4
    struct _WORK_QUEUE_ITEM BadPageInsertWorkItem;// Offset=0xd0 Size=0x20
    unsigned long ScrubPasses;// Offset=0xf0 Size=0x4
    unsigned long ScrubBadPagesFound;// Offset=0xf4 Size=0x4
    unsigned long UserViewFailures;// Offset=0xf8 Size=0x4
    unsigned long UserViewCollisionFailures;// Offset=0xfc Size=0x4
    unsigned long UserAllocateFailures;// Offset=0x100 Size=0x4
    unsigned long UserAllocateCollisionFailures;// Offset=0x104 Size=0x4
    unsigned long FlushFailuresDuringImageCreate;// Offset=0x108 Size=0x4
    struct _MI_RESAVAIL_FAILURES ResavailFailures;// Offset=0x10c Size=0x8
    unsigned long BadPhysicalMapsEarly;// Offset=0x114 Size=0x4
    unsigned long BadPhysicalMaps;// Offset=0x118 Size=0x4
};
