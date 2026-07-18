struct _LIST_ENTRY// Size=0x10 (Id=36)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _DISPATCHER_HEADER// Size=0x18 (Id=329)
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

struct _KAB_UM_PROCESS_CONTEXT// Size=0x10 (Id=294)
{
    struct _KAB_UM_PROCESS_TREE * Trees;// Offset=0x0 Size=0x8
    unsigned long TreeCount;// Offset=0x8 Size=0x4
};

struct _SINGLE_LIST_ENTRY// Size=0x8 (Id=37)
{
    struct _SINGLE_LIST_ENTRY * Next;// Offset=0x0 Size=0x8
};

union _KEXECUTE_OPTIONS// Size=0x1 (Id=327)
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

struct _KGROUP_MASK// Size=0x10 (Id=283)
{
    unsigned long long Masks[2];// Offset=0x0 Size=0x10
};

union _KSTACK_COUNT// Size=0x4 (Id=406)
{
    long Value;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long State:3;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x3
        unsigned long StackCount:29;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1d
    };
};

struct _unnamed_94// Size=0x8 (Id=94)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long SecureProcess:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long TrustedApp:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
    };
};

union _unnamed_95// Size=0x8 (Id=95)
{
    unsigned long long SecureHandle;// Offset=0x0 Size=0x8
    struct _unnamed_94 Flags;// Offset=0x0 Size=0x8
};

struct _KPROCESS// Size=0x1c8 (Id=97)
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
    union _unnamed_95 SecureState;// Offset=0x170 Size=0x8
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
