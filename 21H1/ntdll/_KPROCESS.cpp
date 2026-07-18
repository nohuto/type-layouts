struct _LIST_ENTRY// Size=0x8 (Id=25)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x4
    struct _LIST_ENTRY * Blink;// Offset=0x4 Size=0x4
};

struct _DISPATCHER_HEADER// Size=0x10 (Id=360)
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
            unsigned char Index:1;// Offset=0x3 Size=0x1 BitOffset=0x0 BitSize=0x1
            unsigned char Processor:5;// Offset=0x3 Size=0x1 BitOffset=0x1 BitSize=0x5
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
                unsigned char Instrumented:1;// Offset=0x2 Size=0x1 BitOffset=0x7 BitSize=0x1
            };
        };
        unsigned char DebugActive;// Offset=0x3 Size=0x1
        unsigned char MutantType;// Offset=0x0 Size=0x1
        unsigned char MutantSize;// Offset=0x1 Size=0x1
        unsigned char DpcActive;// Offset=0x2 Size=0x1
        unsigned char MutantReserved;// Offset=0x3 Size=0x1
    };
    long SignalState;// Offset=0x4 Size=0x4
    struct _LIST_ENTRY WaitListHead;// Offset=0x8 Size=0x8
};

struct _anonymous_434// Size=0x4 (Id=434)
{
    unsigned char BaseMid;// Offset=0x0 Size=0x1
    unsigned char Flags1;// Offset=0x1 Size=0x1
    unsigned char Flags2;// Offset=0x2 Size=0x1
    unsigned char BaseHi;// Offset=0x3 Size=0x1
};

struct _anonymous_435// Size=0x4 (Id=435)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long BaseMid:8;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x8
        unsigned long Type:5;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x5
        unsigned long Dpl:2;// Offset=0x0 Size=0x4 BitOffset=0xd BitSize=0x2
        unsigned long Pres:1;// Offset=0x0 Size=0x4 BitOffset=0xf BitSize=0x1
        unsigned long LimitHi:4;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x4
        unsigned long Sys:1;// Offset=0x0 Size=0x4 BitOffset=0x14 BitSize=0x1
        unsigned long Reserved_0:1;// Offset=0x0 Size=0x4 BitOffset=0x15 BitSize=0x1
        unsigned long Default_Big:1;// Offset=0x0 Size=0x4 BitOffset=0x16 BitSize=0x1
        unsigned long Granularity:1;// Offset=0x0 Size=0x4 BitOffset=0x17 BitSize=0x1
        unsigned long BaseHi:8;// Offset=0x0 Size=0x4 BitOffset=0x18 BitSize=0x8
    };
};

union _anonymous_436// Size=0x4 (Id=436)
{
    struct _anonymous_434 Bytes;// Offset=0x0 Size=0x4
    struct _anonymous_435 Bits;// Offset=0x0 Size=0x4
};

struct _KGDTENTRY// Size=0x8 (Id=437)
{
    unsigned short LimitLow;// Offset=0x0 Size=0x2
    unsigned short BaseLow;// Offset=0x2 Size=0x2
    union _anonymous_436 HighWord;// Offset=0x4 Size=0x4
};

struct _KIDTENTRY// Size=0x8 (Id=555)
{
    unsigned short Offset;// Offset=0x0 Size=0x2
    unsigned short Selector;// Offset=0x2 Size=0x2
    unsigned short Access;// Offset=0x4 Size=0x2
    unsigned short ExtendedOffset;// Offset=0x6 Size=0x2
};

struct _KAFFINITY_EX// Size=0x58 (Id=58)
{
    unsigned short Count;// Offset=0x0 Size=0x2
    unsigned short Size;// Offset=0x2 Size=0x2
    unsigned long Reserved;// Offset=0x4 Size=0x4
    unsigned long Bitmap[20];// Offset=0x8 Size=0x50
};

struct _SINGLE_LIST_ENTRY// Size=0x4 (Id=26)
{
    struct _SINGLE_LIST_ENTRY * Next;// Offset=0x0 Size=0x4
};

union _KEXECUTE_OPTIONS// Size=0x1 (Id=355)
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

union _KSTACK_COUNT// Size=0x4 (Id=432)
{
    long Value;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long State:3;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x3
        unsigned long StackCount:29;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1d
    };
};

struct _KPROCESS// Size=0x298 (Id=60)
{
    struct _DISPATCHER_HEADER Header;// Offset=0x0 Size=0x10
    struct _LIST_ENTRY ProfileListHead;// Offset=0x10 Size=0x8
    unsigned long DirectoryTableBase;// Offset=0x18 Size=0x4
    struct _KGDTENTRY LdtDescriptor;// Offset=0x1c Size=0x8
    struct _KIDTENTRY Int21Descriptor;// Offset=0x24 Size=0x8
    struct _LIST_ENTRY ThreadListHead;// Offset=0x2c Size=0x8
    unsigned long ProcessLock;// Offset=0x34 Size=0x4
    unsigned long long DeepFreezeStartTime;// Offset=0x38 Size=0x8
    struct _KAFFINITY_EX Affinity;// Offset=0x40 Size=0x58
    unsigned long AffinityPadding[12];// Offset=0x98 Size=0x30
    struct _LIST_ENTRY ReadyListHead;// Offset=0xc8 Size=0x8
    struct _SINGLE_LIST_ENTRY SwapListEntry;// Offset=0xd0 Size=0x4
    struct _KAFFINITY_EX ActiveProcessors;// Offset=0xd4 Size=0x58
    unsigned long ActiveProcessorsPadding[12];// Offset=0x12c Size=0x30
    union // Size=0x4 (Id=0)
    {
        struct // Size=0x4 (Id=0)
        {
            unsigned long AutoAlignment:1;// Offset=0x15c Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long DisableBoost:1;// Offset=0x15c Size=0x4 BitOffset=0x1 BitSize=0x1
            unsigned long DisableQuantum:1;// Offset=0x15c Size=0x4 BitOffset=0x2 BitSize=0x1
            unsigned long DeepFreeze:1;// Offset=0x15c Size=0x4 BitOffset=0x3 BitSize=0x1
            unsigned long TimerVirtualization:1;// Offset=0x15c Size=0x4 BitOffset=0x4 BitSize=0x1
            unsigned long CheckStackExtents:1;// Offset=0x15c Size=0x4 BitOffset=0x5 BitSize=0x1
            unsigned long CacheIsolationEnabled:1;// Offset=0x15c Size=0x4 BitOffset=0x6 BitSize=0x1
            unsigned long PpmPolicy:3;// Offset=0x15c Size=0x4 BitOffset=0x7 BitSize=0x3
            unsigned long VaSpaceDeleted:1;// Offset=0x15c Size=0x4 BitOffset=0xa BitSize=0x1
            unsigned long ReservedFlags:21;// Offset=0x15c Size=0x4 BitOffset=0xb BitSize=0x15
        };
        long ProcessFlags;// Offset=0x15c Size=0x4
    };
    unsigned long ActiveGroupsMask;// Offset=0x160 Size=0x4
    char BasePriority;// Offset=0x164 Size=0x1
    char QuantumReset;// Offset=0x165 Size=0x1
    char Visited;// Offset=0x166 Size=0x1
    union _KEXECUTE_OPTIONS Flags;// Offset=0x167 Size=0x1
    unsigned short ThreadSeed[20];// Offset=0x168 Size=0x28
    unsigned short ThreadSeedPadding[12];// Offset=0x190 Size=0x18
    unsigned short IdealProcessor[20];// Offset=0x1a8 Size=0x28
    unsigned short IdealProcessorPadding[12];// Offset=0x1d0 Size=0x18
    unsigned short IdealNode[20];// Offset=0x1e8 Size=0x28
    unsigned short IdealNodePadding[12];// Offset=0x210 Size=0x18
    unsigned short IdealGlobalNode;// Offset=0x228 Size=0x2
    unsigned short Spare1;// Offset=0x22a Size=0x2
    unsigned short IopmOffset;// Offset=0x22c Size=0x2
    struct _KSCHEDULING_GROUP * SchedulingGroup;// Offset=0x230 Size=0x4
    union _KSTACK_COUNT StackCount;// Offset=0x234 Size=0x4
    struct _LIST_ENTRY ProcessListEntry;// Offset=0x238 Size=0x8
    unsigned long long CycleTime;// Offset=0x240 Size=0x8
    unsigned long long ContextSwitches;// Offset=0x248 Size=0x8
    unsigned long FreezeCount;// Offset=0x250 Size=0x4
    unsigned long KernelTime;// Offset=0x254 Size=0x4
    unsigned long UserTime;// Offset=0x258 Size=0x4
    unsigned long ReadyTime;// Offset=0x25c Size=0x4
    void * VdmTrapcHandler;// Offset=0x260 Size=0x4
    unsigned long ProcessTimerDelay;// Offset=0x264 Size=0x4
    unsigned long long KernelWaitTime;// Offset=0x268 Size=0x8
    unsigned long long UserWaitTime;// Offset=0x270 Size=0x8
    unsigned long EndPadding[8];// Offset=0x278 Size=0x20
};
