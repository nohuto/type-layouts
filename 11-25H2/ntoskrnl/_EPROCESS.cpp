struct _LIST_ENTRY// Size=0x10 (Id=3)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _DISPATCHER_HEADER// Size=0x18 (Id=174)
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
            unsigned char Emulation:1;// Offset=0x3 Size=0x1 BitOffset=0x6 BitSize=0x1
            unsigned char Reserved5:1;// Offset=0x3 Size=0x1 BitOffset=0x7 BitSize=0x1
        };
        unsigned char MutantType;// Offset=0x0 Size=0x1
        unsigned char MutantSize;// Offset=0x1 Size=0x1
        unsigned char DpcActive;// Offset=0x2 Size=0x1
        unsigned char MutantReserved;// Offset=0x3 Size=0x1
    };
    long SignalState;// Offset=0x4 Size=0x4
    struct _LIST_ENTRY WaitListHead;// Offset=0x8 Size=0x10
};

struct _KAB_UM_PROCESS_CONTEXT// Size=0x10 (Id=1181)
{
    struct _KAB_UM_PROCESS_TREE * Trees;// Offset=0x0 Size=0x8
    unsigned long TreeCount;// Offset=0x8 Size=0x4
};

struct _SINGLE_LIST_ENTRY// Size=0x8 (Id=510)
{
    struct _SINGLE_LIST_ENTRY * Next;// Offset=0x0 Size=0x8
};

union _KEXECUTE_OPTIONS// Size=0x1 (Id=1267)
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

struct _KGROUP_MASK// Size=0x10 (Id=1151)
{
    unsigned long long Masks[2];// Offset=0x0 Size=0x10
};

union _KSTACK_COUNT// Size=0x4 (Id=1528)
{
    long Value;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long State:3;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x3
        unsigned long StackCount:29;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1d
    };
};

struct _unnamed_528// Size=0x8 (Id=528)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long SecureProcess:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long TrustedApp:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
    };
};

union _unnamed_529// Size=0x8 (Id=529)
{
    unsigned long long SecureHandle;// Offset=0x0 Size=0x8
    struct _unnamed_528 Flags;// Offset=0x0 Size=0x8
};

struct _KPROCESS// Size=0x1c8 (Id=530)
{
    struct _DISPATCHER_HEADER Header;// Offset=0x0 Size=0x18
    struct _LIST_ENTRY ProfileListHead;// Offset=0x18 Size=0x10
    unsigned long long DirectoryTableBase;// Offset=0x28 Size=0x8
    struct _LIST_ENTRY ThreadListHead;// Offset=0x30 Size=0x10
    unsigned long ProcessLock;// Offset=0x40 Size=0x4
    unsigned long ProcessTimerDelay;// Offset=0x44 Size=0x4
    unsigned long long DeepFreezeStartTime;// Offset=0x48 Size=0x8
    struct _KAFFINITY_EX * Affinity;// Offset=0x50 Size=0x8
    struct _KAB_UM_PROCESS_CONTEXT AutoBoostState;// Offset=0x58 Size=0x10
    struct _LIST_ENTRY ReadyListHead;// Offset=0x68 Size=0x10
    struct _SINGLE_LIST_ENTRY SwapListEntry;// Offset=0x78 Size=0x8
    struct _KAFFINITY_EX * ActiveProcessors;// Offset=0x80 Size=0x8
    union // Size=0x4 (Id=0)
    {
        struct // Size=0x4 (Id=0)
        {
            unsigned long AutoAlignment:1;// Offset=0x88 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long DisableBoost:1;// Offset=0x88 Size=0x4 BitOffset=0x1 BitSize=0x1
            unsigned long DisableQuantum:1;// Offset=0x88 Size=0x4 BitOffset=0x2 BitSize=0x1
            unsigned long DeepFreeze:1;// Offset=0x88 Size=0x4 BitOffset=0x3 BitSize=0x1
            unsigned long TimerVirtualization:1;// Offset=0x88 Size=0x4 BitOffset=0x4 BitSize=0x1
            unsigned long CheckStackExtents:1;// Offset=0x88 Size=0x4 BitOffset=0x5 BitSize=0x1
            unsigned long CacheIsolationEnabled:1;// Offset=0x88 Size=0x4 BitOffset=0x6 BitSize=0x1
            unsigned long PpmPolicy:4;// Offset=0x88 Size=0x4 BitOffset=0x7 BitSize=0x4
            unsigned long VaSpaceDeleted:1;// Offset=0x88 Size=0x4 BitOffset=0xb BitSize=0x1
            unsigned long MultiGroup:1;// Offset=0x88 Size=0x4 BitOffset=0xc BitSize=0x1
            unsigned long ForegroundProcess:1;// Offset=0x88 Size=0x4 BitOffset=0xd BitSize=0x1
            unsigned long ReservedFlags:18;// Offset=0x88 Size=0x4 BitOffset=0xe BitSize=0x12
        };
        long ProcessFlags;// Offset=0x88 Size=0x4
    };
    unsigned long Spare0c;// Offset=0x8c Size=0x4
    char BasePriority;// Offset=0x90 Size=0x1
    char QuantumReset;// Offset=0x91 Size=0x1
    char Visited;// Offset=0x92 Size=0x1
    union _KEXECUTE_OPTIONS Flags;// Offset=0x93 Size=0x1
    struct _KGROUP_MASK ActiveGroupsMask;// Offset=0x98 Size=0x10
    unsigned long long ActiveGroupPadding[2];// Offset=0xa8 Size=0x10
    struct _KI_IDEAL_PROCESSOR_ASSIGNMENT_BLOCK * IdealProcessorAssignmentBlock;// Offset=0xb8 Size=0x8
    unsigned long long Padding[6];// Offset=0xc0 Size=0x30
    unsigned long Padding2;// Offset=0xf0 Size=0x4
    unsigned long SchedulerAssistYieldBoostCount;// Offset=0xf4 Size=0x4
    long long SchedulerAssistYieldBoostAllowedTime;// Offset=0xf8 Size=0x8
    unsigned long Spare0d;// Offset=0x100 Size=0x4
    unsigned short IdealGlobalNode;// Offset=0x104 Size=0x2
    unsigned short Spare1;// Offset=0x106 Size=0x2
    union _KSTACK_COUNT StackCount;// Offset=0x108 Size=0x4
    struct _LIST_ENTRY ProcessListEntry;// Offset=0x110 Size=0x10
    unsigned long long CycleTime;// Offset=0x120 Size=0x8
    unsigned long long ContextSwitches;// Offset=0x128 Size=0x8
    struct _KSCHEDULING_GROUP * SchedulingGroup;// Offset=0x130 Size=0x8
    unsigned long long KernelTime;// Offset=0x138 Size=0x8
    unsigned long long UserTime;// Offset=0x140 Size=0x8
    unsigned long long ReadyTime;// Offset=0x148 Size=0x8
    unsigned long FreezeCount;// Offset=0x150 Size=0x4
    unsigned long Spare4;// Offset=0x154 Size=0x4
    unsigned long long UserDirectoryTableBase;// Offset=0x158 Size=0x8
    unsigned char AddressPolicy;// Offset=0x160 Size=0x1
    unsigned char Spare2[7];// Offset=0x161 Size=0x7
    void * InstrumentationCallback;// Offset=0x168 Size=0x8
    union _unnamed_529 SecureState;// Offset=0x170 Size=0x8
    unsigned long long KernelWaitTime;// Offset=0x178 Size=0x8
    unsigned long long UserWaitTime;// Offset=0x180 Size=0x8
    unsigned long long LastRebalanceQpc;// Offset=0x188 Size=0x8
    void * PerProcessorCycleTimes;// Offset=0x190 Size=0x8
    unsigned long long ExtendedFeatureDisableMask;// Offset=0x198 Size=0x8
    unsigned short PrimaryGroup;// Offset=0x1a0 Size=0x2
    unsigned short Spare3[3];// Offset=0x1a2 Size=0x6
    void * UserCetLogging;// Offset=0x1a8 Size=0x8
    struct _LIST_ENTRY CpuPartitionList;// Offset=0x1b0 Size=0x10
    struct _KPROCESS_AVAILABLE_CPU_STATE * AvailableCpuState;// Offset=0x1c0 Size=0x8
};

struct _EX_PUSH_LOCK// Size=0x8 (Id=120)
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

struct _EX_RUNDOWN_REF// Size=0x8 (Id=269)
{
    union // Size=0x8 (Id=0)
    {
        unsigned long long Count;// Offset=0x0 Size=0x8
        void * Ptr;// Offset=0x0 Size=0x8
    };
};

struct _unnamed_9// Size=0x8 (Id=9)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=587)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_9 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _EX_FAST_REF// Size=0x8 (Id=549)
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

struct _RTL_AVL_TREE// Size=0x8 (Id=117)
{
    struct _RTL_BALANCED_NODE * Root;// Offset=0x0 Size=0x8
};

struct _SE_AUDIT_PROCESS_CREATION_INFO// Size=0x8 (Id=1795)
{
    struct _OBJECT_NAME_INFORMATION * ImageFileName;// Offset=0x0 Size=0x8
};

struct _MMSUPPORT_FLAGS// Size=0x4 (Id=672)
{
    union // Size=0x4 (Id=0)
    {
        struct // Size=0x2 (Id=0)
        {
            unsigned char WorkingSetType:4;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x4
            unsigned char Reserved0:2;// Offset=0x0 Size=0x1 BitOffset=0x4 BitSize=0x2
            unsigned char MaximumWorkingSetHard:1;// Offset=0x0 Size=0x1 BitOffset=0x6 BitSize=0x1
            unsigned char MinimumWorkingSetHard:1;// Offset=0x0 Size=0x1 BitOffset=0x7 BitSize=0x1
            unsigned char Reserved1:1;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x1
            unsigned char TrimmerState:2;// Offset=0x1 Size=0x1 BitOffset=0x1 BitSize=0x2
            unsigned char LinearAddressProtected:1;// Offset=0x1 Size=0x1 BitOffset=0x3 BitSize=0x1
            unsigned char PageStealers:4;// Offset=0x1 Size=0x1 BitOffset=0x4 BitSize=0x4
        };
        unsigned short u1;// Offset=0x0 Size=0x2
        unsigned char MemoryPriority;// Offset=0x2 Size=0x1
        struct // Size=0x1 (Id=0)
        {
            unsigned char WsleDeleted:1;// Offset=0x3 Size=0x1 BitOffset=0x0 BitSize=0x1
            unsigned char SvmEnabled:1;// Offset=0x3 Size=0x1 BitOffset=0x1 BitSize=0x1
            unsigned char ForceAge:1;// Offset=0x3 Size=0x1 BitOffset=0x2 BitSize=0x1
            unsigned char ForceTrim:1;// Offset=0x3 Size=0x1 BitOffset=0x3 BitSize=0x1
            unsigned char CommitReleaseState:2;// Offset=0x3 Size=0x1 BitOffset=0x4 BitSize=0x2
            unsigned char Reserved2:2;// Offset=0x3 Size=0x1 BitOffset=0x6 BitSize=0x2
        };
        unsigned char u2;// Offset=0x3 Size=0x1
        unsigned long EntireFlags;// Offset=0x0 Size=0x4
    };
};

struct _MMSUPPORT_INSTANCE// Size=0xc0 (Id=673)
{
    unsigned long NextPageColor;// Offset=0x0 Size=0x4
    unsigned long PageFaultCount;// Offset=0x4 Size=0x4
    unsigned long long TrimmedPageCount;// Offset=0x8 Size=0x8
    struct _MMWSL_INSTANCE * VmWorkingSetList;// Offset=0x10 Size=0x8
    struct _LIST_ENTRY WorkingSetExpansionLinks;// Offset=0x18 Size=0x10
    unsigned long long AgeDistribution[8];// Offset=0x28 Size=0x40
    struct _KGATE * ExitOutswapGate;// Offset=0x68 Size=0x8
    unsigned long long MinimumWorkingSetSize;// Offset=0x70 Size=0x8
    unsigned long long MaximumWorkingSetSize;// Offset=0x78 Size=0x8
    unsigned long long WorkingSetLeafSize;// Offset=0x80 Size=0x8
    unsigned long long WorkingSetLeafPrivateSize;// Offset=0x88 Size=0x8
    unsigned long long WorkingSetSize;// Offset=0x90 Size=0x8
    unsigned long long WorkingSetPrivateSize;// Offset=0x98 Size=0x8
    unsigned long long PeakWorkingSetSize;// Offset=0xa0 Size=0x8
    unsigned long HardFaultCount;// Offset=0xa8 Size=0x4
    unsigned short LastTrimStamp;// Offset=0xac Size=0x2
    unsigned short PartitionId;// Offset=0xae Size=0x2
    unsigned long long SelfmapLock;// Offset=0xb0 Size=0x8
    struct _MMSUPPORT_FLAGS Flags;// Offset=0xb8 Size=0x4
    unsigned long InterlockedFlags;// Offset=0xbc Size=0x4
};

struct _MMSUPPORT_SHARED// Size=0x80 (Id=1729)
{
    void * WorkingSetLockArray;// Offset=0x0 Size=0x8
    unsigned long long ReleasedCommitDebt;// Offset=0x8 Size=0x8
    unsigned long long ResetPagesRepurposedCount;// Offset=0x10 Size=0x8
    void * WsSwapSupport;// Offset=0x18 Size=0x8
    void * CommitReleaseContext;// Offset=0x20 Size=0x8
    void * AccessLog;// Offset=0x28 Size=0x8
    unsigned long long ChargedWslePages;// Offset=0x30 Size=0x8
    unsigned long long ActualWslePages;// Offset=0x38 Size=0x8
    long WorkingSetCoreLock;// Offset=0x40 Size=0x4
    void * ShadowMapping;// Offset=0x48 Size=0x8
};

struct _MMSUPPORT_FULL// Size=0x140 (Id=1377)
{
    struct _MMSUPPORT_INSTANCE Instance;// Offset=0x0 Size=0xc0
    struct _MMSUPPORT_SHARED Shared;// Offset=0xc0 Size=0x80
};

struct _ALPC_PROCESS_CONTEXT// Size=0x20 (Id=1488)
{
    struct _EX_PUSH_LOCK Lock;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY ViewListHead;// Offset=0x8 Size=0x10
    unsigned long long PagedPoolQuotaCache;// Offset=0x18 Size=0x8
};

struct _PS_PROTECTION// Size=0x1 (Id=1440)
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

union _PS_INTERLOCKED_TIMER_DELAY_VALUES// Size=0x8 (Id=1724)
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

struct _WNF_STATE_NAME// Size=0x8 (Id=1085)
{
    unsigned long Data[2];// Offset=0x0 Size=0x8
};

struct _JOBOBJECT_WAKE_FILTER// Size=0x8 (Id=1378)
{
    unsigned long HighEdgeFilter;// Offset=0x0 Size=0x4
    unsigned long LowEdgeFilter;// Offset=0x4 Size=0x4
};

struct _PS_PROCESS_WAKE_INFORMATION// Size=0x30 (Id=1353)
{
    unsigned long long NotificationChannel;// Offset=0x0 Size=0x8
    unsigned long WakeCounters[7];// Offset=0x8 Size=0x1c
    struct _JOBOBJECT_WAKE_FILTER WakeFilter;// Offset=0x24 Size=0x8
    unsigned long NoWakeCounter;// Offset=0x2c Size=0x4
};

struct _unnamed_559// Size=0x4 (Id=559)
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

struct _unnamed_560// Size=0x4 (Id=560)
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
        unsigned long XtendedControlFlowGuard_Deprecated:1;// Offset=0x0 Size=0x4 BitOffset=0x19 BitSize=0x1
        unsigned long AuditXtendedControlFlowGuard_Deprecated:1;// Offset=0x0 Size=0x4 BitOffset=0x1a BitSize=0x1
        unsigned long PointerAuthUserIp:1;// Offset=0x0 Size=0x4 BitOffset=0x1b BitSize=0x1
        unsigned long AuditPointerAuthUserIp:1;// Offset=0x0 Size=0x4 BitOffset=0x1c BitSize=0x1
        unsigned long AuditPointerAuthUserIpLogged:1;// Offset=0x0 Size=0x4 BitOffset=0x1d BitSize=0x1
        unsigned long CetDynamicApisOutOfProcOnly:1;// Offset=0x0 Size=0x4 BitOffset=0x1e BitSize=0x1
        unsigned long UserCetSetContextIpValidationRelaxedMode:1;// Offset=0x0 Size=0x4 BitOffset=0x1f BitSize=0x1
    };
};

struct _PS_DYNAMIC_ENFORCED_ADDRESS_RANGES// Size=0x10 (Id=1407)
{
    struct _RTL_AVL_TREE Tree;// Offset=0x0 Size=0x8
    struct _EX_PUSH_LOCK Lock;// Offset=0x8 Size=0x8
};

struct _PSP_SYSCALL_PROVIDER_DISPATCH_CONTEXT// Size=0x8 (Id=1702)
{
    unsigned long Level;// Offset=0x0 Size=0x4
    unsigned long Slot;// Offset=0x4 Size=0x4
};

struct _unnamed_562// Size=0x4 (Id=562)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long RestrictCoreSharing:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long DisallowFsctlSystemCalls:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long AuditDisallowFsctlSystemCalls:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long MitigationFlags3Spare:29;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1d
    };
};

struct _unnamed_563// Size=0x4 (Id=563)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long SystemModuleInformation:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long SystemModuleInformationEx:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long SystemLocksInformation:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long SystemStackTraceInformation:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long SystemHandleInformation:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long SystemExtendedHandleInformation:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long SystemObjectInformation:1;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1
        unsigned long SystemBigPoolInformation:1;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x1
        unsigned long SystemExtendedProcessInformation:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
        unsigned long SystemSessionProcessInformation:1;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x1
        unsigned long SystemMemoryTopologyInformation:1;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x1
        unsigned long SystemMemoryChannelInformation:1;// Offset=0x0 Size=0x4 BitOffset=0xb BitSize=0x1
        unsigned long SystemUnused:1;// Offset=0x0 Size=0x4 BitOffset=0xc BitSize=0x1
        unsigned long SystemPlatformBinaryInformation:1;// Offset=0x0 Size=0x4 BitOffset=0xd BitSize=0x1
        unsigned long SystemFirmwareTableInformation:1;// Offset=0x0 Size=0x4 BitOffset=0xe BitSize=0x1
        unsigned long SystemBootMetadataInformation:1;// Offset=0x0 Size=0x4 BitOffset=0xf BitSize=0x1
        unsigned long SystemWheaIpmiHardwareInformation:1;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x1
        unsigned long SystemSuperfetchPrefetch:1;// Offset=0x0 Size=0x4 BitOffset=0x11 BitSize=0x1
        unsigned long SystemSuperfetchPfnQuery:1;// Offset=0x0 Size=0x4 BitOffset=0x12 BitSize=0x1
        unsigned long SystemSuperfetchPrivSourceQuery:1;// Offset=0x0 Size=0x4 BitOffset=0x13 BitSize=0x1
        unsigned long SystemSuperfetchMemoryListQuery:1;// Offset=0x0 Size=0x4 BitOffset=0x14 BitSize=0x1
        unsigned long SystemSuperfetchMemoryRangesQuery:1;// Offset=0x0 Size=0x4 BitOffset=0x15 BitSize=0x1
        unsigned long SystemSuperfetchPfnSetPriority:1;// Offset=0x0 Size=0x4 BitOffset=0x16 BitSize=0x1
        unsigned long SystemSuperfetchMovePages:1;// Offset=0x0 Size=0x4 BitOffset=0x17 BitSize=0x1
        unsigned long SystemSuperfetchPfnSetPageHeat:1;// Offset=0x0 Size=0x4 BitOffset=0x18 BitSize=0x1
        unsigned long SysDbgGetTriageDump:1;// Offset=0x0 Size=0x4 BitOffset=0x19 BitSize=0x1
        unsigned long SysDbgGetLiveKernelDump:1;// Offset=0x0 Size=0x4 BitOffset=0x1a BitSize=0x1
        unsigned long SyscallUsageValuesSpare:5;// Offset=0x0 Size=0x4 BitOffset=0x1b BitSize=0x5
    };
};

union _PROCESS_EXECUTION_TRANSITION// Size=0x2 (Id=1630)
{
    short TransitionState;// Offset=0x0 Size=0x2
    struct // Size=0x2 (Id=0)
    {
        unsigned short InProgress:1;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x1
        unsigned short Reserved:7;// Offset=0x0 Size=0x2 BitOffset=0x1 BitSize=0x7
    };
};

union _PROCESS_EXECUTION_STATE// Size=0x1 (Id=1658)
{
    char State;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char ProcessFrozen:1;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char ProcessSwapped:1;// Offset=0x0 Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char ProcessGraphicsFreezeOptimized:1;// Offset=0x0 Size=0x1 BitOffset=0x2 BitSize=0x1
        unsigned char Reserved:5;// Offset=0x0 Size=0x1 BitOffset=0x3 BitSize=0x5
    };
};

union _PROCESS_EXECUTION// Size=0x4 (Id=1631)
{
    long State;// Offset=0x0 Size=0x4
    union _PROCESS_EXECUTION_TRANSITION Transition;// Offset=0x0 Size=0x2
    union _PROCESS_EXECUTION_STATE Current;// Offset=0x2 Size=0x1
    union _PROCESS_EXECUTION_STATE Requested;// Offset=0x3 Size=0x1
};

struct _EPROCESS// Size=0x840 (Id=564)
{
    struct _KPROCESS Pcb;// Offset=0x0 Size=0x1c8
    struct _EX_PUSH_LOCK ProcessLock;// Offset=0x1c8 Size=0x8
    void * UniqueProcessId;// Offset=0x1d0 Size=0x8
    struct _LIST_ENTRY ActiveProcessLinks;// Offset=0x1d8 Size=0x10
    struct _EX_RUNDOWN_REF RundownProtect;// Offset=0x1e8 Size=0x8
    union // Size=0x4 (Id=0)
    {
        unsigned long Flags2;// Offset=0x1f0 Size=0x4
        struct // Size=0x4 (Id=0)
        {
            unsigned long JobNotReallyActive:1;// Offset=0x1f0 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long AccountingFolded:1;// Offset=0x1f0 Size=0x4 BitOffset=0x1 BitSize=0x1
            unsigned long NewProcessReported:1;// Offset=0x1f0 Size=0x4 BitOffset=0x2 BitSize=0x1
            unsigned long ExitProcessReported:1;// Offset=0x1f0 Size=0x4 BitOffset=0x3 BitSize=0x1
            unsigned long ReportCommitChanges:1;// Offset=0x1f0 Size=0x4 BitOffset=0x4 BitSize=0x1
            unsigned long LastReportMemory:1;// Offset=0x1f0 Size=0x4 BitOffset=0x5 BitSize=0x1
            unsigned long ForceWakeCharge:1;// Offset=0x1f0 Size=0x4 BitOffset=0x6 BitSize=0x1
            unsigned long CrossSessionCreate:1;// Offset=0x1f0 Size=0x4 BitOffset=0x7 BitSize=0x1
            unsigned long NeedsHandleRundown:1;// Offset=0x1f0 Size=0x4 BitOffset=0x8 BitSize=0x1
            unsigned long RefTraceEnabled:1;// Offset=0x1f0 Size=0x4 BitOffset=0x9 BitSize=0x1
            unsigned long PicoCreated:1;// Offset=0x1f0 Size=0x4 BitOffset=0xa BitSize=0x1
            unsigned long EmptyJobEvaluated:1;// Offset=0x1f0 Size=0x4 BitOffset=0xb BitSize=0x1
            unsigned long DefaultPagePriority:3;// Offset=0x1f0 Size=0x4 BitOffset=0xc BitSize=0x3
            unsigned long PrimaryTokenFrozen:1;// Offset=0x1f0 Size=0x4 BitOffset=0xf BitSize=0x1
            unsigned long ProcessVerifierTarget:1;// Offset=0x1f0 Size=0x4 BitOffset=0x10 BitSize=0x1
            unsigned long RestrictSetThreadContext:1;// Offset=0x1f0 Size=0x4 BitOffset=0x11 BitSize=0x1
            unsigned long AffinityPermanent:1;// Offset=0x1f0 Size=0x4 BitOffset=0x12 BitSize=0x1
            unsigned long AffinityUpdateEnable:1;// Offset=0x1f0 Size=0x4 BitOffset=0x13 BitSize=0x1
            unsigned long PropagateNode:1;// Offset=0x1f0 Size=0x4 BitOffset=0x14 BitSize=0x1
            unsigned long ExplicitAffinity:1;// Offset=0x1f0 Size=0x4 BitOffset=0x15 BitSize=0x1
            unsigned long Flags2Available1:2;// Offset=0x1f0 Size=0x4 BitOffset=0x16 BitSize=0x2
            unsigned long EnableReadVmLogging:1;// Offset=0x1f0 Size=0x4 BitOffset=0x18 BitSize=0x1
            unsigned long EnableWriteVmLogging:1;// Offset=0x1f0 Size=0x4 BitOffset=0x19 BitSize=0x1
            unsigned long FatalAccessTerminationRequested:1;// Offset=0x1f0 Size=0x4 BitOffset=0x1a BitSize=0x1
            unsigned long DisableSystemAllowedCpuSet:1;// Offset=0x1f0 Size=0x4 BitOffset=0x1b BitSize=0x1
            unsigned long Flags2Available2:3;// Offset=0x1f0 Size=0x4 BitOffset=0x1c BitSize=0x3
            unsigned long InPrivate:1;// Offset=0x1f0 Size=0x4 BitOffset=0x1f BitSize=0x1
        };
    };
    union // Size=0x4 (Id=0)
    {
        unsigned long Flags;// Offset=0x1f4 Size=0x4
        struct // Size=0x4 (Id=0)
        {
            unsigned long CreateReported:1;// Offset=0x1f4 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long NoDebugInherit:1;// Offset=0x1f4 Size=0x4 BitOffset=0x1 BitSize=0x1
            unsigned long ProcessExiting:1;// Offset=0x1f4 Size=0x4 BitOffset=0x2 BitSize=0x1
            unsigned long ProcessDelete:1;// Offset=0x1f4 Size=0x4 BitOffset=0x3 BitSize=0x1
            unsigned long ManageExecutableMemoryWrites:1;// Offset=0x1f4 Size=0x4 BitOffset=0x4 BitSize=0x1
            unsigned long VmDeleted:1;// Offset=0x1f4 Size=0x4 BitOffset=0x5 BitSize=0x1
            unsigned long OutswapEnabled:1;// Offset=0x1f4 Size=0x4 BitOffset=0x6 BitSize=0x1
            unsigned long Outswapped:1;// Offset=0x1f4 Size=0x4 BitOffset=0x7 BitSize=0x1
            unsigned long FailFastOnCommitFail:1;// Offset=0x1f4 Size=0x4 BitOffset=0x8 BitSize=0x1
            unsigned long Wow64VaSpace4Gb:1;// Offset=0x1f4 Size=0x4 BitOffset=0x9 BitSize=0x1
            unsigned long AddressSpaceInitialized:2;// Offset=0x1f4 Size=0x4 BitOffset=0xa BitSize=0x2
            unsigned long SetTimerResolution:1;// Offset=0x1f4 Size=0x4 BitOffset=0xc BitSize=0x1
            unsigned long BreakOnTermination:1;// Offset=0x1f4 Size=0x4 BitOffset=0xd BitSize=0x1
            unsigned long DeprioritizeViews:1;// Offset=0x1f4 Size=0x4 BitOffset=0xe BitSize=0x1
            unsigned long WriteWatch:1;// Offset=0x1f4 Size=0x4 BitOffset=0xf BitSize=0x1
            unsigned long ProcessInSession:1;// Offset=0x1f4 Size=0x4 BitOffset=0x10 BitSize=0x1
            unsigned long OverrideAddressSpace:1;// Offset=0x1f4 Size=0x4 BitOffset=0x11 BitSize=0x1
            unsigned long HasAddressSpace:1;// Offset=0x1f4 Size=0x4 BitOffset=0x12 BitSize=0x1
            unsigned long LaunchPrefetched:1;// Offset=0x1f4 Size=0x4 BitOffset=0x13 BitSize=0x1
            unsigned long Reserved:1;// Offset=0x1f4 Size=0x4 BitOffset=0x14 BitSize=0x1
            unsigned long VmTopDown:1;// Offset=0x1f4 Size=0x4 BitOffset=0x15 BitSize=0x1
            unsigned long ImageNotifyDone:1;// Offset=0x1f4 Size=0x4 BitOffset=0x16 BitSize=0x1
            unsigned long PdeUpdateNeeded:1;// Offset=0x1f4 Size=0x4 BitOffset=0x17 BitSize=0x1
            unsigned long VdmAllowed:1;// Offset=0x1f4 Size=0x4 BitOffset=0x18 BitSize=0x1
            unsigned long ProcessRundown:1;// Offset=0x1f4 Size=0x4 BitOffset=0x19 BitSize=0x1
            unsigned long ProcessInserted:1;// Offset=0x1f4 Size=0x4 BitOffset=0x1a BitSize=0x1
            unsigned long DefaultIoPriority:3;// Offset=0x1f4 Size=0x4 BitOffset=0x1b BitSize=0x3
            unsigned long ProcessSelfDelete:1;// Offset=0x1f4 Size=0x4 BitOffset=0x1e BitSize=0x1
            unsigned long SetTimerResolutionLink:1;// Offset=0x1f4 Size=0x4 BitOffset=0x1f BitSize=0x1
        };
    };
    union _LARGE_INTEGER CreateTime;// Offset=0x1f8 Size=0x8
    unsigned long long ProcessQuotaUsage[2];// Offset=0x200 Size=0x10
    unsigned long long ProcessQuotaPeak[2];// Offset=0x210 Size=0x10
    unsigned long long PeakVirtualSize;// Offset=0x220 Size=0x8
    unsigned long long VirtualSize;// Offset=0x228 Size=0x8
    struct _LIST_ENTRY SessionProcessLinks;// Offset=0x230 Size=0x10
    union // Size=0x248 (Id=0)
    {
        void * ExceptionPortData;// Offset=0x240 Size=0x8
        unsigned long long ExceptionPortValue;// Offset=0x240 Size=0x8
        struct // Size=0x8 (Id=0)
        {
            unsigned long long ExceptionPortState:3;// Offset=0x240 Size=0x8 BitOffset=0x0 BitSize=0x3
        };
    };
    struct _EX_FAST_REF Token;// Offset=0x248 Size=0x8
    unsigned long long MmReserved;// Offset=0x250 Size=0x8
    struct _EX_PUSH_LOCK AddressCreationLock;// Offset=0x258 Size=0x8
    struct _EX_PUSH_LOCK PageTableCommitmentLock;// Offset=0x260 Size=0x8
    struct _ETHREAD * RotateInProgress;// Offset=0x268 Size=0x8
    struct _ETHREAD * ForkInProgress;// Offset=0x270 Size=0x8
    struct _EJOB * CommitChargeJob;// Offset=0x278 Size=0x8
    struct _RTL_AVL_TREE CloneRoot;// Offset=0x280 Size=0x8
    unsigned long long NumberOfPrivatePages;// Offset=0x288 Size=0x8
    unsigned long long NumberOfLockedPages;// Offset=0x290 Size=0x8
    void * Win32Process;// Offset=0x298 Size=0x8
    struct _EJOB * Job;// Offset=0x2a0 Size=0x8
    void * SectionObject;// Offset=0x2a8 Size=0x8
    void * SectionBaseAddress;// Offset=0x2b0 Size=0x8
    unsigned long Cookie;// Offset=0x2b8 Size=0x4
    struct _PAGEFAULT_HISTORY * WorkingSetWatch;// Offset=0x2c0 Size=0x8
    void * Win32WindowStation;// Offset=0x2c8 Size=0x8
    void * InheritedFromUniqueProcessId;// Offset=0x2d0 Size=0x8
    unsigned long long OwnerProcessId;// Offset=0x2d8 Size=0x8
    struct _PEB * Peb;// Offset=0x2e0 Size=0x8
    struct _PSP_SESSION_SPACE * Session;// Offset=0x2e8 Size=0x8
    void * Spare1;// Offset=0x2f0 Size=0x8
    struct _EPROCESS_QUOTA_BLOCK * QuotaBlock;// Offset=0x2f8 Size=0x8
    struct _HANDLE_TABLE * ObjectTable;// Offset=0x300 Size=0x8
    void * DebugPort;// Offset=0x308 Size=0x8
    struct _EWOW64PROCESS * WoW64Process;// Offset=0x310 Size=0x8
    struct _EX_FAST_REF DeviceMap;// Offset=0x318 Size=0x8
    void * EtwDataSource;// Offset=0x320 Size=0x8
    unsigned long long PageDirectoryPte;// Offset=0x328 Size=0x8
    struct _FILE_OBJECT * ImageFilePointer;// Offset=0x330 Size=0x8
    unsigned char ImageFileName[15];// Offset=0x338 Size=0xf
    unsigned char PriorityClass;// Offset=0x347 Size=0x1
    void * SecurityPort;// Offset=0x348 Size=0x8
    struct _SE_AUDIT_PROCESS_CREATION_INFO SeAuditProcessCreationInfo;// Offset=0x350 Size=0x8
    struct _LIST_ENTRY JobLinks;// Offset=0x358 Size=0x10
    void * HighestUserAddress;// Offset=0x368 Size=0x8
    struct _LIST_ENTRY ThreadListHead;// Offset=0x370 Size=0x10
    unsigned long ActiveThreads;// Offset=0x380 Size=0x4
    unsigned long ImagePathHash;// Offset=0x384 Size=0x4
    unsigned long DefaultHardErrorProcessing;// Offset=0x388 Size=0x4
    long LastThreadExitStatus;// Offset=0x38c Size=0x4
    struct _EX_FAST_REF PrefetchTrace;// Offset=0x390 Size=0x8
    void * LockedPagesList;// Offset=0x398 Size=0x8
    union _LARGE_INTEGER ReadOperationCount;// Offset=0x3a0 Size=0x8
    union _LARGE_INTEGER WriteOperationCount;// Offset=0x3a8 Size=0x8
    union _LARGE_INTEGER OtherOperationCount;// Offset=0x3b0 Size=0x8
    union _LARGE_INTEGER ReadTransferCount;// Offset=0x3b8 Size=0x8
    union _LARGE_INTEGER WriteTransferCount;// Offset=0x3c0 Size=0x8
    union _LARGE_INTEGER OtherTransferCount;// Offset=0x3c8 Size=0x8
    unsigned long long CommitChargeLimit;// Offset=0x3d0 Size=0x8
    unsigned long long CommitCharge;// Offset=0x3d8 Size=0x8
    unsigned long long CommitChargePeak;// Offset=0x3e0 Size=0x8
    struct _MMSUPPORT_FULL Vm;// Offset=0x400 Size=0x140
    struct _LIST_ENTRY MmProcessLinks;// Offset=0x540 Size=0x10
    unsigned long ModifiedPageCount;// Offset=0x550 Size=0x4
    long ExitStatus;// Offset=0x554 Size=0x4
    struct _RTL_AVL_TREE VadRoot;// Offset=0x558 Size=0x8
    void * VadHint;// Offset=0x560 Size=0x8
    unsigned long long VadCount;// Offset=0x568 Size=0x8
    unsigned long long VadPhysicalPages;// Offset=0x570 Size=0x8
    unsigned long long VadPhysicalPagesLimit;// Offset=0x578 Size=0x8
    struct _ALPC_PROCESS_CONTEXT AlpcContext;// Offset=0x580 Size=0x20
    struct _LIST_ENTRY TimerResolutionLink;// Offset=0x5a0 Size=0x10
    struct _PO_DIAG_STACK_RECORD * TimerResolutionStackRecord;// Offset=0x5b0 Size=0x8
    unsigned long RequestedTimerResolution;// Offset=0x5b8 Size=0x4
    unsigned long SmallestTimerResolution;// Offset=0x5bc Size=0x4
    union _LARGE_INTEGER ExitTime;// Offset=0x5c0 Size=0x8
    struct _INVERTED_FUNCTION_TABLE_KERNEL_MODE * InvertedFunctionTable;// Offset=0x5c8 Size=0x8
    struct _EX_PUSH_LOCK InvertedFunctionTableLock;// Offset=0x5d0 Size=0x8
    unsigned long ActiveThreadsHighWatermark;// Offset=0x5d8 Size=0x4
    unsigned long LargePrivateVadCount;// Offset=0x5dc Size=0x4
    struct _EX_PUSH_LOCK ThreadListLock;// Offset=0x5e0 Size=0x8
    void * WnfContext;// Offset=0x5e8 Size=0x8
    struct _EJOB * ServerSilo;// Offset=0x5f0 Size=0x8
    unsigned char SignatureLevel;// Offset=0x5f8 Size=0x1
    unsigned char SectionSignatureLevel;// Offset=0x5f9 Size=0x1
    struct _PS_PROTECTION Protection;// Offset=0x5fa Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char HangCount:3;// Offset=0x5fb Size=0x1 BitOffset=0x0 BitSize=0x3
        unsigned char GhostCount:3;// Offset=0x5fb Size=0x1 BitOffset=0x3 BitSize=0x3
        unsigned char PrefilterException:1;// Offset=0x5fb Size=0x1 BitOffset=0x6 BitSize=0x1
    };
    union // Size=0x4 (Id=0)
    {
        unsigned long Flags3;// Offset=0x5fc Size=0x4
        struct // Size=0x4 (Id=0)
        {
            unsigned long Minimal:1;// Offset=0x5fc Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long ReplacingPageRoot:1;// Offset=0x5fc Size=0x4 BitOffset=0x1 BitSize=0x1
            unsigned long Crashed:1;// Offset=0x5fc Size=0x4 BitOffset=0x2 BitSize=0x1
            unsigned long JobVadsAreTracked:1;// Offset=0x5fc Size=0x4 BitOffset=0x3 BitSize=0x1
            unsigned long VadTrackingDisabled:1;// Offset=0x5fc Size=0x4 BitOffset=0x4 BitSize=0x1
            unsigned long AuxiliaryProcess:1;// Offset=0x5fc Size=0x4 BitOffset=0x5 BitSize=0x1
            unsigned long SubsystemProcess:1;// Offset=0x5fc Size=0x4 BitOffset=0x6 BitSize=0x1
            unsigned long IndirectCpuSets:1;// Offset=0x5fc Size=0x4 BitOffset=0x7 BitSize=0x1
            unsigned long RelinquishedCommit:1;// Offset=0x5fc Size=0x4 BitOffset=0x8 BitSize=0x1
            unsigned long HighGraphicsPriority:1;// Offset=0x5fc Size=0x4 BitOffset=0x9 BitSize=0x1
            unsigned long CommitFailLogged:1;// Offset=0x5fc Size=0x4 BitOffset=0xa BitSize=0x1
            unsigned long ReserveFailLogged:1;// Offset=0x5fc Size=0x4 BitOffset=0xb BitSize=0x1
            unsigned long SystemProcess:1;// Offset=0x5fc Size=0x4 BitOffset=0xc BitSize=0x1
            unsigned long AllImagesAtBasePristineBase:1;// Offset=0x5fc Size=0x4 BitOffset=0xd BitSize=0x1
            unsigned long AddressPolicyFrozen:1;// Offset=0x5fc Size=0x4 BitOffset=0xe BitSize=0x1
            unsigned long ProcessFirstResume:1;// Offset=0x5fc Size=0x4 BitOffset=0xf BitSize=0x1
            unsigned long ForegroundExternal:1;// Offset=0x5fc Size=0x4 BitOffset=0x10 BitSize=0x1
            unsigned long ForegroundSystem:1;// Offset=0x5fc Size=0x4 BitOffset=0x11 BitSize=0x1
            unsigned long HighMemoryPriority:1;// Offset=0x5fc Size=0x4 BitOffset=0x12 BitSize=0x1
            unsigned long EnableProcessSuspendResumeLogging:1;// Offset=0x5fc Size=0x4 BitOffset=0x13 BitSize=0x1
            unsigned long EnableThreadSuspendResumeLogging:1;// Offset=0x5fc Size=0x4 BitOffset=0x14 BitSize=0x1
            unsigned long SecurityDomainChanged:1;// Offset=0x5fc Size=0x4 BitOffset=0x15 BitSize=0x1
            unsigned long SecurityFreezeComplete:1;// Offset=0x5fc Size=0x4 BitOffset=0x16 BitSize=0x1
            unsigned long VmProcessorHost:1;// Offset=0x5fc Size=0x4 BitOffset=0x17 BitSize=0x1
            unsigned long VmProcessorHostTransition:1;// Offset=0x5fc Size=0x4 BitOffset=0x18 BitSize=0x1
            unsigned long AltSyscall:1;// Offset=0x5fc Size=0x4 BitOffset=0x19 BitSize=0x1
            unsigned long TimerResolutionIgnore:1;// Offset=0x5fc Size=0x4 BitOffset=0x1a BitSize=0x1
            unsigned long DisallowUserTerminate:1;// Offset=0x5fc Size=0x4 BitOffset=0x1b BitSize=0x1
            unsigned long EnableProcessRemoteExecProtectVmLogging:1;// Offset=0x5fc Size=0x4 BitOffset=0x1c BitSize=0x1
            unsigned long EnableProcessLocalExecProtectVmLogging:1;// Offset=0x5fc Size=0x4 BitOffset=0x1d BitSize=0x1
            unsigned long MemoryCompressionProcess:1;// Offset=0x5fc Size=0x4 BitOffset=0x1e BitSize=0x1
            unsigned long EnableProcessImpersonationLogging:1;// Offset=0x5fc Size=0x4 BitOffset=0x1f BitSize=0x1
        };
    };
    long DeviceAsid;// Offset=0x600 Size=0x4
    void * SvmData;// Offset=0x608 Size=0x8
    struct _EX_PUSH_LOCK SvmProcessLock;// Offset=0x610 Size=0x8
    unsigned long long SvmLock;// Offset=0x618 Size=0x8
    struct _LIST_ENTRY SvmProcessDeviceListHead;// Offset=0x620 Size=0x10
    unsigned long long LastFreezeInterruptTime;// Offset=0x630 Size=0x8
    struct _PROCESS_DISK_COUNTERS * DiskCounters;// Offset=0x638 Size=0x8
    void * PicoContext;// Offset=0x640 Size=0x8
    void * EnclaveTable;// Offset=0x648 Size=0x8
    unsigned long long EnclaveNumber;// Offset=0x650 Size=0x8
    struct _EX_PUSH_LOCK EnclaveLock;// Offset=0x658 Size=0x8
    unsigned long HighPriorityFaultsAllowed;// Offset=0x660 Size=0x4
    struct _PO_PROCESS_ENERGY_CONTEXT * EnergyContext;// Offset=0x668 Size=0x8
    void * VmContext;// Offset=0x670 Size=0x8
    unsigned long long SequenceNumber;// Offset=0x678 Size=0x8
    unsigned long long CreateInterruptTime;// Offset=0x680 Size=0x8
    unsigned long long CreateUnbiasedInterruptTime;// Offset=0x688 Size=0x8
    unsigned long long TotalUnbiasedFrozenTime;// Offset=0x690 Size=0x8
    unsigned long long LastAppStateUpdateTime;// Offset=0x698 Size=0x8
    struct // Size=0x8 (Id=0)
    {
        unsigned long long LastAppStateUptime:61;// Offset=0x6a0 Size=0x8 BitOffset=0x0 BitSize=0x3d
        unsigned long long LastAppState:3;// Offset=0x6a0 Size=0x8 BitOffset=0x3d BitSize=0x3
    };
    unsigned long long SharedCommitCharge;// Offset=0x6a8 Size=0x8
    struct _EX_PUSH_LOCK SharedCommitLock;// Offset=0x6b0 Size=0x8
    struct _LIST_ENTRY SharedCommitLinks;// Offset=0x6b8 Size=0x10
    union // Size=0x6d8 (Id=0)
    {
        unsigned long long AllowedCpuSets;// Offset=0x6c8 Size=0x8
        unsigned long long DefaultCpuSets;// Offset=0x6d0 Size=0x8
        unsigned long long * AllowedCpuSetsIndirect;// Offset=0x6c8 Size=0x8
        unsigned long long * DefaultCpuSetsIndirect;// Offset=0x6d0 Size=0x8
    };
    void * DiskIoAttribution;// Offset=0x6d8 Size=0x8
    void * DxgProcess;// Offset=0x6e0 Size=0x8
    unsigned long Win32KFilterSet;// Offset=0x6e8 Size=0x4
    unsigned short Machine;// Offset=0x6ec Size=0x2
    unsigned char MmSlabIdentity;// Offset=0x6ee Size=0x1
    unsigned char Spare0;// Offset=0x6ef Size=0x1
    union _PS_INTERLOCKED_TIMER_DELAY_VALUES ProcessTimerDelay;// Offset=0x6f0 Size=0x8
    unsigned long KTimerSets;// Offset=0x6f8 Size=0x4
    unsigned long KTimer2Sets;// Offset=0x6fc Size=0x4
    unsigned long ThreadTimerSets;// Offset=0x700 Size=0x4
    unsigned long long VirtualTimerListLock;// Offset=0x708 Size=0x8
    struct _LIST_ENTRY VirtualTimerListHead;// Offset=0x710 Size=0x10
    union // Size=0x8 (Id=0)
    {
        struct _WNF_STATE_NAME WakeChannel;// Offset=0x720 Size=0x8
        struct _PS_PROCESS_WAKE_INFORMATION WakeInfo;// Offset=0x720 Size=0x30
    };
    union // Size=0x4 (Id=0)
    {
        unsigned long MitigationFlags;// Offset=0x750 Size=0x4
        struct _unnamed_559 MitigationFlagsValues;// Offset=0x750 Size=0x4
    };
    union // Size=0x4 (Id=0)
    {
        unsigned long MitigationFlags2;// Offset=0x754 Size=0x4
        struct _unnamed_560 MitigationFlags2Values;// Offset=0x754 Size=0x4
    };
    void * PartitionObject;// Offset=0x758 Size=0x8
    unsigned long long SecurityDomain;// Offset=0x760 Size=0x8
    unsigned long long ParentSecurityDomain;// Offset=0x768 Size=0x8
    void * CoverageSamplerContext;// Offset=0x770 Size=0x8
    void * MmHotPatchContext;// Offset=0x778 Size=0x8
    struct _RTL_AVL_TREE DynamicEHContinuationTargetsTree;// Offset=0x780 Size=0x8
    struct _EX_PUSH_LOCK DynamicEHContinuationTargetsLock;// Offset=0x788 Size=0x8
    struct _PS_DYNAMIC_ENFORCED_ADDRESS_RANGES DynamicEnforcedCetCompatibleRanges;// Offset=0x790 Size=0x10
    unsigned long DisabledComponentFlags;// Offset=0x7a0 Size=0x4
    long PageCombineSequence;// Offset=0x7a4 Size=0x4
    struct _EX_PUSH_LOCK EnableOptionalXStateFeaturesLock;// Offset=0x7a8 Size=0x8
    unsigned long * PathRedirectionHashes;// Offset=0x7b0 Size=0x8
    struct _PS_SYSCALL_PROVIDER * SyscallProvider;// Offset=0x7b8 Size=0x8
    struct _LIST_ENTRY SyscallProviderProcessLinks;// Offset=0x7c0 Size=0x10
    struct _PSP_SYSCALL_PROVIDER_DISPATCH_CONTEXT SyscallProviderDispatchContext;// Offset=0x7d0 Size=0x8
    union // Size=0x4 (Id=0)
    {
        unsigned long MitigationFlags3;// Offset=0x7d8 Size=0x4
        struct _unnamed_562 MitigationFlags3Values;// Offset=0x7d8 Size=0x4
    };
    union // Size=0x4 (Id=0)
    {
        unsigned long Flags4;// Offset=0x7dc Size=0x4
        struct // Size=0x4 (Id=0)
        {
            unsigned long ThreadWasActive:1;// Offset=0x7dc Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long MinimalTerminate:1;// Offset=0x7dc Size=0x4 BitOffset=0x1 BitSize=0x1
            unsigned long ImageExpansionDisable:1;// Offset=0x7dc Size=0x4 BitOffset=0x2 BitSize=0x1
            unsigned long SessionFirstProcess:1;// Offset=0x7dc Size=0x4 BitOffset=0x3 BitSize=0x1
        };
    };
    union // Size=0x4 (Id=0)
    {
        unsigned long SyscallUsage;// Offset=0x7e0 Size=0x4
        struct _unnamed_563 SyscallUsageValues;// Offset=0x7e0 Size=0x4
    };
    long SupervisorDeviceAsid;// Offset=0x7e4 Size=0x4
    void * SupervisorSvmData;// Offset=0x7e8 Size=0x8
    struct _PROCESS_NETWORK_COUNTERS * NetworkCounters;// Offset=0x7f0 Size=0x8
    union _PROCESS_EXECUTION Execution;// Offset=0x7f8 Size=0x4
    void * ThreadIndexTable;// Offset=0x800 Size=0x8
    struct _LIST_ENTRY FreezeWorkLinks;// Offset=0x808 Size=0x10
};
