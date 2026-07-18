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

struct _EX_PUSH_LOCK// Size=0x4 (Id=83)
{
    union // Size=0x4 (Id=0)
    {
        struct // Size=0x4 (Id=0)
        {
            unsigned long Locked:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long Waiting:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
            unsigned long Waking:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
            unsigned long MultipleShared:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
            unsigned long Shared:28;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1c
        };
        unsigned long Value;// Offset=0x0 Size=0x4
        void * Ptr;// Offset=0x0 Size=0x4
    };
};

struct _EX_RUNDOWN_REF// Size=0x4 (Id=185)
{
    union // Size=0x4 (Id=0)
    {
        unsigned long Count;// Offset=0x0 Size=0x4
        void * Ptr;// Offset=0x0 Size=0x4
    };
};

struct _anonymous_13// Size=0x8 (Id=13)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=322)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _anonymous_13 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _EX_FAST_REF// Size=0x4 (Id=93)
{
    union // Size=0x4 (Id=0)
    {
        void * Object;// Offset=0x0 Size=0x4
        struct // Size=0x4 (Id=0)
        {
            unsigned long RefCnt:3;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x3
        };
        unsigned long Value;// Offset=0x0 Size=0x4
    };
};

struct _RTL_AVL_TREE// Size=0x4 (Id=39)
{
    struct _RTL_BALANCED_NODE * Root;// Offset=0x0 Size=0x4
};

struct _SE_AUDIT_PROCESS_CREATION_INFO// Size=0x4 (Id=521)
{
    struct _OBJECT_NAME_INFORMATION * ImageFileName;// Offset=0x0 Size=0x4
};

struct _MMSUPPORT_FLAGS// Size=0x4 (Id=552)
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

struct _MMSUPPORT_INSTANCE// Size=0x64 (Id=478)
{
    unsigned long NextPageColor;// Offset=0x0 Size=0x4
    unsigned long PageFaultCount;// Offset=0x4 Size=0x4
    unsigned long TrimmedPageCount;// Offset=0x8 Size=0x4
    struct _MMWSL_INSTANCE * VmWorkingSetList;// Offset=0xc Size=0x4
    struct _LIST_ENTRY WorkingSetExpansionLinks;// Offset=0x10 Size=0x8
    unsigned long AgeDistribution[8];// Offset=0x18 Size=0x20
    struct _KGATE * ExitOutswapGate;// Offset=0x38 Size=0x4
    unsigned long MinimumWorkingSetSize;// Offset=0x3c Size=0x4
    unsigned long WorkingSetLeafSize;// Offset=0x40 Size=0x4
    unsigned long WorkingSetLeafPrivateSize;// Offset=0x44 Size=0x4
    unsigned long WorkingSetSize;// Offset=0x48 Size=0x4
    unsigned long WorkingSetPrivateSize;// Offset=0x4c Size=0x4
    unsigned long MaximumWorkingSetSize;// Offset=0x50 Size=0x4
    unsigned long PeakWorkingSetSize;// Offset=0x54 Size=0x4
    unsigned long HardFaultCount;// Offset=0x58 Size=0x4
    unsigned short LastTrimStamp;// Offset=0x5c Size=0x2
    unsigned short Unused0;// Offset=0x5e Size=0x2
    struct _MMSUPPORT_FLAGS Flags;// Offset=0x60 Size=0x4
};

struct _MMSUPPORT_SHARED// Size=0x80 (Id=495)
{
    long WorkingSetLock;// Offset=0x0 Size=0x4
    long GoodCitizenWaiting;// Offset=0x4 Size=0x4
    unsigned long ReleasedCommitDebt;// Offset=0x8 Size=0x4
    unsigned long ResetPagesRepurposedCount;// Offset=0xc Size=0x4
    void * WsSwapSupport;// Offset=0x10 Size=0x4
    void * CommitReleaseContext;// Offset=0x14 Size=0x4
    void * AccessLog;// Offset=0x18 Size=0x4
    unsigned long ChargedWslePages;// Offset=0x1c Size=0x4
    unsigned long ActualWslePages;// Offset=0x20 Size=0x4
    unsigned long WorkingSetCoreLock;// Offset=0x40 Size=0x4
    void * ShadowMapping;// Offset=0x44 Size=0x4
};

struct _MMSUPPORT_FULL// Size=0x100 (Id=379)
{
    struct _MMSUPPORT_INSTANCE Instance;// Offset=0x0 Size=0x64
    struct _MMSUPPORT_SHARED Shared;// Offset=0x80 Size=0x80
};

struct _ALPC_PROCESS_CONTEXT// Size=0x10 (Id=422)
{
    struct _EX_PUSH_LOCK Lock;// Offset=0x0 Size=0x4
    struct _LIST_ENTRY ViewListHead;// Offset=0x4 Size=0x8
    unsigned long PagedPoolQuotaCache;// Offset=0xc Size=0x4
};

struct _PS_PROTECTION// Size=0x1 (Id=398)
{
    union // Size=0x1 (Id=0)
    {
        unsigned char Level;// Offset=0x0 Size=0x1
        struct // Size=0x1 (Id=0)
        {
            unsigned char Type:3;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x3
            unsigned char Audit:1;// Offset=0x0 Size=0x1 BitOffset=0x3 BitSize=0x1
            unsigned char Signer:4;// Offset=0x0 Size=0x1 BitOffset=0x4 BitSize=0x4
        };
    };
};

union _PS_INTERLOCKED_TIMER_DELAY_VALUES// Size=0x8 (Id=105)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long DelayMs:30;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1e
        unsigned long long CoalescingWindowMs:30;// Offset=0x0 Size=0x8 BitOffset=0x1e BitSize=0x1e
        unsigned long long Reserved:1;// Offset=0x0 Size=0x8 BitOffset=0x3c BitSize=0x1
        unsigned long long NewTimerWheel:1;// Offset=0x0 Size=0x8 BitOffset=0x3d BitSize=0x1
        unsigned long long Retry:1;// Offset=0x0 Size=0x8 BitOffset=0x3e BitSize=0x1
        unsigned long long Locked:1;// Offset=0x0 Size=0x8 BitOffset=0x3f BitSize=0x1
    };
    unsigned long long All;// Offset=0x0 Size=0x8
};

struct _WNF_STATE_NAME// Size=0x8 (Id=603)
{
    unsigned long Data[2];// Offset=0x0 Size=0x8
};

struct _JOBOBJECT_WAKE_FILTER// Size=0x8 (Id=380)
{
    unsigned long HighEdgeFilter;// Offset=0x0 Size=0x4
    unsigned long LowEdgeFilter;// Offset=0x4 Size=0x4
};

struct _PS_PROCESS_WAKE_INFORMATION// Size=0x30 (Id=370)
{
    unsigned long long NotificationChannel;// Offset=0x0 Size=0x8
    unsigned long WakeCounters[7];// Offset=0x8 Size=0x1c
    struct _JOBOBJECT_WAKE_FILTER WakeFilter;// Offset=0x24 Size=0x8
    unsigned long NoWakeCounter;// Offset=0x2c Size=0x4
};

struct _anonymous_106// Size=0x4 (Id=106)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long ControlFlowGuardEnabled:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long ControlFlowGuardExportSuppressionEnabled:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long ControlFlowGuardStrict:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long DisallowStrippedImages:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long ForceRelocateImages:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long HighEntropyASLREnabled:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long StackRandomizationDisabled:1;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1
        unsigned long ExtensionPointDisable:1;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x1
        unsigned long DisableDynamicCode:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
        unsigned long DisableDynamicCodeAllowOptOut:1;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x1
        unsigned long DisableDynamicCodeAllowRemoteDowngrade:1;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x1
        unsigned long AuditDisableDynamicCode:1;// Offset=0x0 Size=0x4 BitOffset=0xb BitSize=0x1
        unsigned long DisallowWin32kSystemCalls:1;// Offset=0x0 Size=0x4 BitOffset=0xc BitSize=0x1
        unsigned long AuditDisallowWin32kSystemCalls:1;// Offset=0x0 Size=0x4 BitOffset=0xd BitSize=0x1
        unsigned long EnableFilteredWin32kAPIs:1;// Offset=0x0 Size=0x4 BitOffset=0xe BitSize=0x1
        unsigned long AuditFilteredWin32kAPIs:1;// Offset=0x0 Size=0x4 BitOffset=0xf BitSize=0x1
        unsigned long DisableNonSystemFonts:1;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x1
        unsigned long AuditNonSystemFontLoading:1;// Offset=0x0 Size=0x4 BitOffset=0x11 BitSize=0x1
        unsigned long PreferSystem32Images:1;// Offset=0x0 Size=0x4 BitOffset=0x12 BitSize=0x1
        unsigned long ProhibitRemoteImageMap:1;// Offset=0x0 Size=0x4 BitOffset=0x13 BitSize=0x1
        unsigned long AuditProhibitRemoteImageMap:1;// Offset=0x0 Size=0x4 BitOffset=0x14 BitSize=0x1
        unsigned long ProhibitLowILImageMap:1;// Offset=0x0 Size=0x4 BitOffset=0x15 BitSize=0x1
        unsigned long AuditProhibitLowILImageMap:1;// Offset=0x0 Size=0x4 BitOffset=0x16 BitSize=0x1
        unsigned long SignatureMitigationOptIn:1;// Offset=0x0 Size=0x4 BitOffset=0x17 BitSize=0x1
        unsigned long AuditBlockNonMicrosoftBinaries:1;// Offset=0x0 Size=0x4 BitOffset=0x18 BitSize=0x1
        unsigned long AuditBlockNonMicrosoftBinariesAllowStore:1;// Offset=0x0 Size=0x4 BitOffset=0x19 BitSize=0x1
        unsigned long LoaderIntegrityContinuityEnabled:1;// Offset=0x0 Size=0x4 BitOffset=0x1a BitSize=0x1
        unsigned long AuditLoaderIntegrityContinuity:1;// Offset=0x0 Size=0x4 BitOffset=0x1b BitSize=0x1
        unsigned long EnableModuleTamperingProtection:1;// Offset=0x0 Size=0x4 BitOffset=0x1c BitSize=0x1
        unsigned long EnableModuleTamperingProtectionNoInherit:1;// Offset=0x0 Size=0x4 BitOffset=0x1d BitSize=0x1
        unsigned long RestrictIndirectBranchPrediction:1;// Offset=0x0 Size=0x4 BitOffset=0x1e BitSize=0x1
        unsigned long IsolateSecurityDomain:1;// Offset=0x0 Size=0x4 BitOffset=0x1f BitSize=0x1
    };
};

struct _anonymous_107// Size=0x4 (Id=107)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long EnableExportAddressFilter:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long AuditExportAddressFilter:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long EnableExportAddressFilterPlus:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long AuditExportAddressFilterPlus:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long EnableRopStackPivot:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long AuditRopStackPivot:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long EnableRopCallerCheck:1;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1
        unsigned long AuditRopCallerCheck:1;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x1
        unsigned long EnableRopSimExec:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
        unsigned long AuditRopSimExec:1;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x1
        unsigned long EnableImportAddressFilter:1;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x1
        unsigned long AuditImportAddressFilter:1;// Offset=0x0 Size=0x4 BitOffset=0xb BitSize=0x1
        unsigned long DisablePageCombine:1;// Offset=0x0 Size=0x4 BitOffset=0xc BitSize=0x1
        unsigned long SpeculativeStoreBypassDisable:1;// Offset=0x0 Size=0x4 BitOffset=0xd BitSize=0x1
        unsigned long CetUserShadowStacks:1;// Offset=0x0 Size=0x4 BitOffset=0xe BitSize=0x1
        unsigned long AuditCetUserShadowStacks:1;// Offset=0x0 Size=0x4 BitOffset=0xf BitSize=0x1
        unsigned long AuditCetUserShadowStacksLogged:1;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x1
        unsigned long UserCetSetContextIpValidation:1;// Offset=0x0 Size=0x4 BitOffset=0x11 BitSize=0x1
        unsigned long AuditUserCetSetContextIpValidation:1;// Offset=0x0 Size=0x4 BitOffset=0x12 BitSize=0x1
        unsigned long AuditUserCetSetContextIpValidationLogged:1;// Offset=0x0 Size=0x4 BitOffset=0x13 BitSize=0x1
        unsigned long CetUserShadowStacksStrictMode:1;// Offset=0x0 Size=0x4 BitOffset=0x14 BitSize=0x1
        unsigned long BlockNonCetBinaries:1;// Offset=0x0 Size=0x4 BitOffset=0x15 BitSize=0x1
        unsigned long BlockNonCetBinariesNonEhcont:1;// Offset=0x0 Size=0x4 BitOffset=0x16 BitSize=0x1
        unsigned long AuditBlockNonCetBinaries:1;// Offset=0x0 Size=0x4 BitOffset=0x17 BitSize=0x1
        unsigned long AuditBlockNonCetBinariesLogged:1;// Offset=0x0 Size=0x4 BitOffset=0x18 BitSize=0x1
        unsigned long Reserved1:1;// Offset=0x0 Size=0x4 BitOffset=0x19 BitSize=0x1
        unsigned long Reserved2:1;// Offset=0x0 Size=0x4 BitOffset=0x1a BitSize=0x1
        unsigned long Reserved3:1;// Offset=0x0 Size=0x4 BitOffset=0x1b BitSize=0x1
        unsigned long Reserved4:1;// Offset=0x0 Size=0x4 BitOffset=0x1c BitSize=0x1
        unsigned long Reserved5:1;// Offset=0x0 Size=0x4 BitOffset=0x1d BitSize=0x1
        unsigned long CetDynamicApisOutOfProcOnly:1;// Offset=0x0 Size=0x4 BitOffset=0x1e BitSize=0x1
        unsigned long UserCetSetContextIpValidationRelaxedMode:1;// Offset=0x0 Size=0x4 BitOffset=0x1f BitSize=0x1
    };
};

struct _PS_DYNAMIC_ENFORCED_ADDRESS_RANGES// Size=0x8 (Id=391)
{
    struct _RTL_AVL_TREE Tree;// Offset=0x0 Size=0x4
    struct _EX_PUSH_LOCK Lock;// Offset=0x4 Size=0x4
};

struct _EPROCESS// Size=0x6c0 (Id=108)
{
    struct _KPROCESS Pcb;// Offset=0x0 Size=0x298
    struct _EX_PUSH_LOCK ProcessLock;// Offset=0x298 Size=0x4
    void * UniqueProcessId;// Offset=0x29c Size=0x4
    struct _LIST_ENTRY ActiveProcessLinks;// Offset=0x2a0 Size=0x8
    struct _EX_RUNDOWN_REF RundownProtect;// Offset=0x2a8 Size=0x4
    void * VdmObjects;// Offset=0x2ac Size=0x4
    union // Size=0x4 (Id=0)
    {
        unsigned long Flags2;// Offset=0x2b0 Size=0x4
        struct // Size=0x4 (Id=0)
        {
            unsigned long JobNotReallyActive:1;// Offset=0x2b0 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long AccountingFolded:1;// Offset=0x2b0 Size=0x4 BitOffset=0x1 BitSize=0x1
            unsigned long NewProcessReported:1;// Offset=0x2b0 Size=0x4 BitOffset=0x2 BitSize=0x1
            unsigned long ExitProcessReported:1;// Offset=0x2b0 Size=0x4 BitOffset=0x3 BitSize=0x1
            unsigned long ReportCommitChanges:1;// Offset=0x2b0 Size=0x4 BitOffset=0x4 BitSize=0x1
            unsigned long LastReportMemory:1;// Offset=0x2b0 Size=0x4 BitOffset=0x5 BitSize=0x1
            unsigned long ForceWakeCharge:1;// Offset=0x2b0 Size=0x4 BitOffset=0x6 BitSize=0x1
            unsigned long CrossSessionCreate:1;// Offset=0x2b0 Size=0x4 BitOffset=0x7 BitSize=0x1
            unsigned long NeedsHandleRundown:1;// Offset=0x2b0 Size=0x4 BitOffset=0x8 BitSize=0x1
            unsigned long RefTraceEnabled:1;// Offset=0x2b0 Size=0x4 BitOffset=0x9 BitSize=0x1
            unsigned long PicoCreated:1;// Offset=0x2b0 Size=0x4 BitOffset=0xa BitSize=0x1
            unsigned long EmptyJobEvaluated:1;// Offset=0x2b0 Size=0x4 BitOffset=0xb BitSize=0x1
            unsigned long DefaultPagePriority:3;// Offset=0x2b0 Size=0x4 BitOffset=0xc BitSize=0x3
            unsigned long PrimaryTokenFrozen:1;// Offset=0x2b0 Size=0x4 BitOffset=0xf BitSize=0x1
            unsigned long ProcessVerifierTarget:1;// Offset=0x2b0 Size=0x4 BitOffset=0x10 BitSize=0x1
            unsigned long RestrictSetThreadContext:1;// Offset=0x2b0 Size=0x4 BitOffset=0x11 BitSize=0x1
            unsigned long AffinityPermanent:1;// Offset=0x2b0 Size=0x4 BitOffset=0x12 BitSize=0x1
            unsigned long AffinityUpdateEnable:1;// Offset=0x2b0 Size=0x4 BitOffset=0x13 BitSize=0x1
            unsigned long PropagateNode:1;// Offset=0x2b0 Size=0x4 BitOffset=0x14 BitSize=0x1
            unsigned long ExplicitAffinity:1;// Offset=0x2b0 Size=0x4 BitOffset=0x15 BitSize=0x1
            unsigned long ProcessExecutionState:2;// Offset=0x2b0 Size=0x4 BitOffset=0x16 BitSize=0x2
            unsigned long EnableReadVmLogging:1;// Offset=0x2b0 Size=0x4 BitOffset=0x18 BitSize=0x1
            unsigned long EnableWriteVmLogging:1;// Offset=0x2b0 Size=0x4 BitOffset=0x19 BitSize=0x1
            unsigned long FatalAccessTerminationRequested:1;// Offset=0x2b0 Size=0x4 BitOffset=0x1a BitSize=0x1
            unsigned long DisableSystemAllowedCpuSet:1;// Offset=0x2b0 Size=0x4 BitOffset=0x1b BitSize=0x1
            unsigned long ProcessStateChangeRequest:2;// Offset=0x2b0 Size=0x4 BitOffset=0x1c BitSize=0x2
            unsigned long ProcessStateChangeInProgress:1;// Offset=0x2b0 Size=0x4 BitOffset=0x1e BitSize=0x1
            unsigned long InPrivate:1;// Offset=0x2b0 Size=0x4 BitOffset=0x1f BitSize=0x1
        };
    };
    union // Size=0x4 (Id=0)
    {
        unsigned long Flags;// Offset=0x2b4 Size=0x4
        struct // Size=0x4 (Id=0)
        {
            unsigned long CreateReported:1;// Offset=0x2b4 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long NoDebugInherit:1;// Offset=0x2b4 Size=0x4 BitOffset=0x1 BitSize=0x1
            unsigned long ProcessExiting:1;// Offset=0x2b4 Size=0x4 BitOffset=0x2 BitSize=0x1
            unsigned long ProcessDelete:1;// Offset=0x2b4 Size=0x4 BitOffset=0x3 BitSize=0x1
            unsigned long ManageExecutableMemoryWrites:1;// Offset=0x2b4 Size=0x4 BitOffset=0x4 BitSize=0x1
            unsigned long VmDeleted:1;// Offset=0x2b4 Size=0x4 BitOffset=0x5 BitSize=0x1
            unsigned long OutswapEnabled:1;// Offset=0x2b4 Size=0x4 BitOffset=0x6 BitSize=0x1
            unsigned long Outswapped:1;// Offset=0x2b4 Size=0x4 BitOffset=0x7 BitSize=0x1
            unsigned long FailFastOnCommitFail:1;// Offset=0x2b4 Size=0x4 BitOffset=0x8 BitSize=0x1
            unsigned long Wow64VaSpace4Gb:1;// Offset=0x2b4 Size=0x4 BitOffset=0x9 BitSize=0x1
            unsigned long AddressSpaceInitialized:2;// Offset=0x2b4 Size=0x4 BitOffset=0xa BitSize=0x2
            unsigned long SetTimerResolution:1;// Offset=0x2b4 Size=0x4 BitOffset=0xc BitSize=0x1
            unsigned long BreakOnTermination:1;// Offset=0x2b4 Size=0x4 BitOffset=0xd BitSize=0x1
            unsigned long DeprioritizeViews:1;// Offset=0x2b4 Size=0x4 BitOffset=0xe BitSize=0x1
            unsigned long WriteWatch:1;// Offset=0x2b4 Size=0x4 BitOffset=0xf BitSize=0x1
            unsigned long ProcessInSession:1;// Offset=0x2b4 Size=0x4 BitOffset=0x10 BitSize=0x1
            unsigned long OverrideAddressSpace:1;// Offset=0x2b4 Size=0x4 BitOffset=0x11 BitSize=0x1
            unsigned long HasAddressSpace:1;// Offset=0x2b4 Size=0x4 BitOffset=0x12 BitSize=0x1
            unsigned long LaunchPrefetched:1;// Offset=0x2b4 Size=0x4 BitOffset=0x13 BitSize=0x1
            unsigned long Background:1;// Offset=0x2b4 Size=0x4 BitOffset=0x14 BitSize=0x1
            unsigned long VmTopDown:1;// Offset=0x2b4 Size=0x4 BitOffset=0x15 BitSize=0x1
            unsigned long ImageNotifyDone:1;// Offset=0x2b4 Size=0x4 BitOffset=0x16 BitSize=0x1
            unsigned long PdeUpdateNeeded:1;// Offset=0x2b4 Size=0x4 BitOffset=0x17 BitSize=0x1
            unsigned long VdmAllowed:1;// Offset=0x2b4 Size=0x4 BitOffset=0x18 BitSize=0x1
            unsigned long ProcessRundown:1;// Offset=0x2b4 Size=0x4 BitOffset=0x19 BitSize=0x1
            unsigned long ProcessInserted:1;// Offset=0x2b4 Size=0x4 BitOffset=0x1a BitSize=0x1
            unsigned long DefaultIoPriority:3;// Offset=0x2b4 Size=0x4 BitOffset=0x1b BitSize=0x3
            unsigned long ProcessSelfDelete:1;// Offset=0x2b4 Size=0x4 BitOffset=0x1e BitSize=0x1
            unsigned long SetTimerResolutionLink:1;// Offset=0x2b4 Size=0x4 BitOffset=0x1f BitSize=0x1
        };
    };
    union _LARGE_INTEGER CreateTime;// Offset=0x2b8 Size=0x8
    unsigned long ProcessQuotaUsage[2];// Offset=0x2c0 Size=0x8
    unsigned long ProcessQuotaPeak[2];// Offset=0x2c8 Size=0x8
    unsigned long PeakVirtualSize;// Offset=0x2d0 Size=0x4
    unsigned long VirtualSize;// Offset=0x2d4 Size=0x4
    struct _LIST_ENTRY SessionProcessLinks;// Offset=0x2d8 Size=0x8
    union // Size=0x2e4 (Id=0)
    {
        void * ExceptionPortData;// Offset=0x2e0 Size=0x4
        unsigned long ExceptionPortValue;// Offset=0x2e0 Size=0x4
        struct // Size=0x4 (Id=0)
        {
            unsigned long ExceptionPortState:3;// Offset=0x2e0 Size=0x4 BitOffset=0x0 BitSize=0x3
        };
    };
    struct _EX_FAST_REF Token;// Offset=0x2e4 Size=0x4
    unsigned long MmReserved;// Offset=0x2e8 Size=0x4
    struct _EX_PUSH_LOCK AddressCreationLock;// Offset=0x2ec Size=0x4
    struct _EX_PUSH_LOCK PageTableCommitmentLock;// Offset=0x2f0 Size=0x4
    struct _ETHREAD * RotateInProgress;// Offset=0x2f4 Size=0x4
    struct _ETHREAD * ForkInProgress;// Offset=0x2f8 Size=0x4
    struct _EJOB * CommitChargeJob;// Offset=0x2fc Size=0x4
    struct _RTL_AVL_TREE CloneRoot;// Offset=0x300 Size=0x4
    unsigned long NumberOfPrivatePages;// Offset=0x304 Size=0x4
    unsigned long NumberOfLockedPages;// Offset=0x308 Size=0x4
    void * Win32Process;// Offset=0x30c Size=0x4
    struct _EJOB * Job;// Offset=0x310 Size=0x4
    void * SectionObject;// Offset=0x314 Size=0x4
    void * SectionBaseAddress;// Offset=0x318 Size=0x4
    unsigned long Cookie;// Offset=0x31c Size=0x4
    struct _PAGEFAULT_HISTORY * WorkingSetWatch;// Offset=0x320 Size=0x4
    void * Win32WindowStation;// Offset=0x324 Size=0x4
    void * InheritedFromUniqueProcessId;// Offset=0x328 Size=0x4
    void * LdtInformation;// Offset=0x32c Size=0x4
    unsigned long OwnerProcessId;// Offset=0x330 Size=0x4
    struct _PEB * Peb;// Offset=0x334 Size=0x4
    struct _MM_SESSION_SPACE * Session;// Offset=0x338 Size=0x4
    void * Spare1;// Offset=0x33c Size=0x4
    struct _EPROCESS_QUOTA_BLOCK * QuotaBlock;// Offset=0x340 Size=0x4
    struct _HANDLE_TABLE * ObjectTable;// Offset=0x344 Size=0x4
    void * DebugPort;// Offset=0x348 Size=0x4
    void * PaeTop;// Offset=0x34c Size=0x4
    void * DeviceMap;// Offset=0x350 Size=0x4
    void * EtwDataSource;// Offset=0x354 Size=0x4
    unsigned long long PageDirectoryPte;// Offset=0x358 Size=0x8
    struct _FILE_OBJECT * ImageFilePointer;// Offset=0x360 Size=0x4
    unsigned char ImageFileName[15];// Offset=0x364 Size=0xf
    unsigned char PriorityClass;// Offset=0x373 Size=0x1
    void * SecurityPort;// Offset=0x374 Size=0x4
    struct _SE_AUDIT_PROCESS_CREATION_INFO SeAuditProcessCreationInfo;// Offset=0x378 Size=0x4
    struct _LIST_ENTRY JobLinks;// Offset=0x37c Size=0x8
    void * HighestUserAddress;// Offset=0x384 Size=0x4
    struct _LIST_ENTRY ThreadListHead;// Offset=0x388 Size=0x8
    unsigned long ActiveThreads;// Offset=0x390 Size=0x4
    unsigned long ImagePathHash;// Offset=0x394 Size=0x4
    unsigned long DefaultHardErrorProcessing;// Offset=0x398 Size=0x4
    long LastThreadExitStatus;// Offset=0x39c Size=0x4
    struct _EX_FAST_REF PrefetchTrace;// Offset=0x3a0 Size=0x4
    void * LockedPagesList;// Offset=0x3a4 Size=0x4
    union _LARGE_INTEGER ReadOperationCount;// Offset=0x3a8 Size=0x8
    union _LARGE_INTEGER WriteOperationCount;// Offset=0x3b0 Size=0x8
    union _LARGE_INTEGER OtherOperationCount;// Offset=0x3b8 Size=0x8
    union _LARGE_INTEGER ReadTransferCount;// Offset=0x3c0 Size=0x8
    union _LARGE_INTEGER WriteTransferCount;// Offset=0x3c8 Size=0x8
    union _LARGE_INTEGER OtherTransferCount;// Offset=0x3d0 Size=0x8
    unsigned long CommitChargeLimit;// Offset=0x3d8 Size=0x4
    unsigned long CommitCharge;// Offset=0x3dc Size=0x4
    unsigned long CommitChargePeak;// Offset=0x3e0 Size=0x4
    struct _MMSUPPORT_FULL Vm;// Offset=0x400 Size=0x100
    struct _LIST_ENTRY MmProcessLinks;// Offset=0x500 Size=0x8
    unsigned long ModifiedPageCount;// Offset=0x508 Size=0x4
    long ExitStatus;// Offset=0x50c Size=0x4
    struct _RTL_AVL_TREE VadRoot;// Offset=0x510 Size=0x4
    void * VadHint;// Offset=0x514 Size=0x4
    unsigned long VadCount;// Offset=0x518 Size=0x4
    unsigned long VadPhysicalPages;// Offset=0x51c Size=0x4
    unsigned long VadPhysicalPagesLimit;// Offset=0x520 Size=0x4
    struct _ALPC_PROCESS_CONTEXT AlpcContext;// Offset=0x524 Size=0x10
    struct _LIST_ENTRY TimerResolutionLink;// Offset=0x534 Size=0x8
    struct _PO_DIAG_STACK_RECORD * TimerResolutionStackRecord;// Offset=0x53c Size=0x4
    unsigned long RequestedTimerResolution;// Offset=0x540 Size=0x4
    unsigned long SmallestTimerResolution;// Offset=0x544 Size=0x4
    union _LARGE_INTEGER ExitTime;// Offset=0x548 Size=0x8
    unsigned long ActiveThreadsHighWatermark;// Offset=0x550 Size=0x4
    unsigned long LargePrivateVadCount;// Offset=0x554 Size=0x4
    struct _EX_PUSH_LOCK ThreadListLock;// Offset=0x558 Size=0x4
    void * WnfContext;// Offset=0x55c Size=0x4
    struct _EJOB * ServerSilo;// Offset=0x560 Size=0x4
    unsigned char SignatureLevel;// Offset=0x564 Size=0x1
    unsigned char SectionSignatureLevel;// Offset=0x565 Size=0x1
    struct _PS_PROTECTION Protection;// Offset=0x566 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char HangCount:3;// Offset=0x567 Size=0x1 BitOffset=0x0 BitSize=0x3
        unsigned char GhostCount:3;// Offset=0x567 Size=0x1 BitOffset=0x3 BitSize=0x3
        unsigned char PrefilterException:1;// Offset=0x567 Size=0x1 BitOffset=0x6 BitSize=0x1
    };
    union // Size=0x4 (Id=0)
    {
        unsigned long Flags3;// Offset=0x568 Size=0x4
        struct // Size=0x4 (Id=0)
        {
            unsigned long Minimal:1;// Offset=0x568 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long ReplacingPageRoot:1;// Offset=0x568 Size=0x4 BitOffset=0x1 BitSize=0x1
            unsigned long Crashed:1;// Offset=0x568 Size=0x4 BitOffset=0x2 BitSize=0x1
            unsigned long JobVadsAreTracked:1;// Offset=0x568 Size=0x4 BitOffset=0x3 BitSize=0x1
            unsigned long VadTrackingDisabled:1;// Offset=0x568 Size=0x4 BitOffset=0x4 BitSize=0x1
            unsigned long AuxiliaryProcess:1;// Offset=0x568 Size=0x4 BitOffset=0x5 BitSize=0x1
            unsigned long SubsystemProcess:1;// Offset=0x568 Size=0x4 BitOffset=0x6 BitSize=0x1
            unsigned long IndirectCpuSets:1;// Offset=0x568 Size=0x4 BitOffset=0x7 BitSize=0x1
            unsigned long RelinquishedCommit:1;// Offset=0x568 Size=0x4 BitOffset=0x8 BitSize=0x1
            unsigned long HighGraphicsPriority:1;// Offset=0x568 Size=0x4 BitOffset=0x9 BitSize=0x1
            unsigned long CommitFailLogged:1;// Offset=0x568 Size=0x4 BitOffset=0xa BitSize=0x1
            unsigned long ReserveFailLogged:1;// Offset=0x568 Size=0x4 BitOffset=0xb BitSize=0x1
            unsigned long SystemProcess:1;// Offset=0x568 Size=0x4 BitOffset=0xc BitSize=0x1
            unsigned long HideImageBaseAddresses:1;// Offset=0x568 Size=0x4 BitOffset=0xd BitSize=0x1
            unsigned long AddressPolicyFrozen:1;// Offset=0x568 Size=0x4 BitOffset=0xe BitSize=0x1
            unsigned long ProcessFirstResume:1;// Offset=0x568 Size=0x4 BitOffset=0xf BitSize=0x1
            unsigned long ForegroundExternal:1;// Offset=0x568 Size=0x4 BitOffset=0x10 BitSize=0x1
            unsigned long ForegroundSystem:1;// Offset=0x568 Size=0x4 BitOffset=0x11 BitSize=0x1
            unsigned long HighMemoryPriority:1;// Offset=0x568 Size=0x4 BitOffset=0x12 BitSize=0x1
            unsigned long EnableProcessSuspendResumeLogging:1;// Offset=0x568 Size=0x4 BitOffset=0x13 BitSize=0x1
            unsigned long EnableThreadSuspendResumeLogging:1;// Offset=0x568 Size=0x4 BitOffset=0x14 BitSize=0x1
            unsigned long SecurityDomainChanged:1;// Offset=0x568 Size=0x4 BitOffset=0x15 BitSize=0x1
            unsigned long SecurityFreezeComplete:1;// Offset=0x568 Size=0x4 BitOffset=0x16 BitSize=0x1
            unsigned long VmProcessorHost:1;// Offset=0x568 Size=0x4 BitOffset=0x17 BitSize=0x1
            unsigned long VmProcessorHostTransition:1;// Offset=0x568 Size=0x4 BitOffset=0x18 BitSize=0x1
            unsigned long AltSyscall:1;// Offset=0x568 Size=0x4 BitOffset=0x19 BitSize=0x1
            unsigned long TimerResolutionIgnore:1;// Offset=0x568 Size=0x4 BitOffset=0x1a BitSize=0x1
            unsigned long DisallowUserTerminate:1;// Offset=0x568 Size=0x4 BitOffset=0x1b BitSize=0x1
        };
    };
    long DeviceAsid;// Offset=0x56c Size=0x4
    void * SvmData;// Offset=0x570 Size=0x4
    struct _EX_PUSH_LOCK SvmProcessLock;// Offset=0x574 Size=0x4
    unsigned long SvmLock;// Offset=0x578 Size=0x4
    struct _LIST_ENTRY SvmProcessDeviceListHead;// Offset=0x57c Size=0x8
    unsigned long long LastFreezeInterruptTime;// Offset=0x588 Size=0x8
    struct _PROCESS_DISK_COUNTERS * DiskCounters;// Offset=0x590 Size=0x4
    void * PicoContext;// Offset=0x594 Size=0x4
    unsigned long HighPriorityFaultsAllowed;// Offset=0x598 Size=0x4
    void * InstrumentationCallback;// Offset=0x59c Size=0x4
    struct _PO_PROCESS_ENERGY_CONTEXT * EnergyContext;// Offset=0x5a0 Size=0x4
    void * VmContext;// Offset=0x5a4 Size=0x4
    unsigned long long SequenceNumber;// Offset=0x5a8 Size=0x8
    unsigned long long CreateInterruptTime;// Offset=0x5b0 Size=0x8
    unsigned long long CreateUnbiasedInterruptTime;// Offset=0x5b8 Size=0x8
    unsigned long long TotalUnbiasedFrozenTime;// Offset=0x5c0 Size=0x8
    unsigned long long LastAppStateUpdateTime;// Offset=0x5c8 Size=0x8
    struct // Size=0x8 (Id=0)
    {
        unsigned long long LastAppStateUptime:61;// Offset=0x5d0 Size=0x8 BitOffset=0x0 BitSize=0x3d
        unsigned long long LastAppState:3;// Offset=0x5d0 Size=0x8 BitOffset=0x3d BitSize=0x3
    };
    unsigned long SharedCommitCharge;// Offset=0x5d8 Size=0x4
    struct _EX_PUSH_LOCK SharedCommitLock;// Offset=0x5dc Size=0x4
    struct _LIST_ENTRY SharedCommitLinks;// Offset=0x5e0 Size=0x8
    union // Size=0x5f0 (Id=0)
    {
        unsigned long AllowedCpuSets;// Offset=0x5e8 Size=0x4
        unsigned long DefaultCpuSets;// Offset=0x5ec Size=0x4
        unsigned long * AllowedCpuSetsIndirect;// Offset=0x5e8 Size=0x4
        unsigned long * DefaultCpuSetsIndirect;// Offset=0x5ec Size=0x4
    };
    void * DiskIoAttribution;// Offset=0x5f0 Size=0x4
    void * DxgProcess;// Offset=0x5f4 Size=0x4
    unsigned long Win32KFilterSet;// Offset=0x5f8 Size=0x4
    union _PS_INTERLOCKED_TIMER_DELAY_VALUES ProcessTimerDelay;// Offset=0x600 Size=0x8
    unsigned long KTimerSets;// Offset=0x608 Size=0x4
    unsigned long KTimer2Sets;// Offset=0x60c Size=0x4
    unsigned long ThreadTimerSets;// Offset=0x610 Size=0x4
    unsigned long VirtualTimerListLock;// Offset=0x614 Size=0x4
    struct _LIST_ENTRY VirtualTimerListHead;// Offset=0x618 Size=0x8
    union // Size=0x8 (Id=0)
    {
        struct _WNF_STATE_NAME WakeChannel;// Offset=0x620 Size=0x8
        struct _PS_PROCESS_WAKE_INFORMATION WakeInfo;// Offset=0x620 Size=0x30
    };
    union // Size=0x4 (Id=0)
    {
        unsigned long MitigationFlags;// Offset=0x650 Size=0x4
        struct _anonymous_106 MitigationFlagsValues;// Offset=0x650 Size=0x4
    };
    union // Size=0x4 (Id=0)
    {
        unsigned long MitigationFlags2;// Offset=0x654 Size=0x4
        struct _anonymous_107 MitigationFlags2Values;// Offset=0x654 Size=0x4
    };
    void * PartitionObject;// Offset=0x658 Size=0x4
    unsigned long long SecurityDomain;// Offset=0x660 Size=0x8
    unsigned long long ParentSecurityDomain;// Offset=0x668 Size=0x8
    void * CoverageSamplerContext;// Offset=0x670 Size=0x4
    void * MmHotPatchContext;// Offset=0x674 Size=0x4
    struct _RTL_AVL_TREE DynamicEHContinuationTargetsTree;// Offset=0x678 Size=0x4
    struct _EX_PUSH_LOCK DynamicEHContinuationTargetsLock;// Offset=0x67c Size=0x4
    struct _PS_DYNAMIC_ENFORCED_ADDRESS_RANGES DynamicEnforcedCetCompatibleRanges;// Offset=0x680 Size=0x8
};
