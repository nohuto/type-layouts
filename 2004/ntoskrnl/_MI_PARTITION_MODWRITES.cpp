struct _LIST_ENTRY// Size=0x10 (Id=3)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
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

struct _MMPAGE_FILE_EXPANSION_FLAGS// Size=0x4 (Id=1974)
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

union _anonymous_1519// Size=0x4 (Id=1519)
{
    unsigned long LongFlags;// Offset=0x0 Size=0x4
    struct _MMPAGE_FILE_EXPANSION_FLAGS Flags;// Offset=0x0 Size=0x4
};

struct _MMPAGE_FILE_EXPANSION// Size=0x58 (Id=1520)
{
    struct _SEGMENT * Segment;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY DereferenceList;// Offset=0x8 Size=0x10
    struct _MI_PARTITION * Partition;// Offset=0x18 Size=0x8
    unsigned long long RequestedExpansionSize;// Offset=0x20 Size=0x8
    unsigned long long ActualExpansion;// Offset=0x28 Size=0x8
    struct _KEVENT Event;// Offset=0x30 Size=0x18
    long InProgress;// Offset=0x48 Size=0x4
    union _anonymous_1519 u1;// Offset=0x4c Size=0x4
    void ** ActiveEntry;// Offset=0x50 Size=0x8
};

struct _KGATE// Size=0x18 (Id=1202)
{
    struct _DISPATCHER_HEADER Header;// Offset=0x0 Size=0x18
};

struct _MMMOD_WRITER_LISTHEAD// Size=0x28 (Id=1806)
{
    struct _LIST_ENTRY ListHead;// Offset=0x0 Size=0x10
    union // Size=0x18 (Id=0)
    {
        struct _KGATE Gate;// Offset=0x10 Size=0x18
        struct _KEVENT Event;// Offset=0x10 Size=0x18
    };
};

union _MI_RESERVATION_CLUSTER_INFO// Size=0x4 (Id=2016)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long ClusterSize:10;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0xa
        unsigned long SequenceNumber:22;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x16
    };
    long EntireInfo;// Offset=0x0 Size=0x4
};

struct _MI_MODWRITE_DATA// Size=0x40 (Id=1885)
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

struct _EX_RUNDOWN_REF// Size=0x8 (Id=456)
{
    union // Size=0x8 (Id=0)
    {
        unsigned long long Count;// Offset=0x0 Size=0x8
        void * Ptr;// Offset=0x0 Size=0x8
    };
};

struct _WORK_QUEUE_ITEM// Size=0x20 (Id=27)
{
    struct _LIST_ENTRY List;// Offset=0x0 Size=0x10
    void  ( * WorkerRoutine)(void * );// Offset=0x10 Size=0x8
    void * Parameter;// Offset=0x18 Size=0x8
};

struct _MI_RESTRICTED_MODWRITES// Size=0x3 (Id=1977)
{
    unsigned char MaximumClusterPages;// Offset=0x0 Size=0x1
    unsigned char ReducedClusterWrites;// Offset=0x1 Size=0x1
    unsigned char ImposeDelay;// Offset=0x2 Size=0x1
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

struct _MI_PARTITION_MODWRITES// Size=0x2c0 (Id=1703)
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
