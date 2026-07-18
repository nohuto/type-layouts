struct _LIST_ENTRY// Size=0x10 (Id=3)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _SHARED_CACHE_MAP_LIST_CURSOR// Size=0x18 (Id=819)
{
    struct _LIST_ENTRY SharedCacheMapLinks;// Offset=0x0 Size=0x10
    unsigned long Flags;// Offset=0x10 Size=0x4
};

struct _DISPATCHER_HEADER// Size=0x18 (Id=159)
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

struct _unnamed_11// Size=0x8 (Id=11)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    unsigned long HighPart;// Offset=0x4 Size=0x4
};

union _ULARGE_INTEGER// Size=0x8 (Id=509)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    unsigned long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_11 u;// Offset=0x0 Size=0x8
    unsigned long long QuadPart;// Offset=0x0 Size=0x8
};

struct _KTIMER// Size=0x40 (Id=1807)
{
    struct _DISPATCHER_HEADER Header;// Offset=0x0 Size=0x18
    union _ULARGE_INTEGER DueTime;// Offset=0x18 Size=0x8
    struct _LIST_ENTRY TimerListEntry;// Offset=0x20 Size=0x10
    struct _KDPC * Dpc;// Offset=0x30 Size=0x8
    unsigned short Processor;// Offset=0x38 Size=0x2
    unsigned short TimerType;// Offset=0x3a Size=0x2
    unsigned long Period;// Offset=0x3c Size=0x4
};

struct _LAZY_WRITER// Size=0x48 (Id=999)
{
    struct _KTIMER ScanTimer;// Offset=0x0 Size=0x40
    unsigned char TimerInitialized;// Offset=0x40 Size=0x1
    unsigned char ScanActive;// Offset=0x41 Size=0x1
    unsigned char OtherWork;// Offset=0x42 Size=0x1
    unsigned char PendingTeardownScan;// Offset=0x43 Size=0x1
    unsigned char PendingPeriodicScan;// Offset=0x44 Size=0x1
    unsigned char PendingLowMemoryScan;// Offset=0x45 Size=0x1
    unsigned char PendingPowerScan;// Offset=0x46 Size=0x1
    unsigned char PendingCoalescingFlushScan;// Offset=0x47 Size=0x1
};

struct _DIRTY_PAGE_STATISTICS// Size=0x18 (Id=1099)
{
    unsigned long long DirtyPages;// Offset=0x0 Size=0x8
    unsigned long long DirtyPagesLastScan;// Offset=0x8 Size=0x8
    unsigned long DirtyPagesScheduledLastScan;// Offset=0x10 Size=0x4
};

struct _DIRTY_PAGE_THRESHOLDS// Size=0x38 (Id=1220)
{
    unsigned long long DirtyPageThreshold;// Offset=0x0 Size=0x8
    unsigned long long DirtyPageThresholdTop;// Offset=0x8 Size=0x8
    unsigned long long DirtyPageThresholdBottom;// Offset=0x10 Size=0x8
    unsigned long DirtyPageTarget;// Offset=0x18 Size=0x4
    unsigned long long AggregateAvailablePages;// Offset=0x20 Size=0x8
    unsigned long long AggregateDirtyPages;// Offset=0x28 Size=0x8
    unsigned long AvailableHistory;// Offset=0x30 Size=0x4
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

enum _CC_LWS_PACKET_TYPE
{
    LWSPacket_Invalid=0,
    LWSPacket_Partition=1,
    LWSPacket_PrivateVCM=2,
    LWSPacket_Max=3
};

union _unnamed_1241// Size=0x8 (Id=1241)
{
    struct _CC_PARTITION * Partition;// Offset=0x0 Size=0x8
    struct _PRIVATE_VOLUME_CACHEMAP * PrivateVolumeCacheMap;// Offset=0x0 Size=0x8
};

struct _CC_LWS_PACKET// Size=0x10 (Id=1242)
{
    enum _CC_LWS_PACKET_TYPE Type;// Offset=0x0 Size=0x4
    unsigned char Active;// Offset=0x4 Size=0x1
    union _unnamed_1241 Overlay;// Offset=0x8 Size=0x8
};

struct _unnamed_9// Size=0x8 (Id=9)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=1101)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_9 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _PRIVATE_VOLUME_CACHEMAP// Size=0x680 (Id=811)
{
    short NodeTypeCode;// Offset=0x0 Size=0x2
    short NodeByteSize;// Offset=0x2 Size=0x2
    unsigned long UseCount;// Offset=0x4 Size=0x4
    long long RefCount;// Offset=0x8 Size=0x8
    struct _DEVICE_OBJECT * DeviceObject;// Offset=0x10 Size=0x8
    unsigned long VolumeId;// Offset=0x18 Size=0x4
    struct _CC_PARTITION * Partition;// Offset=0x20 Size=0x8
    struct _VOLUME_CACHE_MAP * VolumeCacheMap;// Offset=0x28 Size=0x8
    struct _LIST_ENTRY NumaNodeList;// Offset=0x30 Size=0x10
    struct _CC_NUMA_NODE * NumaNodeBlock[64];// Offset=0x40 Size=0x200
    struct _LIST_ENTRY PartitionVolumeLinks;// Offset=0x240 Size=0x10
    struct _LIST_ENTRY VolumeCacheMapLinks;// Offset=0x250 Size=0x10
    struct _LIST_ENTRY CleanSharedCacheMapList;// Offset=0x260 Size=0x10
    struct _LIST_ENTRY CleanSharedCacheMapWithLogHandleList;// Offset=0x270 Size=0x10
    struct _SHARED_CACHE_MAP_LIST_CURSOR DirtySharedCacheMapList;// Offset=0x280 Size=0x18
    struct _SHARED_CACHE_MAP_LIST_CURSOR LazyWriteCursor;// Offset=0x298 Size=0x18
    struct _LIST_ENTRY DirtySharedCacheMapWithLogHandleList;// Offset=0x2b0 Size=0x10
    unsigned long ConsecutiveWorklessLazyScanCount;// Offset=0x2c0 Size=0x4
    unsigned char ForcedDisableLazywriteScan;// Offset=0x2c4 Size=0x1
    unsigned long long WorkQueueLock;// Offset=0x300 Size=0x8
    unsigned long NumberWorkerThreads;// Offset=0x308 Size=0x4
    struct _LIST_ENTRY PostTickWorkQueue;// Offset=0x310 Size=0x10
    unsigned long MaxExtraWriteBehindThreads;// Offset=0x320 Size=0x4
    unsigned long MaxCacheMapUninitThreads;// Offset=0x324 Size=0x4
    unsigned long PostTickWorkItemCount;// Offset=0x328 Size=0x4
    struct _KEVENT LowMemoryEvent;// Offset=0x330 Size=0x18
    struct _KEVENT PowerEvent;// Offset=0x348 Size=0x18
    struct _KEVENT WaitingForTeardownEvent;// Offset=0x360 Size=0x18
    struct _KEVENT CoalescingFlushEvent;// Offset=0x378 Size=0x18
    unsigned long PagesYetToWrite;// Offset=0x390 Size=0x4
    struct _LAZY_WRITER LazyWriter;// Offset=0x398 Size=0x48
    struct _DIRTY_PAGE_STATISTICS DirtyPageStatistics;// Offset=0x3e0 Size=0x18
    struct _DIRTY_PAGE_THRESHOLDS DirtyPageThresholds;// Offset=0x3f8 Size=0x38
    struct _WRITE_BEHIND_THROUGHPUT * ThroughputStats;// Offset=0x430 Size=0x8
    unsigned long long AverageAvailablePages;// Offset=0x438 Size=0x8
    unsigned long long AverageDirtyPages;// Offset=0x440 Size=0x8
    unsigned long long PagesSkippedDueToHotSpot;// Offset=0x448 Size=0x8
    struct _LIST_ENTRY DeferredWrites;// Offset=0x450 Size=0x10
    unsigned long long DeferredWriteSpinLock;// Offset=0x480 Size=0x8
    struct _EX_PUSH_LOCK AsyncReadWorkQueueLock;// Offset=0x488 Size=0x8
    unsigned long MaxNumberOfWriteBehindThreads;// Offset=0x490 Size=0x4
    unsigned char CoalescingState;// Offset=0x494 Size=0x1
    unsigned char InitComplete;// Offset=0x495 Size=0x1
    struct _KEVENT ExitEvent;// Offset=0x498 Size=0x18
    struct _KEVENT FinalDereferenceEvent;// Offset=0x4b0 Size=0x18
    void * LazyWriteScanThreadHandle;// Offset=0x4c8 Size=0x8
    struct _CC_LWS_PACKET LWSPacket;// Offset=0x4d0 Size=0x10
    struct _LIST_ENTRY ExternalCacheList;// Offset=0x4e0 Size=0x10
    unsigned long ThroughputIdx;// Offset=0x4f0 Size=0x4
    unsigned long long AvgPagesPerSecond;// Offset=0x4f8 Size=0x8
    unsigned long long ThroughputHistory[32];// Offset=0x500 Size=0x100
    unsigned long DirtyThresholdInSeconds;// Offset=0x600 Size=0x4
    unsigned long DirtyPageTargetInSeconds;// Offset=0x604 Size=0x4
    struct _LIST_ENTRY QuickLWSThreadList;// Offset=0x608 Size=0x10
    struct _KEVENT QuickLazyScanEvent;// Offset=0x618 Size=0x18
    union _LARGE_INTEGER PrevLazyWriteScanTime;// Offset=0x630 Size=0x8
    unsigned long AsyncLazywriteQueueDepth;// Offset=0x638 Size=0x4
    unsigned long MaxAsyncLazywriteCompletionWorkers;// Offset=0x63c Size=0x4
    unsigned long Flags;// Offset=0x640 Size=0x4
};
