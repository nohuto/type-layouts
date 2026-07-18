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

union _KWAIT_STATUS_REGISTER// Size=0x1 (Id=500)
{
    unsigned char Flags;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char State:3;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x3
        unsigned char Affinity:1;// Offset=0x0 Size=0x1 BitOffset=0x3 BitSize=0x1
        unsigned char Priority:1;// Offset=0x0 Size=0x1 BitOffset=0x4 BitSize=0x1
        unsigned char Apc:1;// Offset=0x0 Size=0x1 BitOffset=0x5 BitSize=0x1
        unsigned char UserApc:1;// Offset=0x0 Size=0x1 BitOffset=0x6 BitSize=0x1
        unsigned char Alert:1;// Offset=0x0 Size=0x1 BitOffset=0x7 BitSize=0x1
    };
};

struct _KAPC_STATE// Size=0x18 (Id=455)
{
    struct _LIST_ENTRY ApcListHead[2];// Offset=0x0 Size=0x10
    struct _KPROCESS * Process;// Offset=0x10 Size=0x4
    union // Size=0x1 (Id=0)
    {
        unsigned char InProgressFlags;// Offset=0x14 Size=0x1
        struct // Size=0x1 (Id=0)
        {
            unsigned char KernelApcInProgress:1;// Offset=0x14 Size=0x1 BitOffset=0x0 BitSize=0x1
            unsigned char SpecialApcInProgress:1;// Offset=0x14 Size=0x1 BitOffset=0x1 BitSize=0x1
        };
    };
    unsigned char KernelApcPending;// Offset=0x15 Size=0x1
    union // Size=0x1 (Id=0)
    {
        unsigned char UserApcPendingAll;// Offset=0x16 Size=0x1
        struct // Size=0x1 (Id=0)
        {
            unsigned char SpecialUserApcPending:1;// Offset=0x16 Size=0x1 BitOffset=0x0 BitSize=0x1
            unsigned char UserApcPending:1;// Offset=0x16 Size=0x1 BitOffset=0x1 BitSize=0x1
        };
    };
};

struct _SINGLE_LIST_ENTRY// Size=0x4 (Id=26)
{
    struct _SINGLE_LIST_ENTRY * Next;// Offset=0x0 Size=0x4
};

struct _anonymous_11// Size=0x8 (Id=11)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    unsigned long HighPart;// Offset=0x4 Size=0x4
};

union _ULARGE_INTEGER// Size=0x8 (Id=12)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    unsigned long HighPart;// Offset=0x4 Size=0x4
    struct _anonymous_11 u;// Offset=0x0 Size=0x8
    unsigned long long QuadPart;// Offset=0x0 Size=0x8
};

struct _KTIMER// Size=0x28 (Id=570)
{
    struct _DISPATCHER_HEADER Header;// Offset=0x0 Size=0x10
    union _ULARGE_INTEGER DueTime;// Offset=0x10 Size=0x8
    struct _LIST_ENTRY TimerListEntry;// Offset=0x18 Size=0x8
    struct _KDPC * Dpc;// Offset=0x20 Size=0x4
    unsigned long Period;// Offset=0x24 Size=0x4
};

struct _KWAIT_BLOCK// Size=0x18 (Id=479)
{
    struct _LIST_ENTRY WaitListEntry;// Offset=0x0 Size=0x8
    unsigned char WaitType;// Offset=0x8 Size=0x1
    unsigned char BlockState;// Offset=0x9 Size=0x1
    unsigned short WaitKey;// Offset=0xa Size=0x2
    union // Size=0x4 (Id=0)
    {
        struct _KTHREAD * Thread;// Offset=0xc Size=0x4
        struct _KQUEUE * NotificationQueue;// Offset=0xc Size=0x4
    };
    void * Object;// Offset=0x10 Size=0x4
    void * SparePtr;// Offset=0x14 Size=0x4
};

struct _GROUP_AFFINITY// Size=0xc (Id=299)
{
    unsigned long Mask;// Offset=0x0 Size=0x4
    unsigned short Group;// Offset=0x4 Size=0x2
    unsigned short Reserved[3];// Offset=0x6 Size=0x6
};

struct _KAPC// Size=0x30 (Id=43)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char SpareByte0;// Offset=0x1 Size=0x1
    unsigned char Size;// Offset=0x2 Size=0x1
    unsigned char SpareByte1;// Offset=0x3 Size=0x1
    unsigned long SpareLong0;// Offset=0x4 Size=0x4
    struct _KTHREAD * Thread;// Offset=0x8 Size=0x4
    struct _LIST_ENTRY ApcListEntry;// Offset=0xc Size=0x8
    union // Size=0x20 (Id=0)
    {
        void  ( * KernelRoutine)(struct _KAPC * ,void  ( ** )(void * ,void * ,void * ),void ** ,void ** ,void ** );// Offset=0x14 Size=0x4
        void  ( * RundownRoutine)(struct _KAPC * );// Offset=0x18 Size=0x4
        void  ( * NormalRoutine)(void * ,void * ,void * );// Offset=0x1c Size=0x4
        void * Reserved[3];// Offset=0x14 Size=0xc
    };
    void * NormalContext;// Offset=0x20 Size=0x4
    void * SystemArgument1;// Offset=0x24 Size=0x4
    void * SystemArgument2;// Offset=0x28 Size=0x4
    char ApcStateIndex;// Offset=0x2c Size=0x1
    char ApcMode;// Offset=0x2d Size=0x1
    unsigned char Inserted;// Offset=0x2e Size=0x1
};

struct _KEVENT// Size=0x10 (Id=69)
{
    struct _DISPATCHER_HEADER Header;// Offset=0x0 Size=0x10
};

struct _KTHREAD// Size=0x280 (Id=61)
{
    struct _DISPATCHER_HEADER Header;// Offset=0x0 Size=0x10
    void * SListFaultAddress;// Offset=0x10 Size=0x4
    unsigned long long QuantumTarget;// Offset=0x18 Size=0x8
    void * InitialStack;// Offset=0x20 Size=0x4
    void * StackLimit;// Offset=0x24 Size=0x4
    void * StackBase;// Offset=0x28 Size=0x4
    unsigned long ThreadLock;// Offset=0x2c Size=0x4
    unsigned long long CycleTime;// Offset=0x30 Size=0x8
    unsigned long HighCycleTime;// Offset=0x38 Size=0x4
    void * ServiceTable;// Offset=0x3c Size=0x4
    unsigned long CurrentRunTime;// Offset=0x40 Size=0x4
    unsigned long ExpectedRunTime;// Offset=0x44 Size=0x4
    void * KernelStack;// Offset=0x48 Size=0x4
    struct _XSAVE_FORMAT * StateSaveArea;// Offset=0x4c Size=0x4
    struct _KSCHEDULING_GROUP * SchedulingGroup;// Offset=0x50 Size=0x4
    union _KWAIT_STATUS_REGISTER WaitRegister;// Offset=0x54 Size=0x1
    unsigned char Running;// Offset=0x55 Size=0x1
    unsigned char Alerted[2];// Offset=0x56 Size=0x2
    union // Size=0x4 (Id=0)
    {
        struct // Size=0x4 (Id=0)
        {
            unsigned long AutoBoostActive:1;// Offset=0x58 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long ReadyTransition:1;// Offset=0x58 Size=0x4 BitOffset=0x1 BitSize=0x1
            unsigned long WaitNext:1;// Offset=0x58 Size=0x4 BitOffset=0x2 BitSize=0x1
            unsigned long SystemAffinityActive:1;// Offset=0x58 Size=0x4 BitOffset=0x3 BitSize=0x1
            unsigned long Alertable:1;// Offset=0x58 Size=0x4 BitOffset=0x4 BitSize=0x1
            unsigned long UserStackWalkActive:1;// Offset=0x58 Size=0x4 BitOffset=0x5 BitSize=0x1
            unsigned long ApcInterruptRequest:1;// Offset=0x58 Size=0x4 BitOffset=0x6 BitSize=0x1
            unsigned long QuantumEndMigrate:1;// Offset=0x58 Size=0x4 BitOffset=0x7 BitSize=0x1
            unsigned long UmsDirectedSwitchEnable:1;// Offset=0x58 Size=0x4 BitOffset=0x8 BitSize=0x1
            unsigned long TimerActive:1;// Offset=0x58 Size=0x4 BitOffset=0x9 BitSize=0x1
            unsigned long SystemThread:1;// Offset=0x58 Size=0x4 BitOffset=0xa BitSize=0x1
            unsigned long ProcessDetachActive:1;// Offset=0x58 Size=0x4 BitOffset=0xb BitSize=0x1
            unsigned long CalloutActive:1;// Offset=0x58 Size=0x4 BitOffset=0xc BitSize=0x1
            unsigned long ScbReadyQueue:1;// Offset=0x58 Size=0x4 BitOffset=0xd BitSize=0x1
            unsigned long ApcQueueable:1;// Offset=0x58 Size=0x4 BitOffset=0xe BitSize=0x1
            unsigned long ReservedStackInUse:1;// Offset=0x58 Size=0x4 BitOffset=0xf BitSize=0x1
            unsigned long UmsPerformingSyscall:1;// Offset=0x58 Size=0x4 BitOffset=0x10 BitSize=0x1
            unsigned long TimerSuspended:1;// Offset=0x58 Size=0x4 BitOffset=0x11 BitSize=0x1
            unsigned long SuspendedWaitMode:1;// Offset=0x58 Size=0x4 BitOffset=0x12 BitSize=0x1
            unsigned long SuspendSchedulerApcWait:1;// Offset=0x58 Size=0x4 BitOffset=0x13 BitSize=0x1
            unsigned long CetUserShadowStack:1;// Offset=0x58 Size=0x4 BitOffset=0x14 BitSize=0x1
            unsigned long BypassProcessFreeze:1;// Offset=0x58 Size=0x4 BitOffset=0x15 BitSize=0x1
            unsigned long Reserved:10;// Offset=0x58 Size=0x4 BitOffset=0x16 BitSize=0xa
        };
        long MiscFlags;// Offset=0x58 Size=0x4
    };
    union // Size=0x4 (Id=0)
    {
        struct // Size=0x4 (Id=0)
        {
            unsigned long ThreadFlagsSpare:2;// Offset=0x5c Size=0x4 BitOffset=0x0 BitSize=0x2
            unsigned long AutoAlignment:1;// Offset=0x5c Size=0x4 BitOffset=0x2 BitSize=0x1
            unsigned long DisableBoost:1;// Offset=0x5c Size=0x4 BitOffset=0x3 BitSize=0x1
            unsigned long AlertedByThreadId:1;// Offset=0x5c Size=0x4 BitOffset=0x4 BitSize=0x1
            unsigned long QuantumDonation:1;// Offset=0x5c Size=0x4 BitOffset=0x5 BitSize=0x1
            unsigned long EnableStackSwap:1;// Offset=0x5c Size=0x4 BitOffset=0x6 BitSize=0x1
            unsigned long GuiThread:1;// Offset=0x5c Size=0x4 BitOffset=0x7 BitSize=0x1
            unsigned long DisableQuantum:1;// Offset=0x5c Size=0x4 BitOffset=0x8 BitSize=0x1
            unsigned long ChargeOnlySchedulingGroup:1;// Offset=0x5c Size=0x4 BitOffset=0x9 BitSize=0x1
            unsigned long DeferPreemption:1;// Offset=0x5c Size=0x4 BitOffset=0xa BitSize=0x1
            unsigned long QueueDeferPreemption:1;// Offset=0x5c Size=0x4 BitOffset=0xb BitSize=0x1
            unsigned long ForceDeferSchedule:1;// Offset=0x5c Size=0x4 BitOffset=0xc BitSize=0x1
            unsigned long SharedReadyQueueAffinity:1;// Offset=0x5c Size=0x4 BitOffset=0xd BitSize=0x1
            unsigned long FreezeCount:1;// Offset=0x5c Size=0x4 BitOffset=0xe BitSize=0x1
            unsigned long TerminationApcRequest:1;// Offset=0x5c Size=0x4 BitOffset=0xf BitSize=0x1
            unsigned long AutoBoostEntriesExhausted:1;// Offset=0x5c Size=0x4 BitOffset=0x10 BitSize=0x1
            unsigned long KernelStackResident:1;// Offset=0x5c Size=0x4 BitOffset=0x11 BitSize=0x1
            unsigned long TerminateRequestReason:2;// Offset=0x5c Size=0x4 BitOffset=0x12 BitSize=0x2
            unsigned long ProcessStackCountDecremented:1;// Offset=0x5c Size=0x4 BitOffset=0x14 BitSize=0x1
            unsigned long RestrictedGuiThread:1;// Offset=0x5c Size=0x4 BitOffset=0x15 BitSize=0x1
            unsigned long VpBackingThread:1;// Offset=0x5c Size=0x4 BitOffset=0x16 BitSize=0x1
            unsigned long ThreadFlagsSpare2:1;// Offset=0x5c Size=0x4 BitOffset=0x17 BitSize=0x1
            unsigned long EtwStackTraceApcInserted:8;// Offset=0x5c Size=0x4 BitOffset=0x18 BitSize=0x8
        };
        long ThreadFlags;// Offset=0x5c Size=0x4
    };
    unsigned char Tag;// Offset=0x60 Size=0x1
    unsigned char SystemHeteroCpuPolicy;// Offset=0x61 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char UserHeteroCpuPolicy:7;// Offset=0x62 Size=0x1 BitOffset=0x0 BitSize=0x7
        unsigned char ExplicitSystemHeteroCpuPolicy:1;// Offset=0x62 Size=0x1 BitOffset=0x7 BitSize=0x1
    };
    unsigned char Spare0;// Offset=0x63 Size=0x1
    unsigned long SystemCallNumber;// Offset=0x64 Size=0x4
    void * FirstArgument;// Offset=0x68 Size=0x4
    struct _KTRAP_FRAME * TrapFrame;// Offset=0x6c Size=0x4
    union // Size=0x18 (Id=0)
    {
        struct _KAPC_STATE ApcState;// Offset=0x70 Size=0x18
        unsigned char ApcStateFill[23];// Offset=0x70 Size=0x17
    };
    char Priority;// Offset=0x87 Size=0x1
    unsigned long UserIdealProcessor;// Offset=0x88 Size=0x4
    unsigned long ContextSwitches;// Offset=0x8c Size=0x4
    unsigned char State;// Offset=0x90 Size=0x1
    char Spare12;// Offset=0x91 Size=0x1
    unsigned char WaitIrql;// Offset=0x92 Size=0x1
    char WaitMode;// Offset=0x93 Size=0x1
    long WaitStatus;// Offset=0x94 Size=0x4
    struct _KWAIT_BLOCK * WaitBlockList;// Offset=0x98 Size=0x4
    union // Size=0x8 (Id=0)
    {
        struct _LIST_ENTRY WaitListEntry;// Offset=0x9c Size=0x8
        struct _SINGLE_LIST_ENTRY SwapListEntry;// Offset=0x9c Size=0x4
    };
    struct _DISPATCHER_HEADER * Queue;// Offset=0xa4 Size=0x4
    void * Teb;// Offset=0xa8 Size=0x4
    unsigned long long RelativeTimerBias;// Offset=0xb0 Size=0x8
    struct _KTIMER Timer;// Offset=0xb8 Size=0x28
    union // Size=0x128 (Id=0)
    {
        struct _KWAIT_BLOCK WaitBlock[4];// Offset=0xe0 Size=0x60
        unsigned char WaitBlockFill8[20];// Offset=0xe0 Size=0x14
        struct _KTHREAD_COUNTERS * ThreadCounters;// Offset=0xf4 Size=0x4
        unsigned char WaitBlockFill9[44];// Offset=0xe0 Size=0x2c
        struct _XSTATE_SAVE * XStateSave;// Offset=0x10c Size=0x4
        unsigned char WaitBlockFill10[68];// Offset=0xe0 Size=0x44
        void * Win32Thread;// Offset=0x124 Size=0x4
        unsigned char WaitBlockFill11[88];// Offset=0xe0 Size=0x58
    };
    unsigned long WaitTime;// Offset=0x138 Size=0x4
    union // Size=0x140 (Id=0)
    {
        short KernelApcDisable;// Offset=0x13c Size=0x2
        short SpecialApcDisable;// Offset=0x13e Size=0x2
        unsigned long CombinedApcDisable;// Offset=0x13c Size=0x4
    };
    struct _LIST_ENTRY QueueListEntry;// Offset=0x140 Size=0x8
    union // Size=0x4 (Id=0)
    {
        unsigned long NextProcessor;// Offset=0x148 Size=0x4
        struct // Size=0x4 (Id=0)
        {
            unsigned long NextProcessorNumber:31;// Offset=0x148 Size=0x4 BitOffset=0x0 BitSize=0x1f
            unsigned long SharedReadyQueue:1;// Offset=0x148 Size=0x4 BitOffset=0x1f BitSize=0x1
        };
    };
    long QueuePriority;// Offset=0x14c Size=0x4
    struct _KPROCESS * Process;// Offset=0x150 Size=0x4
    union // Size=0xc (Id=0)
    {
        struct _GROUP_AFFINITY UserAffinity;// Offset=0x154 Size=0xc
        unsigned char UserAffinityFill[6];// Offset=0x154 Size=0x6
    };
    char PreviousMode;// Offset=0x15a Size=0x1
    char BasePriority;// Offset=0x15b Size=0x1
    union // Size=0x1 (Id=0)
    {
        char PriorityDecrement;// Offset=0x15c Size=0x1
        struct // Size=0x1 (Id=0)
        {
            unsigned char ForegroundBoost:4;// Offset=0x15c Size=0x1 BitOffset=0x0 BitSize=0x4
            unsigned char UnusualBoost:4;// Offset=0x15c Size=0x1 BitOffset=0x4 BitSize=0x4
        };
    };
    unsigned char Preempted;// Offset=0x15d Size=0x1
    unsigned char AdjustReason;// Offset=0x15e Size=0x1
    char AdjustIncrement;// Offset=0x15f Size=0x1
    unsigned long AffinityVersion;// Offset=0x160 Size=0x4
    union // Size=0xc (Id=0)
    {
        struct _GROUP_AFFINITY Affinity;// Offset=0x164 Size=0xc
        unsigned char AffinityFill[6];// Offset=0x164 Size=0x6
    };
    unsigned char ApcStateIndex;// Offset=0x16a Size=0x1
    unsigned char WaitBlockCount;// Offset=0x16b Size=0x1
    unsigned long IdealProcessor;// Offset=0x16c Size=0x4
    unsigned long ReadyTime;// Offset=0x170 Size=0x4
    union // Size=0x18 (Id=0)
    {
        struct _KAPC_STATE SavedApcState;// Offset=0x174 Size=0x18
        unsigned char SavedApcStateFill[23];// Offset=0x174 Size=0x17
    };
    unsigned char WaitReason;// Offset=0x18b Size=0x1
    char SuspendCount;// Offset=0x18c Size=0x1
    char Saturation;// Offset=0x18d Size=0x1
    unsigned short SListFaultCount;// Offset=0x18e Size=0x2
    union // Size=0x1bc (Id=0)
    {
        struct _KAPC SchedulerApc;// Offset=0x190 Size=0x30
        unsigned char SchedulerApcFill0[1];// Offset=0x190 Size=0x1
        unsigned char ResourceIndex;// Offset=0x191 Size=0x1
        unsigned char SchedulerApcFill1[3];// Offset=0x190 Size=0x3
        unsigned char QuantumReset;// Offset=0x193 Size=0x1
        unsigned char SchedulerApcFill2[4];// Offset=0x190 Size=0x4
        unsigned long KernelTime;// Offset=0x194 Size=0x4
        unsigned char SchedulerApcFill3[36];// Offset=0x190 Size=0x24
        struct _KPRCB * WaitPrcb;// Offset=0x1b4 Size=0x4
        unsigned char SchedulerApcFill4[40];// Offset=0x190 Size=0x28
        void * LegoData;// Offset=0x1b8 Size=0x4
        unsigned char SchedulerApcFill5[47];// Offset=0x190 Size=0x2f
    };
    unsigned char CallbackNestingLevel;// Offset=0x1bf Size=0x1
    unsigned long UserTime;// Offset=0x1c0 Size=0x4
    struct _KEVENT SuspendEvent;// Offset=0x1c4 Size=0x10
    struct _LIST_ENTRY ThreadListEntry;// Offset=0x1d4 Size=0x8
    struct _LIST_ENTRY MutantListHead;// Offset=0x1dc Size=0x8
    unsigned char AbEntrySummary;// Offset=0x1e4 Size=0x1
    unsigned char AbWaitEntryCount;// Offset=0x1e5 Size=0x1
    unsigned char AbAllocationRegionCount;// Offset=0x1e6 Size=0x1
    char SystemPriority;// Offset=0x1e7 Size=0x1
    struct _KLOCK_ENTRY * LockEntries;// Offset=0x1e8 Size=0x4
    struct _SINGLE_LIST_ENTRY PropagateBoostsEntry;// Offset=0x1ec Size=0x4
    struct _SINGLE_LIST_ENTRY IoSelfBoostsEntry;// Offset=0x1f0 Size=0x4
    unsigned char PriorityFloorCounts[16];// Offset=0x1f4 Size=0x10
    unsigned char PriorityFloorCountsReserved[16];// Offset=0x204 Size=0x10
    unsigned long PriorityFloorSummary;// Offset=0x214 Size=0x4
    long AbCompletedIoBoostCount;// Offset=0x218 Size=0x4
    long AbCompletedIoQoSBoostCount;// Offset=0x21c Size=0x4
    short KeReferenceCount;// Offset=0x220 Size=0x2
    unsigned char AbOrphanedEntrySummary;// Offset=0x222 Size=0x1
    unsigned char AbOwnedEntryCount;// Offset=0x223 Size=0x1
    unsigned long ForegroundLossTime;// Offset=0x224 Size=0x4
    union // Size=0x8 (Id=0)
    {
        struct _LIST_ENTRY GlobalForegroundListEntry;// Offset=0x228 Size=0x8
        struct _SINGLE_LIST_ENTRY ForegroundDpcStackListEntry;// Offset=0x228 Size=0x4
    };
    unsigned long InGlobalForegroundList;// Offset=0x22c Size=0x4
    struct _KSCB * QueuedScb;// Offset=0x230 Size=0x4
    unsigned long long NpxState;// Offset=0x238 Size=0x8
    unsigned long ThreadTimerDelay;// Offset=0x240 Size=0x4
    union // Size=0x4 (Id=0)
    {
        long ThreadFlags3;// Offset=0x244 Size=0x4
        struct // Size=0x4 (Id=0)
        {
            unsigned long BamQosLevel:8;// Offset=0x244 Size=0x4 BitOffset=0x0 BitSize=0x8
            unsigned long PpmPolicy:2;// Offset=0x244 Size=0x4 BitOffset=0x8 BitSize=0x2
            unsigned long ThreadFlags3Reserved2:22;// Offset=0x244 Size=0x4 BitOffset=0xa BitSize=0x16
        };
    };
    void * AbWaitObject;// Offset=0x248 Size=0x4
    unsigned long ReservedPreviousReadyTimeValue;// Offset=0x24c Size=0x4
    unsigned long long KernelWaitTime;// Offset=0x250 Size=0x8
    unsigned long long UserWaitTime;// Offset=0x258 Size=0x8
    unsigned long Spare29[3];// Offset=0x260 Size=0xc
    unsigned long EndPadding[5];// Offset=0x26c Size=0x14
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

struct _CLIENT_ID// Size=0x8 (Id=304)
{
    void * UniqueProcess;// Offset=0x0 Size=0x4
    void * UniqueThread;// Offset=0x4 Size=0x4
};

struct _KSEMAPHORE// Size=0x14 (Id=446)
{
    struct _DISPATCHER_HEADER Header;// Offset=0x0 Size=0x10
    long Limit;// Offset=0x10 Size=0x4
};

union _PS_CLIENT_SECURITY_CONTEXT// Size=0x4 (Id=497)
{
    unsigned long ImpersonationData;// Offset=0x0 Size=0x4
    void * ImpersonationToken;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long ImpersonationLevel:2;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x2
        unsigned long EffectiveOnly:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
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

struct _PS_PROPERTY_SET// Size=0xc (Id=339)
{
    struct _LIST_ENTRY ListHead;// Offset=0x0 Size=0x8
    unsigned long Lock;// Offset=0x8 Size=0x4
};

struct _RTL_BALANCED_NODE// Size=0xc (Id=38)
{
    union // Size=0x8 (Id=0)
    {
        struct _RTL_BALANCED_NODE * Children[2];// Offset=0x0 Size=0x8
        struct _RTL_BALANCED_NODE * Left;// Offset=0x0 Size=0x4
        struct _RTL_BALANCED_NODE * Right;// Offset=0x4 Size=0x4
    };
    union // Size=0x1 (Id=0)
    {
        struct // Size=0x1 (Id=0)
        {
            union // Size=0x1 (Id=0)
            {
                unsigned char Red:1;// Offset=0x8 Size=0x1 BitOffset=0x0 BitSize=0x1
                unsigned char Balance:2;// Offset=0x8 Size=0x1 BitOffset=0x0 BitSize=0x2
            };
        };
        unsigned long ParentValue;// Offset=0x8 Size=0x4
    };
};

struct _KLOCK_ENTRY_LOCK_STATE// Size=0x8 (Id=516)
{
    union // Size=0x4 (Id=0)
    {
        struct // Size=0x4 (Id=0)
        {
            unsigned long CrossThreadReleasable:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long Busy:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
            unsigned long Reserved:29;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1d
            unsigned long InTree:1;// Offset=0x0 Size=0x4 BitOffset=0x1f BitSize=0x1
        };
        void * LockState;// Offset=0x0 Size=0x4
    };
    union // Size=0x4 (Id=0)
    {
        void * SessionState;// Offset=0x4 Size=0x4
        unsigned long SessionId;// Offset=0x4 Size=0x4
    };
};

struct _RTL_RB_TREE// Size=0x8 (Id=37)
{
    struct _RTL_BALANCED_NODE * Root;// Offset=0x0 Size=0x4
    union // Size=0x1 (Id=0)
    {
        struct // Size=0x1 (Id=0)
        {
            unsigned char Encoded:1;// Offset=0x4 Size=0x1 BitOffset=0x0 BitSize=0x1
        };
        struct _RTL_BALANCED_NODE * Min;// Offset=0x4 Size=0x4
    };
};

union _KLOCK_ENTRY_BOOST_BITMAP// Size=0x4 (Id=307)
{
    unsigned long AllFields;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        union // Size=0x4 (Id=0)
        {
            unsigned long AllBoosts:17;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x11
            unsigned long Reserved:15;// Offset=0x0 Size=0x4 BitOffset=0x11 BitSize=0xf
            unsigned short CpuBoostsBitmap:15;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0xf
            unsigned short IoBoost:1;// Offset=0x0 Size=0x2 BitOffset=0xf BitSize=0x1
            unsigned short IoQoSBoost:1;// Offset=0x2 Size=0x2 BitOffset=0x0 BitSize=0x1
        };
        unsigned short IoNormalPriorityWaiterCount:8;// Offset=0x2 Size=0x2 BitOffset=0x1 BitSize=0x8
        unsigned short IoQoSWaiterCount:7;// Offset=0x2 Size=0x2 BitOffset=0x9 BitSize=0x7
    };
};

struct _KLOCK_ENTRY// Size=0x30 (Id=295)
{
    union // Size=0xc (Id=0)
    {
        struct _RTL_BALANCED_NODE TreeNode;// Offset=0x0 Size=0xc
        struct _SINGLE_LIST_ENTRY FreeListEntry;// Offset=0x0 Size=0x4
        unsigned long EntryFlags;// Offset=0xc Size=0x4
    };
    unsigned char EntryOffset;// Offset=0xc Size=0x1
    union // Size=0x1 (Id=0)
    {
        unsigned char ThreadLocalFlags;// Offset=0xd Size=0x1
        struct // Size=0x1 (Id=0)
        {
            unsigned char WaitingBit:1;// Offset=0xd Size=0x1 BitOffset=0x0 BitSize=0x1
            unsigned char Spare0:7;// Offset=0xd Size=0x1 BitOffset=0x1 BitSize=0x7
        };
    };
    union // Size=0x1 (Id=0)
    {
        unsigned char AcquiredByte;// Offset=0xe Size=0x1
        struct // Size=0x1 (Id=0)
        {
            unsigned char AcquiredBit:1;// Offset=0xe Size=0x1 BitOffset=0x0 BitSize=0x1
        };
    };
    union // Size=0x1 (Id=0)
    {
        unsigned char CrossThreadFlags;// Offset=0xf Size=0x1
        struct // Size=0x1 (Id=0)
        {
            unsigned char HeadNodeBit:1;// Offset=0xf Size=0x1 BitOffset=0x0 BitSize=0x1
            unsigned char IoPriorityBit:1;// Offset=0xf Size=0x1 BitOffset=0x1 BitSize=0x1
            unsigned char IoQoSWaiter:1;// Offset=0xf Size=0x1 BitOffset=0x2 BitSize=0x1
            unsigned char Spare1:5;// Offset=0xf Size=0x1 BitOffset=0x3 BitSize=0x5
            unsigned long StaticState:8;// Offset=0xc Size=0x4 BitOffset=0x0 BitSize=0x8
            unsigned long AllFlags:24;// Offset=0xc Size=0x4 BitOffset=0x8 BitSize=0x18
        };
    };
    union // Size=0x14 (Id=0)
    {
        struct _KLOCK_ENTRY_LOCK_STATE LockState;// Offset=0x10 Size=0x8
        void * LockUnsafe;// Offset=0x10 Size=0x4
        unsigned char CrossThreadReleasableAndBusyByte;// Offset=0x10 Size=0x1
        unsigned char Reserved[2];// Offset=0x11 Size=0x2
        unsigned char InTreeByte;// Offset=0x13 Size=0x1
    };
    union // Size=0x4 (Id=0)
    {
        void * SessionState;// Offset=0x14 Size=0x4
        unsigned long SessionId;// Offset=0x14 Size=0x4
    };
    union // Size=0x28 (Id=0)
    {
        struct _RTL_RB_TREE OwnerTree;// Offset=0x18 Size=0x8
        struct _RTL_RB_TREE WaiterTree;// Offset=0x20 Size=0x8
        char CpuPriorityKey;// Offset=0x18 Size=0x1
        unsigned long EntryLock;// Offset=0x28 Size=0x4
    };
    union _KLOCK_ENTRY_BOOST_BITMAP BoostBitmap;// Offset=0x2c Size=0x4
};

struct _ETHREAD// Size=0x4e0 (Id=100)
{
    struct _KTHREAD Tcb;// Offset=0x0 Size=0x280
    union _LARGE_INTEGER CreateTime;// Offset=0x280 Size=0x8
    union // Size=0x8 (Id=0)
    {
        union _LARGE_INTEGER ExitTime;// Offset=0x288 Size=0x8
        struct _LIST_ENTRY KeyedWaitChain;// Offset=0x288 Size=0x8
    };
    void * ChargeOnlySession;// Offset=0x290 Size=0x4
    union // Size=0x8 (Id=0)
    {
        struct _LIST_ENTRY PostBlockList;// Offset=0x294 Size=0x8
        void * ForwardLinkShadow;// Offset=0x294 Size=0x4
    };
    void * StartAddress;// Offset=0x298 Size=0x4
    union // Size=0x2a0 (Id=0)
    {
        struct _TERMINATION_PORT * TerminationPort;// Offset=0x29c Size=0x4
        struct _ETHREAD * ReaperLink;// Offset=0x29c Size=0x4
        void * KeyedWaitValue;// Offset=0x29c Size=0x4
    };
    unsigned long ActiveTimerListLock;// Offset=0x2a0 Size=0x4
    struct _LIST_ENTRY ActiveTimerListHead;// Offset=0x2a4 Size=0x8
    struct _CLIENT_ID Cid;// Offset=0x2ac Size=0x8
    union // Size=0x14 (Id=0)
    {
        struct _KSEMAPHORE KeyedWaitSemaphore;// Offset=0x2b4 Size=0x14
        struct _KSEMAPHORE AlpcWaitSemaphore;// Offset=0x2b4 Size=0x14
    };
    union _PS_CLIENT_SECURITY_CONTEXT ClientSecurity;// Offset=0x2c8 Size=0x4
    struct _LIST_ENTRY IrpList;// Offset=0x2cc Size=0x8
    unsigned long TopLevelIrp;// Offset=0x2d4 Size=0x4
    struct _DEVICE_OBJECT * DeviceToVerify;// Offset=0x2d8 Size=0x4
    void * Win32StartAddress;// Offset=0x2dc Size=0x4
    void * LegacyPowerObject;// Offset=0x2e0 Size=0x4
    struct _LIST_ENTRY ThreadListEntry;// Offset=0x2e4 Size=0x8
    struct _EX_RUNDOWN_REF RundownProtect;// Offset=0x2ec Size=0x4
    struct _EX_PUSH_LOCK ThreadLock;// Offset=0x2f0 Size=0x4
    unsigned long ReadClusterSize;// Offset=0x2f4 Size=0x4
    long MmLockOrdering;// Offset=0x2f8 Size=0x4
    union // Size=0x4 (Id=0)
    {
        unsigned long CrossThreadFlags;// Offset=0x2fc Size=0x4
        struct // Size=0x4 (Id=0)
        {
            unsigned long Terminated:1;// Offset=0x2fc Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long ThreadInserted:1;// Offset=0x2fc Size=0x4 BitOffset=0x1 BitSize=0x1
            unsigned long HideFromDebugger:1;// Offset=0x2fc Size=0x4 BitOffset=0x2 BitSize=0x1
            unsigned long ActiveImpersonationInfo:1;// Offset=0x2fc Size=0x4 BitOffset=0x3 BitSize=0x1
            unsigned long HardErrorsAreDisabled:1;// Offset=0x2fc Size=0x4 BitOffset=0x4 BitSize=0x1
            unsigned long BreakOnTermination:1;// Offset=0x2fc Size=0x4 BitOffset=0x5 BitSize=0x1
            unsigned long SkipCreationMsg:1;// Offset=0x2fc Size=0x4 BitOffset=0x6 BitSize=0x1
            unsigned long SkipTerminationMsg:1;// Offset=0x2fc Size=0x4 BitOffset=0x7 BitSize=0x1
            unsigned long CopyTokenOnOpen:1;// Offset=0x2fc Size=0x4 BitOffset=0x8 BitSize=0x1
            unsigned long ThreadIoPriority:3;// Offset=0x2fc Size=0x4 BitOffset=0x9 BitSize=0x3
            unsigned long ThreadPagePriority:3;// Offset=0x2fc Size=0x4 BitOffset=0xc BitSize=0x3
            unsigned long RundownFail:1;// Offset=0x2fc Size=0x4 BitOffset=0xf BitSize=0x1
            unsigned long UmsForceQueueTermination:1;// Offset=0x2fc Size=0x4 BitOffset=0x10 BitSize=0x1
            unsigned long IndirectCpuSets:1;// Offset=0x2fc Size=0x4 BitOffset=0x11 BitSize=0x1
            unsigned long DisableDynamicCodeOptOut:1;// Offset=0x2fc Size=0x4 BitOffset=0x12 BitSize=0x1
            unsigned long ExplicitCaseSensitivity:1;// Offset=0x2fc Size=0x4 BitOffset=0x13 BitSize=0x1
            unsigned long PicoNotifyExit:1;// Offset=0x2fc Size=0x4 BitOffset=0x14 BitSize=0x1
            unsigned long DbgWerUserReportActive:1;// Offset=0x2fc Size=0x4 BitOffset=0x15 BitSize=0x1
            unsigned long ForcedSelfTrimActive:1;// Offset=0x2fc Size=0x4 BitOffset=0x16 BitSize=0x1
            unsigned long SamplingCoverage:1;// Offset=0x2fc Size=0x4 BitOffset=0x17 BitSize=0x1
            unsigned long ReservedCrossThreadFlags:8;// Offset=0x2fc Size=0x4 BitOffset=0x18 BitSize=0x8
        };
    };
    union // Size=0x4 (Id=0)
    {
        unsigned long SameThreadPassiveFlags;// Offset=0x300 Size=0x4
        struct // Size=0x4 (Id=0)
        {
            unsigned long ActiveExWorker:1;// Offset=0x300 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long MemoryMaker:1;// Offset=0x300 Size=0x4 BitOffset=0x1 BitSize=0x1
            unsigned long StoreLockThread:2;// Offset=0x300 Size=0x4 BitOffset=0x2 BitSize=0x2
            unsigned long ClonedThread:1;// Offset=0x300 Size=0x4 BitOffset=0x4 BitSize=0x1
            unsigned long KeyedEventInUse:1;// Offset=0x300 Size=0x4 BitOffset=0x5 BitSize=0x1
            unsigned long SelfTerminate:1;// Offset=0x300 Size=0x4 BitOffset=0x6 BitSize=0x1
            unsigned long RespectIoPriority:1;// Offset=0x300 Size=0x4 BitOffset=0x7 BitSize=0x1
            unsigned long ActivePageLists:1;// Offset=0x300 Size=0x4 BitOffset=0x8 BitSize=0x1
            unsigned long SecureContext:1;// Offset=0x300 Size=0x4 BitOffset=0x9 BitSize=0x1
            unsigned long ZeroPageThread:1;// Offset=0x300 Size=0x4 BitOffset=0xa BitSize=0x1
            unsigned long WorkloadClass:1;// Offset=0x300 Size=0x4 BitOffset=0xb BitSize=0x1
            unsigned long ReservedSameThreadPassiveFlags:20;// Offset=0x300 Size=0x4 BitOffset=0xc BitSize=0x14
        };
    };
    union // Size=0x4 (Id=0)
    {
        unsigned long SameThreadApcFlags;// Offset=0x304 Size=0x4
        struct // Size=0x2 (Id=0)
        {
            unsigned char OwnsProcessAddressSpaceExclusive:1;// Offset=0x304 Size=0x1 BitOffset=0x0 BitSize=0x1
            unsigned char OwnsProcessAddressSpaceShared:1;// Offset=0x304 Size=0x1 BitOffset=0x1 BitSize=0x1
            unsigned char HardFaultBehavior:1;// Offset=0x304 Size=0x1 BitOffset=0x2 BitSize=0x1
            unsigned char StartAddressInvalid:1;// Offset=0x304 Size=0x1 BitOffset=0x3 BitSize=0x1
            unsigned char EtwCalloutActive:1;// Offset=0x304 Size=0x1 BitOffset=0x4 BitSize=0x1
            unsigned char SuppressSymbolLoad:1;// Offset=0x304 Size=0x1 BitOffset=0x5 BitSize=0x1
            unsigned char Prefetching:1;// Offset=0x304 Size=0x1 BitOffset=0x6 BitSize=0x1
            unsigned char OwnsVadExclusive:1;// Offset=0x304 Size=0x1 BitOffset=0x7 BitSize=0x1
            unsigned char SystemPagePriorityActive:1;// Offset=0x305 Size=0x1 BitOffset=0x0 BitSize=0x1
            unsigned char SystemPagePriority:3;// Offset=0x305 Size=0x1 BitOffset=0x1 BitSize=0x3
            unsigned char AllowUserWritesToExecutableMemory:1;// Offset=0x305 Size=0x1 BitOffset=0x4 BitSize=0x1
            unsigned char AllowKernelWritesToExecutableMemory:1;// Offset=0x305 Size=0x1 BitOffset=0x5 BitSize=0x1
            unsigned char OwnsVadShared:1;// Offset=0x305 Size=0x1 BitOffset=0x6 BitSize=0x1
        };
    };
    unsigned char CacheManagerActive;// Offset=0x308 Size=0x1
    unsigned char DisablePageFaultClustering;// Offset=0x309 Size=0x1
    unsigned char ActiveFaultCount;// Offset=0x30a Size=0x1
    unsigned char LockOrderState;// Offset=0x30b Size=0x1
    unsigned long PerformanceCountLowReserved;// Offset=0x30c Size=0x4
    long PerformanceCountHighReserved;// Offset=0x310 Size=0x4
    unsigned long AlpcMessageId;// Offset=0x314 Size=0x4
    union // Size=0x4 (Id=0)
    {
        void * AlpcMessage;// Offset=0x318 Size=0x4
        unsigned long AlpcReceiveAttributeSet;// Offset=0x318 Size=0x4
    };
    struct _LIST_ENTRY AlpcWaitListEntry;// Offset=0x31c Size=0x8
    long ExitStatus;// Offset=0x324 Size=0x4
    unsigned long CacheManagerCount;// Offset=0x328 Size=0x4
    unsigned long IoBoostCount;// Offset=0x32c Size=0x4
    unsigned long IoQoSBoostCount;// Offset=0x330 Size=0x4
    unsigned long IoQoSThrottleCount;// Offset=0x334 Size=0x4
    unsigned long KernelStackReference;// Offset=0x338 Size=0x4
    struct _LIST_ENTRY BoostList;// Offset=0x33c Size=0x8
    struct _LIST_ENTRY DeboostList;// Offset=0x344 Size=0x8
    unsigned long BoostListLock;// Offset=0x34c Size=0x4
    unsigned long IrpListLock;// Offset=0x350 Size=0x4
    void * ReservedForSynchTracking;// Offset=0x354 Size=0x4
    struct _SINGLE_LIST_ENTRY CmCallbackListHead;// Offset=0x358 Size=0x4
    struct _GUID * ActivityId;// Offset=0x35c Size=0x4
    struct _SINGLE_LIST_ENTRY SeLearningModeListHead;// Offset=0x360 Size=0x4
    void * VerifierContext;// Offset=0x364 Size=0x4
    void * AdjustedClientToken;// Offset=0x368 Size=0x4
    void * WorkOnBehalfThread;// Offset=0x36c Size=0x4
    struct _PS_PROPERTY_SET PropertySet;// Offset=0x370 Size=0xc
    void * PicoContext;// Offset=0x37c Size=0x4
    unsigned long UserFsBase;// Offset=0x380 Size=0x4
    unsigned long UserGsBase;// Offset=0x384 Size=0x4
    struct _THREAD_ENERGY_VALUES * EnergyValues;// Offset=0x388 Size=0x4
    union // Size=0x4 (Id=0)
    {
        unsigned long SelectedCpuSets;// Offset=0x38c Size=0x4
        unsigned long * SelectedCpuSetsIndirect;// Offset=0x38c Size=0x4
    };
    struct _EJOB * Silo;// Offset=0x390 Size=0x4
    struct _UNICODE_STRING * ThreadName;// Offset=0x394 Size=0x4
    void * SparePointer;// Offset=0x398 Size=0x4
    unsigned long LastExpectedRunTime;// Offset=0x39c Size=0x4
    unsigned long HeapData;// Offset=0x3a0 Size=0x4
    struct _LIST_ENTRY OwnerEntryListHead;// Offset=0x3a4 Size=0x8
    unsigned long DisownedOwnerEntryListLock;// Offset=0x3ac Size=0x4
    struct _LIST_ENTRY DisownedOwnerEntryListHead;// Offset=0x3b0 Size=0x8
    struct _KLOCK_ENTRY LockEntries[6];// Offset=0x3b8 Size=0x120
    void * CmDbgInfo;// Offset=0x4d8 Size=0x4
};
