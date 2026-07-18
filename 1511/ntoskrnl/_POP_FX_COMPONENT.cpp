struct _GUID// Size=0x10 (Id=101)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
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

struct _POP_FX_WORK_ORDER// Size=0x38 (Id=528)
{
    struct _WORK_QUEUE_ITEM WorkItem;// Offset=0x0 Size=0x20
    long WorkCount;// Offset=0x20 Size=0x4
    void * Context;// Offset=0x28 Size=0x8
    struct _POP_FX_WORK_ORDER_WATCHDOG_INFO * WatchdogTimerInfo;// Offset=0x30 Size=0x8
};

union _POP_FX_COMPONENT_FLAGS// Size=0x8 (Id=361)
{
    long Value;// Offset=0x0 Size=0x4
    long Value2;// Offset=0x4 Size=0x4
    struct // Size=0x8 (Id=0)
    {
        unsigned long RefCount:30;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1e
        unsigned long Idling:1;// Offset=0x0 Size=0x4 BitOffset=0x1e BitSize=0x1
        unsigned long Active:1;// Offset=0x0 Size=0x4 BitOffset=0x1f BitSize=0x1
        unsigned long CriticalIdleOverride:1;// Offset=0x4 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long ResidentOverride:1;// Offset=0x4 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long Reserved:30;// Offset=0x4 Size=0x4 BitOffset=0x2 BitSize=0x1e
    };
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

struct _POP_FX_ACCOUNTING// Size=0x30 (Id=1242)
{
    unsigned long long Lock;// Offset=0x0 Size=0x8
    unsigned char Active;// Offset=0x8 Size=0x1
    unsigned long DripsRequiredState;// Offset=0xc Size=0x4
    long Level;// Offset=0x10 Size=0x4
    long long ActiveStamp;// Offset=0x18 Size=0x8
    unsigned long long CsActiveTime;// Offset=0x20 Size=0x8
    long long CriticalActiveTime;// Offset=0x28 Size=0x8
};

struct _POP_FX_COMPONENT// Size=0x100 (Id=1254)
{
    struct _GUID Id;// Offset=0x0 Size=0x10
    unsigned long Index;// Offset=0x10 Size=0x4
    struct _POP_FX_WORK_ORDER WorkOrder;// Offset=0x18 Size=0x38
    struct _POP_FX_DEVICE * Device;// Offset=0x50 Size=0x8
    union _POP_FX_COMPONENT_FLAGS Flags;// Offset=0x58 Size=0x8
    long Resident;// Offset=0x60 Size=0x4
    struct _KEVENT ActiveEvent;// Offset=0x68 Size=0x18
    unsigned long long IdleLock;// Offset=0x80 Size=0x8
    long IdleConditionComplete;// Offset=0x88 Size=0x4
    long IdleStateComplete;// Offset=0x8c Size=0x4
    unsigned long long IdleStamp;// Offset=0x90 Size=0x8
    unsigned long CurrentIdleState;// Offset=0x98 Size=0x4
    unsigned long IdleStateCount;// Offset=0x9c Size=0x4
    struct _POP_FX_IDLE_STATE * IdleStates;// Offset=0xa0 Size=0x8
    unsigned long DeepestWakeableIdleState;// Offset=0xa8 Size=0x4
    unsigned long ProviderCount;// Offset=0xac Size=0x4
    struct _POP_FX_PROVIDER * Providers;// Offset=0xb0 Size=0x8
    unsigned long IdleProviderCount;// Offset=0xb8 Size=0x4
    unsigned long DependentCount;// Offset=0xbc Size=0x4
    struct _POP_FX_DEPENDENT * Dependents;// Offset=0xc0 Size=0x8
    struct _POP_FX_ACCOUNTING Accounting;// Offset=0xc8 Size=0x30
    struct _POP_FX_PERF_INFO * Performance;// Offset=0xf8 Size=0x8
};
