struct _MI_PARTITION_FLAGS// Size=0x4 (Id=911)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long BeingDeleted:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long ObjectInitialized:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long PageListsInitialized:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long StoreReservedPagesCharged:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
    };
};

union _unnamed_885// Size=0x4 (Id=885)
{
    unsigned long LongFlags;// Offset=0x0 Size=0x4
    struct _MI_PARTITION_FLAGS Flags;// Offset=0x0 Size=0x4
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

struct _DISPATCHER_HEADER// Size=0x18 (Id=504)
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
        unsigned char Timer2Reserved1;// Offset=0x2 Size=0x1
        unsigned char Timer2Reserved2;// Offset=0x3 Size=0x1
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
        union // Size=0x1 (Id=0)
        {
            unsigned char ThreadSpecControl;// Offset=0x1 Size=0x1
            struct // Size=0x1 (Id=0)
            {
                unsigned char SpecControlIbrs:1;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x1
                unsigned char SpecControlStibp:1;// Offset=0x1 Size=0x1 BitOffset=0x1 BitSize=0x1
                unsigned char SpecControlReserved:6;// Offset=0x1 Size=0x1 BitOffset=0x2 BitSize=0x6
            };
        };
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

struct _KEVENT// Size=0x18 (Id=64)
{
    struct _DISPATCHER_HEADER Header;// Offset=0x0 Size=0x18
};

struct _EX_PUSH_LOCK// Size=0x8 (Id=81)
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

struct _MI_PARTITION_CORE// Size=0x158 (Id=886)
{
    unsigned short PartitionId;// Offset=0x0 Size=0x2
    union _unnamed_885 u;// Offset=0x4 Size=0x4
    unsigned long long ReferenceCount;// Offset=0x8 Size=0x8
    struct _MI_PARTITION * ParentPartition;// Offset=0x10 Size=0x8
    struct _LIST_ENTRY ListEntry;// Offset=0x18 Size=0x10
    struct _MI_NODE_INFORMATION * NodeInformation;// Offset=0x28 Size=0x8
    struct _MDL * MdlPhysicalMemoryBlock;// Offset=0x30 Size=0x8
    struct _PHYSICAL_MEMORY_DESCRIPTOR * MemoryNodeRuns;// Offset=0x38 Size=0x8
    unsigned long long MemoryBlockReferences;// Offset=0x40 Size=0x8
    struct _WORK_QUEUE_ITEM PfnUnmapWorkItem;// Offset=0x48 Size=0x20
    unsigned char PfnUnmapActive;// Offset=0x68 Size=0x1
    unsigned long long PfnUnmapCount;// Offset=0x70 Size=0x8
    void * PfnUnmapWaitList;// Offset=0x78 Size=0x8
    struct _PHYSICAL_MEMORY_DESCRIPTOR * MemoryRuns;// Offset=0x80 Size=0x8
    struct _KEVENT ExitEvent;// Offset=0x88 Size=0x18
    void * SystemThreadHandles[5];// Offset=0xa0 Size=0x28
    void * PartitionObject;// Offset=0xc8 Size=0x8
    void * PartitionObjectHandle;// Offset=0xd0 Size=0x8
    struct _EX_PUSH_LOCK DynamicMemoryPushLock;// Offset=0xd8 Size=0x8
    long DynamicMemoryLock;// Offset=0xe0 Size=0x4
    struct _KEVENT TemporaryMemoryEvent;// Offset=0xe8 Size=0x18
    struct _KEVENT * MemoryEvents[11];// Offset=0x100 Size=0x58
};

struct _MMPAGE_FILE_EXPANSION_FLAGS// Size=0x4 (Id=1421)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned char PageFileNumber:8;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x8
        unsigned char Spare1:8;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x8
        unsigned char Spare2:8;// Offset=0x2 Size=0x1 BitOffset=0x0 BitSize=0x8
        unsigned char IgnoreCurrentCommit:1;// Offset=0x3 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char IncreaseMinimumSize:1;// Offset=0x3 Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char Spare3:6;// Offset=0x3 Size=0x1 BitOffset=0x2 BitSize=0x6
    };
};

struct _MMPAGE_FILE_EXPANSION// Size=0x60 (Id=1068)
{
    struct _SEGMENT * Segment;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY DereferenceList;// Offset=0x8 Size=0x10
    struct _MI_PARTITION * Partition;// Offset=0x18 Size=0x8
    unsigned long long RequestedExpansionSize;// Offset=0x20 Size=0x8
    unsigned long long ActualExpansion;// Offset=0x28 Size=0x8
    struct _KEVENT Event;// Offset=0x30 Size=0x18
    long InProgress;// Offset=0x48 Size=0x4
    struct _MMPAGE_FILE_EXPANSION_FLAGS u;// Offset=0x4c Size=0x4
    void ** ActiveEntry;// Offset=0x50 Size=0x8
    unsigned char AttemptForCantExtend;// Offset=0x58 Size=0x1
    unsigned char PageFileContract;// Offset=0x59 Size=0x1
};

struct _KGATE// Size=0x18 (Id=579)
{
    struct _DISPATCHER_HEADER Header;// Offset=0x0 Size=0x18
};

struct _MMMOD_WRITER_LISTHEAD// Size=0x28 (Id=1075)
{
    struct _LIST_ENTRY ListHead;// Offset=0x0 Size=0x10
    union // Size=0x18 (Id=0)
    {
        struct _KGATE Gate;// Offset=0x10 Size=0x18
        struct _KEVENT Event;// Offset=0x10 Size=0x18
    };
};

union _MI_RESERVATION_CLUSTER_INFO// Size=0x4 (Id=1265)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long ClusterSize:10;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0xa
        unsigned long SequenceNumber:22;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x16
    };
    long EntireInfo;// Offset=0x0 Size=0x4
};

struct _MI_MODWRITE_DATA// Size=0x40 (Id=1266)
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

struct _EX_RUNDOWN_REF// Size=0x8 (Id=177)
{
    union // Size=0x8 (Id=0)
    {
        unsigned long long Count;// Offset=0x0 Size=0x8
        void * Ptr;// Offset=0x0 Size=0x8
    };
};

struct _MI_PARTITION_MODWRITES// Size=0x2d0 (Id=887)
{
    struct _MMPAGE_FILE_EXPANSION AttemptForCantExtend;// Offset=0x0 Size=0x60
    struct _MMPAGE_FILE_EXPANSION PageFileContract;// Offset=0x60 Size=0x60
    unsigned long long NumberOfMappedMdls;// Offset=0xc0 Size=0x8
    long NumberOfMappedMdlsInUse;// Offset=0xc8 Size=0x4
    unsigned long NumberOfMappedMdlsInUsePeak;// Offset=0xcc Size=0x4
    struct _MMMOD_WRITER_LISTHEAD MappedFileHeader;// Offset=0xd0 Size=0x28
    unsigned char NeedMappedMdl;// Offset=0xf8 Size=0x1
    unsigned char NeedPageFileMdl;// Offset=0xf9 Size=0x1
    unsigned char TransitionInserted;// Offset=0xfa Size=0x1
    long LastModifiedWriteError;// Offset=0xfc Size=0x4
    long LastMappedWriteError;// Offset=0x100 Size=0x4
    unsigned long MappedFileWriteSucceeded;// Offset=0x104 Size=0x4
    unsigned long MappedWriteBurstCount;// Offset=0x108 Size=0x4
    unsigned long LowPriorityModWritesOutstanding;// Offset=0x10c Size=0x4
    struct _KEVENT BoostModWriteIoPriorityEvent;// Offset=0x110 Size=0x18
    long ModifiedWriterThreadPriority;// Offset=0x128 Size=0x4
    unsigned long long ModifiedPagesLowPriorityGoal;// Offset=0x130 Size=0x8
    struct _KEVENT ModifiedPageWriterEvent;// Offset=0x138 Size=0x18
    struct _KEVENT ModifiedWriterExitedEvent;// Offset=0x150 Size=0x18
    long WriteAllPagefilePages;// Offset=0x168 Size=0x4
    long WriteAllMappedPages;// Offset=0x16c Size=0x4
    struct _KEVENT MappedPageWriterEvent;// Offset=0x170 Size=0x18
    struct _MI_MODWRITE_DATA ModWriteData;// Offset=0x188 Size=0x40
    struct _KEVENT RescanPageFilesEvent;// Offset=0x1c8 Size=0x18
    struct _MMMOD_WRITER_LISTHEAD PagingFileHeader;// Offset=0x1e0 Size=0x28
    struct _ETHREAD * ModifiedPageWriterThread;// Offset=0x208 Size=0x8
    struct _EX_RUNDOWN_REF ModifiedPageWriterRundown;// Offset=0x210 Size=0x8
    struct _WORK_QUEUE_ITEM PagefileScanWorkItem;// Offset=0x218 Size=0x20
    unsigned long PagefileScanCount;// Offset=0x238 Size=0x4
    long ClusterWritesDisabled[2];// Offset=0x23c Size=0x8
    struct _KEVENT NotifyStoreMemoryConditions;// Offset=0x248 Size=0x18
    unsigned char DelayMappedWrite;// Offset=0x260 Size=0x1
    unsigned long PagefileReservationsEnabled;// Offset=0x264 Size=0x4
    struct _EX_PUSH_LOCK PageFileCreationLock;// Offset=0x268 Size=0x8
    struct _WORK_QUEUE_ITEM TrimPagefileWorkItem;// Offset=0x270 Size=0x20
    unsigned long long LastTrimPagefileTime;// Offset=0x290 Size=0x8
    struct _WORK_QUEUE_ITEM WsSwapPagefileContractWorkItem;// Offset=0x298 Size=0x20
    long WsSwapPageFileContractionInProgress;// Offset=0x2b8 Size=0x4
    struct _EX_PUSH_LOCK WorkingSetSwapLock;// Offset=0x2c0 Size=0x8
    long WorkingSetInswapLock;// Offset=0x2c8 Size=0x4
};

union _unnamed_993// Size=0x4 (Id=993)
{
    struct // Size=0x4 (Id=0)
    {
        long FlushCompleting:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        long FlushInProgress:31;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1f
    };
    long Long;// Offset=0x0 Size=0x4
};

struct _unnamed_65// Size=0x10 (Id=65)
{
    struct // Size=0x10 (Id=0)
    {
        unsigned long long Depth:16;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x10
        unsigned long long Sequence:48;// Offset=0x0 Size=0x8 BitOffset=0x10 BitSize=0x30
        unsigned long long Reserved:4;// Offset=0x8 Size=0x8 BitOffset=0x0 BitSize=0x4
        unsigned long long NextEntry:60;// Offset=0x8 Size=0x8 BitOffset=0x4 BitSize=0x3c
    };
};

union _SLIST_HEADER// Size=0x10 (Id=66)
{
    unsigned long long Alignment;// Offset=0x0 Size=0x8
    unsigned long long Region;// Offset=0x8 Size=0x8
    struct _unnamed_65 HeaderX64;// Offset=0x0 Size=0x10
};

struct _MI_PARTITION_STORES// Size=0x80 (Id=994)
{
    union _unnamed_993 WriteAllStoreHintedPages;// Offset=0x0 Size=0x4
    unsigned long VirtualPageFileNumber;// Offset=0x4 Size=0x4
    unsigned long Registered;// Offset=0x8 Size=0x4
    unsigned long ReadClusterSizeMax;// Offset=0xc Size=0x4
    unsigned long EvictFlushRequestCount;// Offset=0x10 Size=0x4
    unsigned long ModifiedWriteDisableCount;// Offset=0x14 Size=0x4
    unsigned long WriteIssueFailures;// Offset=0x18 Size=0x4
    struct _ETHREAD * EvictionThread;// Offset=0x20 Size=0x8
    struct _KEVENT EvictEvent;// Offset=0x28 Size=0x18
    struct _KEVENT EvictFlushCompleteEvent;// Offset=0x40 Size=0x18
    union _SLIST_HEADER WriteSupportSListHead;// Offset=0x60 Size=0x10
    long EvictFlushLock;// Offset=0x70 Size=0x4
    struct _RTL_BITMAP * ModifiedWriteFailedBitmap;// Offset=0x78 Size=0x8
};

struct _KSEMAPHORE// Size=0x20 (Id=299)
{
    struct _DISPATCHER_HEADER Header;// Offset=0x0 Size=0x18
    long Limit;// Offset=0x18 Size=0x4
};

struct _MMDEREFERENCE_SEGMENT_HEADER// Size=0x30 (Id=952)
{
    struct _KSEMAPHORE Semaphore;// Offset=0x0 Size=0x20
    struct _LIST_ENTRY ListHead;// Offset=0x20 Size=0x10
};

struct _unnamed_8// Size=0x8 (Id=8)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    unsigned long HighPart;// Offset=0x4 Size=0x4
};

union _ULARGE_INTEGER// Size=0x8 (Id=9)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    unsigned long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_8 u;// Offset=0x0 Size=0x8
    unsigned long long QuadPart;// Offset=0x0 Size=0x8
};

struct _KTIMER// Size=0x40 (Id=1008)
{
    struct _DISPATCHER_HEADER Header;// Offset=0x0 Size=0x18
    union _ULARGE_INTEGER DueTime;// Offset=0x18 Size=0x8
    struct _LIST_ENTRY TimerListEntry;// Offset=0x20 Size=0x10
    struct _KDPC * Dpc;// Offset=0x30 Size=0x8
    unsigned long Processor;// Offset=0x38 Size=0x4
    unsigned long Period;// Offset=0x3c Size=0x4
};

struct _SINGLE_LIST_ENTRY// Size=0x8 (Id=21)
{
    struct _SINGLE_LIST_ENTRY * Next;// Offset=0x0 Size=0x8
};

struct _MI_PARTITION_SEGMENTS// Size=0x180 (Id=498)
{
    struct _KEVENT DeleteSubsectionCleanup;// Offset=0x0 Size=0x18
    struct _KEVENT UnusedSegmentCleanup;// Offset=0x18 Size=0x18
    unsigned long long SubsectionDeletePtes;// Offset=0x30 Size=0x8
    struct _MMDEREFERENCE_SEGMENT_HEADER DereferenceSegmentHeader;// Offset=0x38 Size=0x30
    struct _LIST_ENTRY DeleteOnCloseList;// Offset=0x68 Size=0x10
    struct _KTIMER DeleteOnCloseTimer;// Offset=0x78 Size=0x40
    unsigned char DeleteOnCloseTimerActive;// Offset=0xb8 Size=0x1
    unsigned long DeleteOnCloseCount;// Offset=0xbc Size=0x4
    struct _LIST_ENTRY UnusedSegmentList;// Offset=0xc0 Size=0x10
    struct _LIST_ENTRY UnusedSubsectionList;// Offset=0xd0 Size=0x10
    struct _LIST_ENTRY DeleteSubsectionList;// Offset=0xe0 Size=0x10
    struct _KEVENT ControlAreaDeleteEvent;// Offset=0xf0 Size=0x18
    struct _SINGLE_LIST_ENTRY ControlAreaDeleteList;// Offset=0x108 Size=0x8
    long SegmentListLock;// Offset=0x140 Size=0x4
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

struct _MMPFNLIST// Size=0x28 (Id=210)
{
    unsigned long long Total;// Offset=0x0 Size=0x8
    enum _MMLISTS ListName;// Offset=0x8 Size=0x4
    unsigned long long Flink;// Offset=0x10 Size=0x8
    unsigned long long Blink;// Offset=0x18 Size=0x8
    unsigned long long Lock;// Offset=0x20 Size=0x8
};

struct _MI_DECAY_TIMER_LINKAGE// Size=0x8 (Id=879)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long Spare0:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long PreviousDecayPfn:31;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1f
        unsigned long long Spare1:1;// Offset=0x0 Size=0x8 BitOffset=0x20 BitSize=0x1
        unsigned long long NextDecayPfn:31;// Offset=0x0 Size=0x8 BitOffset=0x21 BitSize=0x1f
    };
};

union _unnamed_837// Size=0x8 (Id=837)
{
    unsigned long long Long;// Offset=0x0 Size=0x8
    struct _MI_DECAY_TIMER_LINKAGE e1;// Offset=0x0 Size=0x8
};

struct _MI_DECAY_TIMER_LINK// Size=0x8 (Id=838)
{
    union _unnamed_837 u1;// Offset=0x0 Size=0x8
};

struct _MI_LDW_WORK_CONTEXT// Size=0x38 (Id=1189)
{
    struct _WORK_QUEUE_ITEM WorkItem;// Offset=0x0 Size=0x20
    struct _FILE_OBJECT * FileObject;// Offset=0x20 Size=0x8
    long ErrorStatus;// Offset=0x28 Size=0x4
    long Active;// Offset=0x2c Size=0x4
    unsigned char FreeWhenDone;// Offset=0x30 Size=0x1
};

struct _MI_AVAILABLE_PAGE_WAIT_STATES// Size=0x20 (Id=1319)
{
    struct _KEVENT Event;// Offset=0x0 Size=0x18
    unsigned long EventSets;// Offset=0x18 Size=0x4
};

struct _MI_REBUILD_LARGE_PAGE_COUNTDOWN// Size=0x2 (Id=862)
{
    unsigned char SecondsLeft;// Offset=0x0 Size=0x1
    unsigned char SecondsAssigned;// Offset=0x1 Size=0x1
};

struct _MI_REBUILD_LARGE_PAGES// Size=0x228 (Id=778)
{
    long Active;// Offset=0x0 Size=0x4
    struct _MI_REBUILD_LARGE_PAGE_COUNTDOWN Timer[64][4];// Offset=0x4 Size=0x200
    struct _WORK_QUEUE_ITEM WorkItem;// Offset=0x208 Size=0x20
};

struct _MI_PARTITION_PAGE_LISTS// Size=0xd40 (Id=660)
{
    struct _MMPFNLIST * FreePagesByColor[2];// Offset=0x0 Size=0x10
    union _SLIST_HEADER * FreePageSlist[2];// Offset=0x10 Size=0x10
    struct _MMPFNLIST ZeroedPageListHead;// Offset=0x40 Size=0x28
    struct _MMPFNLIST FreePageListHead;// Offset=0x80 Size=0x28
    struct _MMPFNLIST StandbyPageListHead;// Offset=0xc0 Size=0x28
    struct _MMPFNLIST StandbyPageListByPriority[8];// Offset=0x100 Size=0x140
    struct _MMPFNLIST ModifiedPageListNoReservation;// Offset=0x240 Size=0x28
    struct _MMPFNLIST ModifiedPageListByReservation[16];// Offset=0x280 Size=0x280
    struct _MMPFNLIST MappedPageListHead[16];// Offset=0x500 Size=0x280
    struct _MMPFNLIST BadPageListHead;// Offset=0x780 Size=0x28
    struct _MMPFNLIST EnclavePageListHead;// Offset=0x7c0 Size=0x28
    struct _MMPFNLIST * PageLocationList[8];// Offset=0x7e8 Size=0x40
    unsigned long StandbyRepurposedByPriority[8];// Offset=0x828 Size=0x20
    struct _KEVENT MappedPageListHeadEvent[16];// Offset=0x848 Size=0x180
    struct _MI_DECAY_TIMER_LINK DecayClusterTimerHeads[4];// Offset=0x9c8 Size=0x20
    unsigned long DecayHand;// Offset=0x9e8 Size=0x4
    unsigned long long LastDecayHandUpdateTime;// Offset=0x9f0 Size=0x8
    struct _MI_LDW_WORK_CONTEXT LastChanceLdwContext;// Offset=0x9f8 Size=0x38
    unsigned long long AvailableEventsLock;// Offset=0xa40 Size=0x8
    struct _MI_AVAILABLE_PAGE_WAIT_STATES AvailablePageWaitStates[3];// Offset=0xa48 Size=0x60
    unsigned long long LowMemoryThreshold;// Offset=0xaa8 Size=0x8
    unsigned long long HighMemoryThreshold;// Offset=0xab0 Size=0x8
    unsigned long long TransitionPrivatePages;// Offset=0xac0 Size=0x8
    unsigned long StandbyListDiscard;// Offset=0xac8 Size=0x4
    unsigned char FreeListDiscard;// Offset=0xacc Size=0x1
    unsigned char RebuildLargePagesInitialized;// Offset=0xacd Size=0x1
    struct _MI_REBUILD_LARGE_PAGES RebuildLargePagesItem;// Offset=0xad0 Size=0x228
    struct _LIST_ENTRY AddMemoryNotifyList;// Offset=0xcf8 Size=0x10
    void * MirrorListLocks;// Offset=0xd08 Size=0x8
};

struct _MI_PARTITION_COMMIT// Size=0x80 (Id=669)
{
    unsigned long long PeakCommitment;// Offset=0x0 Size=0x8
    unsigned long long TotalCommitLimitMaximum;// Offset=0x8 Size=0x8
    long Popups[2];// Offset=0x10 Size=0x8
    unsigned long long LowCommitThreshold;// Offset=0x18 Size=0x8
    unsigned long long HighCommitThreshold;// Offset=0x20 Size=0x8
    unsigned long long EventLock;// Offset=0x28 Size=0x8
    unsigned long long SystemCommitReserve;// Offset=0x30 Size=0x8
    unsigned long long OverCommit;// Offset=0x40 Size=0x8
};

struct _MI_PARTITION_ZEROING// Size=0x68 (Id=1141)
{
    struct _KEVENT PageEvent;// Offset=0x0 Size=0x18
    unsigned char ThreadActive;// Offset=0x18 Size=0x1
    long ZeroFreePageSlistMinimum;// Offset=0x1c Size=0x4
    struct _MMPTE * FirstReservedZeroingPte;// Offset=0x20 Size=0x8
    struct _WORK_QUEUE_ITEM RebalanceZeroFreeWorkItem;// Offset=0x28 Size=0x20
    long ThreadCount;// Offset=0x48 Size=0x4
    struct _KGATE Gate;// Offset=0x50 Size=0x18
};

struct _MI_COMBINE_WORKITEM// Size=0x28 (Id=1045)
{
    void * NextEntry;// Offset=0x0 Size=0x8
    struct _WORK_QUEUE_ITEM WorkItem;// Offset=0x8 Size=0x20
};

struct _RTL_AVL_TREE// Size=0x8 (Id=36)
{
    struct _RTL_BALANCED_NODE * Root;// Offset=0x0 Size=0x8
};

struct _MI_COMBINE_PAGE_LISTHEAD// Size=0x10 (Id=982)
{
    struct _RTL_AVL_TREE Table;// Offset=0x0 Size=0x8
    long Lock;// Offset=0x8 Size=0x4
};

struct _MI_PAGE_COMBINE_STATISTICS// Size=0x28 (Id=1357)
{
    unsigned long long PagesScannedActive;// Offset=0x0 Size=0x8
    unsigned long long PagesScannedStandby;// Offset=0x8 Size=0x8
    unsigned long long PagesCombined;// Offset=0x10 Size=0x8
    unsigned long CombineScanCount;// Offset=0x18 Size=0x4
    long CombinedBlocksInUse;// Offset=0x1c Size=0x4
    long SumCombinedBlocksReferenceCount;// Offset=0x20 Size=0x4
};

struct _MI_PAGE_COMBINING_SUPPORT// Size=0x188 (Id=936)
{
    struct _MI_PARTITION * Partition;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY ArbitraryPfnMapList;// Offset=0x8 Size=0x10
    struct _MI_COMBINE_WORKITEM FreeCombinePoolItem;// Offset=0x18 Size=0x28
    unsigned long CombiningThreadCount;// Offset=0x40 Size=0x4
    struct _LIST_ENTRY CombinePageFreeList;// Offset=0x48 Size=0x10
    unsigned long long CombineFreeListLock;// Offset=0x58 Size=0x8
    struct _MI_COMBINE_PAGE_LISTHEAD CombinePageListHeads[16];// Offset=0x60 Size=0x100
    struct _MI_PAGE_COMBINE_STATISTICS PageCombineStats;// Offset=0x160 Size=0x28
};

struct _MMWORKING_SET_EXPANSION_HEAD// Size=0x10 (Id=905)
{
    struct _LIST_ENTRY ListHead;// Offset=0x0 Size=0x10
};

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

struct _MDL// Size=0x30 (Id=168)
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

struct _unnamed_1094// Size=0x38 (Id=1094)
{
    struct _MDL Mdl;// Offset=0x0 Size=0x30
    unsigned long long Page[1];// Offset=0x30 Size=0x8
};

struct _MI_PAGEFILE_TRACES// Size=0x78 (Id=1095)
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
    struct _unnamed_1094 MdlHack;// Offset=0x40 Size=0x38
};

struct _MI_VISIBLE_PARTITION// Size=0x1100 (Id=512)
{
    unsigned long long LowestPhysicalPage;// Offset=0x0 Size=0x8
    unsigned long long HighestPhysicalPage;// Offset=0x8 Size=0x8
    unsigned long long NumberOfPhysicalPages;// Offset=0x10 Size=0x8
    unsigned long NumberOfPagingFiles;// Offset=0x18 Size=0x4
    struct _MMPAGING_FILE * PagingFile[16];// Offset=0x20 Size=0x80
    unsigned long long AvailablePages;// Offset=0xc0 Size=0x8
    unsigned long long ResidentAvailablePages;// Offset=0x100 Size=0x8
    unsigned long long TotalCommittedPages;// Offset=0x108 Size=0x8
    struct _MMPFNLIST ModifiedPageListHead;// Offset=0x140 Size=0x28
    struct _MMPFNLIST ModifiedNoWritePageListHead;// Offset=0x180 Size=0x28
    unsigned long long TotalCommitLimit;// Offset=0x1a8 Size=0x8
    unsigned long long TotalPagesForPagingFile;// Offset=0x1b0 Size=0x8
    unsigned long long VadPhysicalPages;// Offset=0x1b8 Size=0x8
    unsigned long long ProcessLockedFilePages;// Offset=0x1c0 Size=0x8
    unsigned long ChargeCommitmentFailures[4];// Offset=0x1c8 Size=0x10
    unsigned long long PageTableBitmapPages;// Offset=0x1d8 Size=0x8
    long PageFileTraceIndex;// Offset=0x1e0 Size=0x4
    struct _MI_PAGEFILE_TRACES PageFileTraces[32];// Offset=0x1e8 Size=0xf00
};

struct _MI_PARTITION// Size=0x2740 (Id=236)
{
    struct _MI_PARTITION_CORE Core;// Offset=0x0 Size=0x158
    struct _MI_PARTITION_MODWRITES Modwriter;// Offset=0x158 Size=0x2d0
    struct _MI_PARTITION_STORES Store;// Offset=0x430 Size=0x80
    struct _MI_PARTITION_SEGMENTS Segments;// Offset=0x4c0 Size=0x180
    struct _MI_PARTITION_PAGE_LISTS PageLists;// Offset=0x640 Size=0xd40
    struct _MI_PARTITION_COMMIT Commit;// Offset=0x1380 Size=0x80
    struct _MI_PARTITION_ZEROING Zeroing;// Offset=0x1400 Size=0x68
    struct _MI_PAGE_COMBINING_SUPPORT PageCombine;// Offset=0x1468 Size=0x188
    void * WorkingSetControl;// Offset=0x15f0 Size=0x8
    struct _MMWORKING_SET_EXPANSION_HEAD WorkingSetExpansionHead;// Offset=0x15f8 Size=0x10
    struct _MI_VISIBLE_PARTITION Vp;// Offset=0x1640 Size=0x1100
};
