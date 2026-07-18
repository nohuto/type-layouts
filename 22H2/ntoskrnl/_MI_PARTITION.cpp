struct _MI_PARTITION_FLAGS// Size=0x4 (Id=1803)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long BeingDeleted:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long PageListsInitialized:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long StoreReservedPagesCharged:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long UseProtectedSlabAllocators:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long UseUnprotectedSlabAllocators:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long PureHoldingPartition:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long ZeroPagesOptional:1;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1
        unsigned long BackgroundZeroingDisabled:1;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x1
    };
};

union _anonymous_1387// Size=0x4 (Id=1387)
{
    unsigned long LongFlags;// Offset=0x0 Size=0x4
    struct _MI_PARTITION_FLAGS Flags;// Offset=0x0 Size=0x4
};

struct _RTL_AVL_TREE// Size=0x8 (Id=120)
{
    struct _RTL_BALANCED_NODE * Root;// Offset=0x0 Size=0x8
};

struct _LIST_ENTRY// Size=0x10 (Id=3)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _WORK_QUEUE_ITEM// Size=0x20 (Id=27)
{
    struct _LIST_ENTRY List;// Offset=0x0 Size=0x10
    void  ( * WorkerRoutine)(void * );// Offset=0x10 Size=0x8
    void * Parameter;// Offset=0x18 Size=0x8
};

struct _DISPATCHER_HEADER// Size=0x18 (Id=157)
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

struct _KEVENT// Size=0x18 (Id=20)
{
    struct _DISPATCHER_HEADER Header;// Offset=0x0 Size=0x18
};

struct _EX_PUSH_LOCK// Size=0x8 (Id=122)
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

struct _MI_PARTITION_CORE// Size=0x1b8 (Id=1388)
{
    unsigned short PartitionId;// Offset=0x0 Size=0x2
    union _anonymous_1387 u;// Offset=0x4 Size=0x4
    unsigned long Signature;// Offset=0x8 Size=0x4
    unsigned char MemoryConfigurationChanged;// Offset=0xc Size=0x1
    struct _MI_NODE_INFORMATION * NodeInformation;// Offset=0x10 Size=0x8
    struct _RTL_AVL_TREE PageRoot;// Offset=0x18 Size=0x8
    struct _PHYSICAL_MEMORY_DESCRIPTOR * MemoryNodeRuns;// Offset=0x20 Size=0x8
    unsigned long long MemoryBlockReferences;// Offset=0x28 Size=0x8
    struct _WORK_QUEUE_ITEM PfnUnmapWorkItem;// Offset=0x30 Size=0x20
    unsigned long long PfnUnmapCount;// Offset=0x50 Size=0x8
    void * PfnUnmapWaitList;// Offset=0x58 Size=0x8
    struct _PHYSICAL_MEMORY_DESCRIPTOR * MemoryRuns;// Offset=0x60 Size=0x8
    struct _KEVENT ExitEvent;// Offset=0x68 Size=0x18
    void * SystemThreadHandles[6];// Offset=0x80 Size=0x30
    struct _EPARTITION * PartitionObject;// Offset=0xb0 Size=0x8
    struct _EX_PUSH_LOCK PartitionSystemThreadsLock;// Offset=0xb8 Size=0x8
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
};

struct _MMPAGE_FILE_EXPANSION_FLAGS// Size=0x4 (Id=1979)
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
        unsigned char Spare3:2;// Offset=0x3 Size=0x1 BitOffset=0x6 BitSize=0x2
    };
};

union _anonymous_1524// Size=0x4 (Id=1524)
{
    unsigned long LongFlags;// Offset=0x0 Size=0x4
    struct _MMPAGE_FILE_EXPANSION_FLAGS Flags;// Offset=0x0 Size=0x4
};

struct _MMPAGE_FILE_EXPANSION// Size=0x58 (Id=1525)
{
    struct _SEGMENT * Segment;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY DereferenceList;// Offset=0x8 Size=0x10
    struct _MI_PARTITION * Partition;// Offset=0x18 Size=0x8
    unsigned long long RequestedExpansionSize;// Offset=0x20 Size=0x8
    unsigned long long ActualExpansion;// Offset=0x28 Size=0x8
    struct _KEVENT Event;// Offset=0x30 Size=0x18
    long InProgress;// Offset=0x48 Size=0x4
    union _anonymous_1524 u1;// Offset=0x4c Size=0x4
    void ** ActiveEntry;// Offset=0x50 Size=0x8
};

struct _KGATE// Size=0x18 (Id=1207)
{
    struct _DISPATCHER_HEADER Header;// Offset=0x0 Size=0x18
};

struct _MMMOD_WRITER_LISTHEAD// Size=0x28 (Id=1811)
{
    struct _LIST_ENTRY ListHead;// Offset=0x0 Size=0x10
    union // Size=0x18 (Id=0)
    {
        struct _KGATE Gate;// Offset=0x10 Size=0x18
        struct _KEVENT Event;// Offset=0x10 Size=0x18
    };
};

union _MI_RESERVATION_CLUSTER_INFO// Size=0x4 (Id=1889)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long ClusterSize:10;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0xa
        unsigned long SequenceNumber:22;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x16
    };
    long EntireInfo;// Offset=0x0 Size=0x4
};

struct _MI_MODWRITE_DATA// Size=0x40 (Id=1890)
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

struct _EX_RUNDOWN_REF// Size=0x8 (Id=458)
{
    union // Size=0x8 (Id=0)
    {
        unsigned long long Count;// Offset=0x0 Size=0x8
        void * Ptr;// Offset=0x0 Size=0x8
    };
};

struct _MI_RESTRICTED_MODWRITES// Size=0x3 (Id=1982)
{
    unsigned char MaximumClusterPages;// Offset=0x0 Size=0x1
    unsigned char ReducedClusterWrites;// Offset=0x1 Size=0x1
    unsigned char ImposeDelay;// Offset=0x2 Size=0x1
};

struct _MI_PARTITION_MODWRITES// Size=0x2c0 (Id=1708)
{
    struct _MMPAGE_FILE_EXPANSION AttemptForCantExtend;// Offset=0x0 Size=0x58
    struct _MMPAGE_FILE_EXPANSION PageFileContract;// Offset=0x58 Size=0x58
    unsigned long long NumberOfMappedMdls;// Offset=0xb0 Size=0x8
    long NumberOfMappedMdlsInUse;// Offset=0xb8 Size=0x4
    unsigned long NumberOfMappedMdlsInUsePeak;// Offset=0xbc Size=0x4
    struct _MMMOD_WRITER_LISTHEAD MappedFileHeader;// Offset=0xc0 Size=0x28
    unsigned char NeedMappedMdl;// Offset=0xe8 Size=0x1
    unsigned char NeedPageFileMdl;// Offset=0xe9 Size=0x1
    unsigned char ModwriterActive;// Offset=0xea Size=0x1
    unsigned char TransitionInserted;// Offset=0xeb Size=0x1
    long LastModifiedWriteError;// Offset=0xec Size=0x4
    long LastMappedWriteError;// Offset=0xf0 Size=0x4
    unsigned long MappedFileWriteSucceeded;// Offset=0xf4 Size=0x4
    unsigned long MappedWriteBurstCount;// Offset=0xf8 Size=0x4
    unsigned long LowPriorityModWritesOutstanding;// Offset=0xfc Size=0x4
    struct _KEVENT BoostModWriteIoPriorityEvent;// Offset=0x100 Size=0x18
    long ModifiedWriterThreadPriority;// Offset=0x118 Size=0x4
    unsigned long long ModifiedPagesLowPriorityGoal;// Offset=0x120 Size=0x8
    struct _KEVENT ModifiedPageWriterEvent;// Offset=0x128 Size=0x18
    struct _KEVENT ModifiedWriterExitedEvent;// Offset=0x140 Size=0x18
    long WriteAllPagefilePages;// Offset=0x158 Size=0x4
    long WriteAllMappedPages;// Offset=0x15c Size=0x4
    struct _KEVENT MappedPageWriterEvent;// Offset=0x160 Size=0x18
    struct _MI_MODWRITE_DATA ModWriteData;// Offset=0x178 Size=0x40
    struct _KEVENT RescanPageFilesEvent;// Offset=0x1b8 Size=0x18
    struct _MMMOD_WRITER_LISTHEAD PagingFileHeader;// Offset=0x1d0 Size=0x28
    struct _ETHREAD * ModifiedPageWriterThread;// Offset=0x1f8 Size=0x8
    struct _EX_RUNDOWN_REF ModifiedPageWriterRundown;// Offset=0x200 Size=0x8
    struct _WORK_QUEUE_ITEM PagefileScanWorkItem;// Offset=0x208 Size=0x20
    unsigned long PagefileScanCount;// Offset=0x228 Size=0x4
    long ClusterRestrictionLock;// Offset=0x22c Size=0x4
    struct _MI_RESTRICTED_MODWRITES ClusterRestrictions[2];// Offset=0x230 Size=0x6
    struct _KEVENT NotifyStoreMemoryConditions;// Offset=0x238 Size=0x18
    unsigned char DelayMappedWrite;// Offset=0x250 Size=0x1
    unsigned long PagefileReservationsEnabled;// Offset=0x254 Size=0x4
    struct _EX_PUSH_LOCK PageFileCreationLock;// Offset=0x258 Size=0x8
    struct _WORK_QUEUE_ITEM TrimPagefileWorkItem;// Offset=0x260 Size=0x20
    unsigned long long LastTrimPagefileTime;// Offset=0x280 Size=0x8
    struct _WORK_QUEUE_ITEM WsSwapPagefileContractWorkItem;// Offset=0x288 Size=0x20
    long WsSwapPageFileContractionInProgress;// Offset=0x2a8 Size=0x4
    struct _EX_PUSH_LOCK WorkingSetSwapLock;// Offset=0x2b0 Size=0x8
    long WorkingSetInswapLock;// Offset=0x2b8 Size=0x4
};

union _anonymous_1017// Size=0x4 (Id=1017)
{
    struct // Size=0x4 (Id=0)
    {
        long FlushCompleting:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        long FlushInProgress:31;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1f
    };
    long Long;// Offset=0x0 Size=0x4
};

struct _anonymous_23// Size=0x10 (Id=23)
{
    struct // Size=0x10 (Id=0)
    {
        unsigned long long Depth:16;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x10
        unsigned long long Sequence:48;// Offset=0x0 Size=0x8 BitOffset=0x10 BitSize=0x30
        unsigned long long Reserved:4;// Offset=0x8 Size=0x8 BitOffset=0x0 BitSize=0x4
        unsigned long long NextEntry:60;// Offset=0x8 Size=0x8 BitOffset=0x4 BitSize=0x3c
    };
};

union _SLIST_HEADER// Size=0x10 (Id=24)
{
    unsigned long long Alignment;// Offset=0x0 Size=0x8
    unsigned long long Region;// Offset=0x8 Size=0x8
    struct _anonymous_23 HeaderX64;// Offset=0x0 Size=0x10
};

struct _MI_PARTITION_STORES// Size=0x90 (Id=1018)
{
    union _anonymous_1017 WriteAllStoreHintedPages;// Offset=0x0 Size=0x4
    unsigned long VirtualPageFileNumber;// Offset=0x4 Size=0x4
    unsigned long Registered;// Offset=0x8 Size=0x4
    unsigned long ReadClusterSizeMax;// Offset=0xc Size=0x4
    unsigned long EvictFlushRequestCount;// Offset=0x10 Size=0x4
    unsigned long ModifiedWriteDisableCount;// Offset=0x14 Size=0x4
    unsigned long WriteIssueFailures;// Offset=0x18 Size=0x4
    unsigned long WritesOutstanding;// Offset=0x1c Size=0x4
    long EvictFlushLock;// Offset=0x20 Size=0x4
    struct _ETHREAD * EvictionThread;// Offset=0x28 Size=0x8
    struct _KEVENT EvictEvent;// Offset=0x30 Size=0x18
    union _SLIST_HEADER WriteSupportSListHead;// Offset=0x50 Size=0x10
    struct _KEVENT EvictFlushCompleteEvent;// Offset=0x60 Size=0x18
    struct _RTL_BITMAP * ModifiedWriteFailedBitmap;// Offset=0x78 Size=0x8
    struct _EPROCESS * StoreProcess;// Offset=0x80 Size=0x8
    unsigned long DeleteStoredPages;// Offset=0x88 Size=0x4
};

struct _KSEMAPHORE// Size=0x20 (Id=631)
{
    struct _DISPATCHER_HEADER Header;// Offset=0x0 Size=0x18
    long Limit;// Offset=0x18 Size=0x4
};

struct _MMDEREFERENCE_SEGMENT_HEADER// Size=0x50 (Id=1849)
{
    struct _KSEMAPHORE Semaphore;// Offset=0x0 Size=0x20
    struct _LIST_ENTRY ControlAreaDeleteListHead;// Offset=0x20 Size=0x10
    struct _LIST_ENTRY UnusedSegmentDeleteListHead;// Offset=0x30 Size=0x10
    struct _LIST_ENTRY PagefileExtensionListHead;// Offset=0x40 Size=0x10
};

struct _anonymous_11// Size=0x8 (Id=11)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    unsigned long HighPart;// Offset=0x4 Size=0x4
};

union _ULARGE_INTEGER// Size=0x8 (Id=12)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    unsigned long HighPart;// Offset=0x4 Size=0x4
    struct _anonymous_11 u;// Offset=0x0 Size=0x8
    unsigned long long QuadPart;// Offset=0x0 Size=0x8
};

struct _KTIMER// Size=0x40 (Id=1613)
{
    struct _DISPATCHER_HEADER Header;// Offset=0x0 Size=0x18
    union _ULARGE_INTEGER DueTime;// Offset=0x18 Size=0x8
    struct _LIST_ENTRY TimerListEntry;// Offset=0x20 Size=0x10
    struct _KDPC * Dpc;// Offset=0x30 Size=0x8
    unsigned short Processor;// Offset=0x38 Size=0x2
    unsigned short TimerType;// Offset=0x3a Size=0x2
    unsigned long Period;// Offset=0x3c Size=0x4
};

struct _SINGLE_LIST_ENTRY// Size=0x8 (Id=393)
{
    struct _SINGLE_LIST_ENTRY * Next;// Offset=0x0 Size=0x8
};

struct _MMPTE_HARDWARE// Size=0x8 (Id=997)
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
        unsigned long long PageFrameNumber:36;// Offset=0x0 Size=0x8 BitOffset=0xc BitSize=0x24
        unsigned long long ReservedForHardware:4;// Offset=0x0 Size=0x8 BitOffset=0x30 BitSize=0x4
        unsigned long long ReservedForSoftware:4;// Offset=0x0 Size=0x8 BitOffset=0x34 BitSize=0x4
        unsigned long long WsleAge:4;// Offset=0x0 Size=0x8 BitOffset=0x38 BitSize=0x4
        unsigned long long WsleProtection:3;// Offset=0x0 Size=0x8 BitOffset=0x3c BitSize=0x3
        unsigned long long NoExecute:1;// Offset=0x0 Size=0x8 BitOffset=0x3f BitSize=0x1
    };
};

struct _MMPTE_PROTOTYPE// Size=0x8 (Id=1397)
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

struct _MMPTE_SOFTWARE// Size=0x8 (Id=1247)
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
        unsigned long long Unused:5;// Offset=0x0 Size=0x8 BitOffset=0x1b BitSize=0x5
        unsigned long long PageFileHigh:32;// Offset=0x0 Size=0x8 BitOffset=0x20 BitSize=0x20
    };
};

struct _MMPTE_TIMESTAMP// Size=0x8 (Id=1486)
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

struct _MMPTE_TRANSITION// Size=0x8 (Id=1778)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long Valid:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long Write:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
        unsigned long long Spare:1;// Offset=0x0 Size=0x8 BitOffset=0x2 BitSize=0x1
        unsigned long long IoTracker:1;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x1
        unsigned long long SwizzleBit:1;// Offset=0x0 Size=0x8 BitOffset=0x4 BitSize=0x1
        unsigned long long Protection:5;// Offset=0x0 Size=0x8 BitOffset=0x5 BitSize=0x5
        unsigned long long Prototype:1;// Offset=0x0 Size=0x8 BitOffset=0xa BitSize=0x1
        unsigned long long Transition:1;// Offset=0x0 Size=0x8 BitOffset=0xb BitSize=0x1
        unsigned long long PageFrameNumber:36;// Offset=0x0 Size=0x8 BitOffset=0xc BitSize=0x24
        unsigned long long Unused:16;// Offset=0x0 Size=0x8 BitOffset=0x30 BitSize=0x10
    };
};

struct _MMPTE_SUBSECTION// Size=0x8 (Id=991)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long Valid:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long Unused0:3;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x3
        unsigned long long SwizzleBit:1;// Offset=0x0 Size=0x8 BitOffset=0x4 BitSize=0x1
        unsigned long long Protection:5;// Offset=0x0 Size=0x8 BitOffset=0x5 BitSize=0x5
        unsigned long long Prototype:1;// Offset=0x0 Size=0x8 BitOffset=0xa BitSize=0x1
        unsigned long long ColdPage:1;// Offset=0x0 Size=0x8 BitOffset=0xb BitSize=0x1
        unsigned long long Unused1:3;// Offset=0x0 Size=0x8 BitOffset=0xc BitSize=0x3
        unsigned long long ExecutePrivilege:1;// Offset=0x0 Size=0x8 BitOffset=0xf BitSize=0x1
        long long SubsectionAddress:48;// Offset=0x0 Size=0x8 BitOffset=0x10 BitSize=0x30
    };
};

struct _MMPTE_LIST// Size=0x8 (Id=1576)
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
        unsigned long long filler1:16;// Offset=0x0 Size=0x8 BitOffset=0xc BitSize=0x10
        unsigned long long NextEntry:36;// Offset=0x0 Size=0x8 BitOffset=0x1c BitSize=0x24
    };
};

union _anonymous_529// Size=0x8 (Id=529)
{
    unsigned long long Long;// Offset=0x0 Size=0x8
    unsigned long long VolatileLong;// Offset=0x0 Size=0x8
    struct _MMPTE_HARDWARE Hard;// Offset=0x0 Size=0x8
    struct _MMPTE_PROTOTYPE Proto;// Offset=0x0 Size=0x8
    struct _MMPTE_SOFTWARE Soft;// Offset=0x0 Size=0x8
    struct _MMPTE_TIMESTAMP TimeStamp;// Offset=0x0 Size=0x8
    struct _MMPTE_TRANSITION Trans;// Offset=0x0 Size=0x8
    struct _MMPTE_SUBSECTION Subsect;// Offset=0x0 Size=0x8
    struct _MMPTE_LIST List;// Offset=0x0 Size=0x8
};

struct _MMPTE// Size=0x8 (Id=530)
{
    union _anonymous_529 u;// Offset=0x0 Size=0x8
};

struct _MI_PTE_CHAIN_HEAD// Size=0x18 (Id=1939)
{
    struct _MMPTE Flink;// Offset=0x0 Size=0x8
    struct _MMPTE Blink;// Offset=0x8 Size=0x8
    struct _MMPTE * PteBase;// Offset=0x10 Size=0x8
};

struct _MI_CROSS_PARTITION_CHARGES// Size=0x20 (Id=1884)
{
    unsigned long long CurrentCharges;// Offset=0x0 Size=0x8
    unsigned long long ChargeFailures;// Offset=0x8 Size=0x8
    unsigned long long ChargePeak;// Offset=0x10 Size=0x8
    unsigned long long ChargeMinimum;// Offset=0x18 Size=0x8
};

struct _MI_PARTITION_SEGMENTS// Size=0x340 (Id=1482)
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
    struct _MMDEREFERENCE_SEGMENT_HEADER DereferenceSegmentHeader;// Offset=0xb0 Size=0x50
    struct _LIST_ENTRY DeleteOnCloseList;// Offset=0x100 Size=0x10
    struct _KTIMER DeleteOnCloseTimer;// Offset=0x110 Size=0x40
    unsigned char DeleteOnCloseTimerActive;// Offset=0x150 Size=0x1
    unsigned char SegmentDereferenceThreadExists;// Offset=0x151 Size=0x1
    void * SegmentDereferenceActiveControlArea;// Offset=0x158 Size=0x8
    unsigned long long UnusedSegmentPagedPool;// Offset=0x160 Size=0x8
    struct _LIST_ENTRY UnusedSegmentList;// Offset=0x168 Size=0x10
    struct _LIST_ENTRY UnusedSubsectionList;// Offset=0x178 Size=0x10
    struct _LIST_ENTRY DeleteSubsectionList;// Offset=0x188 Size=0x10
    struct _KEVENT ControlAreaDeleteEvent;// Offset=0x198 Size=0x18
    struct _SINGLE_LIST_ENTRY ControlAreaDeleteList;// Offset=0x1b0 Size=0x8
    struct _MI_PTE_CHAIN_HEAD FreeSystemCache;// Offset=0x1b8 Size=0x18
    struct _KEVENT CloneDereferenceEvent;// Offset=0x1d0 Size=0x18
    union _SLIST_HEADER CloneProtosSListHead;// Offset=0x1f0 Size=0x10
    struct _EX_PUSH_LOCK SystemCacheInitLock;// Offset=0x200 Size=0x8
    unsigned long PagefileExtensionWaiters;// Offset=0x208 Size=0x4
    unsigned long PagefileExtensionRequests;// Offset=0x20c Size=0x4
    struct _KEVENT PagefileExtensionWaitEvent;// Offset=0x210 Size=0x18
    struct _MI_CROSS_PARTITION_CHARGES SharedCharges[7];// Offset=0x228 Size=0xe0
    struct _KEVENT * SharedChargesDrainEvent;// Offset=0x308 Size=0x8
    struct _KEVENT * ControlAreasDrainEvent;// Offset=0x310 Size=0x8
    struct _KEVENT * CloneHeaderDrainEvent;// Offset=0x318 Size=0x8
    struct _EX_RUNDOWN_REF_CACHE_AWARE * ProbeRundownReference;// Offset=0x320 Size=0x8
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

struct _MMPFNLIST// Size=0x28 (Id=536)
{
    unsigned long long Total;// Offset=0x0 Size=0x8
    enum _MMLISTS ListName;// Offset=0x8 Size=0x4
    unsigned long long Flink;// Offset=0x10 Size=0x8
    unsigned long long Blink;// Offset=0x18 Size=0x8
    unsigned long long Lock;// Offset=0x20 Size=0x8
};

struct _MI_DECAY_TIMER_LINKAGE// Size=0x8 (Id=1624)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long Spare0:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long PreviousDecayPfn:31;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1f
        unsigned long long Spare1:1;// Offset=0x0 Size=0x8 BitOffset=0x20 BitSize=0x1
        unsigned long long NextDecayPfn:31;// Offset=0x0 Size=0x8 BitOffset=0x21 BitSize=0x1f
    };
};

union _anonymous_1285// Size=0x8 (Id=1285)
{
    unsigned long long Long;// Offset=0x0 Size=0x8
    struct _MI_DECAY_TIMER_LINKAGE e1;// Offset=0x0 Size=0x8
};

struct _MI_DECAY_TIMER_LINK// Size=0x8 (Id=1286)
{
    union _anonymous_1285 u1;// Offset=0x0 Size=0x8
};

struct _MI_LDW_WORK_CONTEXT// Size=0x38 (Id=1451)
{
    struct _WORK_QUEUE_ITEM WorkItem;// Offset=0x0 Size=0x20
    struct _FILE_OBJECT * FileObject;// Offset=0x20 Size=0x8
    long ErrorStatus;// Offset=0x28 Size=0x4
    long Active;// Offset=0x2c Size=0x4
    unsigned char FreeWhenDone;// Offset=0x30 Size=0x1
};

struct _MI_AVAILABLE_PAGE_WAIT_STATES// Size=0x20 (Id=1485)
{
    struct _KEVENT Event;// Offset=0x0 Size=0x18
    unsigned long EventSets;// Offset=0x18 Size=0x4
};

struct _RTL_BITMAP_EX// Size=0x10 (Id=989)
{
    unsigned long long SizeOfBitMap;// Offset=0x0 Size=0x8
    unsigned long long * Buffer;// Offset=0x8 Size=0x8
};

struct _RTL_RB_TREE// Size=0x10 (Id=118)
{
    struct _RTL_BALANCED_NODE * Root;// Offset=0x0 Size=0x8
    union // Size=0x1 (Id=0)
    {
        struct // Size=0x1 (Id=0)
        {
            unsigned char Encoded:1;// Offset=0x8 Size=0x1 BitOffset=0x0 BitSize=0x1
        };
        struct _RTL_BALANCED_NODE * Min;// Offset=0x8 Size=0x8
    };
};

enum _MI_SLAB_ALLOCATOR_TYPE
{
    MiSlabAllocatorTypeSlatProtected=0,
    MiSlabAllocatorTypeUnprotected=1,
    MiSlabAllocatorTypeMax=2
};

enum _MI_SLAB_ALLOCATOR_PROTECTION
{
    MiSlabAllocatorProtectionReadExecute=0,
    MiSlabAllocatorProtectionReadOnly=1,
    MiSlabAllocatorProtectionNoAccess=2,
    MiSlabAllocatorProtectionReadWrite=3,
    MiSlabAllocatorProtectionMax=4
};

union _anonymous_1621// Size=0x4 (Id=1621)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long EntryBecameEmpty:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Spare:31;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1f
    };
    unsigned long AllFlags;// Offset=0x0 Size=0x4
};

struct _MI_SLAB_ALLOCATOR_CONTEXT// Size=0x78 (Id=1622)
{
    struct _RTL_RB_TREE AllocationsTree;// Offset=0x0 Size=0x10
    long Lock;// Offset=0x10 Size=0x4
    struct _MI_SLAB_ALLOCATOR_ENTRY * SlabEntryHint;// Offset=0x18 Size=0x8
    unsigned long long FreePageCount;// Offset=0x20 Size=0x8
    unsigned long long SlabEntryCount;// Offset=0x28 Size=0x8
    enum _MI_SLAB_ALLOCATOR_TYPE Type;// Offset=0x30 Size=0x4
    enum _MI_SLAB_ALLOCATOR_PROTECTION Protection;// Offset=0x34 Size=0x4
    union _anonymous_1621 Flags;// Offset=0x38 Size=0x4
    struct _MMPFNLIST StandbyList;// Offset=0x40 Size=0x28
    unsigned long long LastReplenishTime;// Offset=0x68 Size=0x8
    unsigned long long LastFailureTime;// Offset=0x70 Size=0x8
};

struct _MI_PARTITION_PAGE_LISTS// Size=0xfc0 (Id=1283)
{
    struct _MMPFNLIST * FreePagesByColor[2];// Offset=0x0 Size=0x10
    struct _MMPFNLIST ZeroedPageListHead;// Offset=0x40 Size=0x28
    struct _MMPFNLIST FreePageListHead;// Offset=0x80 Size=0x28
    struct _MMPFNLIST StandbyPageListHead;// Offset=0xc0 Size=0x28
    struct _MMPFNLIST StandbyPageListByPriority[8];// Offset=0x100 Size=0x140
    struct _MMPFNLIST ModifiedPageListNoReservation;// Offset=0x240 Size=0x28
    struct _MMPFNLIST ModifiedPageListByReservation[16];// Offset=0x280 Size=0x280
    struct _MMPFNLIST MappedPageListHead[16];// Offset=0x500 Size=0x280
    struct _MMPFNLIST BadPageListHead;// Offset=0x780 Size=0x28
    struct _MMPFNLIST EnclavePageListHead;// Offset=0x7c0 Size=0x28
    union _SLIST_HEADER * FreePageSlist[2];// Offset=0x7e8 Size=0x10
    struct _MMPFNLIST * PageLocationList[8];// Offset=0x7f8 Size=0x40
    unsigned long StandbyRepurposedByPriority[8];// Offset=0x838 Size=0x20
    unsigned long long TransitionSharedPages;// Offset=0x880 Size=0x8
    unsigned long long TransitionSharedPagesPeak[6];// Offset=0x888 Size=0x30
    struct _KEVENT MappedPageListHeadEvent[16];// Offset=0x8b8 Size=0x180
    struct _MI_DECAY_TIMER_LINK DecayClusterTimerHeads[4];// Offset=0xa38 Size=0x20
    unsigned long DecayHand;// Offset=0xa58 Size=0x4
    unsigned char StandbyListDiscard;// Offset=0xa5c Size=0x1
    unsigned char FreeListDiscard;// Offset=0xa5d Size=0x1
    unsigned char PfnBitMapsReady;// Offset=0xa5e Size=0x1
    unsigned long long LastDecayHandUpdateTime;// Offset=0xa60 Size=0x8
    struct _MI_LDW_WORK_CONTEXT LastChanceLdwContext;// Offset=0xa68 Size=0x38
    struct _RTL_AVL_TREE HugePfnBadPages;// Offset=0xaa0 Size=0x8
    unsigned long long AvailableEventsLock;// Offset=0xac0 Size=0x8
    struct _MI_AVAILABLE_PAGE_WAIT_STATES AvailablePageWaitStates[3];// Offset=0xac8 Size=0x60
    void * MirrorListLocks;// Offset=0xb28 Size=0x8
    unsigned long long TransitionPrivatePages;// Offset=0xb40 Size=0x8
    struct _RTL_BITMAP_EX LargePfnBitMap[2];// Offset=0xb48 Size=0x20
    struct _MI_FREE_LARGE_PAGE_LIST * LargePageListHeads;// Offset=0xb68 Size=0x8
    unsigned char * MediumPagesOnFreeZeroList;// Offset=0xb70 Size=0x8
    struct _RTL_BITMAP_EX LargePageRebuildCandidates;// Offset=0xb78 Size=0x10
    wchar_t * LargePagesOnFreeZeroList;// Offset=0xb88 Size=0x8
    long HugePageRebuildCandidatesExist;// Offset=0xb90 Size=0x4
    struct _KEVENT LargePageCandidatesExistEvent;// Offset=0xb98 Size=0x18
    unsigned long long LowMemoryThreshold;// Offset=0xbb0 Size=0x8
    unsigned long long HighMemoryThreshold;// Offset=0xbb8 Size=0x8
    struct _MI_SLAB_ALLOCATOR_CONTEXT SlabContexts[2][4];// Offset=0xbc0 Size=0x3c0
    struct _RTL_BITMAP_EX SlabPfnBitMap;// Offset=0xf80 Size=0x10
    void * HugePfnLists;// Offset=0xf90 Size=0x8
    unsigned long long AvailableHugeIoRanges;// Offset=0xf98 Size=0x8
};

struct _MI_PARTITION_COMMIT// Size=0x40 (Id=1600)
{
    unsigned long long PeakCommitment;// Offset=0x0 Size=0x8
    unsigned long long TotalCommitLimitMaximum;// Offset=0x8 Size=0x8
    long Popups[2];// Offset=0x10 Size=0x8
    unsigned long long LowCommitThreshold;// Offset=0x18 Size=0x8
    unsigned long long HighCommitThreshold;// Offset=0x20 Size=0x8
    unsigned long long EventLock;// Offset=0x28 Size=0x8
    unsigned long long SystemCommitReserve;// Offset=0x30 Size=0x8
    unsigned long long OverCommit;// Offset=0x38 Size=0x8
};

enum _MI_WRITE_TYPES
{
    WriteTypeCached=0,
    WriteTypeNonTemporal=1,
    WriteTypeMaximum=2
};

struct _MI_WRITE_CALIBRATION// Size=0x20 (Id=1953)
{
    unsigned long MaximumNumberProcessors;// Offset=0x0 Size=0x4
    enum _MI_WRITE_TYPES OptimalWriteType;// Offset=0x4 Size=0x4
    unsigned long long PerProcessorNumberOfBytes;// Offset=0x8 Size=0x8
    unsigned long OptimalWriteProcessors[2];// Offset=0x10 Size=0x8
    struct _MI_WRITE_MODES * RawTimeStamps;// Offset=0x18 Size=0x8
};

struct _MI_PARTITION_ZEROING// Size=0xb0 (Id=1563)
{
    struct _KEVENT PageEvent;// Offset=0x0 Size=0x18
    unsigned char ThreadPriorityStatic;// Offset=0x18 Size=0x1
    unsigned char AdaptiveZeroingEnabled;// Offset=0x19 Size=0x1
    long ZeroFreePageSlistMinimum;// Offset=0x1c Size=0x4
    struct _WORK_QUEUE_ITEM RebalanceZeroFreeWorkItem;// Offset=0x20 Size=0x20
    long NodeCount;// Offset=0x40 Size=0x4
    long BackgroundZeroingDisabled;// Offset=0x44 Size=0x4
    struct _KGATE LargeBootZeroingComplete;// Offset=0x48 Size=0x18
    struct _MI_WRITE_CALIBRATION WriteCalibration;// Offset=0x60 Size=0x20
    unsigned char IpiCalibrationFailed;// Offset=0x80 Size=0x1
    long ActiveProcessorsForIpiCalibration;// Offset=0x84 Size=0x4
    long NodesReadyForIpiCalibration;// Offset=0x88 Size=0x4
    struct _KEVENT ReleaseNodeZeroingThreads;// Offset=0x90 Size=0x18
    struct _MI_ZERO_THREAD_CONTEXT * ThreadContext;// Offset=0xa8 Size=0x8
};

struct _MI_COMBINE_WORKITEM// Size=0x28 (Id=1406)
{
    void * NextEntry;// Offset=0x0 Size=0x8
    struct _WORK_QUEUE_ITEM WorkItem;// Offset=0x8 Size=0x20
};

struct _MI_COMBINE_PAGE_LISTHEAD// Size=0x10 (Id=1712)
{
    struct _RTL_AVL_TREE Table;// Offset=0x0 Size=0x8
    long Lock;// Offset=0x8 Size=0x4
};

struct _MI_PAGE_COMBINE_STATISTICS// Size=0x28 (Id=1452)
{
    unsigned long long PagesScannedActive;// Offset=0x0 Size=0x8
    unsigned long long PagesScannedStandby;// Offset=0x8 Size=0x8
    unsigned long long PagesCombined;// Offset=0x10 Size=0x8
    unsigned long CombineScanCount;// Offset=0x18 Size=0x4
    long CombinedBlocksInUse;// Offset=0x1c Size=0x4
    long SumCombinedBlocksReferenceCount;// Offset=0x20 Size=0x4
};

struct _MI_PAGE_COMBINING_SUPPORT// Size=0x190 (Id=1304)
{
    struct _MI_PARTITION * Partition;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY ArbitraryPfnMapList;// Offset=0x8 Size=0x10
    struct _MI_COMBINE_WORKITEM FreeCombinePoolItem;// Offset=0x18 Size=0x28
    unsigned long CombiningThreadCount;// Offset=0x40 Size=0x4
    struct _LIST_ENTRY CombinePageFreeList;// Offset=0x48 Size=0x10
    unsigned long long CombineFreeListLock;// Offset=0x58 Size=0x8
    struct _MI_COMBINE_PAGE_LISTHEAD CombinePageListHeads[16];// Offset=0x60 Size=0x100
    unsigned long long CommonPageCombineDomain;// Offset=0x160 Size=0x8
    struct _MI_PAGE_COMBINE_STATISTICS PageCombineStats;// Offset=0x168 Size=0x28
};

struct _MMWORKING_SET_EXPANSION_HEAD// Size=0x10 (Id=1061)
{
    struct _LIST_ENTRY ListHead;// Offset=0x0 Size=0x10
};

struct _MMSUPPORT_FLAGS// Size=0x4 (Id=1567)
{
    union // Size=0x2 (Id=0)
    {
        struct // Size=0x2 (Id=0)
        {
            unsigned char WorkingSetType:3;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x3
            unsigned char Reserved0:3;// Offset=0x0 Size=0x1 BitOffset=0x3 BitSize=0x3
            unsigned char MaximumWorkingSetHard:1;// Offset=0x0 Size=0x1 BitOffset=0x6 BitSize=0x1
            unsigned char MinimumWorkingSetHard:1;// Offset=0x0 Size=0x1 BitOffset=0x7 BitSize=0x1
            unsigned char SessionMaster:1;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x1
            unsigned char TrimmerState:2;// Offset=0x1 Size=0x1 BitOffset=0x1 BitSize=0x2
            unsigned char Reserved:1;// Offset=0x1 Size=0x1 BitOffset=0x3 BitSize=0x1
            unsigned char PageStealers:4;// Offset=0x1 Size=0x1 BitOffset=0x4 BitSize=0x4
        };
        unsigned short u1;// Offset=0x0 Size=0x2
    };
    unsigned char MemoryPriority;// Offset=0x2 Size=0x1
    union // Size=0x1 (Id=0)
    {
        struct // Size=0x1 (Id=0)
        {
            unsigned char WsleDeleted:1;// Offset=0x3 Size=0x1 BitOffset=0x0 BitSize=0x1
            unsigned char SvmEnabled:1;// Offset=0x3 Size=0x1 BitOffset=0x1 BitSize=0x1
            unsigned char ForceAge:1;// Offset=0x3 Size=0x1 BitOffset=0x2 BitSize=0x1
            unsigned char ForceTrim:1;// Offset=0x3 Size=0x1 BitOffset=0x3 BitSize=0x1
            unsigned char NewMaximum:1;// Offset=0x3 Size=0x1 BitOffset=0x4 BitSize=0x1
            unsigned char CommitReleaseState:2;// Offset=0x3 Size=0x1 BitOffset=0x5 BitSize=0x2
        };
        unsigned char u2;// Offset=0x3 Size=0x1
    };
};

struct _MMSUPPORT_INSTANCE// Size=0xc0 (Id=1389)
{
    unsigned long NextPageColor;// Offset=0x0 Size=0x4
    unsigned long PageFaultCount;// Offset=0x4 Size=0x4
    unsigned long long TrimmedPageCount;// Offset=0x8 Size=0x8
    struct _MMWSL_INSTANCE * VmWorkingSetList;// Offset=0x10 Size=0x8
    struct _LIST_ENTRY WorkingSetExpansionLinks;// Offset=0x18 Size=0x10
    unsigned long long AgeDistribution[8];// Offset=0x28 Size=0x40
    struct _KGATE * ExitOutswapGate;// Offset=0x68 Size=0x8
    unsigned long long MinimumWorkingSetSize;// Offset=0x70 Size=0x8
    unsigned long long WorkingSetLeafSize;// Offset=0x78 Size=0x8
    unsigned long long WorkingSetLeafPrivateSize;// Offset=0x80 Size=0x8
    unsigned long long WorkingSetSize;// Offset=0x88 Size=0x8
    unsigned long long WorkingSetPrivateSize;// Offset=0x90 Size=0x8
    unsigned long long MaximumWorkingSetSize;// Offset=0x98 Size=0x8
    unsigned long long PeakWorkingSetSize;// Offset=0xa0 Size=0x8
    unsigned long HardFaultCount;// Offset=0xa8 Size=0x4
    unsigned short LastTrimStamp;// Offset=0xac Size=0x2
    unsigned short PartitionId;// Offset=0xae Size=0x2
    unsigned long long SelfmapLock;// Offset=0xb0 Size=0x8
    struct _MMSUPPORT_FLAGS Flags;// Offset=0xb8 Size=0x4
};

struct _MMWSL_INSTANCE// Size=0x28 (Id=1331)
{
    struct _MMPTE * NextPteToTrim;// Offset=0x0 Size=0x8
    struct _MMPTE * NextPteToAge;// Offset=0x8 Size=0x8
    struct _MMPTE * NextPteToAccessClear;// Offset=0x10 Size=0x8
    unsigned long LastAccessClearingRemainder;// Offset=0x18 Size=0x4
    unsigned long LastAgingRemainder;// Offset=0x1c Size=0x4
    unsigned long long LockedEntries;// Offset=0x20 Size=0x8
};

struct _anonymous_9// Size=0x8 (Id=9)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=414)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _anonymous_9 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _MDL// Size=0x30 (Id=454)
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

struct _anonymous_1398// Size=0x38 (Id=1398)
{
    struct _MDL Mdl;// Offset=0x0 Size=0x30
    unsigned long long Page[1];// Offset=0x30 Size=0x8
};

struct _MI_PAGEFILE_TRACES// Size=0x78 (Id=1399)
{
    long Status;// Offset=0x0 Size=0x4
    unsigned short PartitionId;// Offset=0x4 Size=0x2
    unsigned char Priority;// Offset=0x6 Size=0x1
    unsigned char IrpPriority;// Offset=0x7 Size=0x1
    unsigned char ReservationWrite;// Offset=0x8 Size=0x1
    union _LARGE_INTEGER CurrentTime;// Offset=0x10 Size=0x8
    unsigned long long AvailablePages;// Offset=0x18 Size=0x8
    unsigned long long ModifiedPagesTotal;// Offset=0x20 Size=0x8
    unsigned long long ModifiedPagefilePages;// Offset=0x28 Size=0x8
    unsigned long long ModifiedNoWritePages;// Offset=0x30 Size=0x8
    unsigned long long ModifiedPagefileNoReservationPages;// Offset=0x38 Size=0x8
    struct _anonymous_1398 MdlHack;// Offset=0x40 Size=0x38
};

struct _MI_VISIBLE_PARTITION// Size=0x1200 (Id=1119)
{
    unsigned long long LowestPhysicalPage;// Offset=0x0 Size=0x8
    unsigned long long HighestPhysicalPage;// Offset=0x8 Size=0x8
    unsigned long long NumberOfPhysicalPages;// Offset=0x10 Size=0x8
    unsigned long NumberOfPagingFiles;// Offset=0x18 Size=0x4
    unsigned char SystemCacheInitialized;// Offset=0x1c Size=0x1
    struct _MMPAGING_FILE * PagingFile[16];// Offset=0x20 Size=0x80
    unsigned long long AvailablePages;// Offset=0xc0 Size=0x8
    unsigned long long ResidentAvailablePages;// Offset=0x100 Size=0x8
    struct _MMSUPPORT_INSTANCE PartitionWs[1];// Offset=0x140 Size=0xc0
    struct _MMWSL_INSTANCE PartitionWorkingSetLists[1];// Offset=0x200 Size=0x28
    unsigned long long TotalCommittedPages;// Offset=0x228 Size=0x8
    struct _MMPFNLIST ModifiedPageListHead;// Offset=0x240 Size=0x28
    struct _MMPFNLIST ModifiedNoWritePageListHead;// Offset=0x280 Size=0x28
    unsigned long long TotalCommitLimit;// Offset=0x2a8 Size=0x8
    unsigned long long TotalPagesForPagingFile;// Offset=0x2b0 Size=0x8
    unsigned long long VadPhysicalPages;// Offset=0x2b8 Size=0x8
    unsigned long long ProcessLockedFilePages;// Offset=0x2c0 Size=0x8
    unsigned long long SharedCommit;// Offset=0x2c8 Size=0x8
    unsigned long long SlabAllocatorPages;// Offset=0x2d0 Size=0x8
    unsigned long ChargeCommitmentFailures[4];// Offset=0x2d8 Size=0x10
    long PageFileTraceIndex;// Offset=0x2e8 Size=0x4
    struct _MI_PAGEFILE_TRACES PageFileTraces[32];// Offset=0x2f0 Size=0xf00
};

struct _MI_PARTITION// Size=0x2d00 (Id=561)
{
    struct _MI_PARTITION_CORE Core;// Offset=0x0 Size=0x1b8
    struct _MI_PARTITION_MODWRITES Modwriter;// Offset=0x1b8 Size=0x2c0
    struct _MI_PARTITION_STORES Store;// Offset=0x480 Size=0x90
    struct _MI_PARTITION_SEGMENTS Segments;// Offset=0x540 Size=0x340
    struct _MI_PARTITION_PAGE_LISTS PageLists;// Offset=0x880 Size=0xfc0
    struct _MI_PARTITION_COMMIT Commit;// Offset=0x1840 Size=0x40
    struct _MI_PARTITION_ZEROING Zeroing;// Offset=0x1880 Size=0xb0
    struct _MI_PAGE_COMBINING_SUPPORT PageCombine;// Offset=0x1930 Size=0x190
    void * WorkingSetControl;// Offset=0x1ac0 Size=0x8
    struct _MMWORKING_SET_EXPANSION_HEAD WorkingSetExpansionHead;// Offset=0x1ac8 Size=0x10
    unsigned long SessionDetachTimeStamp;// Offset=0x1ad8 Size=0x4
    struct _MI_VISIBLE_PARTITION Vp;// Offset=0x1b00 Size=0x1200
};
