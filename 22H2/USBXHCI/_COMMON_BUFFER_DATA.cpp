struct _COMMON_BUFFER_COUNTER// Size=0x10 (Id=594)
{
    struct _XILCORECOMMON_BUFFER_COUNTER * XilCoreCommonBufferCounter;// Offset=0x0 Size=0x8
    struct _PCW_INSTANCE * PcwInstanceHandle;// Offset=0x8 Size=0x8
};

struct _LIST_ENTRY// Size=0x10 (Id=22)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _DISPATCHER_HEADER// Size=0x18 (Id=727)
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

struct _KEVENT// Size=0x18 (Id=56)
{
    struct _DISPATCHER_HEADER Header;// Offset=0x0 Size=0x18
};

struct _SPIN_LOCK// Size=0x10 (Id=981)
{
    unsigned long long Lock;// Offset=0x0 Size=0x8
    unsigned char IsInitialized;// Offset=0x8 Size=0x1
    unsigned char OldIrql;// Offset=0x9 Size=0x1
};

struct _XIL_COMMON_BUFFER_POLICY// Size=0x10 (Id=903)
{
    unsigned long InitialCount;// Offset=0x0 Size=0x4
    unsigned long PreallocationThreshold;// Offset=0x4 Size=0x4
    unsigned long PreallocationCount;// Offset=0x8 Size=0x4
    unsigned long ReclamationThreshold;// Offset=0xc Size=0x4
};

struct _XILCORE_COMMON_BUFFER_SEGMENTER// Size=0x40 (Id=870)
{
    unsigned long SegmentSize;// Offset=0x0 Size=0x4
    unsigned long SegmentsPerPage;// Offset=0x4 Size=0x4
    struct _XIL_COMMON_BUFFER_POLICY Policy;// Offset=0x8 Size=0x10
    unsigned long NumberOfListEntries;// Offset=0x18 Size=0x4
    unsigned long AvailableListEntries;// Offset=0x1c Size=0x4
    struct _LIST_ENTRY List;// Offset=0x20 Size=0x10
    struct _LIST_ENTRY SegmentHeaderList;// Offset=0x30 Size=0x10
};

struct _XILCORECOMMON_BUFFER_COUNTER// Size=0x10 (Id=581)
{
    unsigned long PagesTotal;// Offset=0x0 Size=0x4
    unsigned long PagesInUse;// Offset=0x4 Size=0x4
    unsigned long AllocationCount;// Offset=0x8 Size=0x4
    unsigned long FreeCount;// Offset=0xc Size=0x4
};

struct _XILCORE_COMMON_BUFFER_DATA// Size=0xd8 (Id=469)
{
    void * CommonBufferHandle;// Offset=0x0 Size=0x8
    void * ControllerHandle;// Offset=0x8 Size=0x8
    struct _SPIN_LOCK CommonBufferLock;// Offset=0x10 Size=0x10
    struct _XILCORE_COMMON_BUFFER_SEGMENTER Segmenter[2];// Offset=0x20 Size=0x80
    struct _LIST_ENTRY BufferDataTrackingList;// Offset=0xa0 Size=0x10
    unsigned long PendingFreePageCount;// Offset=0xb0 Size=0x4
    struct _LIST_ENTRY RebalanceResourcesList;// Offset=0xb8 Size=0x10
    struct _XILCORECOMMON_BUFFER_COUNTER Counter;// Offset=0xc8 Size=0x10
};

struct _COMMON_BUFFER_DATA// Size=0x130 (Id=505)
{
    void * ControllerHandle;// Offset=0x0 Size=0x8
    struct _COMMON_BUFFER_COUNTER Counter;// Offset=0x8 Size=0x10
    struct _KEVENT WorkItemEvent;// Offset=0x18 Size=0x18
    unsigned long long CallbackListLock;// Offset=0x30 Size=0x8
    struct _LIST_ENTRY CallbackList;// Offset=0x38 Size=0x10
    struct WDFWORKITEM__ * RebalanceResourcesWorkItem;// Offset=0x48 Size=0x8
    unsigned char UseSecureCommonBuffers;// Offset=0x50 Size=0x1
    struct _XILCORE_COMMON_BUFFER_DATA XilCoreCommonBufferData;// Offset=0x58 Size=0xd8
};
