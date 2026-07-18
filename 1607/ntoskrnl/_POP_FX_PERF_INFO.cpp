struct _LIST_ENTRY// Size=0x10 (Id=20)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _DISPATCHER_HEADER// Size=0x18 (Id=681)
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

struct _KEVENT// Size=0x18 (Id=64)
{
    struct _DISPATCHER_HEADER Header;// Offset=0x0 Size=0x18
};

union _POP_FX_PERF_FLAGS// Size=0x4 (Id=1471)
{
    long Value;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long Progress:3;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x3
        unsigned long Reserved:24;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x18
        unsigned long Synchronicity:2;// Offset=0x0 Size=0x4 BitOffset=0x1b BitSize=0x2
        unsigned long RequestPepCompleted:1;// Offset=0x0 Size=0x4 BitOffset=0x1d BitSize=0x1
        unsigned long RequestSucceeded:1;// Offset=0x0 Size=0x4 BitOffset=0x1e BitSize=0x1
        unsigned long NestedCallback:1;// Offset=0x0 Size=0x4 BitOffset=0x1f BitSize=0x1
    };
};

struct _WORK_QUEUE_ITEM// Size=0x20 (Id=79)
{
    struct _LIST_ENTRY List;// Offset=0x0 Size=0x10
    void  ( * WorkerRoutine)(void * );// Offset=0x10 Size=0x8
    void * Parameter;// Offset=0x18 Size=0x8
};

struct _POP_FX_WORK_ORDER// Size=0x38 (Id=1158)
{
    struct _WORK_QUEUE_ITEM WorkItem;// Offset=0x0 Size=0x20
    long WorkCount;// Offset=0x20 Size=0x4
    void * Context;// Offset=0x28 Size=0x8
    struct _POP_FX_WORK_ORDER_WATCHDOG_INFO * WatchdogTimerInfo;// Offset=0x30 Size=0x8
};

struct _POP_FX_PERF_INFO// Size=0xa0 (Id=1472)
{
    struct _POP_FX_COMPONENT * Component;// Offset=0x0 Size=0x8
    struct _KEVENT CompletedEvent;// Offset=0x8 Size=0x18
    void  ( * ComponentPerfState)(void * ,unsigned long ,unsigned char ,void * );// Offset=0x20 Size=0x8
    union _POP_FX_PERF_FLAGS Flags;// Offset=0x28 Size=0x4
    struct _PO_FX_PERF_STATE_CHANGE * LastChange;// Offset=0x30 Size=0x8
    unsigned long LastChangeCount;// Offset=0x38 Size=0x4
    unsigned long long LastChangeStamp;// Offset=0x40 Size=0x8
    unsigned char LastChangeNominal;// Offset=0x48 Size=0x1
    unsigned char PepRegistered;// Offset=0x49 Size=0x1
    unsigned char QueryOnIdleStates;// Offset=0x4a Size=0x1
    void * RequestDriverContext;// Offset=0x50 Size=0x8
    struct _POP_FX_WORK_ORDER WorkOrder;// Offset=0x58 Size=0x38
    unsigned long SetsCount;// Offset=0x90 Size=0x4
    struct _POP_FX_PERF_SET * Sets;// Offset=0x98 Size=0x8
};
