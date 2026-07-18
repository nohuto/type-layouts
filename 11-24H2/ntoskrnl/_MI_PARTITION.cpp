struct _MI_PARTITION_FLAGS// Size=0x4 (Id=2196)
{
    union // Size=0x4 (Id=0)
    {
        struct // Size=0x4 (Id=0)
        {
            unsigned long BeingDeleted:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long PageListsInitialized:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
            unsigned long StoreReservedPagesCharged:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
            unsigned long UseProtectedSlabAllocators:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
            unsigned long PureHolding:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
            unsigned long ZeroPagesOptional:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
            unsigned long BackgroundZeroingDisabled:1;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1
            unsigned long SpecialPurposeMemory:1;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x1
        };
        long EntireField;// Offset=0x0 Size=0x4
    };
};

struct _RTL_AVL_TREE// Size=0x8 (Id=117)
{
    struct _RTL_BALANCED_NODE * Root;// Offset=0x0 Size=0x8
};

struct _LIST_ENTRY// Size=0x10 (Id=4)
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

struct _unnamed_535// Size=0x10 (Id=535)
{
    struct // Size=0x10 (Id=0)
    {
        unsigned long long Depth:16;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x10
        unsigned long long Sequence:48;// Offset=0x0 Size=0x8 BitOffset=0x10 BitSize=0x30
        unsigned long long Reserved:4;// Offset=0x8 Size=0x8 BitOffset=0x0 BitSize=0x4
        unsigned long long NextEntry:60;// Offset=0x8 Size=0x8 BitOffset=0x4 BitSize=0x3c
    };
};

union _SLIST_HEADER// Size=0x10 (Id=536)
{
    unsigned long long Alignment;// Offset=0x0 Size=0x8
    unsigned long long Region;// Offset=0x8 Size=0x8
    struct _unnamed_535 HeaderX64;// Offset=0x0 Size=0x10
};

struct _MI_PARTITION_CORE// Size=0x1e0 (Id=1697)
{
    unsigned short PartitionId;// Offset=0x0 Size=0x2
    struct _MI_PARTITION_FLAGS Flags;// Offset=0x4 Size=0x4
    unsigned long Signature;// Offset=0x8 Size=0x4
    unsigned char MemoryConfigurationChanged;// Offset=0xc Size=0x1
    struct _MI_NODE_INFORMATION * NodeInformation;// Offset=0x10 Size=0x8
    struct _RTL_AVL_TREE PageRoot;// Offset=0x18 Size=0x8
    struct _PHYSICAL_MEMORY_DESCRIPTOR * MemoryNodeRuns;// Offset=0x20 Size=0x8
    struct _WORK_QUEUE_ITEM PfnUnmapWorkItem;// Offset=0x28 Size=0x20
    unsigned long long PfnUnmapCount;// Offset=0x48 Size=0x8
    struct _PHYSICAL_MEMORY_DESCRIPTOR * MemoryRuns;// Offset=0x50 Size=0x8
    struct _KEVENT ExitEvent;// Offset=0x58 Size=0x18
    struct _KEVENT ConductorNeededEvent;// Offset=0x70 Size=0x18
    void * SystemThreadHandles[6];// Offset=0x88 Size=0x30
    struct _EPARTITION * PartitionObject;// Offset=0xb8 Size=0x8
    struct _EX_PUSH_LOCK DynamicMemoryPushLock;// Offset=0xc0 Size=0x8
    long DynamicMemoryLock;// Offset=0xc8 Size=0x4
    unsigned char PfnUnmapActive;// Offset=0xcc Size=0x1
    struct _KEVENT TemporaryMemoryEvent;// Offset=0xd0 Size=0x18
    void * RootDirectory;// Offset=0xe8 Size=0x8
    void * KernelObjectsDirectory;// Offset=0xf0 Size=0x8
    struct _KEVENT * MemoryEvents[11];// Offset=0xf8 Size=0x58
    void * MemoryEventHandles[11];// Offset=0x150 Size=0x58
    unsigned long long TotalHugeIoRanges;// Offset=0x1a8 Size=0x8
    unsigned long long NonChargedSecurePages;// Offset=0x1b0 Size=0x8
    union _SLIST_HEADER FreeKernelShadowStackCacheEntries;// Offset=0x1c0 Size=0x10
    unsigned long long KernelShadowStackPages;// Offset=0x1d0 Size=0x8
};

struct _MMPAGE_FILE_EXPANSION_FLAGS// Size=0x4 (Id=2397)
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
        unsigned char Spare3:1;// Offset=0x3 Size=0x1 BitOffset=0x7 BitSize=0x1
    };
};

union _unnamed_1856// Size=0x4 (Id=1856)
{
    unsigned long LongFlags;// Offset=0x0 Size=0x4
    struct _MMPAGE_FILE_EXPANSION_FLAGS Flags;// Offset=0x0 Size=0x4
};

struct _MMPAGE_FILE_EXPANSION// Size=0x58 (Id=1857)
{
    struct _SEGMENT * Segment;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY DereferenceList;// Offset=0x8 Size=0x10
    struct _MI_PARTITION * Partition;// Offset=0x18 Size=0x8
    unsigned long long RequestedExpansionSize;// Offset=0x20 Size=0x8
    unsigned long long ActualExpansion;// Offset=0x28 Size=0x8
    struct _KEVENT Event;// Offset=0x30 Size=0x18
    long InProgress;// Offset=0x48 Size=0x4
    union _unnamed_1856 u1;// Offset=0x4c Size=0x4
    void * ActiveEntry;// Offset=0x50 Size=0x8
};

struct _MMMOD_WRITER_LISTHEAD// Size=0x28 (Id=2204)
{
    struct _LIST_ENTRY ListHead;// Offset=0x0 Size=0x10
    struct _KEVENT Event;// Offset=0x10 Size=0x18
};

union _MI_RESERVATION_CLUSTER_INFO// Size=0x4 (Id=2295)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long ClusterSize:10;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0xa
        unsigned long SequenceNumber:22;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x16
    };
    long EntireInfo;// Offset=0x0 Size=0x4
};

struct _MI_MODWRITE_DATA// Size=0x40 (Id=2296)
{
    long long PagesLoad;// Offset=0x0 Size=0x8
    unsigned long long PagesAverage;// Offset=0x8 Size=0x8
    unsigned long long AverageAvailablePages;// Offset=0x10 Size=0x8
    unsigned long long PagesWritten;// Offset=0x18 Size=0x8
    unsigned long WritesIssued;// Offset=0x20 Size=0x4
    unsigned long IgnoredReservationsCount;// Offset=0x24 Size=0x4
    unsigned long FreedReservationsCount;// Offset=0x28 Size=0x4
    unsigned long WriteBurstCount;// Offset=0x2c Size=0x4
    unsigned long long IgnoreReservationsStartTime;// Offset=0x30 Size=0x8
    union _MI_RESERVATION_CLUSTER_INFO ReservationClusterInfo;// Offset=0x38 Size=0x4
    struct // Size=0x2 (Id=0)
    {
        unsigned short IgnoreReservations:1;// Offset=0x3c Size=0x2 BitOffset=0x0 BitSize=0x1
        unsigned short Spare:15;// Offset=0x3c Size=0x2 BitOffset=0x1 BitSize=0xf
    };
    unsigned short Spare1;// Offset=0x3e Size=0x2
};

struct _EX_RUNDOWN_REF// Size=0x8 (Id=269)
{
    union // Size=0x8 (Id=0)
    {
        unsigned long long Count;// Offset=0x0 Size=0x8
        void * Ptr;// Offset=0x0 Size=0x8
    };
};

struct _MI_RESTRICTED_MODWRITES// Size=0x3 (Id=2398)
{
    unsigned char MaximumClusterPages;// Offset=0x0 Size=0x1
    unsigned char ReducedClusterWrites;// Offset=0x1 Size=0x1
    unsigned char ImposeDelay;// Offset=0x2 Size=0x1
};

struct _MI_PARTITION_MODWRITES// Size=0x2c8 (Id=2080)
{
    struct _MMPAGE_FILE_EXPANSION AttemptForCantExtend;// Offset=0x0 Size=0x58
    struct _MMPAGE_FILE_EXPANSION PageFileContract;// Offset=0x58 Size=0x58
    struct _EX_PUSH_LOCK MappedWriterChargesLock;// Offset=0xb0 Size=0x8
    unsigned long NumberOfMappedMdls;// Offset=0xb8 Size=0x4
    unsigned long NumberOfForwardProgressMappedMdls;// Offset=0xbc Size=0x4
    long NumberOfMappedMdlsInUse;// Offset=0xc0 Size=0x4
    unsigned long NumberOfMappedMdlsInUsePeak;// Offset=0xc4 Size=0x4
    struct _MMMOD_WRITER_LISTHEAD MappedFileHeader;// Offset=0xc8 Size=0x28
    unsigned char NeedMappedMdl;// Offset=0xf0 Size=0x1
    unsigned char NeedPageFileMdl;// Offset=0xf1 Size=0x1
    unsigned char ModwriterActive;// Offset=0xf2 Size=0x1
    unsigned char TransitionInserted;// Offset=0xf3 Size=0x1
    long LastModifiedWriteError;// Offset=0xf4 Size=0x4
    long LastMappedWriteError;// Offset=0xf8 Size=0x4
    unsigned long MappedFileWriteSucceeded;// Offset=0xfc Size=0x4
    unsigned long MappedWriteBurstCount;// Offset=0x100 Size=0x4
    unsigned long LowPriorityModWritesOutstanding;// Offset=0x104 Size=0x4
    struct _KEVENT BoostModWriteIoPriorityEvent;// Offset=0x108 Size=0x18
    long ModifiedWriterThreadPriority;// Offset=0x120 Size=0x4
    unsigned long long ModifiedPagesLowPriorityGoal;// Offset=0x128 Size=0x8
    struct _KEVENT ModifiedPageWriterEvent;// Offset=0x130 Size=0x18
    struct _KEVENT ModifiedWriterExitedEvent;// Offset=0x148 Size=0x18
    long WriteAllPagefilePages;// Offset=0x160 Size=0x4
    long WriteAllMappedPages;// Offset=0x164 Size=0x4
    struct _KEVENT MappedPageWriterEvent;// Offset=0x168 Size=0x18
    struct _MI_MODWRITE_DATA ModWriteData;// Offset=0x180 Size=0x40
    struct _KEVENT RescanPageFilesEvent;// Offset=0x1c0 Size=0x18
    struct _MMMOD_WRITER_LISTHEAD PagingFileHeader;// Offset=0x1d8 Size=0x28
    struct _ETHREAD * ModifiedPageWriterThread;// Offset=0x200 Size=0x8
    struct _EX_RUNDOWN_REF ModifiedPageWriterRundown;// Offset=0x208 Size=0x8
    struct _WORK_QUEUE_ITEM PagefileScanWorkItem;// Offset=0x210 Size=0x20
    unsigned long PagefileScanCount;// Offset=0x230 Size=0x4
    long ClusterRestrictionLock;// Offset=0x234 Size=0x4
    struct _MI_RESTRICTED_MODWRITES ClusterRestrictions[2];// Offset=0x238 Size=0x6
    struct _KEVENT NotifyStoreMemoryConditions;// Offset=0x240 Size=0x18
    unsigned char DelayMappedWrite;// Offset=0x258 Size=0x1
    unsigned long PagefileReservationsEnabled;// Offset=0x25c Size=0x4
    struct _EX_PUSH_LOCK PageFileCreationLock;// Offset=0x260 Size=0x8
    struct _WORK_QUEUE_ITEM TrimPagefileWorkItem;// Offset=0x268 Size=0x20
    unsigned long long LastTrimPagefileTime;// Offset=0x288 Size=0x8
    struct _WORK_QUEUE_ITEM WsSwapPagefileContractWorkItem;// Offset=0x290 Size=0x20
    long WsSwapPageFileContractionInProgress;// Offset=0x2b0 Size=0x4
    struct _EX_PUSH_LOCK WorkingSetSwapLock;// Offset=0x2b8 Size=0x8
    long WorkingSetInswapLock;// Offset=0x2c0 Size=0x4
};

union _unnamed_1234// Size=0x4 (Id=1234)
{
    struct // Size=0x4 (Id=0)
    {
        long FlushCompleting:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        long FlushInProgress:31;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1f
    };
    long Long;// Offset=0x0 Size=0x4
};

struct _unnamed_11// Size=0x8 (Id=11)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    unsigned long HighPart;// Offset=0x4 Size=0x4
};

union _ULARGE_INTEGER// Size=0x8 (Id=590)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    unsigned long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_11 u;// Offset=0x0 Size=0x8
    unsigned long long QuadPart;// Offset=0x0 Size=0x8
};

struct _KTIMER// Size=0x40 (Id=1978)
{
    struct _DISPATCHER_HEADER Header;// Offset=0x0 Size=0x18
    union _ULARGE_INTEGER DueTime;// Offset=0x18 Size=0x8
    struct _LIST_ENTRY TimerListEntry;// Offset=0x20 Size=0x10
    struct _KDPC * Dpc;// Offset=0x30 Size=0x8
    unsigned short Processor;// Offset=0x38 Size=0x2
    unsigned short TimerType;// Offset=0x3a Size=0x2
    unsigned long Period;// Offset=0x3c Size=0x4
};

struct _KAFFINITY_EX// Size=0x108 (Id=119)
{
    unsigned short Count;// Offset=0x0 Size=0x2
    unsigned short Size;// Offset=0x2 Size=0x2
    unsigned long Reserved;// Offset=0x4 Size=0x4
    union // Size=0x8 (Id=0)
    {
        unsigned long long Bitmap[1];// Offset=0x8 Size=0x8
        unsigned long long StaticBitmap[32];// Offset=0x8 Size=0x100
    };
};

struct _MI_PARTITION_STORES// Size=0x210 (Id=1235)
{
    union _unnamed_1234 WriteAllStoreSwapPages;// Offset=0x0 Size=0x4
    unsigned long VirtualPageFileNumber;// Offset=0x4 Size=0x4
    unsigned long ReadClusterSizeMax;// Offset=0x8 Size=0x4
    unsigned long MaximumPagefileSize;// Offset=0xc Size=0x4
    unsigned long EvictFlushRequestCount;// Offset=0x10 Size=0x4
    unsigned long ModifiedWriteDisableCount;// Offset=0x14 Size=0x4
    unsigned long WriteIssueFailures;// Offset=0x18 Size=0x4
    unsigned long WritesOutstanding;// Offset=0x1c Size=0x4
    unsigned long VirtualPagefileMaximumIncreaseFailed;// Offset=0x20 Size=0x4
    struct _KTIMER VirtualPagefileIncreaseRetryTimer;// Offset=0x28 Size=0x40
    struct _KEVENT * RundownWrites;// Offset=0x68 Size=0x8
    long EvictFlushLock;// Offset=0x70 Size=0x4
    struct _ETHREAD * EvictionThread;// Offset=0x78 Size=0x8
    struct _KEVENT EvictEvent;// Offset=0x80 Size=0x18
    struct _KEVENT EvictThreadExitEvent;// Offset=0x98 Size=0x18
    union _SLIST_HEADER WriteSupportSListHead;// Offset=0xb0 Size=0x10
    struct _KEVENT EvictFlushCompleteEvent;// Offset=0xc0 Size=0x18
    struct _RTL_BITMAP * WriteIssueFailedBitmap;// Offset=0xd8 Size=0x8
    struct _MM_STORE_WRITE_PAGE_INFORMATION * WritePageInformation;// Offset=0xe0 Size=0x8
    struct _KAFFINITY_EX AffinityEx;// Offset=0xe8 Size=0x108
    struct _EPROCESS * StoreProcess;// Offset=0x1f0 Size=0x8
    long MemoryConditionsLock;// Offset=0x1f8 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long DeleteStoredPages:1;// Offset=0x1fc Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long DiscardPoisonedPages:1;// Offset=0x1fc Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long Spare:30;// Offset=0x1fc Size=0x4 BitOffset=0x2 BitSize=0x1e
    };
    unsigned long DiscardedPoisonedPages;// Offset=0x200 Size=0x4
    unsigned long long LastDiscardedPage;// Offset=0x208 Size=0x8
};

struct _MMDEREFERENCE_SEGMENT_HEADER// Size=0x48 (Id=2258)
{
    struct _KEVENT Event;// Offset=0x0 Size=0x18
    struct _LIST_ENTRY ControlAreaDeleteListHead;// Offset=0x18 Size=0x10
    struct _LIST_ENTRY UnusedSegmentDeleteListHead;// Offset=0x28 Size=0x10
    struct _LIST_ENTRY PagefileExtensionListHead;// Offset=0x38 Size=0x10
};

struct _SINGLE_LIST_ENTRY// Size=0x8 (Id=512)
{
    struct _SINGLE_LIST_ENTRY * Next;// Offset=0x0 Size=0x8
};

struct _MI_DEFERRED_PFNS_TO_FREE// Size=0x20 (Id=2291)
{
    struct _LIST_ENTRY ListHead;// Offset=0x0 Size=0x10
    unsigned long long NumberOfPages;// Offset=0x10 Size=0x8
    unsigned long TbFlushStamp;// Offset=0x18 Size=0x4
};

struct _MI_CROSS_PARTITION_CHARGES// Size=0x20 (Id=2289)
{
    unsigned long long CurrentCharges;// Offset=0x0 Size=0x8
    unsigned long long ChargeFailures;// Offset=0x8 Size=0x8
    unsigned long long ChargePeak;// Offset=0x10 Size=0x8
    unsigned long long MaximumAllowed;// Offset=0x18 Size=0x8
};

struct _MI_PARTITION_SEGMENTS// Size=0x480 (Id=1805)
{
    long SegmentListLock;// Offset=0x0 Size=0x4
    unsigned long DeleteOnCloseCount;// Offset=0x4 Size=0x4
    long long FsControlAreaCount;// Offset=0x8 Size=0x8
    long long PfControlAreaCount;// Offset=0x10 Size=0x8
    long long CloneHeaderCount;// Offset=0x18 Size=0x8
    struct _KEVENT DeleteSubsectionCleanup;// Offset=0x20 Size=0x18
    struct _KEVENT UnusedSegmentCleanup;// Offset=0x38 Size=0x18
    unsigned long long SubsectionDeletePtes;// Offset=0x50 Size=0x8
    struct _MMPAGE_FILE_EXPANSION AttemptForCantExtend;// Offset=0x58 Size=0x58
    struct _MMDEREFERENCE_SEGMENT_HEADER DereferenceSegmentHeader;// Offset=0xb0 Size=0x48
    struct _LIST_ENTRY DeleteOnCloseList;// Offset=0xf8 Size=0x10
    struct _LIST_ENTRY DeleteOnCloseSubsectionList;// Offset=0x108 Size=0x10
    struct _KTIMER DeleteOnCloseTimer;// Offset=0x118 Size=0x40
    unsigned char DeleteOnCloseTimerActive;// Offset=0x158 Size=0x1
    unsigned char SegmentDereferenceThreadExists;// Offset=0x159 Size=0x1
    void * SegmentDereferenceMailboxHeader;// Offset=0x160 Size=0x8
    unsigned long long UnusedSegmentPagedPool;// Offset=0x168 Size=0x8
    struct _LIST_ENTRY UnusedSegmentList;// Offset=0x170 Size=0x10
    struct _LIST_ENTRY DeleteSubsectionList;// Offset=0x180 Size=0x10
    struct _KEVENT ControlAreaDeleteEvent;// Offset=0x190 Size=0x18
    struct _SINGLE_LIST_ENTRY ControlAreaDeleteList;// Offset=0x1a8 Size=0x8
    struct _MI_DEFERRED_PFNS_TO_FREE FreedSystemCacheViews[4];// Offset=0x1b0 Size=0x80
    struct _MI_DEFERRED_PFNS_TO_FREE FreedSystemCacheViewsReady;// Offset=0x230 Size=0x20
    struct _MI_DEFERRED_PFNS_TO_FREE FreedSystemCachePdesReady;// Offset=0x250 Size=0x20
    struct _KEVENT CloneDereferenceEvent;// Offset=0x270 Size=0x18
    union _SLIST_HEADER CloneProtosSListHead;// Offset=0x290 Size=0x10
    struct _EX_PUSH_LOCK SystemCacheInitLock;// Offset=0x2a0 Size=0x8
    unsigned long SystemCacheViewPageTables;// Offset=0x2a8 Size=0x4
    struct _KEVENT FreeSystemCacheVa;// Offset=0x2b0 Size=0x18
    unsigned long PagefileExtensionWaiters;// Offset=0x2c8 Size=0x4
    unsigned long PagefileExtensionRequests;// Offset=0x2cc Size=0x4
    struct _KEVENT PagefileExtensionWaitEvent;// Offset=0x2d0 Size=0x18
    struct _MI_CROSS_PARTITION_CHARGES SharedCharges[9];// Offset=0x2e8 Size=0x120
    struct _KEVENT * SharedChargesDrainEvent;// Offset=0x408 Size=0x8
    struct _KEVENT * ControlAreasDrainEvent;// Offset=0x410 Size=0x8
    struct _KEVENT * CloneHeaderDrainEvent;// Offset=0x418 Size=0x8
    struct _EX_RUNDOWN_REF_CACHE_AWARE * ProbeRundownReference;// Offset=0x420 Size=0x8
    unsigned long long RemoveUnusedSegmentsCommitNeeded;// Offset=0x428 Size=0x8
    unsigned long SegmentDereferenceCalibrationActive;// Offset=0x430 Size=0x4
    struct _WORK_QUEUE_ITEM SegmentDereferenceCalibration;// Offset=0x438 Size=0x20
    unsigned long NumberSegmentDereferenceThreads;// Offset=0x458 Size=0x4
    unsigned long OptimalNumberSegmentDereferenceThreadsComputed;// Offset=0x45c Size=0x4
};

struct _MI_COLOR// Size=0x4 (Id=1738)
{
    union // Size=0x4 (Id=0)
    {
        unsigned long EntireField;// Offset=0x0 Size=0x4
        struct // Size=0x4 (Id=0)
        {
            unsigned long Cache:8;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x8
            unsigned long Channel:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
            unsigned long Node:6;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x6
            unsigned long HighLow:1;// Offset=0x0 Size=0x4 BitOffset=0xf BitSize=0x1
            unsigned long LargePageIndex:2;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x2
            unsigned long CacheAttribute:2;// Offset=0x0 Size=0x4 BitOffset=0x12 BitSize=0x2
            unsigned long ListName:1;// Offset=0x0 Size=0x4 BitOffset=0x14 BitSize=0x1
        };
    };
};

enum _MMLISTS
{
    ZeroedPageList=0,
    FreePageList=1,
    StandbyPageList=2,
    ModifiedPageList=3,
    ModifiedNoWritePageList=4,
    BadPageList=5,
    ActiveAndValid=6,
    TransitionPage=7
};

struct _RTL_BALANCED_NODE// Size=0x18 (Id=116)
{
    union // Size=0x10 (Id=0)
    {
        struct _RTL_BALANCED_NODE * Children[2];// Offset=0x0 Size=0x10
        struct _RTL_BALANCED_NODE * Left;// Offset=0x0 Size=0x8
        struct _RTL_BALANCED_NODE * Right;// Offset=0x8 Size=0x8
    };
    union // Size=0x1 (Id=0)
    {
        struct // Size=0x1 (Id=0)
        {
            union // Size=0x1 (Id=0)
            {
                unsigned char Red:1;// Offset=0x10 Size=0x1 BitOffset=0x0 BitSize=0x1
                unsigned char Balance:2;// Offset=0x10 Size=0x1 BitOffset=0x0 BitSize=0x2
            };
        };
        unsigned long long ParentValue;// Offset=0x10 Size=0x8
    };
};

struct _unnamed_1657// Size=0x8 (Id=1657)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long Tradable:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long NonPagedBuddy:43;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x2b
        unsigned long long Spare:20;// Offset=0x0 Size=0x8 BitOffset=0x2c BitSize=0x14
    };
};

struct _unnamed_1658// Size=0x8 (Id=1658)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long Tradable:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long NonPagedBuddy:31;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1f
        unsigned long long UsedPageTableEntries:10;// Offset=0x0 Size=0x8 BitOffset=0x20 BitSize=0xa
        unsigned long long WsleAge:3;// Offset=0x0 Size=0x8 BitOffset=0x2a BitSize=0x3
        unsigned long long OldestWsleLeafEntries:10;// Offset=0x0 Size=0x8 BitOffset=0x2d BitSize=0xa
        unsigned long long OldestWsleLeafAge:3;// Offset=0x0 Size=0x8 BitOffset=0x37 BitSize=0x3
        unsigned long long Spare:6;// Offset=0x0 Size=0x8 BitOffset=0x3a BitSize=0x6
    };
};

struct _MI_ACTIVE_PFN// Size=0x8 (Id=1659)
{
    union // Size=0x8 (Id=0)
    {
        struct _unnamed_1657 Leaf;// Offset=0x0 Size=0x8
        struct _unnamed_1658 PageTable;// Offset=0x0 Size=0x8
        unsigned long long EntireActiveField;// Offset=0x0 Size=0x8
    };
};

struct _MIPFNFLINK// Size=0x8 (Id=662)
{
    union // Size=0x8 (Id=0)
    {
        struct _SLIST_ENTRY * NextSlistPfn;// Offset=0x0 Size=0x8
        void * Next;// Offset=0x0 Size=0x8
        struct // Size=0x8 (Id=0)
        {
            unsigned long long Flink:40;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x28
            unsigned long long NodeFlinkLow:24;// Offset=0x0 Size=0x8 BitOffset=0x28 BitSize=0x18
        };
        unsigned long long EntireField;// Offset=0x0 Size=0x8
        struct _MI_ACTIVE_PFN Active;// Offset=0x0 Size=0x8
    };
};

struct _MMPTE_HARDWARE// Size=0x8 (Id=1213)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long Valid:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long Dirty1:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
        unsigned long long Owner:1;// Offset=0x0 Size=0x8 BitOffset=0x2 BitSize=0x1
        unsigned long long WriteThrough:1;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x1
        unsigned long long CacheDisable:1;// Offset=0x0 Size=0x8 BitOffset=0x4 BitSize=0x1
        unsigned long long Accessed:1;// Offset=0x0 Size=0x8 BitOffset=0x5 BitSize=0x1
        unsigned long long Dirty:1;// Offset=0x0 Size=0x8 BitOffset=0x6 BitSize=0x1
        unsigned long long LargePage:1;// Offset=0x0 Size=0x8 BitOffset=0x7 BitSize=0x1
        unsigned long long Global:1;// Offset=0x0 Size=0x8 BitOffset=0x8 BitSize=0x1
        unsigned long long CopyOnWrite:1;// Offset=0x0 Size=0x8 BitOffset=0x9 BitSize=0x1
        unsigned long long Unused:1;// Offset=0x0 Size=0x8 BitOffset=0xa BitSize=0x1
        unsigned long long Write:1;// Offset=0x0 Size=0x8 BitOffset=0xb BitSize=0x1
        unsigned long long PageFrameNumber:40;// Offset=0x0 Size=0x8 BitOffset=0xc BitSize=0x28
        unsigned long long ReservedForSoftware:4;// Offset=0x0 Size=0x8 BitOffset=0x34 BitSize=0x4
        unsigned long long WsleAge:4;// Offset=0x0 Size=0x8 BitOffset=0x38 BitSize=0x4
        unsigned long long WsleProtection:3;// Offset=0x0 Size=0x8 BitOffset=0x3c BitSize=0x3
        unsigned long long NoExecute:1;// Offset=0x0 Size=0x8 BitOffset=0x3f BitSize=0x1
    };
};

struct _MMPTE_PROTOTYPE// Size=0x8 (Id=1708)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long Valid:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long DemandFillProto:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
        unsigned long long HiberVerifyConverted:1;// Offset=0x0 Size=0x8 BitOffset=0x2 BitSize=0x1
        unsigned long long ReadOnly:1;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x1
        unsigned long long SwizzleBit:1;// Offset=0x0 Size=0x8 BitOffset=0x4 BitSize=0x1
        unsigned long long Protection:5;// Offset=0x0 Size=0x8 BitOffset=0x5 BitSize=0x5
        unsigned long long Prototype:1;// Offset=0x0 Size=0x8 BitOffset=0xa BitSize=0x1
        unsigned long long Combined:1;// Offset=0x0 Size=0x8 BitOffset=0xb BitSize=0x1
        unsigned long long Unused1:4;// Offset=0x0 Size=0x8 BitOffset=0xc BitSize=0x4
        long long ProtoAddress:48;// Offset=0x0 Size=0x8 BitOffset=0x10 BitSize=0x30
    };
};

struct _MMPTE_SOFTWARE// Size=0x8 (Id=1515)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long Valid:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long PageFileReserved:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
        unsigned long long PageFileAllocated:1;// Offset=0x0 Size=0x8 BitOffset=0x2 BitSize=0x1
        unsigned long long ColdPage:1;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x1
        unsigned long long SwizzleBit:1;// Offset=0x0 Size=0x8 BitOffset=0x4 BitSize=0x1
        unsigned long long Protection:5;// Offset=0x0 Size=0x8 BitOffset=0x5 BitSize=0x5
        unsigned long long Prototype:1;// Offset=0x0 Size=0x8 BitOffset=0xa BitSize=0x1
        unsigned long long Transition:1;// Offset=0x0 Size=0x8 BitOffset=0xb BitSize=0x1
        unsigned long long PageFileLow:4;// Offset=0x0 Size=0x8 BitOffset=0xc BitSize=0x4
        unsigned long long UsedPageTableEntries:10;// Offset=0x0 Size=0x8 BitOffset=0x10 BitSize=0xa
        unsigned long long ShadowStack:1;// Offset=0x0 Size=0x8 BitOffset=0x1a BitSize=0x1
        unsigned long long OnStandbyLookaside:1;// Offset=0x0 Size=0x8 BitOffset=0x1b BitSize=0x1
        unsigned long long Unused:4;// Offset=0x0 Size=0x8 BitOffset=0x1c BitSize=0x4
        unsigned long long PageFileHigh:32;// Offset=0x0 Size=0x8 BitOffset=0x20 BitSize=0x20
    };
};

struct _MMPTE_TIMESTAMP// Size=0x8 (Id=1810)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long MustBeZero:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long Unused:3;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x3
        unsigned long long SwizzleBit:1;// Offset=0x0 Size=0x8 BitOffset=0x4 BitSize=0x1
        unsigned long long Protection:5;// Offset=0x0 Size=0x8 BitOffset=0x5 BitSize=0x5
        unsigned long long Prototype:1;// Offset=0x0 Size=0x8 BitOffset=0xa BitSize=0x1
        unsigned long long Transition:1;// Offset=0x0 Size=0x8 BitOffset=0xb BitSize=0x1
        unsigned long long PageFileLow:4;// Offset=0x0 Size=0x8 BitOffset=0xc BitSize=0x4
        unsigned long long Reserved:16;// Offset=0x0 Size=0x8 BitOffset=0x10 BitSize=0x10
        unsigned long long GlobalTimeStamp:32;// Offset=0x0 Size=0x8 BitOffset=0x20 BitSize=0x20
    };
};

struct _MMPTE_TRANSITION// Size=0x8 (Id=2161)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long Valid:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long Write:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
        unsigned long long OnStandbyLookaside:1;// Offset=0x0 Size=0x8 BitOffset=0x2 BitSize=0x1
        unsigned long long IoTracker:1;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x1
        unsigned long long SwizzleBit:1;// Offset=0x0 Size=0x8 BitOffset=0x4 BitSize=0x1
        unsigned long long Protection:5;// Offset=0x0 Size=0x8 BitOffset=0x5 BitSize=0x5
        unsigned long long Prototype:1;// Offset=0x0 Size=0x8 BitOffset=0xa BitSize=0x1
        unsigned long long Transition:1;// Offset=0x0 Size=0x8 BitOffset=0xb BitSize=0x1
        unsigned long long PageFrameNumber:40;// Offset=0x0 Size=0x8 BitOffset=0xc BitSize=0x28
        unsigned long long Unused:12;// Offset=0x0 Size=0x8 BitOffset=0x34 BitSize=0xc
    };
};

struct _MMPTE_SUBSECTION// Size=0x8 (Id=1206)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long Valid:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long Unused0:2;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x2
        unsigned long long OnStandbyLookaside:1;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x1
        unsigned long long SwizzleBit:1;// Offset=0x0 Size=0x8 BitOffset=0x4 BitSize=0x1
        unsigned long long Protection:5;// Offset=0x0 Size=0x8 BitOffset=0x5 BitSize=0x5
        unsigned long long Prototype:1;// Offset=0x0 Size=0x8 BitOffset=0xa BitSize=0x1
        unsigned long long ColdPage:1;// Offset=0x0 Size=0x8 BitOffset=0xb BitSize=0x1
        unsigned long long Unused2:3;// Offset=0x0 Size=0x8 BitOffset=0xc BitSize=0x3
        unsigned long long ExecutePrivilege:1;// Offset=0x0 Size=0x8 BitOffset=0xf BitSize=0x1
        long long SubsectionAddress:48;// Offset=0x0 Size=0x8 BitOffset=0x10 BitSize=0x30
    };
};

struct _MMPTE_LIST// Size=0x8 (Id=1916)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long Valid:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long OneEntry:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
        unsigned long long filler0:2;// Offset=0x0 Size=0x8 BitOffset=0x2 BitSize=0x2
        unsigned long long SwizzleBit:1;// Offset=0x0 Size=0x8 BitOffset=0x4 BitSize=0x1
        unsigned long long Protection:5;// Offset=0x0 Size=0x8 BitOffset=0x5 BitSize=0x5
        unsigned long long Prototype:1;// Offset=0x0 Size=0x8 BitOffset=0xa BitSize=0x1
        unsigned long long Transition:1;// Offset=0x0 Size=0x8 BitOffset=0xb BitSize=0x1
        unsigned long long filler1:13;// Offset=0x0 Size=0x8 BitOffset=0xc BitSize=0xd
        unsigned long long NextEntry:39;// Offset=0x0 Size=0x8 BitOffset=0x19 BitSize=0x27
    };
};

struct _MMPTE_ACTIVE_PAGE_TABLE_LINKS// Size=0x8 (Id=1447)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long Flink:40;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x28
        unsigned long long BlinkHigh:24;// Offset=0x0 Size=0x8 BitOffset=0x28 BitSize=0x18
    };
};

union _unnamed_653// Size=0x8 (Id=653)
{
    unsigned long long Long;// Offset=0x0 Size=0x8
    struct _MMPTE_HARDWARE Hard;// Offset=0x0 Size=0x8
    struct _MMPTE_PROTOTYPE Proto;// Offset=0x0 Size=0x8
    struct _MMPTE_SOFTWARE Soft;// Offset=0x0 Size=0x8
    struct _MMPTE_TIMESTAMP TimeStamp;// Offset=0x0 Size=0x8
    struct _MMPTE_TRANSITION Trans;// Offset=0x0 Size=0x8
    struct _MMPTE_SUBSECTION Subsect;// Offset=0x0 Size=0x8
    struct _MMPTE_LIST List;// Offset=0x0 Size=0x8
    struct _MMPTE_ACTIVE_PAGE_TABLE_LINKS PageTableLinks;// Offset=0x0 Size=0x8
};

struct _MMPTE// Size=0x8 (Id=654)
{
    union _unnamed_653 u;// Offset=0x0 Size=0x8
};

struct _MIPFNBLINK// Size=0x8 (Id=657)
{
    union // Size=0x8 (Id=0)
    {
        struct // Size=0x8 (Id=0)
        {
            union // Size=0x8 (Id=0)
            {
                unsigned long long Blink:40;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x28
                unsigned long long NodeBlinkLow:19;// Offset=0x0 Size=0x8 BitOffset=0x28 BitSize=0x13
                unsigned long long TbFlushStamp:3;// Offset=0x0 Size=0x8 BitOffset=0x3b BitSize=0x3
                unsigned long long PageBlinkDeleteBit:1;// Offset=0x0 Size=0x8 BitOffset=0x3e BitSize=0x1
                unsigned long long PageBlinkLockBit:1;// Offset=0x0 Size=0x8 BitOffset=0x3f BitSize=0x1
                unsigned long long ShareCount:62;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x3e
            };
            unsigned long long PageShareCountDeleteBit:1;// Offset=0x0 Size=0x8 BitOffset=0x3e BitSize=0x1
            unsigned long long PageShareCountLockBit:1;// Offset=0x0 Size=0x8 BitOffset=0x3f BitSize=0x1
        };
        long long EntireField;// Offset=0x0 Size=0x8
        struct // Size=0x8 (Id=0)
        {
            unsigned long long LockNotUsed:62;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x3e
            unsigned long long DeleteBit:1;// Offset=0x0 Size=0x8 BitOffset=0x3e BitSize=0x1
            unsigned long long LockBit:1;// Offset=0x0 Size=0x8 BitOffset=0x3f BitSize=0x1
        };
    };
};

struct _MMPFNENTRY1// Size=0x1 (Id=1397)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char PageLocation:3;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x3
        unsigned char WriteInProgress:1;// Offset=0x0 Size=0x1 BitOffset=0x3 BitSize=0x1
        unsigned char Modified:1;// Offset=0x0 Size=0x1 BitOffset=0x4 BitSize=0x1
        unsigned char ReadInProgress:1;// Offset=0x0 Size=0x1 BitOffset=0x5 BitSize=0x1
        unsigned char CacheAttribute:2;// Offset=0x0 Size=0x1 BitOffset=0x6 BitSize=0x2
    };
};

struct _MMPFNENTRY3// Size=0x1 (Id=1444)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char Priority:3;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x3
        unsigned char OnProtectedStandby:1;// Offset=0x0 Size=0x1 BitOffset=0x3 BitSize=0x1
        unsigned char InPageError:1;// Offset=0x0 Size=0x1 BitOffset=0x4 BitSize=0x1
        unsigned char SystemChargedPage:1;// Offset=0x0 Size=0x1 BitOffset=0x5 BitSize=0x1
        unsigned char RemovalRequested:1;// Offset=0x0 Size=0x1 BitOffset=0x6 BitSize=0x1
        unsigned char ParityError:1;// Offset=0x0 Size=0x1 BitOffset=0x7 BitSize=0x1
    };
};

struct _unnamed_658// Size=0x2 (Id=658)
{
    unsigned short ReferenceCount;// Offset=0x0 Size=0x2
};

struct _MI_PFN_FLAGS// Size=0x4 (Id=659)
{
    union // Size=0x4 (Id=0)
    {
        unsigned short ReferenceCount;// Offset=0x0 Size=0x2
        struct // Size=0x2 (Id=0)
        {
            unsigned char PageLocation:3;// Offset=0x2 Size=0x1 BitOffset=0x0 BitSize=0x3
            unsigned char WriteInProgress:1;// Offset=0x2 Size=0x1 BitOffset=0x3 BitSize=0x1
            unsigned char Modified:1;// Offset=0x2 Size=0x1 BitOffset=0x4 BitSize=0x1
            unsigned char ReadInProgress:1;// Offset=0x2 Size=0x1 BitOffset=0x5 BitSize=0x1
            unsigned char CacheAttribute:2;// Offset=0x2 Size=0x1 BitOffset=0x6 BitSize=0x2
            unsigned char Priority:3;// Offset=0x3 Size=0x1 BitOffset=0x0 BitSize=0x3
            unsigned char OnProtectedStandby:1;// Offset=0x3 Size=0x1 BitOffset=0x3 BitSize=0x1
            unsigned char InPageError:1;// Offset=0x3 Size=0x1 BitOffset=0x4 BitSize=0x1
            unsigned char SystemChargedPage:1;// Offset=0x3 Size=0x1 BitOffset=0x5 BitSize=0x1
            unsigned char RemovalRequested:1;// Offset=0x3 Size=0x1 BitOffset=0x6 BitSize=0x1
            unsigned char ParityError:1;// Offset=0x3 Size=0x1 BitOffset=0x7 BitSize=0x1
        };
        unsigned long EntireField;// Offset=0x0 Size=0x4
    };
};

union _unnamed_660// Size=0x4 (Id=660)
{
    unsigned short ReferenceCount;// Offset=0x0 Size=0x2
    struct _MMPFNENTRY1 e1;// Offset=0x2 Size=0x1
    struct _MMPFNENTRY3 e3;// Offset=0x3 Size=0x1
    struct _unnamed_658 e2;// Offset=0x0 Size=0x2
    struct _MI_PFN_FLAGS e4;// Offset=0x0 Size=0x4
};

struct _unnamed_2043// Size=0x4 (Id=2043)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long NodeBlinkHigh:21;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x15
        unsigned long NodeFlinkMiddle:11;// Offset=0x0 Size=0x4 BitOffset=0x15 BitSize=0xb
    };
};

struct _unnamed_2044// Size=0x1 (Id=2044)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char ModifiedListBucketIndex:4;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x4
    };
};

struct _unnamed_2045// Size=0x4 (Id=2045)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long PageTableBlinkLow:16;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x10
        unsigned long PageTableBuddyHigh:10;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0xa
        unsigned long PageTableLinked:1;// Offset=0x0 Size=0x4 BitOffset=0x1a BitSize=0x1
        unsigned long AnchorLargePageSize:2;// Offset=0x0 Size=0x4 BitOffset=0x1b BitSize=0x2
        unsigned long Spare1:3;// Offset=0x0 Size=0x4 BitOffset=0x1d BitSize=0x3
    };
};

struct _MI_PFN_FLAGS5// Size=0x4 (Id=2046)
{
    union // Size=0x4 (Id=0)
    {
        unsigned long EntireField;// Offset=0x0 Size=0x4
        struct _unnamed_2043 StandbyList;// Offset=0x0 Size=0x4
        struct _unnamed_2044 MappedPageList;// Offset=0x0 Size=0x1
        struct _unnamed_2045 Active;// Offset=0x0 Size=0x4
    };
};

struct _MI_PFN_FLAGS4// Size=0x8 (Id=1318)
{
    union // Size=0x8 (Id=0)
    {
        struct // Size=0x8 (Id=0)
        {
            unsigned long long PteFrame:40;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x28
            unsigned long long ResidentPage:1;// Offset=0x0 Size=0x8 BitOffset=0x28 BitSize=0x1
            unsigned long long ResidentPageContainsBadPages:1;// Offset=0x0 Size=0x8 BitOffset=0x29 BitSize=0x1
            unsigned long long Unused1:1;// Offset=0x0 Size=0x8 BitOffset=0x2a BitSize=0x1
            unsigned long long Partition:10;// Offset=0x0 Size=0x8 BitOffset=0x2b BitSize=0xa
            unsigned long long FileOnly:1;// Offset=0x0 Size=0x8 BitOffset=0x35 BitSize=0x1
            unsigned long long PfnExists:1;// Offset=0x0 Size=0x8 BitOffset=0x36 BitSize=0x1
            unsigned long long NodeFlinkHigh:5;// Offset=0x0 Size=0x8 BitOffset=0x37 BitSize=0x5
            unsigned long long PageIdentity:3;// Offset=0x0 Size=0x8 BitOffset=0x3c BitSize=0x3
            unsigned long long PrototypePte:1;// Offset=0x0 Size=0x8 BitOffset=0x3f BitSize=0x1
        };
        unsigned long long EntireField;// Offset=0x0 Size=0x8
    };
};

struct _MMPFN// Size=0x30 (Id=661)
{
    union // Size=0x18 (Id=0)
    {
        struct _LIST_ENTRY ListEntry;// Offset=0x0 Size=0x10
        struct _RTL_BALANCED_NODE TreeNode;// Offset=0x0 Size=0x18
        struct _MIPFNFLINK u1;// Offset=0x0 Size=0x8
        union // Size=0x8 (Id=0)
        {
            struct _MMPTE * PteAddress;// Offset=0x8 Size=0x8
            unsigned long long PteLong;// Offset=0x8 Size=0x8
        };
        struct _MMPTE OriginalPte;// Offset=0x10 Size=0x8
    };
    struct _MIPFNBLINK u2;// Offset=0x18 Size=0x8
    union _unnamed_660 u3;// Offset=0x20 Size=0x4
    struct _MI_PFN_FLAGS5 u5;// Offset=0x24 Size=0x4
    struct _MI_PFN_FLAGS4 u4;// Offset=0x28 Size=0x8
};

struct _MMPFNLIST// Size=0x58 (Id=667)
{
    unsigned long long Total;// Offset=0x0 Size=0x8
    struct _MI_COLOR Color;// Offset=0x8 Size=0x4
    enum _MMLISTS ListName;// Offset=0xc Size=0x4
    unsigned long long Flink;// Offset=0x10 Size=0x8
    unsigned long long Blink;// Offset=0x18 Size=0x8
    long Lock;// Offset=0x20 Size=0x4
    struct _MMPFN EmbeddedPfn;// Offset=0x28 Size=0x30
};

struct _MI_STANDBY_LOOKASIDE// Size=0x200 (Id=1363)
{
    unsigned long long Array[64];// Offset=0x0 Size=0x200
};

struct _MI_DECAY_TIMER_LINKAGE// Size=0x8 (Id=1988)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long Spare0:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long PreviousDecayPfn:31;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1f
        unsigned long long TimerRemoved:1;// Offset=0x0 Size=0x8 BitOffset=0x20 BitSize=0x1
        unsigned long long NextDecayPfn:31;// Offset=0x0 Size=0x8 BitOffset=0x21 BitSize=0x1f
    };
};

union _unnamed_1567// Size=0x8 (Id=1567)
{
    unsigned long long Long;// Offset=0x0 Size=0x8
    struct _MI_DECAY_TIMER_LINKAGE e1;// Offset=0x0 Size=0x8
};

struct _MI_DECAY_TIMER_LINK// Size=0x8 (Id=1568)
{
    union _unnamed_1567 u1;// Offset=0x0 Size=0x8
};

struct _MI_LDW_WORK_CONTEXT// Size=0x38 (Id=1781)
{
    struct _WORK_QUEUE_ITEM WorkItem;// Offset=0x0 Size=0x20
    struct _FILE_OBJECT * FileObject;// Offset=0x20 Size=0x8
    long ErrorStatus;// Offset=0x28 Size=0x4
    long Active;// Offset=0x2c Size=0x4
    unsigned char FreeWhenDone;// Offset=0x30 Size=0x1
};

struct _MI_AVAILABLE_PAGE_WAIT_STATES// Size=0x20 (Id=1809)
{
    struct _KEVENT Event;// Offset=0x0 Size=0x18
    unsigned long EventSets;// Offset=0x18 Size=0x4
};

struct _RTL_BITMAP_EX// Size=0x10 (Id=1202)
{
    unsigned long long SizeOfBitMap;// Offset=0x0 Size=0x8
    unsigned long long * Buffer;// Offset=0x8 Size=0x8
};

struct _MI_LARGE_PAGE_COALESCE_WORKER_CONTEXT// Size=0x30 (Id=2069)
{
    struct _KEVENT CandidatesExistEvent;// Offset=0x0 Size=0x18
    unsigned long long InProgressBitmapIndex;// Offset=0x18 Size=0x8
    long DemandCoalesceAttempted;// Offset=0x20 Size=0x4
    long DemandCoalesceTimedOut;// Offset=0x24 Size=0x4
    long DemandCoalesceTimedOutCSwitch;// Offset=0x28 Size=0x4
    long DemandCoalesceSucceeded;// Offset=0x2c Size=0x4
};

struct _MI_PARTITION_PAGE_LISTS// Size=0x3680 (Id=1564)
{
    struct _MMPFNLIST ZeroedPageListHead;// Offset=0x0 Size=0x58
    struct _MMPFNLIST FreePageListHead;// Offset=0x80 Size=0x58
    struct _MMPFNLIST StandbyPageListHead;// Offset=0x100 Size=0x58
    struct _MMPFNLIST StandbyPageListByPriority[8];// Offset=0x180 Size=0x2c0
    struct _MMPFNLIST ModifiedPageListNoReservation;// Offset=0x440 Size=0x58
    struct _MMPFNLIST ModifiedPageListNoReservationCompress;// Offset=0x4c0 Size=0x58
    struct _MMPFNLIST ModifiedPageListByReservation[16];// Offset=0x540 Size=0x580
    struct _MMPFNLIST MappedPageListHead[16];// Offset=0xac0 Size=0x580
    struct _MMPFNLIST BadPageListHead;// Offset=0x1040 Size=0x58
    unsigned long long * HotZeroedPagesCountByColor;// Offset=0x1098 Size=0x8
    struct _MMPFNLIST * PageLocationList[8];// Offset=0x10a0 Size=0x40
    unsigned long StandbyRepurposedByPriority[8];// Offset=0x10e0 Size=0x20
    unsigned long long TransitionSharedPages;// Offset=0x1100 Size=0x8
    unsigned long long TransitionSharedPagesPeak[9];// Offset=0x1108 Size=0x48
    struct _KEVENT MappedPageListHeadEvent[16];// Offset=0x1150 Size=0x180
    struct _MI_STANDBY_LOOKASIDE OldestStandbyPageCache[8];// Offset=0x1300 Size=0x1000
    struct _MI_STANDBY_LOOKASIDE NewestStandbyPageCache[8];// Offset=0x2300 Size=0x1000
    unsigned long long NewestStandbyPageCacheInserts[2][8];// Offset=0x3300 Size=0x80
    struct _MI_DECAY_TIMER_LINK DecayClusterTimerHeads[4];// Offset=0x3380 Size=0x20
    unsigned long DecayHand;// Offset=0x33a0 Size=0x4
    unsigned char StandbyListDiscard;// Offset=0x33a4 Size=0x1
    unsigned char FreeListDiscard;// Offset=0x33a5 Size=0x1
    unsigned char PfnBitMapsReady;// Offset=0x33a6 Size=0x1
    unsigned long long LastDecayHandUpdateTime;// Offset=0x33a8 Size=0x8
    struct _MI_LDW_WORK_CONTEXT LastChanceLdwContext;// Offset=0x33b0 Size=0x38
    long AvailableEventsLock;// Offset=0x3400 Size=0x4
    struct _MI_AVAILABLE_PAGE_WAIT_STATES AvailablePageWaitStates[3];// Offset=0x3408 Size=0x60
    unsigned long long TransitionPrivatePages;// Offset=0x3480 Size=0x8
    struct _RTL_BITMAP_EX LargePfnBitMap[2];// Offset=0x3488 Size=0x20
    struct _MMPFNLIST * FreeZeroListHeads;// Offset=0x34a8 Size=0x8
    union _SLIST_HEADER * FreeZeroPageSlists;// Offset=0x34b0 Size=0x8
    union _MI_AVAILABLE_PAGES_MEDIUM_GRANULARITY * AvailablePagesAtMediumGranularity;// Offset=0x34b8 Size=0x8
    union _MI_AVAILABLE_PAGES_LARGE_GRANULARITY * AvailablePagesAtLargeGranularity;// Offset=0x34c0 Size=0x8
    struct _RTL_BITMAP_EX LargePageRebuildCandidateBitmaps[3];// Offset=0x34c8 Size=0x30
    union _MI_AVAILABLE_PAGES_HUGE_GRANULARITY * AvailablePagesAtHugeGranularity;// Offset=0x34f8 Size=0x8
    long ProcessLargePageCacheLock;// Offset=0x3500 Size=0x4
    struct _LIST_ENTRY ProcessLargePageCacheLinks;// Offset=0x3508 Size=0x10
    unsigned long ProcessLargePageCachePeriodicCount;// Offset=0x3518 Size=0x4
    struct _MI_LARGE_PAGE_COALESCE_WORKER_CONTEXT LargePageCoalesceWorkerContexts[3];// Offset=0x3520 Size=0x90
    unsigned long long LowMemoryConfiguredThreshold;// Offset=0x35b0 Size=0x8
    unsigned long long HighMemoryConfiguredThreshold;// Offset=0x35b8 Size=0x8
    unsigned long long LowMemoryThreshold;// Offset=0x35c0 Size=0x8
    unsigned long long HighMemoryThreshold;// Offset=0x35c8 Size=0x8
    void * HugePfnLists;// Offset=0x35d0 Size=0x8
    unsigned long long AvailableHugeIoRanges;// Offset=0x35d8 Size=0x8
    unsigned long long DriverPageCount;// Offset=0x35e0 Size=0x8
    unsigned long long DriverLastPage;// Offset=0x35e8 Size=0x8
    unsigned long long DriverNonSlabAttempted;// Offset=0x35f0 Size=0x8
    unsigned long long DriverSlabLastFailTime;// Offset=0x35f8 Size=0x8
    unsigned long long MdlPagesByListsTotal;// Offset=0x3600 Size=0x8
    unsigned long long MdlPagesByListsFromSlab;// Offset=0x3608 Size=0x8
    unsigned long long MdlPagesByListsSlabNotEligible;// Offset=0x3610 Size=0x8
    unsigned long long MdlPagesPreferContiguousSlabEligible;// Offset=0x3618 Size=0x8
    unsigned long long MdlPagesPreferContiguousFromSlab;// Offset=0x3620 Size=0x8
    unsigned long long MdlSlabPagesFreeZeroedTotal;// Offset=0x3628 Size=0x8
    unsigned long MdlSlabPagesFreeZeroedBuckets[4];// Offset=0x3630 Size=0x10
    unsigned long long SystemPageTablePagesNoSlab;// Offset=0x3640 Size=0x8
};

struct _MI_PARTITION_COMMIT// Size=0x50 (Id=1947)
{
    unsigned long long PeakCommitment;// Offset=0x0 Size=0x8
    unsigned long long TotalCommitLimitMaximum;// Offset=0x8 Size=0x8
    unsigned long Popups[2];// Offset=0x10 Size=0x8
    unsigned long long LowCommitThreshold;// Offset=0x18 Size=0x8
    unsigned long long HighCommitThreshold;// Offset=0x20 Size=0x8
    unsigned long long ExtremelyHighCommitThreshold;// Offset=0x28 Size=0x8
    unsigned long long IdealCommitTarget;// Offset=0x30 Size=0x8
    long Lock;// Offset=0x38 Size=0x4
    unsigned long long SystemCommitReserve;// Offset=0x40 Size=0x8
    unsigned long long OverCommit;// Offset=0x48 Size=0x8
};

enum _MI_PROCESSOR_ACTIVITY_TYPE
{
    MiProcessorActivityBackground=0,
    MiProcessorActivityOnDemand=1,
    MiProcessorActivityMaximum=2
};

struct _MI_PARTITION_ZEROING// Size=0x48 (Id=1899)
{
    struct _WORK_QUEUE_ITEM RebalanceZeroFreeWorkItem;// Offset=0x0 Size=0x20
    long BackgroundZeroingDisabled;// Offset=0x20 Size=0x4
    long BootEnginesCalibrating;// Offset=0x24 Size=0x4
    struct _KEVENT BootEnginesCalibrationWaiters;// Offset=0x28 Size=0x18
    long ZeroFreePageSlistMinimum;// Offset=0x40 Size=0x4
    enum _MI_PROCESSOR_ACTIVITY_TYPE BackgroundZeroingPreference;// Offset=0x44 Size=0x4
};

struct _MI_COMBINE_WORKITEM// Size=0x28 (Id=1727)
{
    void * NextEntry;// Offset=0x0 Size=0x8
    struct _WORK_QUEUE_ITEM WorkItem;// Offset=0x8 Size=0x20
};

struct _MI_COMBINE_PAGE_LISTHEAD// Size=0x10 (Id=2084)
{
    struct _RTL_AVL_TREE Table;// Offset=0x0 Size=0x8
    long Lock;// Offset=0x8 Size=0x4
};

struct _MI_PAGE_COMBINE_STATISTICS// Size=0x28 (Id=1782)
{
    unsigned long long PagesScannedActive;// Offset=0x0 Size=0x8
    unsigned long long PagesScannedStandby;// Offset=0x8 Size=0x8
    unsigned long long PagesCombined;// Offset=0x10 Size=0x8
    unsigned long CombineScanCount;// Offset=0x18 Size=0x4
    long CombinedBlocksInUse;// Offset=0x1c Size=0x4
    long SumCombinedBlocksReferenceCount;// Offset=0x20 Size=0x4
    unsigned long NonSlabPagesUsedForInPage;// Offset=0x24 Size=0x4
};

struct _MI_PAGE_COMBINING_SUPPORT// Size=0x190 (Id=1586)
{
    struct _MI_PARTITION * Partition;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY ArbitraryPfnMapList;// Offset=0x8 Size=0x10
    struct _MI_COMBINE_WORKITEM FreeCombinePoolItem;// Offset=0x18 Size=0x28
    unsigned long CombiningThreadCount;// Offset=0x40 Size=0x4
    struct _LIST_ENTRY CombinePageFreeList;// Offset=0x48 Size=0x10
    long CombineFreeListLock;// Offset=0x58 Size=0x4
    struct _MI_COMBINE_PAGE_LISTHEAD CombinePageListHeads[16];// Offset=0x60 Size=0x100
    unsigned long long CommonPageCombineDomain;// Offset=0x160 Size=0x8
    struct _MI_PAGE_COMBINE_STATISTICS PageCombineStats;// Offset=0x168 Size=0x28
};

struct _KDPC// Size=0x40 (Id=83)
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

struct _MI_ACCESS_LOG_STATE// Size=0xc0 (Id=1678)
{
    struct _MM_PAGE_ACCESS_INFO_HEADER * CcAccessLog;// Offset=0x0 Size=0x8
    struct _WORK_QUEUE_ITEM DisableAccessLoggingWorkItem;// Offset=0x8 Size=0x20
    unsigned long DisableAccessLoggingState;// Offset=0x28 Size=0x4
    unsigned long Enabled;// Offset=0x2c Size=0x4
    unsigned long MinLoggingPriority;// Offset=0x30 Size=0x4
    struct _MM_PAGE_ACCESS_INFO_HEADER * PfnRepurposeLog;// Offset=0x38 Size=0x8
    struct _KDPC AllocatePfnRepurposeDpc;// Offset=0x40 Size=0x40
    long AccessLoggingLock;// Offset=0x80 Size=0x4
};

struct _MMWORKING_SET_EXPANSION_HEAD// Size=0x10 (Id=1280)
{
    struct _LIST_ENTRY ListHead;// Offset=0x0 Size=0x10
};

struct _MI_SPECIAL_PURPOSE_MEMORY_STATE// Size=0x38 (Id=1331)
{
    union // Size=0x20 (Id=0)
    {
        struct _LIST_ENTRY TypesList;// Offset=0x0 Size=0x10
        struct _LIST_ENTRY CacheEligibleList;// Offset=0x10 Size=0x10
        struct _EPARTITION * RegularMemoryParentPartitionObject;// Offset=0x0 Size=0x8
        void * SpecialPurposeMemoryParentHandle;// Offset=0x8 Size=0x8
        unsigned long long Attributes[4];// Offset=0x10 Size=0x20
    };
    struct _EX_PUSH_LOCK Lock;// Offset=0x30 Size=0x8
};

struct _MI_SLAB_IDENTITY_REFERENCE// Size=0x8 (Id=1305)
{
    long long ReferenceCount;// Offset=0x0 Size=0x8
};

struct _RTL_BITMAP// Size=0x10 (Id=13)
{
    unsigned long SizeOfBitMap;// Offset=0x0 Size=0x4
    unsigned long * Buffer;// Offset=0x8 Size=0x8
};

struct _MI_PARTITION_SLABS// Size=0x2c0 (Id=1278)
{
    struct _MI_SLAB_TYPE_IDENTIFIER * SlabTypeIdentifiers;// Offset=0x0 Size=0x8
    unsigned long long SlabEntriesDemoted;// Offset=0x8 Size=0x8
    long SlabDemoteInProgress;// Offset=0x10 Size=0x4
    unsigned long SlabTypeAcquiresCharges;// Offset=0x14 Size=0x4
    struct _MI_SLAB_IDENTITY_REFERENCE IdentityRefs[64];// Offset=0x18 Size=0x200
    struct _RTL_BITMAP InUseIdentitiesBitmap;// Offset=0x218 Size=0x10
    unsigned long InUseIdentitiesBitmapBuffer[2];// Offset=0x228 Size=0x8
    long IdentitySlabsInitialized;// Offset=0x230 Size=0x4
    struct _EX_PUSH_LOCK IdentitiesLock;// Offset=0x238 Size=0x8
    unsigned long long IdentitySlabAvailablePages;// Offset=0x240 Size=0x8
    struct _MI_AVAILABLE_PAGE_WAIT_STATES IdentitySlabAvailablePagesWaitState[2];// Offset=0x248 Size=0x40
    struct _EX_RUNDOWN_REF ReplenishRundownProtection;// Offset=0x288 Size=0x8
    unsigned long long LowMemoryConditionStartTime;// Offset=0x290 Size=0x8
};

struct _MMSUPPORT_FLAGS// Size=0x4 (Id=674)
{
    union // Size=0x4 (Id=0)
    {
        struct // Size=0x2 (Id=0)
        {
            unsigned char WorkingSetType:4;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x4
            unsigned char Reserved0:2;// Offset=0x0 Size=0x1 BitOffset=0x4 BitSize=0x2
            unsigned char MaximumWorkingSetHard:1;// Offset=0x0 Size=0x1 BitOffset=0x6 BitSize=0x1
            unsigned char MinimumWorkingSetHard:1;// Offset=0x0 Size=0x1 BitOffset=0x7 BitSize=0x1
            unsigned char Reserved1:1;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x1
            unsigned char TrimmerState:2;// Offset=0x1 Size=0x1 BitOffset=0x1 BitSize=0x2
            unsigned char LinearAddressProtected:1;// Offset=0x1 Size=0x1 BitOffset=0x3 BitSize=0x1
            unsigned char PageStealers:4;// Offset=0x1 Size=0x1 BitOffset=0x4 BitSize=0x4
        };
        unsigned short u1;// Offset=0x0 Size=0x2
        unsigned char MemoryPriority;// Offset=0x2 Size=0x1
        struct // Size=0x1 (Id=0)
        {
            unsigned char WsleDeleted:1;// Offset=0x3 Size=0x1 BitOffset=0x0 BitSize=0x1
            unsigned char SvmEnabled:1;// Offset=0x3 Size=0x1 BitOffset=0x1 BitSize=0x1
            unsigned char ForceAge:1;// Offset=0x3 Size=0x1 BitOffset=0x2 BitSize=0x1
            unsigned char ForceTrim:1;// Offset=0x3 Size=0x1 BitOffset=0x3 BitSize=0x1
            unsigned char CommitReleaseState:2;// Offset=0x3 Size=0x1 BitOffset=0x4 BitSize=0x2
            unsigned char Reserved2:2;// Offset=0x3 Size=0x1 BitOffset=0x6 BitSize=0x2
        };
        unsigned char u2;// Offset=0x3 Size=0x1
        unsigned long EntireFlags;// Offset=0x0 Size=0x4
    };
};

struct _MMSUPPORT_INSTANCE// Size=0xc0 (Id=676)
{
    unsigned long NextPageColor;// Offset=0x0 Size=0x4
    unsigned long PageFaultCount;// Offset=0x4 Size=0x4
    unsigned long long TrimmedPageCount;// Offset=0x8 Size=0x8
    struct _MMWSL_INSTANCE * VmWorkingSetList;// Offset=0x10 Size=0x8
    struct _LIST_ENTRY WorkingSetExpansionLinks;// Offset=0x18 Size=0x10
    unsigned long long AgeDistribution[8];// Offset=0x28 Size=0x40
    struct _KGATE * ExitOutswapGate;// Offset=0x68 Size=0x8
    unsigned long long MinimumWorkingSetSize;// Offset=0x70 Size=0x8
    unsigned long long MaximumWorkingSetSize;// Offset=0x78 Size=0x8
    unsigned long long WorkingSetLeafSize;// Offset=0x80 Size=0x8
    unsigned long long WorkingSetLeafPrivateSize;// Offset=0x88 Size=0x8
    unsigned long long WorkingSetSize;// Offset=0x90 Size=0x8
    unsigned long long WorkingSetPrivateSize;// Offset=0x98 Size=0x8
    unsigned long long PeakWorkingSetSize;// Offset=0xa0 Size=0x8
    unsigned long HardFaultCount;// Offset=0xa8 Size=0x4
    unsigned short LastTrimStamp;// Offset=0xac Size=0x2
    unsigned short PartitionId;// Offset=0xae Size=0x2
    unsigned long long SelfmapLock;// Offset=0xb0 Size=0x8
    struct _MMSUPPORT_FLAGS Flags;// Offset=0xb8 Size=0x4
    unsigned long InterlockedFlags;// Offset=0xbc Size=0x4
};

struct _MI_WORKING_SET_PAGE_TABLE_AGE_LINKS// Size=0x18 (Id=2461)
{
    long Lock;// Offset=0x0 Size=0x4
    unsigned long EntryCount;// Offset=0x4 Size=0x4
    struct _MMPFN * Flink;// Offset=0x8 Size=0x8
    struct _MMPFN * Blink;// Offset=0x10 Size=0x8
};

struct _MMWSL_INSTANCE// Size=0x100 (Id=2037)
{
    struct _MMPTE * PteResumePoint[3];// Offset=0x0 Size=0x18
    unsigned long LastAccessClearingRemainder;// Offset=0x18 Size=0x4
    unsigned long LastAgingRemainder;// Offset=0x1c Size=0x4
    unsigned long long LockedEntries;// Offset=0x20 Size=0x8
    struct _MI_WORKING_SET_PAGE_TABLE_AGE_LINKS ActivePageTableLinks[8];// Offset=0x40 Size=0xc0
};

struct _MI_PARTITION_WORKING_SET// Size=0x1c0 (Id=1928)
{
    struct _MMSUPPORT_INSTANCE VmInstance;// Offset=0x0 Size=0xc0
    struct _MMWSL_INSTANCE VmWorkingSetList;// Offset=0xc0 Size=0x100
};

struct _MDL// Size=0x30 (Id=581)
{
    struct _MDL * Next;// Offset=0x0 Size=0x8
    short Size;// Offset=0x8 Size=0x2
    short MdlFlags;// Offset=0xa Size=0x2
    unsigned short AllocationProcessorNumber;// Offset=0xc Size=0x2
    unsigned short Reserved;// Offset=0xe Size=0x2
    struct _EPROCESS * Process;// Offset=0x10 Size=0x8
    void * MappedSystemVa;// Offset=0x18 Size=0x8
    void * StartVa;// Offset=0x20 Size=0x8
    unsigned long ByteCount;// Offset=0x28 Size=0x4
    unsigned long ByteOffset;// Offset=0x2c Size=0x4
};

struct _unnamed_1714// Size=0x38 (Id=1714)
{
    struct _MDL Mdl;// Offset=0x0 Size=0x30
    unsigned long long Page[1];// Offset=0x30 Size=0x8
};

struct _MI_PAGEFILE_TRACES// Size=0x80 (Id=1715)
{
    long Status;// Offset=0x0 Size=0x4
    unsigned char PagefileNumber;// Offset=0x4 Size=0x1
    unsigned char Priority;// Offset=0x5 Size=0x1
    unsigned char IrpPriority;// Offset=0x6 Size=0x1
    unsigned char ReservationWrite;// Offset=0x7 Size=0x1
    unsigned long long CurrentTime;// Offset=0x8 Size=0x8
    unsigned long long AvailablePages;// Offset=0x10 Size=0x8
    unsigned long long ModifiedPagesTotal;// Offset=0x18 Size=0x8
    unsigned long long ModifiedPagefilePages;// Offset=0x20 Size=0x8
    unsigned long long ModifiedNoWritePages;// Offset=0x28 Size=0x8
    unsigned long long ModifiedPagefileNoReservationPages;// Offset=0x30 Size=0x8
    unsigned long long ModifiedPageFileNoReservationCompressPages;// Offset=0x38 Size=0x8
    unsigned long long ModifiedPagefileReservationPages;// Offset=0x40 Size=0x8
    struct _unnamed_1714 LocalMdl;// Offset=0x48 Size=0x38
};

struct _MI_VISIBLE_PARTITION// Size=0x1500 (Id=1366)
{
    unsigned long long LowestPhysicalPage;// Offset=0x0 Size=0x8
    unsigned long long HighestPhysicalPage;// Offset=0x8 Size=0x8
    unsigned long long NumberOfPhysicalPages;// Offset=0x10 Size=0x8
    unsigned long NumberOfPagingFiles;// Offset=0x18 Size=0x4
    unsigned char SystemCacheInitialized;// Offset=0x1c Size=0x1
    struct _MMPAGING_FILE * PagingFile[16];// Offset=0x20 Size=0x80
    unsigned long long AvailablePages;// Offset=0xc0 Size=0x8
    unsigned long long ResidentAvailablePages;// Offset=0x100 Size=0x8
    struct _MI_PARTITION_WORKING_SET PartitionWs[1];// Offset=0x140 Size=0x1c0
    unsigned long long TotalCommittedPages;// Offset=0x300 Size=0x8
    unsigned long long TotalCommittedPagesExposed;// Offset=0x340 Size=0x8
    struct _MMPFNLIST ModifiedPageListHead;// Offset=0x380 Size=0x58
    struct _MMPFNLIST ModifiedNoWritePageListHead;// Offset=0x400 Size=0x58
    unsigned long long TotalCommitLimit;// Offset=0x458 Size=0x8
    unsigned long long TotalPagesForPagingFile;// Offset=0x460 Size=0x8
    unsigned long long VadPhysicalPages;// Offset=0x468 Size=0x8
    unsigned long long ProcessLockedFilePages;// Offset=0x470 Size=0x8
    unsigned long long SharedCommit;// Offset=0x478 Size=0x8
    unsigned long long MdlPagesAllocated;// Offset=0x480 Size=0x8
    unsigned long long ContiguousPagesAllocated;// Offset=0x488 Size=0x8
    unsigned long long SlabAllocatorPages;// Offset=0x490 Size=0x8
    unsigned long long SlabAllocatorPagesUncharged;// Offset=0x498 Size=0x8
    unsigned long long BootSlabPages;// Offset=0x4a0 Size=0x8
    unsigned long long SecureKernelPagesFromNonChargedSlabs;// Offset=0x4a8 Size=0x8
    unsigned long ChargeCommitmentFailures[4];// Offset=0x4b0 Size=0x10
    long PageFileTraceIndex;// Offset=0x4c0 Size=0x4
    struct _MI_PAGEFILE_TRACES PageFileTraces[32];// Offset=0x4c8 Size=0x1000
};

struct _MI_PARTITION// Size=0x5d40 (Id=698)
{
    struct _MI_PARTITION_CORE Core;// Offset=0x0 Size=0x1e0
    struct _MI_PARTITION_MODWRITES Modwriter;// Offset=0x1e0 Size=0x2c8
    struct _MI_PARTITION_STORES Store;// Offset=0x4b0 Size=0x210
    struct _MI_PARTITION_SEGMENTS Segments;// Offset=0x6c0 Size=0x480
    struct _MI_PARTITION_PAGE_LISTS PageLists;// Offset=0xb40 Size=0x3680
    struct _MI_PARTITION_COMMIT Commit;// Offset=0x41c0 Size=0x50
    struct _MI_PARTITION_ZEROING Zeroing;// Offset=0x4210 Size=0x48
    struct _MI_PAGE_COMBINING_SUPPORT PageCombine;// Offset=0x4258 Size=0x190
    struct _MI_ACCESS_LOG_STATE AccessLog;// Offset=0x4400 Size=0xc0
    void * WorkingSetControl;// Offset=0x44c0 Size=0x8
    struct _MMWORKING_SET_EXPANSION_HEAD WorkingSetExpansionHead;// Offset=0x44c8 Size=0x10
    struct _MI_SPECIAL_PURPOSE_MEMORY_STATE SpecialPurposeMemory;// Offset=0x44d8 Size=0x38
    struct _MI_PARTITION_SLABS Slabs;// Offset=0x4540 Size=0x2c0
    unsigned long long LastPeriodicTelemetryLogTime;// Offset=0x4800 Size=0x8
    struct _MI_VISIBLE_PARTITION Vp;// Offset=0x4840 Size=0x1500
};
