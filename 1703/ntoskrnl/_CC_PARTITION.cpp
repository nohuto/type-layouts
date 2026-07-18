struct _LIST_ENTRY// Size=0x10 (Id=22)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _SHARED_CACHE_MAP_LIST_CURSOR// Size=0x18 (Id=393)
{
    struct _LIST_ENTRY SharedCacheMapLinks;// Offset=0x0 Size=0x10
    unsigned long Flags;// Offset=0x10 Size=0x4
};

struct _EX_PUSH_LOCK// Size=0x8 (Id=83)
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

struct _DISPATCHER_HEADER// Size=0x18 (Id=685)
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
                unsigned char ThreadReservedControlFlags:2;// Offset=0x2 Size=0x1 BitOffset=0x6 BitSize=0x2
            };
        };
        unsigned char DebugActive;// Offset=0x3 Size=0x1
        struct // Size=0x1 (Id=0)
        {
            unsigned char ActiveDR7:1;// Offset=0x3 Size=0x1 BitOffset=0x0 BitSize=0x1
            unsigned char Instrumented:1;// Offset=0x3 Size=0x1 BitOffset=0x1 BitSize=0x1
            unsigned char Minimal:1;// Offset=0x3 Size=0x1 BitOffset=0x2 BitSize=0x1
            unsigned char Reserved4:3;// Offset=0x3 Size=0x1 BitOffset=0x3 BitSize=0x3
            unsigned char UmsScheduled:1;// Offset=0x3 Size=0x1 BitOffset=0x6 BitSize=0x1
            unsigned char UmsPrimary:1;// Offset=0x3 Size=0x1 BitOffset=0x7 BitSize=0x1
        };
        unsigned char MutantType;// Offset=0x0 Size=0x1
        unsigned char MutantSize;// Offset=0x1 Size=0x1
        unsigned char DpcActive;// Offset=0x2 Size=0x1
        unsigned char MutantReserved;// Offset=0x3 Size=0x1
    };
    long SignalState;// Offset=0x4 Size=0x4
    struct _LIST_ENTRY WaitListHead;// Offset=0x8 Size=0x10
};

struct _KEVENT// Size=0x18 (Id=66)
{
    struct _DISPATCHER_HEADER Header;// Offset=0x0 Size=0x18
};

struct _SINGLE_LIST_ENTRY// Size=0x8 (Id=475)
{
    struct _SINGLE_LIST_ENTRY * Next;// Offset=0x0 Size=0x8
};

struct _KDPC// Size=0x40 (Id=161)
{
    union // Size=0x4 (Id=0)
    {
        unsigned long TargetInfoAsUlong;// Offset=0x0 Size=0x4
        unsigned char Type;// Offset=0x0 Size=0x1
        unsigned char Importance;// Offset=0x1 Size=0x1
        unsigned short Number;// Offset=0x2 Size=0x2
    };
    struct _SINGLE_LIST_ENTRY DpcListEntry;// Offset=0x8 Size=0x8
    unsigned long long ProcessorHistory;// Offset=0x10 Size=0x8
    void  ( * DeferredRoutine)(struct _KDPC * ,void * ,void * ,void * );// Offset=0x18 Size=0x8
    void * DeferredContext;// Offset=0x20 Size=0x8
    void * SystemArgument1;// Offset=0x28 Size=0x8
    void * SystemArgument2;// Offset=0x30 Size=0x8
    void * DpcData;// Offset=0x38 Size=0x8
};

struct _unnamed_10// Size=0x8 (Id=10)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    unsigned long HighPart;// Offset=0x4 Size=0x4
};

union _ULARGE_INTEGER// Size=0x8 (Id=11)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    unsigned long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_10 u;// Offset=0x0 Size=0x8
    unsigned long long QuadPart;// Offset=0x0 Size=0x8
};

struct _KTIMER// Size=0x40 (Id=1144)
{
    struct _DISPATCHER_HEADER Header;// Offset=0x0 Size=0x18
    union _ULARGE_INTEGER DueTime;// Offset=0x18 Size=0x8
    struct _LIST_ENTRY TimerListEntry;// Offset=0x20 Size=0x10
    struct _KDPC * Dpc;// Offset=0x30 Size=0x8
    unsigned long Processor;// Offset=0x38 Size=0x4
    unsigned long Period;// Offset=0x3c Size=0x4
};

struct _LAZY_WRITER// Size=0x88 (Id=394)
{
    struct _KDPC ScanDpc;// Offset=0x0 Size=0x40
    struct _KTIMER ScanTimer;// Offset=0x40 Size=0x40
    unsigned char ScanActive;// Offset=0x80 Size=0x1
    unsigned char OtherWork;// Offset=0x81 Size=0x1
    unsigned char PendingTeardownScan;// Offset=0x82 Size=0x1
    unsigned char PendingPeriodicScan;// Offset=0x83 Size=0x1
    unsigned char PendingLowMemoryScan;// Offset=0x84 Size=0x1
    unsigned char PendingPowerScan;// Offset=0x85 Size=0x1
    unsigned char PendingCoalescingFlushScan;// Offset=0x86 Size=0x1
};

struct _DIRTY_PAGE_STATISTICS// Size=0x18 (Id=594)
{
    unsigned long long DirtyPages;// Offset=0x0 Size=0x8
    unsigned long long DirtyPagesLastScan;// Offset=0x8 Size=0x8
    unsigned long DirtyPagesScheduledLastScan;// Offset=0x10 Size=0x4
};

struct _DIRTY_PAGE_THRESHOLDS// Size=0x38 (Id=688)
{
    unsigned long long DirtyPageThreshold;// Offset=0x0 Size=0x8
    unsigned long long DirtyPageThresholdTop;// Offset=0x8 Size=0x8
    unsigned long long DirtyPageThresholdBottom;// Offset=0x10 Size=0x8
    unsigned long DirtyPageTarget;// Offset=0x18 Size=0x4
    unsigned long long AggregateAvailablePages;// Offset=0x20 Size=0x8
    unsigned long long AggregateDirtyPages;// Offset=0x28 Size=0x8
    unsigned long AvailableHistory;// Offset=0x30 Size=0x4
};

struct _unnamed_30// Size=0x8 (Id=30)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=31)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_30 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _CC_PARTITION// Size=0x3c0 (Id=377)
{
    short NodeTypeCode;// Offset=0x0 Size=0x2
    short NodeByteSize;// Offset=0x2 Size=0x2
    unsigned long long MasterLock;// Offset=0x40 Size=0x8
    unsigned long long WorkQueueLock;// Offset=0x80 Size=0x8
    unsigned short PartitionID;// Offset=0x88 Size=0x2
    struct _LIST_ENTRY PartitionLinks;// Offset=0x90 Size=0x10
    struct _LIST_ENTRY CleanSharedCacheMapList;// Offset=0xa0 Size=0x10
    struct _LIST_ENTRY CleanSharedCacheMapWithLogHandleList;// Offset=0xb0 Size=0x10
    struct _SHARED_CACHE_MAP_LIST_CURSOR DirtySharedCacheMapList;// Offset=0xc0 Size=0x18
    struct _SHARED_CACHE_MAP_LIST_CURSOR LazyWriterCursor;// Offset=0xd8 Size=0x18
    struct _LIST_ENTRY DirtySharedCacheMapWithLogHandleList;// Offset=0xf0 Size=0x10
    struct _EX_PUSH_LOCK ChangeSharedCacheMapFileLock;// Offset=0x100 Size=0x8
    unsigned long ConsecutiveWorklessLazyScanCount;// Offset=0x108 Size=0x4
    unsigned char ForcedDisableLazywriteScan;// Offset=0x10c Size=0x1
    unsigned long NumberWorkerThreads;// Offset=0x110 Size=0x4
    unsigned long NumberActiveWorkerThreads;// Offset=0x114 Size=0x4
    struct _LIST_ENTRY IdleWorkerThreadList;// Offset=0x118 Size=0x10
    struct _LIST_ENTRY FastTeardownWorkQueue;// Offset=0x128 Size=0x10
    struct _LIST_ENTRY ExpressWorkQueue;// Offset=0x138 Size=0x10
    struct _LIST_ENTRY RegularWorkQueue;// Offset=0x148 Size=0x10
    struct _LIST_ENTRY PostTickWorkQueue;// Offset=0x158 Size=0x10
    struct _LIST_ENTRY IdleExtraWriteBehindThreadList;// Offset=0x168 Size=0x10
    unsigned long ActiveExtraWriteBehindThreads;// Offset=0x178 Size=0x4
    unsigned long MaxExtraWriteBehindThreads;// Offset=0x17c Size=0x4
    unsigned char QueueThrottle;// Offset=0x180 Size=0x1
    unsigned long PostTickWorkItemCount;// Offset=0x184 Size=0x4
    unsigned long ThreadsActiveBeforeThrottle;// Offset=0x188 Size=0x4
    unsigned long ExtraWBThreadsActiveBeforeThrottle;// Offset=0x18c Size=0x4
    unsigned long ExecutingWriteBehindWorkItems;// Offset=0x190 Size=0x4
    unsigned long ExecutingHighPriorityWorkItem;// Offset=0x194 Size=0x4
    struct _KEVENT LowMemoryEvent;// Offset=0x198 Size=0x18
    struct _KEVENT PowerEvent;// Offset=0x1b0 Size=0x18
    struct _KEVENT PeriodicEvent;// Offset=0x1c8 Size=0x18
    struct _KEVENT WaitingForTeardownEvent;// Offset=0x1e0 Size=0x18
    struct _KEVENT CoalescingFlushEvent;// Offset=0x1f8 Size=0x18
    unsigned long PagesYetToWrite;// Offset=0x210 Size=0x4
    struct _LAZY_WRITER LazyWriter;// Offset=0x218 Size=0x88
    struct _DIRTY_PAGE_STATISTICS DirtyPageStatistics;// Offset=0x2a0 Size=0x18
    struct _DIRTY_PAGE_THRESHOLDS DirtyPageThresholds;// Offset=0x2b8 Size=0x38
    struct _WRITE_BEHIND_THROUGHPUT * ThroughputStats;// Offset=0x2f0 Size=0x8
    long ThroughputTrend;// Offset=0x2f8 Size=0x4
    unsigned long long AverageAvailablePages;// Offset=0x300 Size=0x8
    unsigned long long AverageDirtyPages;// Offset=0x308 Size=0x8
    unsigned long long PagesSkippedDueToHotSpot;// Offset=0x310 Size=0x8
    union _LARGE_INTEGER PrevRegularQueueItemRunTime;// Offset=0x318 Size=0x8
    union _LARGE_INTEGER PrevExtraWBThreadCheckTime;// Offset=0x320 Size=0x8
    unsigned char AddExtraWriteBehindThreads;// Offset=0x328 Size=0x1
    unsigned char RemoveExtraThreadPending;// Offset=0x329 Size=0x1
    struct _LIST_ENTRY DeferredWrites;// Offset=0x330 Size=0x10
    unsigned long long DeferredWriteSpinLock;// Offset=0x340 Size=0x8
    struct _LIST_ENTRY * IdleAsyncReadWorkerThreadList;// Offset=0x348 Size=0x8
    unsigned long * NumberActiveAsyncReadWorkerThreads;// Offset=0x350 Size=0x8
    unsigned long * NumberActiveCompleteAsyncReadWorkItems;// Offset=0x358 Size=0x8
    struct _LIST_ENTRY * AsyncReadWorkQueue;// Offset=0x360 Size=0x8
    struct _LIST_ENTRY * AsyncReadCompletionWorkQueue;// Offset=0x368 Size=0x8
    struct _KEVENT * NewAsyncReadRequestEvent;// Offset=0x370 Size=0x8
    struct _ASYNC_READ_THREAD_STATS * ReaderThreadsStats;// Offset=0x378 Size=0x8
    struct _EX_PUSH_LOCK AsyncReadWorkQueueLock;// Offset=0x380 Size=0x8
};
