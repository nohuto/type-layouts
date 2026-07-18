struct _LIST_ENTRY// Size=0x10 (Id=19)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _DISPATCHER_HEADER// Size=0x18 (Id=252)
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

struct _KAFFINITY_EX// Size=0xa8 (Id=461)
{
    unsigned short Count;// Offset=0x0 Size=0x2
    unsigned short Size;// Offset=0x2 Size=0x2
    unsigned long Reserved;// Offset=0x4 Size=0x4
    unsigned long long Bitmap[20];// Offset=0x8 Size=0xa0
};

struct _SINGLE_LIST_ENTRY// Size=0x8 (Id=42)
{
    struct _SINGLE_LIST_ENTRY * Next;// Offset=0x0 Size=0x8
};

union _KEXECUTE_OPTIONS// Size=0x1 (Id=382)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char ExecuteDisable:1;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char ExecuteEnable:1;// Offset=0x0 Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char DisableThunkEmulation:1;// Offset=0x0 Size=0x1 BitOffset=0x2 BitSize=0x1
        unsigned char Permanent:1;// Offset=0x0 Size=0x1 BitOffset=0x3 BitSize=0x1
        unsigned char ExecuteDispatchEnable:1;// Offset=0x0 Size=0x1 BitOffset=0x4 BitSize=0x1
        unsigned char ImageDispatchEnable:1;// Offset=0x0 Size=0x1 BitOffset=0x5 BitSize=0x1
        unsigned char DisableExceptionChainValidation:1;// Offset=0x0 Size=0x1 BitOffset=0x6 BitSize=0x1
        unsigned char Spare:1;// Offset=0x0 Size=0x1 BitOffset=0x7 BitSize=0x1
    };
    unsigned char ExecuteOptions;// Offset=0x0 Size=0x1
    unsigned char ExecuteOptionsNV;// Offset=0x0 Size=0x1
};

union _KSTACK_COUNT// Size=0x4 (Id=248)
{
    long Value;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long State:3;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x3
        unsigned long StackCount:29;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1d
    };
};

struct _unnamed_486// Size=0x4 (Id=486)
{
    unsigned char BaseMiddle;// Offset=0x0 Size=0x1
    unsigned char Flags1;// Offset=0x1 Size=0x1
    unsigned char Flags2;// Offset=0x2 Size=0x1
    unsigned char BaseHigh;// Offset=0x3 Size=0x1
};

struct _unnamed_487// Size=0x4 (Id=487)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long BaseMiddle:8;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x8
        unsigned long Type:5;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x5
        unsigned long Dpl:2;// Offset=0x0 Size=0x4 BitOffset=0xd BitSize=0x2
        unsigned long Present:1;// Offset=0x0 Size=0x4 BitOffset=0xf BitSize=0x1
        unsigned long LimitHigh:4;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x4
        unsigned long System:1;// Offset=0x0 Size=0x4 BitOffset=0x14 BitSize=0x1
        unsigned long LongMode:1;// Offset=0x0 Size=0x4 BitOffset=0x15 BitSize=0x1
        unsigned long DefaultBig:1;// Offset=0x0 Size=0x4 BitOffset=0x16 BitSize=0x1
        unsigned long Granularity:1;// Offset=0x0 Size=0x4 BitOffset=0x17 BitSize=0x1
        unsigned long BaseHigh:8;// Offset=0x0 Size=0x4 BitOffset=0x18 BitSize=0x8
    };
};

union _KGDTENTRY64// Size=0x10 (Id=488)
{
    unsigned short LimitLow;// Offset=0x0 Size=0x2
    unsigned short BaseLow;// Offset=0x2 Size=0x2
    union // Size=0x4 (Id=0)
    {
        struct _unnamed_486 Bytes;// Offset=0x4 Size=0x4
        struct _unnamed_487 Bits;// Offset=0x4 Size=0x4
    };
    unsigned long BaseUpper;// Offset=0x8 Size=0x4
    unsigned long MustBeZero;// Offset=0xc Size=0x4
    long long DataLow;// Offset=0x0 Size=0x8
    long long DataHigh;// Offset=0x8 Size=0x8
};

struct _KEVENT// Size=0x18 (Id=59)
{
    struct _DISPATCHER_HEADER Header;// Offset=0x0 Size=0x18
};

struct _FAST_MUTEX// Size=0x38 (Id=57)
{
    long Count;// Offset=0x0 Size=0x4
    void * Owner;// Offset=0x8 Size=0x8
    unsigned long Contention;// Offset=0x10 Size=0x4
    struct _KEVENT Event;// Offset=0x18 Size=0x18
    unsigned long OldIrql;// Offset=0x30 Size=0x4
};

struct _KPROCESS// Size=0x2d8 (Id=53)
{
    struct _DISPATCHER_HEADER Header;// Offset=0x0 Size=0x18
    struct _LIST_ENTRY ProfileListHead;// Offset=0x18 Size=0x10
    unsigned long long DirectoryTableBase;// Offset=0x28 Size=0x8
    struct _LIST_ENTRY ThreadListHead;// Offset=0x30 Size=0x10
    unsigned long ProcessLock;// Offset=0x40 Size=0x4
    unsigned long Spare0;// Offset=0x44 Size=0x4
    unsigned long long DeepFreezeStartTime;// Offset=0x48 Size=0x8
    struct _KAFFINITY_EX Affinity;// Offset=0x50 Size=0xa8
    struct _LIST_ENTRY ReadyListHead;// Offset=0xf8 Size=0x10
    struct _SINGLE_LIST_ENTRY SwapListEntry;// Offset=0x108 Size=0x8
    struct _KAFFINITY_EX ActiveProcessors;// Offset=0x110 Size=0xa8
    union // Size=0x4 (Id=0)
    {
        struct // Size=0x4 (Id=0)
        {
            long AutoAlignment:1;// Offset=0x1b8 Size=0x4 BitOffset=0x0 BitSize=0x1
            long DisableBoost:1;// Offset=0x1b8 Size=0x4 BitOffset=0x1 BitSize=0x1
            long DisableQuantum:1;// Offset=0x1b8 Size=0x4 BitOffset=0x2 BitSize=0x1
            unsigned long DeepFreeze:1;// Offset=0x1b8 Size=0x4 BitOffset=0x3 BitSize=0x1
            unsigned long TimerVirtualization:1;// Offset=0x1b8 Size=0x4 BitOffset=0x4 BitSize=0x1
            unsigned long CheckStackExtents:1;// Offset=0x1b8 Size=0x4 BitOffset=0x5 BitSize=0x1
            unsigned long SpareFlags0:2;// Offset=0x1b8 Size=0x4 BitOffset=0x6 BitSize=0x2
            unsigned long ActiveGroupsMask:20;// Offset=0x1b8 Size=0x4 BitOffset=0x8 BitSize=0x14
            long ReservedFlags:4;// Offset=0x1b8 Size=0x4 BitOffset=0x1c BitSize=0x4
        };
        long ProcessFlags;// Offset=0x1b8 Size=0x4
    };
    char BasePriority;// Offset=0x1bc Size=0x1
    char QuantumReset;// Offset=0x1bd Size=0x1
    unsigned char Visited;// Offset=0x1be Size=0x1
    union _KEXECUTE_OPTIONS Flags;// Offset=0x1bf Size=0x1
    unsigned long ThreadSeed[20];// Offset=0x1c0 Size=0x50
    unsigned short IdealNode[20];// Offset=0x210 Size=0x28
    unsigned short IdealGlobalNode;// Offset=0x238 Size=0x2
    unsigned short Spare1;// Offset=0x23a Size=0x2
    union _KSTACK_COUNT StackCount;// Offset=0x23c Size=0x4
    struct _LIST_ENTRY ProcessListEntry;// Offset=0x240 Size=0x10
    unsigned long long CycleTime;// Offset=0x250 Size=0x8
    unsigned long long ContextSwitches;// Offset=0x258 Size=0x8
    struct _KSCHEDULING_GROUP * SchedulingGroup;// Offset=0x260 Size=0x8
    unsigned long FreezeCount;// Offset=0x268 Size=0x4
    unsigned long KernelTime;// Offset=0x26c Size=0x4
    unsigned long UserTime;// Offset=0x270 Size=0x4
    unsigned short LdtFreeSelectorHint;// Offset=0x274 Size=0x2
    unsigned short LdtTableLength;// Offset=0x276 Size=0x2
    union _KGDTENTRY64 LdtSystemDescriptor;// Offset=0x278 Size=0x10
    void * LdtBaseAddress;// Offset=0x288 Size=0x8
    struct _FAST_MUTEX LdtProcessLock;// Offset=0x290 Size=0x38
    void * InstrumentationCallback;// Offset=0x2c8 Size=0x8
    unsigned long long SecurePid;// Offset=0x2d0 Size=0x8
};
