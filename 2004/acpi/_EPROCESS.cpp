struct _LIST_ENTRY// Size=0x10 (Id=24)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _DISPATCHER_HEADER// Size=0x18 (Id=286)
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

struct _KAFFINITY_EX// Size=0xa8 (Id=381)
{
    unsigned short Count;// Offset=0x0 Size=0x2
    unsigned short Size;// Offset=0x2 Size=0x2
    unsigned long Reserved;// Offset=0x4 Size=0x4
    unsigned long long Bitmap[20];// Offset=0x8 Size=0xa0
};

struct _SINGLE_LIST_ENTRY// Size=0x8 (Id=52)
{
    struct _SINGLE_LIST_ENTRY * Next;// Offset=0x0 Size=0x8
};

union _KEXECUTE_OPTIONS// Size=0x1 (Id=285)
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

union _KSTACK_COUNT// Size=0x4 (Id=353)
{
    long Value;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long State:3;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x3
        unsigned long StackCount:29;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1d
    };
};

struct _anonymous_69// Size=0x8 (Id=69)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long SecureProcess:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long Unused:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
    };
};

union _anonymous_70// Size=0x8 (Id=70)
{
    unsigned long long SecureHandle;// Offset=0x0 Size=0x8
    struct _anonymous_69 Flags;// Offset=0x0 Size=0x8
};

struct _KPROCESS// Size=0x438 (Id=71)
{
    struct _DISPATCHER_HEADER Header;// Offset=0x0 Size=0x18
    struct _LIST_ENTRY ProfileListHead;// Offset=0x18 Size=0x10
    unsigned long long DirectoryTableBase;// Offset=0x28 Size=0x8
    struct _LIST_ENTRY ThreadListHead;// Offset=0x30 Size=0x10
    unsigned long ProcessLock;// Offset=0x40 Size=0x4
    unsigned long ProcessTimerDelay;// Offset=0x44 Size=0x4
    unsigned long long DeepFreezeStartTime;// Offset=0x48 Size=0x8
    struct _KAFFINITY_EX Affinity;// Offset=0x50 Size=0xa8
    unsigned long long AffinityPadding[12];// Offset=0xf8 Size=0x60
    struct _LIST_ENTRY ReadyListHead;// Offset=0x158 Size=0x10
    struct _SINGLE_LIST_ENTRY SwapListEntry;// Offset=0x168 Size=0x8
    struct _KAFFINITY_EX ActiveProcessors;// Offset=0x170 Size=0xa8
    unsigned long long ActiveProcessorsPadding[12];// Offset=0x218 Size=0x60
    union // Size=0x4 (Id=0)
    {
        struct // Size=0x4 (Id=0)
        {
            unsigned long AutoAlignment:1;// Offset=0x278 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long DisableBoost:1;// Offset=0x278 Size=0x4 BitOffset=0x1 BitSize=0x1
            unsigned long DisableQuantum:1;// Offset=0x278 Size=0x4 BitOffset=0x2 BitSize=0x1
            unsigned long DeepFreeze:1;// Offset=0x278 Size=0x4 BitOffset=0x3 BitSize=0x1
            unsigned long TimerVirtualization:1;// Offset=0x278 Size=0x4 BitOffset=0x4 BitSize=0x1
            unsigned long CheckStackExtents:1;// Offset=0x278 Size=0x4 BitOffset=0x5 BitSize=0x1
            unsigned long CacheIsolationEnabled:1;// Offset=0x278 Size=0x4 BitOffset=0x6 BitSize=0x1
            unsigned long PpmPolicy:3;// Offset=0x278 Size=0x4 BitOffset=0x7 BitSize=0x3
            unsigned long VaSpaceDeleted:1;// Offset=0x278 Size=0x4 BitOffset=0xa BitSize=0x1
            unsigned long ReservedFlags:21;// Offset=0x278 Size=0x4 BitOffset=0xb BitSize=0x15
        };
        long ProcessFlags;// Offset=0x278 Size=0x4
    };
    unsigned long ActiveGroupsMask;// Offset=0x27c Size=0x4
    char BasePriority;// Offset=0x280 Size=0x1
    char QuantumReset;// Offset=0x281 Size=0x1
    char Visited;// Offset=0x282 Size=0x1
    union _KEXECUTE_OPTIONS Flags;// Offset=0x283 Size=0x1
    unsigned short ThreadSeed[20];// Offset=0x284 Size=0x28
    unsigned short ThreadSeedPadding[12];// Offset=0x2ac Size=0x18
    unsigned short IdealProcessor[20];// Offset=0x2c4 Size=0x28
    unsigned short IdealProcessorPadding[12];// Offset=0x2ec Size=0x18
    unsigned short IdealNode[20];// Offset=0x304 Size=0x28
    unsigned short IdealNodePadding[12];// Offset=0x32c Size=0x18
    unsigned short IdealGlobalNode;// Offset=0x344 Size=0x2
    unsigned short Spare1;// Offset=0x346 Size=0x2
    union _KSTACK_COUNT StackCount;// Offset=0x348 Size=0x4
    struct _LIST_ENTRY ProcessListEntry;// Offset=0x350 Size=0x10
    unsigned long long CycleTime;// Offset=0x360 Size=0x8
    unsigned long long ContextSwitches;// Offset=0x368 Size=0x8
    struct _KSCHEDULING_GROUP * SchedulingGroup;// Offset=0x370 Size=0x8
    unsigned long FreezeCount;// Offset=0x378 Size=0x4
    unsigned long KernelTime;// Offset=0x37c Size=0x4
    unsigned long UserTime;// Offset=0x380 Size=0x4
    unsigned long ReadyTime;// Offset=0x384 Size=0x4
    unsigned long long UserDirectoryTableBase;// Offset=0x388 Size=0x8
    unsigned char AddressPolicy;// Offset=0x390 Size=0x1
    unsigned char Spare2[71];// Offset=0x391 Size=0x47
    void * InstrumentationCallback;// Offset=0x3d8 Size=0x8
    union _anonymous_70 SecureState;// Offset=0x3e0 Size=0x8
    unsigned long long KernelWaitTime;// Offset=0x3e8 Size=0x8
    unsigned long long UserWaitTime;// Offset=0x3f0 Size=0x8
    unsigned long long EndPadding[8];// Offset=0x3f8 Size=0x40
};

struct _EX_PUSH_LOCK// Size=0x8 (Id=95)
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

struct _EX_RUNDOWN_REF// Size=0x8 (Id=199)
{
    union // Size=0x8 (Id=0)
    {
        unsigned long long Count;// Offset=0x0 Size=0x8
        void * Ptr;// Offset=0x0 Size=0x8
    };
};

struct _anonymous_32// Size=0x8 (Id=32)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=33)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _anonymous_32 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _EX_FAST_REF// Size=0x8 (Id=104)
{
    union // Size=0x8 (Id=0)
    {
        void * Object;// Offset=0x0 Size=0x8
        struct // Size=0x8 (Id=0)
        {
            unsigned long long RefCnt:4;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x4
        };
        unsigned long long Value;// Offset=0x0 Size=0x8
    };
};

struct _RTL_AVL_TREE// Size=0x8 (Id=41)
{
    struct _RTL_BALANCED_NODE * Root;// Offset=0x0 Size=0x8
};

struct _SE_AUDIT_PROCESS_CREATION_INFO// Size=0x8 (Id=450)
{
    struct _OBJECT_NAME_INFORMATION * ImageFileName;// Offset=0x0 Size=0x8
};

struct _MMSUPPORT_FLAGS// Size=0x4 (Id=494)
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

struct _MMSUPPORT_INSTANCE// Size=0xc0 (Id=393)
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

struct _MMSUPPORT_SHARED// Size=0x80 (Id=412)
{
    long WorkingSetLock;// Offset=0x0 Size=0x4
    long GoodCitizenWaiting;// Offset=0x4 Size=0x4
    unsigned long long ReleasedCommitDebt;// Offset=0x8 Size=0x8
    unsigned long long ResetPagesRepurposedCount;// Offset=0x10 Size=0x8
    void * WsSwapSupport;// Offset=0x18 Size=0x8
    void * CommitReleaseContext;// Offset=0x20 Size=0x8
    void * AccessLog;// Offset=0x28 Size=0x8
    unsigned long long ChargedWslePages;// Offset=0x30 Size=0x8
    unsigned long long ActualWslePages;// Offset=0x38 Size=0x8
    unsigned long long WorkingSetCoreLock;// Offset=0x40 Size=0x8
    void * ShadowMapping;// Offset=0x48 Size=0x8
};

struct _MMSUPPORT_FULL// Size=0x140 (Id=309)
{
    struct _MMSUPPORT_INSTANCE Instance;// Offset=0x0 Size=0xc0
    struct _MMSUPPORT_SHARED Shared;// Offset=0xc0 Size=0x80
};

struct _ALPC_PROCESS_CONTEXT// Size=0x20 (Id=341)
{
    struct _EX_PUSH_LOCK Lock;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY ViewListHead;// Offset=0x8 Size=0x10
    unsigned long long PagedPoolQuotaCache;// Offset=0x18 Size=0x8
};

struct _PS_PROTECTION// Size=0x1 (Id=321)
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

union _PS_INTERLOCKED_TIMER_DELAY_VALUES// Size=0x8 (Id=404)
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

struct _WNF_STATE_NAME// Size=0x8 (Id=554)
{
    unsigned long Data[2];// Offset=0x0 Size=0x8
};

struct _JOBOBJECT_WAKE_FILTER// Size=0x8 (Id=310)
{
    unsigned long HighEdgeFilter;// Offset=0x0 Size=0x4
    unsigned long LowEdgeFilter;// Offset=0x4 Size=0x4
};

struct _PS_PROCESS_WAKE_INFORMATION// Size=0x30 (Id=299)
{
    unsigned long long NotificationChannel;// Offset=0x0 Size=0x8
    unsigned long WakeCounters[7];// Offset=0x8 Size=0x1c
    struct _JOBOBJECT_WAKE_FILTER WakeFilter;// Offset=0x24 Size=0x8
    unsigned long NoWakeCounter;// Offset=0x2c Size=0x4
};

struct _anonymous_118// Size=0x4 (Id=118)
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

struct _anonymous_119// Size=0x4 (Id=119)
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
    };
};

struct _EPROCESS// Size=0xa40 (Id=120)
{
    struct _KPROCESS Pcb;// Offset=0x0 Size=0x438
    struct _EX_PUSH_LOCK ProcessLock;// Offset=0x438 Size=0x8
    void * UniqueProcessId;// Offset=0x440 Size=0x8
    struct _LIST_ENTRY ActiveProcessLinks;// Offset=0x448 Size=0x10
    struct _EX_RUNDOWN_REF RundownProtect;// Offset=0x458 Size=0x8
    union // Size=0x4 (Id=0)
    {
        unsigned long Flags2;// Offset=0x460 Size=0x4
        struct // Size=0x4 (Id=0)
        {
            unsigned long JobNotReallyActive:1;// Offset=0x460 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long AccountingFolded:1;// Offset=0x460 Size=0x4 BitOffset=0x1 BitSize=0x1
            unsigned long NewProcessReported:1;// Offset=0x460 Size=0x4 BitOffset=0x2 BitSize=0x1
            unsigned long ExitProcessReported:1;// Offset=0x460 Size=0x4 BitOffset=0x3 BitSize=0x1
            unsigned long ReportCommitChanges:1;// Offset=0x460 Size=0x4 BitOffset=0x4 BitSize=0x1
            unsigned long LastReportMemory:1;// Offset=0x460 Size=0x4 BitOffset=0x5 BitSize=0x1
            unsigned long ForceWakeCharge:1;// Offset=0x460 Size=0x4 BitOffset=0x6 BitSize=0x1
            unsigned long CrossSessionCreate:1;// Offset=0x460 Size=0x4 BitOffset=0x7 BitSize=0x1
            unsigned long NeedsHandleRundown:1;// Offset=0x460 Size=0x4 BitOffset=0x8 BitSize=0x1
            unsigned long RefTraceEnabled:1;// Offset=0x460 Size=0x4 BitOffset=0x9 BitSize=0x1
            unsigned long PicoCreated:1;// Offset=0x460 Size=0x4 BitOffset=0xa BitSize=0x1
            unsigned long EmptyJobEvaluated:1;// Offset=0x460 Size=0x4 BitOffset=0xb BitSize=0x1
            unsigned long DefaultPagePriority:3;// Offset=0x460 Size=0x4 BitOffset=0xc BitSize=0x3
            unsigned long PrimaryTokenFrozen:1;// Offset=0x460 Size=0x4 BitOffset=0xf BitSize=0x1
            unsigned long ProcessVerifierTarget:1;// Offset=0x460 Size=0x4 BitOffset=0x10 BitSize=0x1
            unsigned long RestrictSetThreadContext:1;// Offset=0x460 Size=0x4 BitOffset=0x11 BitSize=0x1
            unsigned long AffinityPermanent:1;// Offset=0x460 Size=0x4 BitOffset=0x12 BitSize=0x1
            unsigned long AffinityUpdateEnable:1;// Offset=0x460 Size=0x4 BitOffset=0x13 BitSize=0x1
            unsigned long PropagateNode:1;// Offset=0x460 Size=0x4 BitOffset=0x14 BitSize=0x1
            unsigned long ExplicitAffinity:1;// Offset=0x460 Size=0x4 BitOffset=0x15 BitSize=0x1
            unsigned long ProcessExecutionState:2;// Offset=0x460 Size=0x4 BitOffset=0x16 BitSize=0x2
            unsigned long EnableReadVmLogging:1;// Offset=0x460 Size=0x4 BitOffset=0x18 BitSize=0x1
            unsigned long EnableWriteVmLogging:1;// Offset=0x460 Size=0x4 BitOffset=0x19 BitSize=0x1
            unsigned long FatalAccessTerminationRequested:1;// Offset=0x460 Size=0x4 BitOffset=0x1a BitSize=0x1
            unsigned long DisableSystemAllowedCpuSet:1;// Offset=0x460 Size=0x4 BitOffset=0x1b BitSize=0x1
            unsigned long ProcessStateChangeRequest:2;// Offset=0x460 Size=0x4 BitOffset=0x1c BitSize=0x2
            unsigned long ProcessStateChangeInProgress:1;// Offset=0x460 Size=0x4 BitOffset=0x1e BitSize=0x1
            unsigned long InPrivate:1;// Offset=0x460 Size=0x4 BitOffset=0x1f BitSize=0x1
        };
    };
    union // Size=0x4 (Id=0)
    {
        unsigned long Flags;// Offset=0x464 Size=0x4
        struct // Size=0x4 (Id=0)
        {
            unsigned long CreateReported:1;// Offset=0x464 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long NoDebugInherit:1;// Offset=0x464 Size=0x4 BitOffset=0x1 BitSize=0x1
            unsigned long ProcessExiting:1;// Offset=0x464 Size=0x4 BitOffset=0x2 BitSize=0x1
            unsigned long ProcessDelete:1;// Offset=0x464 Size=0x4 BitOffset=0x3 BitSize=0x1
            unsigned long ManageExecutableMemoryWrites:1;// Offset=0x464 Size=0x4 BitOffset=0x4 BitSize=0x1
            unsigned long VmDeleted:1;// Offset=0x464 Size=0x4 BitOffset=0x5 BitSize=0x1
            unsigned long OutswapEnabled:1;// Offset=0x464 Size=0x4 BitOffset=0x6 BitSize=0x1
            unsigned long Outswapped:1;// Offset=0x464 Size=0x4 BitOffset=0x7 BitSize=0x1
            unsigned long FailFastOnCommitFail:1;// Offset=0x464 Size=0x4 BitOffset=0x8 BitSize=0x1
            unsigned long Wow64VaSpace4Gb:1;// Offset=0x464 Size=0x4 BitOffset=0x9 BitSize=0x1
            unsigned long AddressSpaceInitialized:2;// Offset=0x464 Size=0x4 BitOffset=0xa BitSize=0x2
            unsigned long SetTimerResolution:1;// Offset=0x464 Size=0x4 BitOffset=0xc BitSize=0x1
            unsigned long BreakOnTermination:1;// Offset=0x464 Size=0x4 BitOffset=0xd BitSize=0x1
            unsigned long DeprioritizeViews:1;// Offset=0x464 Size=0x4 BitOffset=0xe BitSize=0x1
            unsigned long WriteWatch:1;// Offset=0x464 Size=0x4 BitOffset=0xf BitSize=0x1
            unsigned long ProcessInSession:1;// Offset=0x464 Size=0x4 BitOffset=0x10 BitSize=0x1
            unsigned long OverrideAddressSpace:1;// Offset=0x464 Size=0x4 BitOffset=0x11 BitSize=0x1
            unsigned long HasAddressSpace:1;// Offset=0x464 Size=0x4 BitOffset=0x12 BitSize=0x1
            unsigned long LaunchPrefetched:1;// Offset=0x464 Size=0x4 BitOffset=0x13 BitSize=0x1
            unsigned long Background:1;// Offset=0x464 Size=0x4 BitOffset=0x14 BitSize=0x1
            unsigned long VmTopDown:1;// Offset=0x464 Size=0x4 BitOffset=0x15 BitSize=0x1
            unsigned long ImageNotifyDone:1;// Offset=0x464 Size=0x4 BitOffset=0x16 BitSize=0x1
            unsigned long PdeUpdateNeeded:1;// Offset=0x464 Size=0x4 BitOffset=0x17 BitSize=0x1
            unsigned long VdmAllowed:1;// Offset=0x464 Size=0x4 BitOffset=0x18 BitSize=0x1
            unsigned long ProcessRundown:1;// Offset=0x464 Size=0x4 BitOffset=0x19 BitSize=0x1
            unsigned long ProcessInserted:1;// Offset=0x464 Size=0x4 BitOffset=0x1a BitSize=0x1
            unsigned long DefaultIoPriority:3;// Offset=0x464 Size=0x4 BitOffset=0x1b BitSize=0x3
            unsigned long ProcessSelfDelete:1;// Offset=0x464 Size=0x4 BitOffset=0x1e BitSize=0x1
            unsigned long SetTimerResolutionLink:1;// Offset=0x464 Size=0x4 BitOffset=0x1f BitSize=0x1
        };
    };
    union _LARGE_INTEGER CreateTime;// Offset=0x468 Size=0x8
    unsigned long long ProcessQuotaUsage[2];// Offset=0x470 Size=0x10
    unsigned long long ProcessQuotaPeak[2];// Offset=0x480 Size=0x10
    unsigned long long PeakVirtualSize;// Offset=0x490 Size=0x8
    unsigned long long VirtualSize;// Offset=0x498 Size=0x8
    struct _LIST_ENTRY SessionProcessLinks;// Offset=0x4a0 Size=0x10
    union // Size=0x4b8 (Id=0)
    {
        void * ExceptionPortData;// Offset=0x4b0 Size=0x8
        unsigned long long ExceptionPortValue;// Offset=0x4b0 Size=0x8
        struct // Size=0x8 (Id=0)
        {
            unsigned long long ExceptionPortState:3;// Offset=0x4b0 Size=0x8 BitOffset=0x0 BitSize=0x3
        };
    };
    struct _EX_FAST_REF Token;// Offset=0x4b8 Size=0x8
    unsigned long long MmReserved;// Offset=0x4c0 Size=0x8
    struct _EX_PUSH_LOCK AddressCreationLock;// Offset=0x4c8 Size=0x8
    struct _EX_PUSH_LOCK PageTableCommitmentLock;// Offset=0x4d0 Size=0x8
    struct _ETHREAD * RotateInProgress;// Offset=0x4d8 Size=0x8
    struct _ETHREAD * ForkInProgress;// Offset=0x4e0 Size=0x8
    struct _EJOB * CommitChargeJob;// Offset=0x4e8 Size=0x8
    struct _RTL_AVL_TREE CloneRoot;// Offset=0x4f0 Size=0x8
    unsigned long long NumberOfPrivatePages;// Offset=0x4f8 Size=0x8
    unsigned long long NumberOfLockedPages;// Offset=0x500 Size=0x8
    void * Win32Process;// Offset=0x508 Size=0x8
    struct _EJOB * Job;// Offset=0x510 Size=0x8
    void * SectionObject;// Offset=0x518 Size=0x8
    void * SectionBaseAddress;// Offset=0x520 Size=0x8
    unsigned long Cookie;// Offset=0x528 Size=0x4
    struct _PAGEFAULT_HISTORY * WorkingSetWatch;// Offset=0x530 Size=0x8
    void * Win32WindowStation;// Offset=0x538 Size=0x8
    void * InheritedFromUniqueProcessId;// Offset=0x540 Size=0x8
    unsigned long long OwnerProcessId;// Offset=0x548 Size=0x8
    struct _PEB * Peb;// Offset=0x550 Size=0x8
    struct _MM_SESSION_SPACE * Session;// Offset=0x558 Size=0x8
    void * Spare1;// Offset=0x560 Size=0x8
    struct _EPROCESS_QUOTA_BLOCK * QuotaBlock;// Offset=0x568 Size=0x8
    struct _HANDLE_TABLE * ObjectTable;// Offset=0x570 Size=0x8
    void * DebugPort;// Offset=0x578 Size=0x8
    struct _EWOW64PROCESS * WoW64Process;// Offset=0x580 Size=0x8
    void * DeviceMap;// Offset=0x588 Size=0x8
    void * EtwDataSource;// Offset=0x590 Size=0x8
    unsigned long long PageDirectoryPte;// Offset=0x598 Size=0x8
    struct _FILE_OBJECT * ImageFilePointer;// Offset=0x5a0 Size=0x8
    unsigned char ImageFileName[15];// Offset=0x5a8 Size=0xf
    unsigned char PriorityClass;// Offset=0x5b7 Size=0x1
    void * SecurityPort;// Offset=0x5b8 Size=0x8
    struct _SE_AUDIT_PROCESS_CREATION_INFO SeAuditProcessCreationInfo;// Offset=0x5c0 Size=0x8
    struct _LIST_ENTRY JobLinks;// Offset=0x5c8 Size=0x10
    void * HighestUserAddress;// Offset=0x5d8 Size=0x8
    struct _LIST_ENTRY ThreadListHead;// Offset=0x5e0 Size=0x10
    unsigned long ActiveThreads;// Offset=0x5f0 Size=0x4
    unsigned long ImagePathHash;// Offset=0x5f4 Size=0x4
    unsigned long DefaultHardErrorProcessing;// Offset=0x5f8 Size=0x4
    long LastThreadExitStatus;// Offset=0x5fc Size=0x4
    struct _EX_FAST_REF PrefetchTrace;// Offset=0x600 Size=0x8
    void * LockedPagesList;// Offset=0x608 Size=0x8
    union _LARGE_INTEGER ReadOperationCount;// Offset=0x610 Size=0x8
    union _LARGE_INTEGER WriteOperationCount;// Offset=0x618 Size=0x8
    union _LARGE_INTEGER OtherOperationCount;// Offset=0x620 Size=0x8
    union _LARGE_INTEGER ReadTransferCount;// Offset=0x628 Size=0x8
    union _LARGE_INTEGER WriteTransferCount;// Offset=0x630 Size=0x8
    union _LARGE_INTEGER OtherTransferCount;// Offset=0x638 Size=0x8
    unsigned long long CommitChargeLimit;// Offset=0x640 Size=0x8
    unsigned long long CommitCharge;// Offset=0x648 Size=0x8
    unsigned long long CommitChargePeak;// Offset=0x650 Size=0x8
    struct _MMSUPPORT_FULL Vm;// Offset=0x680 Size=0x140
    struct _LIST_ENTRY MmProcessLinks;// Offset=0x7c0 Size=0x10
    unsigned long ModifiedPageCount;// Offset=0x7d0 Size=0x4
    long ExitStatus;// Offset=0x7d4 Size=0x4
    struct _RTL_AVL_TREE VadRoot;// Offset=0x7d8 Size=0x8
    void * VadHint;// Offset=0x7e0 Size=0x8
    unsigned long long VadCount;// Offset=0x7e8 Size=0x8
    unsigned long long VadPhysicalPages;// Offset=0x7f0 Size=0x8
    unsigned long long VadPhysicalPagesLimit;// Offset=0x7f8 Size=0x8
    struct _ALPC_PROCESS_CONTEXT AlpcContext;// Offset=0x800 Size=0x20
    struct _LIST_ENTRY TimerResolutionLink;// Offset=0x820 Size=0x10
    struct _PO_DIAG_STACK_RECORD * TimerResolutionStackRecord;// Offset=0x830 Size=0x8
    unsigned long RequestedTimerResolution;// Offset=0x838 Size=0x4
    unsigned long SmallestTimerResolution;// Offset=0x83c Size=0x4
    union _LARGE_INTEGER ExitTime;// Offset=0x840 Size=0x8
    struct _INVERTED_FUNCTION_TABLE * InvertedFunctionTable;// Offset=0x848 Size=0x8
    struct _EX_PUSH_LOCK InvertedFunctionTableLock;// Offset=0x850 Size=0x8
    unsigned long ActiveThreadsHighWatermark;// Offset=0x858 Size=0x4
    unsigned long LargePrivateVadCount;// Offset=0x85c Size=0x4
    struct _EX_PUSH_LOCK ThreadListLock;// Offset=0x860 Size=0x8
    void * WnfContext;// Offset=0x868 Size=0x8
    struct _EJOB * ServerSilo;// Offset=0x870 Size=0x8
    unsigned char SignatureLevel;// Offset=0x878 Size=0x1
    unsigned char SectionSignatureLevel;// Offset=0x879 Size=0x1
    struct _PS_PROTECTION Protection;// Offset=0x87a Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char HangCount:3;// Offset=0x87b Size=0x1 BitOffset=0x0 BitSize=0x3
        unsigned char GhostCount:3;// Offset=0x87b Size=0x1 BitOffset=0x3 BitSize=0x3
        unsigned char PrefilterException:1;// Offset=0x87b Size=0x1 BitOffset=0x6 BitSize=0x1
    };
    union // Size=0x4 (Id=0)
    {
        unsigned long Flags3;// Offset=0x87c Size=0x4
        struct // Size=0x4 (Id=0)
        {
            unsigned long Minimal:1;// Offset=0x87c Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long ReplacingPageRoot:1;// Offset=0x87c Size=0x4 BitOffset=0x1 BitSize=0x1
            unsigned long Crashed:1;// Offset=0x87c Size=0x4 BitOffset=0x2 BitSize=0x1
            unsigned long JobVadsAreTracked:1;// Offset=0x87c Size=0x4 BitOffset=0x3 BitSize=0x1
            unsigned long VadTrackingDisabled:1;// Offset=0x87c Size=0x4 BitOffset=0x4 BitSize=0x1
            unsigned long AuxiliaryProcess:1;// Offset=0x87c Size=0x4 BitOffset=0x5 BitSize=0x1
            unsigned long SubsystemProcess:1;// Offset=0x87c Size=0x4 BitOffset=0x6 BitSize=0x1
            unsigned long IndirectCpuSets:1;// Offset=0x87c Size=0x4 BitOffset=0x7 BitSize=0x1
            unsigned long RelinquishedCommit:1;// Offset=0x87c Size=0x4 BitOffset=0x8 BitSize=0x1
            unsigned long HighGraphicsPriority:1;// Offset=0x87c Size=0x4 BitOffset=0x9 BitSize=0x1
            unsigned long CommitFailLogged:1;// Offset=0x87c Size=0x4 BitOffset=0xa BitSize=0x1
            unsigned long ReserveFailLogged:1;// Offset=0x87c Size=0x4 BitOffset=0xb BitSize=0x1
            unsigned long SystemProcess:1;// Offset=0x87c Size=0x4 BitOffset=0xc BitSize=0x1
            unsigned long HideImageBaseAddresses:1;// Offset=0x87c Size=0x4 BitOffset=0xd BitSize=0x1
            unsigned long AddressPolicyFrozen:1;// Offset=0x87c Size=0x4 BitOffset=0xe BitSize=0x1
            unsigned long ProcessFirstResume:1;// Offset=0x87c Size=0x4 BitOffset=0xf BitSize=0x1
            unsigned long ForegroundExternal:1;// Offset=0x87c Size=0x4 BitOffset=0x10 BitSize=0x1
            unsigned long ForegroundSystem:1;// Offset=0x87c Size=0x4 BitOffset=0x11 BitSize=0x1
            unsigned long HighMemoryPriority:1;// Offset=0x87c Size=0x4 BitOffset=0x12 BitSize=0x1
            unsigned long EnableProcessSuspendResumeLogging:1;// Offset=0x87c Size=0x4 BitOffset=0x13 BitSize=0x1
            unsigned long EnableThreadSuspendResumeLogging:1;// Offset=0x87c Size=0x4 BitOffset=0x14 BitSize=0x1
            unsigned long SecurityDomainChanged:1;// Offset=0x87c Size=0x4 BitOffset=0x15 BitSize=0x1
            unsigned long SecurityFreezeComplete:1;// Offset=0x87c Size=0x4 BitOffset=0x16 BitSize=0x1
            unsigned long VmProcessorHost:1;// Offset=0x87c Size=0x4 BitOffset=0x17 BitSize=0x1
            unsigned long VmProcessorHostTransition:1;// Offset=0x87c Size=0x4 BitOffset=0x18 BitSize=0x1
            unsigned long AltSyscall:1;// Offset=0x87c Size=0x4 BitOffset=0x19 BitSize=0x1
            unsigned long TimerResolutionIgnore:1;// Offset=0x87c Size=0x4 BitOffset=0x1a BitSize=0x1
        };
    };
    long DeviceAsid;// Offset=0x880 Size=0x4
    void * SvmData;// Offset=0x888 Size=0x8
    struct _EX_PUSH_LOCK SvmProcessLock;// Offset=0x890 Size=0x8
    unsigned long long SvmLock;// Offset=0x898 Size=0x8
    struct _LIST_ENTRY SvmProcessDeviceListHead;// Offset=0x8a0 Size=0x10
    unsigned long long LastFreezeInterruptTime;// Offset=0x8b0 Size=0x8
    struct _PROCESS_DISK_COUNTERS * DiskCounters;// Offset=0x8b8 Size=0x8
    void * PicoContext;// Offset=0x8c0 Size=0x8
    void * EnclaveTable;// Offset=0x8c8 Size=0x8
    unsigned long long EnclaveNumber;// Offset=0x8d0 Size=0x8
    struct _EX_PUSH_LOCK EnclaveLock;// Offset=0x8d8 Size=0x8
    unsigned long HighPriorityFaultsAllowed;// Offset=0x8e0 Size=0x4
    struct _PO_PROCESS_ENERGY_CONTEXT * EnergyContext;// Offset=0x8e8 Size=0x8
    void * VmContext;// Offset=0x8f0 Size=0x8
    unsigned long long SequenceNumber;// Offset=0x8f8 Size=0x8
    unsigned long long CreateInterruptTime;// Offset=0x900 Size=0x8
    unsigned long long CreateUnbiasedInterruptTime;// Offset=0x908 Size=0x8
    unsigned long long TotalUnbiasedFrozenTime;// Offset=0x910 Size=0x8
    unsigned long long LastAppStateUpdateTime;// Offset=0x918 Size=0x8
    struct // Size=0x8 (Id=0)
    {
        unsigned long long LastAppStateUptime:61;// Offset=0x920 Size=0x8 BitOffset=0x0 BitSize=0x3d
        unsigned long long LastAppState:3;// Offset=0x920 Size=0x8 BitOffset=0x3d BitSize=0x3
    };
    unsigned long long SharedCommitCharge;// Offset=0x928 Size=0x8
    struct _EX_PUSH_LOCK SharedCommitLock;// Offset=0x930 Size=0x8
    struct _LIST_ENTRY SharedCommitLinks;// Offset=0x938 Size=0x10
    union // Size=0x958 (Id=0)
    {
        unsigned long long AllowedCpuSets;// Offset=0x948 Size=0x8
        unsigned long long DefaultCpuSets;// Offset=0x950 Size=0x8
        unsigned long long * AllowedCpuSetsIndirect;// Offset=0x948 Size=0x8
        unsigned long long * DefaultCpuSetsIndirect;// Offset=0x950 Size=0x8
    };
    void * DiskIoAttribution;// Offset=0x958 Size=0x8
    void * DxgProcess;// Offset=0x960 Size=0x8
    unsigned long Win32KFilterSet;// Offset=0x968 Size=0x4
    union _PS_INTERLOCKED_TIMER_DELAY_VALUES ProcessTimerDelay;// Offset=0x970 Size=0x8
    unsigned long KTimerSets;// Offset=0x978 Size=0x4
    unsigned long KTimer2Sets;// Offset=0x97c Size=0x4
    unsigned long ThreadTimerSets;// Offset=0x980 Size=0x4
    unsigned long long VirtualTimerListLock;// Offset=0x988 Size=0x8
    struct _LIST_ENTRY VirtualTimerListHead;// Offset=0x990 Size=0x10
    union // Size=0x8 (Id=0)
    {
        struct _WNF_STATE_NAME WakeChannel;// Offset=0x9a0 Size=0x8
        struct _PS_PROCESS_WAKE_INFORMATION WakeInfo;// Offset=0x9a0 Size=0x30
    };
    union // Size=0x4 (Id=0)
    {
        unsigned long MitigationFlags;// Offset=0x9d0 Size=0x4
        struct _anonymous_118 MitigationFlagsValues;// Offset=0x9d0 Size=0x4
    };
    union // Size=0x4 (Id=0)
    {
        unsigned long MitigationFlags2;// Offset=0x9d4 Size=0x4
        struct _anonymous_119 MitigationFlags2Values;// Offset=0x9d4 Size=0x4
    };
    void * PartitionObject;// Offset=0x9d8 Size=0x8
    unsigned long long SecurityDomain;// Offset=0x9e0 Size=0x8
    unsigned long long ParentSecurityDomain;// Offset=0x9e8 Size=0x8
    void * CoverageSamplerContext;// Offset=0x9f0 Size=0x8
    void * MmHotPatchContext;// Offset=0x9f8 Size=0x8
    struct _RTL_AVL_TREE DynamicEHContinuationTargetsTree;// Offset=0xa00 Size=0x8
    struct _EX_PUSH_LOCK DynamicEHContinuationTargetsLock;// Offset=0xa08 Size=0x8
};
