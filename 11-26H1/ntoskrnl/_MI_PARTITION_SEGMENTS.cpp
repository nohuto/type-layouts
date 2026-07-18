struct _LIST_ENTRY// Size=0x10 (Id=3)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _DISPATCHER_HEADER// Size=0x18 (Id=174)
{
    union // Size=0x4 (Id=0)
    {
        long Lock;// Offset=0x0 Size=0x4
        long LockNV;// Offset=0x0 Size=0x4
        unsigned char Type;// Offset=0x0 Size=0x1
        unsigned char Signalling;// Offset=0x1 Size=0x1
        unsigned char Size;// Offset=0x2 Size=0x1
        unsigned char Reserved1;// Offset=0x3 Size=0x1
        unsigned char TimerType;// Offset=0x0 Size=0x1
        union // Size=0x1 (Id=0)
        {
            unsigned char TimerControlFlags;// Offset=0x1 Size=0x1
            struct // Size=0x1 (Id=0)
            {
                unsigned char Absolute:1;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x1
                unsigned char Wake:1;// Offset=0x1 Size=0x1 BitOffset=0x1 BitSize=0x1
                unsigned char EncodedTolerableDelay:6;// Offset=0x1 Size=0x1 BitOffset=0x2 BitSize=0x6
            };
        };
        unsigned char Hand;// Offset=0x2 Size=0x1
        unsigned char TimerMiscFlags;// Offset=0x3 Size=0x1
        struct // Size=0x1 (Id=0)
        {
            unsigned char Index:6;// Offset=0x3 Size=0x1 BitOffset=0x0 BitSize=0x6
            unsigned char Inserted:1;// Offset=0x3 Size=0x1 BitOffset=0x6 BitSize=0x1
            unsigned char Expired:1;// Offset=0x3 Size=0x1 BitOffset=0x7 BitSize=0x1
        };
        unsigned char Timer2Type;// Offset=0x0 Size=0x1
        union // Size=0x1 (Id=0)
        {
            unsigned char Timer2Flags;// Offset=0x1 Size=0x1
            struct // Size=0x1 (Id=0)
            {
                unsigned char Timer2Inserted:1;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x1
                unsigned char Timer2Expiring:1;// Offset=0x1 Size=0x1 BitOffset=0x1 BitSize=0x1
                unsigned char Timer2CancelPending:1;// Offset=0x1 Size=0x1 BitOffset=0x2 BitSize=0x1
                unsigned char Timer2SetPending:1;// Offset=0x1 Size=0x1 BitOffset=0x3 BitSize=0x1
                unsigned char Timer2Running:1;// Offset=0x1 Size=0x1 BitOffset=0x4 BitSize=0x1
                unsigned char Timer2Disabled:1;// Offset=0x1 Size=0x1 BitOffset=0x5 BitSize=0x1
                unsigned char Timer2ReservedFlags:2;// Offset=0x1 Size=0x1 BitOffset=0x6 BitSize=0x2
            };
        };
        unsigned char Timer2ComponentId;// Offset=0x2 Size=0x1
        unsigned char Timer2RelativeId;// Offset=0x3 Size=0x1
        unsigned char QueueType;// Offset=0x0 Size=0x1
        union // Size=0x1 (Id=0)
        {
            unsigned char QueueControlFlags;// Offset=0x1 Size=0x1
            struct // Size=0x1 (Id=0)
            {
                unsigned char Abandoned:1;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x1
                unsigned char DisableIncrement:1;// Offset=0x1 Size=0x1 BitOffset=0x1 BitSize=0x1
                unsigned char QueueReservedControlFlags:6;// Offset=0x1 Size=0x1 BitOffset=0x2 BitSize=0x6
            };
        };
        unsigned char QueueSize;// Offset=0x2 Size=0x1
        unsigned char QueueReserved;// Offset=0x3 Size=0x1
        unsigned char ThreadType;// Offset=0x0 Size=0x1
        unsigned char ThreadReserved;// Offset=0x1 Size=0x1
        union // Size=0x1 (Id=0)
        {
            unsigned char ThreadControlFlags;// Offset=0x2 Size=0x1
            struct // Size=0x1 (Id=0)
            {
                unsigned char CycleProfiling:1;// Offset=0x2 Size=0x1 BitOffset=0x0 BitSize=0x1
                unsigned char CounterProfiling:1;// Offset=0x2 Size=0x1 BitOffset=0x1 BitSize=0x1
                unsigned char GroupScheduling:1;// Offset=0x2 Size=0x1 BitOffset=0x2 BitSize=0x1
                unsigned char AffinitySet:1;// Offset=0x2 Size=0x1 BitOffset=0x3 BitSize=0x1
                unsigned char Tagged:1;// Offset=0x2 Size=0x1 BitOffset=0x4 BitSize=0x1
                unsigned char EnergyProfiling:1;// Offset=0x2 Size=0x1 BitOffset=0x5 BitSize=0x1
                unsigned char SchedulerAssist:1;// Offset=0x2 Size=0x1 BitOffset=0x6 BitSize=0x1
                unsigned char ThreadReservedControlFlags:1;// Offset=0x2 Size=0x1 BitOffset=0x7 BitSize=0x1
            };
        };
        unsigned char DebugActive;// Offset=0x3 Size=0x1
        struct // Size=0x1 (Id=0)
        {
            unsigned char ActiveDR7:1;// Offset=0x3 Size=0x1 BitOffset=0x0 BitSize=0x1
            unsigned char Instrumented:1;// Offset=0x3 Size=0x1 BitOffset=0x1 BitSize=0x1
            unsigned char Minimal:1;// Offset=0x3 Size=0x1 BitOffset=0x2 BitSize=0x1
            unsigned char Reserved4:2;// Offset=0x3 Size=0x1 BitOffset=0x3 BitSize=0x2
            unsigned char AltSyscall:1;// Offset=0x3 Size=0x1 BitOffset=0x5 BitSize=0x1
            unsigned char Emulation:1;// Offset=0x3 Size=0x1 BitOffset=0x6 BitSize=0x1
            unsigned char Reserved5:1;// Offset=0x3 Size=0x1 BitOffset=0x7 BitSize=0x1
        };
        unsigned char MutantType;// Offset=0x0 Size=0x1
        unsigned char MutantSize;// Offset=0x1 Size=0x1
        unsigned char DpcActive;// Offset=0x2 Size=0x1
        unsigned char MutantReserved;// Offset=0x3 Size=0x1
    };
    long SignalState;// Offset=0x4 Size=0x4
    struct _LIST_ENTRY WaitListHead;// Offset=0x8 Size=0x10
};

struct _KEVENT// Size=0x18 (Id=20)
{
    struct _DISPATCHER_HEADER Header;// Offset=0x0 Size=0x18
};

struct _MMPAGE_FILE_EXPANSION_FLAGS// Size=0x4 (Id=2512)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned char PageFileNumber:8;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x8
        unsigned char Spare1:8;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x8
        unsigned char Spare2:8;// Offset=0x2 Size=0x1 BitOffset=0x0 BitSize=0x8
        unsigned char IgnoreCurrentCommit:1;// Offset=0x3 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char IncreaseMinimumSize:1;// Offset=0x3 Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char AttemptForCantExtend:1;// Offset=0x3 Size=0x1 BitOffset=0x2 BitSize=0x1
        unsigned char UnusedSegmentDeletion:1;// Offset=0x3 Size=0x1 BitOffset=0x3 BitSize=0x1
        unsigned char PageFileContract:1;// Offset=0x3 Size=0x1 BitOffset=0x4 BitSize=0x1
        unsigned char NoWait:1;// Offset=0x3 Size=0x1 BitOffset=0x5 BitSize=0x1
        unsigned char BeingProcessed:1;// Offset=0x3 Size=0x1 BitOffset=0x6 BitSize=0x1
        unsigned char PageFileMaximumReduction:1;// Offset=0x3 Size=0x1 BitOffset=0x7 BitSize=0x1
    };
};

union _unnamed_1946// Size=0x4 (Id=1946)
{
    unsigned long LongFlags;// Offset=0x0 Size=0x4
    struct _MMPAGE_FILE_EXPANSION_FLAGS Flags;// Offset=0x0 Size=0x4
};

struct _MMPAGE_FILE_EXPANSION// Size=0x60 (Id=1947)
{
    struct _SEGMENT * Segment;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY DereferenceList;// Offset=0x8 Size=0x10
    struct _MI_PARTITION * Partition;// Offset=0x18 Size=0x8
    unsigned long long RequestedExpansionSize;// Offset=0x20 Size=0x8
    union // Size=0x8 (Id=0)
    {
        unsigned long long ActualExpansion;// Offset=0x28 Size=0x8
        unsigned long MaximumSize;// Offset=0x28 Size=0x4
    };
    unsigned long MinimumSize;// Offset=0x2c Size=0x4
    long Status;// Offset=0x30 Size=0x4
    struct _KEVENT Event;// Offset=0x38 Size=0x18
    long InProgress;// Offset=0x50 Size=0x4
    union _unnamed_1946 u1;// Offset=0x54 Size=0x4
    void * ActiveEntry;// Offset=0x58 Size=0x8
};

struct _MMDEREFERENCE_SEGMENT_HEADER// Size=0x38 (Id=2365)
{
    struct _KEVENT Event;// Offset=0x0 Size=0x18
    struct _LIST_ENTRY UnusedSegmentDeleteListHead;// Offset=0x18 Size=0x10
    struct _LIST_ENTRY PagefileExtensionListHead;// Offset=0x28 Size=0x10
};

struct _RTL_AVL_TREE// Size=0x8 (Id=117)
{
    struct _RTL_BALANCED_NODE * Root;// Offset=0x0 Size=0x8
};

struct _unnamed_11// Size=0x8 (Id=11)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    unsigned long HighPart;// Offset=0x4 Size=0x4
};

union _ULARGE_INTEGER// Size=0x8 (Id=587)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    unsigned long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_11 u;// Offset=0x0 Size=0x8
    unsigned long long QuadPart;// Offset=0x0 Size=0x8
};

struct _KTIMER// Size=0x40 (Id=2082)
{
    struct _DISPATCHER_HEADER Header;// Offset=0x0 Size=0x18
    union _ULARGE_INTEGER DueTime;// Offset=0x18 Size=0x8
    struct _LIST_ENTRY TimerListEntry;// Offset=0x20 Size=0x10
    struct _KDPC * Dpc;// Offset=0x30 Size=0x8
    unsigned short Processor;// Offset=0x38 Size=0x2
    unsigned char TimerType;// Offset=0x3a Size=0x1
    char TimerDifObjTracking;// Offset=0x3b Size=0x1
    unsigned long Period;// Offset=0x3c Size=0x4
};

struct _SINGLE_LIST_ENTRY// Size=0x8 (Id=519)
{
    struct _SINGLE_LIST_ENTRY * Next;// Offset=0x0 Size=0x8
};

struct _MI_DEFERRED_VIEWS_TO_FREE// Size=0x20 (Id=2463)
{
    struct _LIST_ENTRY ListHead;// Offset=0x0 Size=0x10
    unsigned long long NumberOfPages;// Offset=0x10 Size=0x8
    unsigned long TbFlushStamp;// Offset=0x18 Size=0x4
};

struct _EX_PUSH_LOCK// Size=0x8 (Id=120)
{
    union // Size=0x8 (Id=0)
    {
        struct // Size=0x8 (Id=0)
        {
            unsigned long long Locked:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
            unsigned long long Waiting:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
            unsigned long long Waking:1;// Offset=0x0 Size=0x8 BitOffset=0x2 BitSize=0x1
            unsigned long long MultipleShared:1;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x1
            unsigned long long Shared:60;// Offset=0x0 Size=0x8 BitOffset=0x4 BitSize=0x3c
        };
        unsigned long long Value;// Offset=0x0 Size=0x8
        void * Ptr;// Offset=0x0 Size=0x8
    };
};

struct _MI_CROSS_PARTITION_CHARGES// Size=0x20 (Id=2399)
{
    unsigned long long CurrentCharges;// Offset=0x0 Size=0x8
    unsigned long long ChargeFailures;// Offset=0x8 Size=0x8
    unsigned long long ChargePeak;// Offset=0x10 Size=0x8
    unsigned long long MaximumAllowed;// Offset=0x18 Size=0x8
};

struct _WORK_QUEUE_ITEM// Size=0x20 (Id=21)
{
    struct _LIST_ENTRY List;// Offset=0x0 Size=0x10
    void  ( * WorkerRoutine)(void * );// Offset=0x10 Size=0x8
    void * Parameter;// Offset=0x18 Size=0x8
};

struct _MI_PARTITION_SEGMENTS// Size=0x480 (Id=1896)
{
    long SegmentListLock;// Offset=0x0 Size=0x4
    unsigned long DeleteOnCloseCount;// Offset=0x4 Size=0x4
    long long FsControlAreaCount;// Offset=0x8 Size=0x8
    long long PfControlAreaCount;// Offset=0x10 Size=0x8
    long long CloneHeaderCount;// Offset=0x18 Size=0x8
    struct _KEVENT DeleteSubsectionCleanup;// Offset=0x20 Size=0x18
    struct _KEVENT UnusedSegmentCleanup;// Offset=0x38 Size=0x18
    unsigned long long SubsectionDeletePtes;// Offset=0x50 Size=0x8
    struct _MMPAGE_FILE_EXPANSION AttemptForCantExtend;// Offset=0x58 Size=0x60
    struct _MMDEREFERENCE_SEGMENT_HEADER DereferenceSegmentHeader;// Offset=0xb8 Size=0x38
    struct _RTL_AVL_TREE ListWalkers;// Offset=0xf0 Size=0x8
    struct _KTIMER DeleteOnCloseTimer;// Offset=0xf8 Size=0x40
    unsigned char DeleteOnCloseTimerActive;// Offset=0x138 Size=0x1
    unsigned char SegmentDereferenceThreadExists;// Offset=0x139 Size=0x1
    void * SegmentDereferenceMailboxHeader;// Offset=0x140 Size=0x8
    unsigned long long UnusedSegmentPagedPool;// Offset=0x148 Size=0x8
    struct _LIST_ENTRY UnusedSegmentList[5];// Offset=0x150 Size=0x50
    struct _KEVENT ControlAreaDeleteEvent;// Offset=0x1a0 Size=0x18
    struct _SINGLE_LIST_ENTRY ControlAreaDeleteList;// Offset=0x1b8 Size=0x8
    struct _MI_DEFERRED_VIEWS_TO_FREE FreedSystemCacheViews[4];// Offset=0x1c0 Size=0x80
    struct _MI_DEFERRED_VIEWS_TO_FREE FreedSystemCacheViewsReady;// Offset=0x240 Size=0x20
    struct _MI_DEFERRED_VIEWS_TO_FREE FreedSystemCachePdesReady;// Offset=0x260 Size=0x20
    long SystemCacheViewLock;// Offset=0x280 Size=0x4
    struct _EX_PUSH_LOCK SystemCacheInitLock;// Offset=0x288 Size=0x8
    unsigned long SystemCacheViewPageTables;// Offset=0x290 Size=0x4
    struct _KEVENT FreeSystemCacheVa;// Offset=0x298 Size=0x18
    unsigned long PagefileExtensionWaiters;// Offset=0x2b0 Size=0x4
    unsigned long PagefileExtensionRequests;// Offset=0x2b4 Size=0x4
    struct _KEVENT PagefileExtensionWaitEvent;// Offset=0x2b8 Size=0x18
    struct _KEVENT PeriodicPagefileReduction;// Offset=0x2d0 Size=0x18
    unsigned long PeriodicPagefileSecondHand;// Offset=0x2e8 Size=0x4
    struct _MI_CROSS_PARTITION_CHARGES SharedCharges[9];// Offset=0x2f0 Size=0x120
    struct _KEVENT * SharedChargesDrainEvent;// Offset=0x410 Size=0x8
    struct _KEVENT * ControlAreasDrainEvent;// Offset=0x418 Size=0x8
    struct _KEVENT * CloneHeaderDrainEvent;// Offset=0x420 Size=0x8
    struct _EX_RUNDOWN_REF_CACHE_AWARE * ProbeRundownReference;// Offset=0x428 Size=0x8
    unsigned long long RemoveUnusedSegmentsCommitNeeded;// Offset=0x430 Size=0x8
    unsigned long SegmentDereferenceCalibrationActive;// Offset=0x438 Size=0x4
    struct _WORK_QUEUE_ITEM SegmentDereferenceCalibration;// Offset=0x440 Size=0x20
    unsigned long NumberSegmentDereferenceThreads;// Offset=0x460 Size=0x4
    unsigned long OptimalNumberSegmentDereferenceThreadsComputed;// Offset=0x464 Size=0x4
};
