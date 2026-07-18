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

union _KWAIT_STATUS_REGISTER// Size=0x1 (Id=1847)
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

struct _KAPC_STATE// Size=0x30 (Id=1698)
{
    struct _LIST_ENTRY ApcListHead[2];// Offset=0x0 Size=0x20
    struct _KPROCESS * Process;// Offset=0x20 Size=0x8
    union // Size=0x1 (Id=0)
    {
        unsigned char InProgressFlags;// Offset=0x28 Size=0x1
        struct // Size=0x1 (Id=0)
        {
            unsigned char KernelApcInProgress:1;// Offset=0x28 Size=0x1 BitOffset=0x0 BitSize=0x1
            unsigned char SpecialApcInProgress:1;// Offset=0x28 Size=0x1 BitOffset=0x1 BitSize=0x1
        };
    };
    unsigned char KernelApcPending;// Offset=0x29 Size=0x1
    union // Size=0x1 (Id=0)
    {
        unsigned char UserApcPendingAll;// Offset=0x2a Size=0x1
        struct // Size=0x1 (Id=0)
        {
            unsigned char SpecialUserApcPending:1;// Offset=0x2a Size=0x1 BitOffset=0x0 BitSize=0x1
            unsigned char UserApcPending:1;// Offset=0x2a Size=0x1 BitOffset=0x1 BitSize=0x1
        };
    };
};

struct _SINGLE_LIST_ENTRY// Size=0x8 (Id=519)
{
    struct _SINGLE_LIST_ENTRY * Next;// Offset=0x0 Size=0x8
};

struct _unnamed_11// Size=0x8 (Id=11)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    unsigned long HighPart;// Offset=0x4 Size=0x4
};

union _ULARGE_INTEGER// Size=0x8 (Id=587)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    unsigned long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_11 u;// Offset=0x0 Size=0x8
    unsigned long long QuadPart;// Offset=0x0 Size=0x8
};

struct _KTIMER// Size=0x40 (Id=2082)
{
    struct _DISPATCHER_HEADER Header;// Offset=0x0 Size=0x18
    union _ULARGE_INTEGER DueTime;// Offset=0x18 Size=0x8
    struct _LIST_ENTRY TimerListEntry;// Offset=0x20 Size=0x10
    struct _KDPC * Dpc;// Offset=0x30 Size=0x8
    unsigned short Processor;// Offset=0x38 Size=0x2
    unsigned char TimerType;// Offset=0x3a Size=0x1
    char TimerDifObjTracking;// Offset=0x3b Size=0x1
    unsigned long Period;// Offset=0x3c Size=0x4
};

struct _KWAIT_BLOCK// Size=0x30 (Id=1779)
{
    struct _LIST_ENTRY WaitListEntry;// Offset=0x0 Size=0x10
    unsigned char WaitType;// Offset=0x10 Size=0x1
    unsigned char BlockState;// Offset=0x11 Size=0x1
    unsigned short WaitKey;// Offset=0x12 Size=0x2
    long SpareLong;// Offset=0x14 Size=0x4
    union // Size=0x20 (Id=0)
    {
        struct _KTHREAD * Thread;// Offset=0x18 Size=0x8
        struct _KQUEUE * NotificationQueue;// Offset=0x18 Size=0x8
        struct _KDPC * Dpc;// Offset=0x18 Size=0x8
    };
    void * Object;// Offset=0x20 Size=0x8
    void * SparePtr;// Offset=0x28 Size=0x8
};

struct _KAPC// Size=0x58 (Id=198)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char AllFlags;// Offset=0x1 Size=0x1
    unsigned char Size;// Offset=0x2 Size=0x1
    unsigned char SpareByte1;// Offset=0x3 Size=0x1
    unsigned long SpareLong0;// Offset=0x4 Size=0x4
    struct _KTHREAD * Thread;// Offset=0x8 Size=0x8
    struct _LIST_ENTRY ApcListEntry;// Offset=0x10 Size=0x10
    void * Reserved[3];// Offset=0x20 Size=0x18
    void * NormalContext;// Offset=0x38 Size=0x8
    void * SystemArgument1;// Offset=0x40 Size=0x8
    void * SystemArgument2;// Offset=0x48 Size=0x8
    char ApcStateIndex;// Offset=0x50 Size=0x1
    char ApcMode;// Offset=0x51 Size=0x1
    unsigned char Inserted;// Offset=0x52 Size=0x1
};

struct _KEVENT// Size=0x18 (Id=20)
{
    struct _DISPATCHER_HEADER Header;// Offset=0x0 Size=0x18
};

union _KERNEL_SHADOW_STACK_LIMIT// Size=0x8 (Id=1224)
{
    unsigned long long AllFields;// Offset=0x0 Size=0x8
    struct // Size=0x8 (Id=0)
    {
        unsigned long long ShadowStackType:3;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x3
        unsigned long long Unused:9;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x9
        unsigned long long ShadowStackLimitPfn:52;// Offset=0x0 Size=0x8 BitOffset=0xc BitSize=0x34
    };
};

struct _KTHREAD// Size=0x4c0 (Id=540)
{
    struct _DISPATCHER_HEADER Header;// Offset=0x0 Size=0x18
    void * SListFaultAddress;// Offset=0x18 Size=0x8
    unsigned long long QuantumTarget;// Offset=0x20 Size=0x8
    void * InitialStack;// Offset=0x28 Size=0x8
    void * StackLimit;// Offset=0x30 Size=0x8
    void * StackBase;// Offset=0x38 Size=0x8
    unsigned long long ThreadLock;// Offset=0x40 Size=0x8
    unsigned long long CycleTime;// Offset=0x48 Size=0x8
    unsigned long CurrentRunTime;// Offset=0x50 Size=0x4
    unsigned long ExpectedRunTime;// Offset=0x54 Size=0x4
    void * KernelStack;// Offset=0x58 Size=0x8
    struct _XSAVE_FORMAT * StateSaveArea;// Offset=0x60 Size=0x8
    struct _KSCHEDULING_GROUP * SchedulingGroup;// Offset=0x68 Size=0x8
    union _KWAIT_STATUS_REGISTER WaitRegister;// Offset=0x70 Size=0x1
    union // Size=0x1 (Id=0)
    {
        unsigned char Alerted;// Offset=0x71 Size=0x1
        struct // Size=0x1 (Id=0)
        {
            unsigned char KernelModeAlerted:1;// Offset=0x71 Size=0x1 BitOffset=0x0 BitSize=0x1
            unsigned char UserModeAlerted:1;// Offset=0x71 Size=0x1 BitOffset=0x1 BitSize=0x1
        };
    };
    unsigned short Running;// Offset=0x72 Size=0x2
    union // Size=0x4 (Id=0)
    {
        struct // Size=0x4 (Id=0)
        {
            unsigned long AutoBoostActive:1;// Offset=0x74 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long ReadyTransition:1;// Offset=0x74 Size=0x4 BitOffset=0x1 BitSize=0x1
            unsigned long WaitNext:1;// Offset=0x74 Size=0x4 BitOffset=0x2 BitSize=0x1
            unsigned long SystemAffinityActive:1;// Offset=0x74 Size=0x4 BitOffset=0x3 BitSize=0x1
            unsigned long Alertable:1;// Offset=0x74 Size=0x4 BitOffset=0x4 BitSize=0x1
            unsigned long Reserved1:1;// Offset=0x74 Size=0x4 BitOffset=0x5 BitSize=0x1
            unsigned long ApcInterruptRequest:1;// Offset=0x74 Size=0x4 BitOffset=0x6 BitSize=0x1
            unsigned long QuantumEndMigrate:1;// Offset=0x74 Size=0x4 BitOffset=0x7 BitSize=0x1
            unsigned long SecureThread:1;// Offset=0x74 Size=0x4 BitOffset=0x8 BitSize=0x1
            unsigned long TimerActive:1;// Offset=0x74 Size=0x4 BitOffset=0x9 BitSize=0x1
            unsigned long SystemThread:1;// Offset=0x74 Size=0x4 BitOffset=0xa BitSize=0x1
            unsigned long ProcessDetachActive:1;// Offset=0x74 Size=0x4 BitOffset=0xb BitSize=0x1
            unsigned long Reserved2:1;// Offset=0x74 Size=0x4 BitOffset=0xc BitSize=0x1
            unsigned long ScbReadyQueue:1;// Offset=0x74 Size=0x4 BitOffset=0xd BitSize=0x1
            unsigned long ApcQueueable:1;// Offset=0x74 Size=0x4 BitOffset=0xe BitSize=0x1
            unsigned long Reserved3:1;// Offset=0x74 Size=0x4 BitOffset=0xf BitSize=0x1
            unsigned long WaitNextClearWobPriorityFloor:1;// Offset=0x74 Size=0x4 BitOffset=0x10 BitSize=0x1
            unsigned long TimerSuspended:1;// Offset=0x74 Size=0x4 BitOffset=0x11 BitSize=0x1
            unsigned long SuspendedWaitMode:1;// Offset=0x74 Size=0x4 BitOffset=0x12 BitSize=0x1
            unsigned long SuspendSchedulerApcWait:1;// Offset=0x74 Size=0x4 BitOffset=0x13 BitSize=0x1
            unsigned long CetUserShadowStack:1;// Offset=0x74 Size=0x4 BitOffset=0x14 BitSize=0x1
            unsigned long BypassProcessFreeze:1;// Offset=0x74 Size=0x4 BitOffset=0x15 BitSize=0x1
            unsigned long CetKernelShadowStack:1;// Offset=0x74 Size=0x4 BitOffset=0x16 BitSize=0x1
            unsigned long StateSaveAreaDecoupled:1;// Offset=0x74 Size=0x4 BitOffset=0x17 BitSize=0x1
            unsigned long Reserved:8;// Offset=0x74 Size=0x4 BitOffset=0x18 BitSize=0x8
        };
        long MiscFlags;// Offset=0x74 Size=0x4
    };
    union // Size=0x4 (Id=0)
    {
        struct // Size=0x4 (Id=0)
        {
            unsigned long UserIdealProcessorFixed:1;// Offset=0x78 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long IsolationWidth:1;// Offset=0x78 Size=0x4 BitOffset=0x1 BitSize=0x1
            unsigned long AutoAlignment:1;// Offset=0x78 Size=0x4 BitOffset=0x2 BitSize=0x1
            unsigned long DisableBoost:1;// Offset=0x78 Size=0x4 BitOffset=0x3 BitSize=0x1
            unsigned long AlertedByThreadId:1;// Offset=0x78 Size=0x4 BitOffset=0x4 BitSize=0x1
            unsigned long QuantumDonation:1;// Offset=0x78 Size=0x4 BitOffset=0x5 BitSize=0x1
            unsigned long EnableStackSwap:1;// Offset=0x78 Size=0x4 BitOffset=0x6 BitSize=0x1
            unsigned long GuiThread:1;// Offset=0x78 Size=0x4 BitOffset=0x7 BitSize=0x1
            unsigned long DisableQuantum:1;// Offset=0x78 Size=0x4 BitOffset=0x8 BitSize=0x1
            unsigned long ChargeOnlySchedulingGroup:1;// Offset=0x78 Size=0x4 BitOffset=0x9 BitSize=0x1
            unsigned long DeferPreemption:1;// Offset=0x78 Size=0x4 BitOffset=0xa BitSize=0x1
            unsigned long QueueDeferPreemption:1;// Offset=0x78 Size=0x4 BitOffset=0xb BitSize=0x1
            unsigned long ForceDeferSchedule:1;// Offset=0x78 Size=0x4 BitOffset=0xc BitSize=0x1
            unsigned long SharedReadyQueueAffinity:1;// Offset=0x78 Size=0x4 BitOffset=0xd BitSize=0x1
            unsigned long FreezeCount:1;// Offset=0x78 Size=0x4 BitOffset=0xe BitSize=0x1
            unsigned long TerminationApcRequest:1;// Offset=0x78 Size=0x4 BitOffset=0xf BitSize=0x1
            unsigned long AutoBoostEntriesExhausted:1;// Offset=0x78 Size=0x4 BitOffset=0x10 BitSize=0x1
            unsigned long KernelStackResident:1;// Offset=0x78 Size=0x4 BitOffset=0x11 BitSize=0x1
            unsigned long TerminateRequestReason:2;// Offset=0x78 Size=0x4 BitOffset=0x12 BitSize=0x2
            unsigned long ProcessStackCountDecremented:1;// Offset=0x78 Size=0x4 BitOffset=0x14 BitSize=0x1
            unsigned long RestrictedGuiThread:1;// Offset=0x78 Size=0x4 BitOffset=0x15 BitSize=0x1
            unsigned long VpBackingThread:1;// Offset=0x78 Size=0x4 BitOffset=0x16 BitSize=0x1
            unsigned long EtwStackTraceCrimsonApcDisabled:1;// Offset=0x78 Size=0x4 BitOffset=0x17 BitSize=0x1
            unsigned long EtwStackTraceApcInserted:8;// Offset=0x78 Size=0x4 BitOffset=0x18 BitSize=0x8
        };
        long ThreadFlags;// Offset=0x78 Size=0x4
    };
    unsigned char Tag;// Offset=0x7c Size=0x1
    union // Size=0x1 (Id=0)
    {
        struct // Size=0x1 (Id=0)
        {
            unsigned char CalloutActive:1;// Offset=0x7d Size=0x1 BitOffset=0x0 BitSize=0x1
            unsigned char ReservedStackInUse:1;// Offset=0x7d Size=0x1 BitOffset=0x1 BitSize=0x1
            unsigned char UserStackWalkActive:1;// Offset=0x7d Size=0x1 BitOffset=0x2 BitSize=0x1
            unsigned char SameThreadTransientFlagsReserved:5;// Offset=0x7d Size=0x1 BitOffset=0x3 BitSize=0x5
        };
        char SameThreadTransientFlags;// Offset=0x7d Size=0x1
    };
    union // Size=0x1 (Id=0)
    {
        struct // Size=0x1 (Id=0)
        {
            unsigned char RunningNonRetpolineCode:1;// Offset=0x7e Size=0x1 BitOffset=0x0 BitSize=0x1
            unsigned char SpecCtrlSpare:7;// Offset=0x7e Size=0x1 BitOffset=0x1 BitSize=0x7
        };
        unsigned char SpecCtrl;// Offset=0x7e Size=0x1
    };
    unsigned long SystemCallNumber;// Offset=0x80 Size=0x4
    unsigned long ReadyTime;// Offset=0x84 Size=0x4
    void * FirstArgument;// Offset=0x88 Size=0x8
    struct _KTRAP_FRAME * TrapFrame;// Offset=0x90 Size=0x8
    union // Size=0x30 (Id=0)
    {
        struct _KAPC_STATE ApcState;// Offset=0x98 Size=0x30
        unsigned char ApcStateFill[43];// Offset=0x98 Size=0x2b
    };
    char Priority;// Offset=0xc3 Size=0x1
    unsigned long UserIdealProcessor;// Offset=0xc4 Size=0x4
    long long WaitStatus;// Offset=0xc8 Size=0x8
    struct _KWAIT_BLOCK * WaitBlockList;// Offset=0xd0 Size=0x8
    union // Size=0x10 (Id=0)
    {
        struct _LIST_ENTRY WaitListEntry;// Offset=0xd8 Size=0x10
        struct _SINGLE_LIST_ENTRY SwapListEntry;// Offset=0xd8 Size=0x8
    };
    struct _DISPATCHER_HEADER * Queue;// Offset=0xe8 Size=0x8
    void * Teb;// Offset=0xf0 Size=0x8
    unsigned long long RelativeTimerBias;// Offset=0xf8 Size=0x8
    struct _KTIMER Timer;// Offset=0x100 Size=0x40
    union // Size=0x1e8 (Id=0)
    {
        struct _KWAIT_BLOCK WaitBlock[4];// Offset=0x140 Size=0xc0
        unsigned char WaitBlockFill4[20];// Offset=0x140 Size=0x14
        unsigned long ContextSwitches;// Offset=0x154 Size=0x4
        unsigned char WaitBlockFill5[68];// Offset=0x140 Size=0x44
        unsigned char State;// Offset=0x184 Size=0x1
        char Spare13;// Offset=0x185 Size=0x1
        unsigned char WaitIrql;// Offset=0x186 Size=0x1
        char WaitMode;// Offset=0x187 Size=0x1
        unsigned char WaitBlockFill6[116];// Offset=0x140 Size=0x74
        unsigned long WaitTime;// Offset=0x1b4 Size=0x4
        unsigned char WaitBlockFill7[164];// Offset=0x140 Size=0xa4
        short KernelApcDisable;// Offset=0x1e4 Size=0x2
        short SpecialApcDisable;// Offset=0x1e6 Size=0x2
        unsigned long CombinedApcDisable;// Offset=0x1e4 Size=0x4
        unsigned char WaitBlockFill8[40];// Offset=0x140 Size=0x28
        struct _KTHREAD_COUNTERS * ThreadCounters;// Offset=0x168 Size=0x8
        unsigned char WaitBlockFill9[88];// Offset=0x140 Size=0x58
        struct _XSTATE_SAVE * XStateSave;// Offset=0x198 Size=0x8
        unsigned char WaitBlockFill10[136];// Offset=0x140 Size=0x88
        void * Win32Thread;// Offset=0x1c8 Size=0x8
        unsigned char WaitBlockFill11[176];// Offset=0x140 Size=0xb0
    };
    unsigned long long Spare18;// Offset=0x1f0 Size=0x8
    unsigned long long LastXStateSaveDebugInfo;// Offset=0x1f8 Size=0x8
    union // Size=0x4 (Id=0)
    {
        long ThreadFlags2;// Offset=0x200 Size=0x4
        struct // Size=0x4 (Id=0)
        {
            unsigned long DisableKasan:1;// Offset=0x200 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long AbContextSwitchState:1;// Offset=0x200 Size=0x4 BitOffset=0x1 BitSize=0x1
            unsigned long AbReleasePending:1;// Offset=0x200 Size=0x4 BitOffset=0x2 BitSize=0x1
            unsigned long ChargeOnlySchedulingGroupOverridden:1;// Offset=0x200 Size=0x4 BitOffset=0x3 BitSize=0x1
            unsigned long ThreadFlags2Reserved:28;// Offset=0x200 Size=0x4 BitOffset=0x4 BitSize=0x1c
        };
    };
    unsigned char BamQosLevel;// Offset=0x204 Size=0x1
    unsigned char HardwareFeedbackClass;// Offset=0x205 Size=0x1
    union // Size=0x2 (Id=0)
    {
        short PriorityDecrement;// Offset=0x206 Size=0x2
        struct // Size=0x2 (Id=0)
        {
            unsigned short ForegroundBoost:4;// Offset=0x206 Size=0x2 BitOffset=0x0 BitSize=0x4
            unsigned short UnusualBoost:8;// Offset=0x206 Size=0x2 BitOffset=0x4 BitSize=0x8
        };
    };
    struct _LIST_ENTRY QueueListEntry;// Offset=0x208 Size=0x10
    union // Size=0x4 (Id=0)
    {
        unsigned long NextProcessor;// Offset=0x218 Size=0x4
        struct // Size=0x4 (Id=0)
        {
            unsigned long NextProcessorNumber:31;// Offset=0x218 Size=0x4 BitOffset=0x0 BitSize=0x1f
            unsigned long SharedReadyQueue:1;// Offset=0x218 Size=0x4 BitOffset=0x1f BitSize=0x1
        };
    };
    long QueuePriority;// Offset=0x21c Size=0x4
    struct _KPROCESS * Process;// Offset=0x220 Size=0x8
    struct _KAFFINITY_EX * UserAffinity;// Offset=0x228 Size=0x8
    unsigned short UserAffinityPrimaryGroup;// Offset=0x230 Size=0x2
    char PreviousMode;// Offset=0x232 Size=0x1
    char BasePriority;// Offset=0x233 Size=0x1
    unsigned char SharedComputeUnitsUsed;// Offset=0x234 Size=0x1
    unsigned char Preempted;// Offset=0x235 Size=0x1
    unsigned char AdjustReason;// Offset=0x236 Size=0x1
    char AdjustIncrement;// Offset=0x237 Size=0x1
    unsigned long long AffinityVersion;// Offset=0x238 Size=0x8
    struct _KAFFINITY_EX * Affinity;// Offset=0x240 Size=0x8
    unsigned short AffinityPrimaryGroup;// Offset=0x248 Size=0x2
    unsigned char ApcStateIndex;// Offset=0x24a Size=0x1
    unsigned char WaitBlockCount;// Offset=0x24b Size=0x1
    unsigned long IdealProcessor;// Offset=0x24c Size=0x4
    unsigned long long NpxState;// Offset=0x250 Size=0x8
    union // Size=0x30 (Id=0)
    {
        struct _KAPC_STATE SavedApcState;// Offset=0x258 Size=0x30
        unsigned char SavedApcStateFill[43];// Offset=0x258 Size=0x2b
    };
    unsigned char WaitReason;// Offset=0x283 Size=0x1
    char SuspendCount;// Offset=0x284 Size=0x1
    char Saturation;// Offset=0x285 Size=0x1
    unsigned short SListFaultCount;// Offset=0x286 Size=0x2
    union // Size=0x2d8 (Id=0)
    {
        struct _KAPC SchedulerApc;// Offset=0x288 Size=0x58
        unsigned char SchedulerApcFill1[3];// Offset=0x288 Size=0x3
        unsigned char QuantumReset;// Offset=0x28b Size=0x1
        unsigned char SchedulerApcFill2[4];// Offset=0x288 Size=0x4
        unsigned long KernelTime;// Offset=0x28c Size=0x4
        unsigned char SchedulerApcFill3[64];// Offset=0x288 Size=0x40
        struct _KPRCB * WaitPrcb;// Offset=0x2c8 Size=0x8
        unsigned char SchedulerApcFill4[72];// Offset=0x288 Size=0x48
        void * LegoData;// Offset=0x2d0 Size=0x8
        unsigned char SchedulerApcFill5[83];// Offset=0x288 Size=0x53
    };
    unsigned char CallbackNestingLevel;// Offset=0x2db Size=0x1
    unsigned long UserTime;// Offset=0x2dc Size=0x4
    struct _KEVENT SuspendEvent;// Offset=0x2e0 Size=0x18
    struct _LIST_ENTRY ThreadListEntry;// Offset=0x2f8 Size=0x10
    struct _LIST_ENTRY MutantListHead;// Offset=0x308 Size=0x10
    union // Size=0x31a (Id=0)
    {
        unsigned char AbWaitEntryCount;// Offset=0x318 Size=0x1
        unsigned char AbOwnedEntryCount;// Offset=0x319 Size=0x1
        unsigned short AbEntryCountValue;// Offset=0x318 Size=0x2
    };
    union // Size=0x1 (Id=0)
    {
        unsigned char FreezeFlags;// Offset=0x31a Size=0x1
        struct // Size=0x1 (Id=0)
        {
            unsigned char FreezeCount2:1;// Offset=0x31a Size=0x1 BitOffset=0x0 BitSize=0x1
            unsigned char FreezeNormal:1;// Offset=0x31a Size=0x1 BitOffset=0x1 BitSize=0x1
            unsigned char FreezeDeep:1;// Offset=0x31a Size=0x1 BitOffset=0x2 BitSize=0x1
        };
    };
    char WobPriority;// Offset=0x31b Size=0x1
    unsigned long SecureThreadCookie;// Offset=0x31c Size=0x4
    void * SchedulerSharedSystemSlot;// Offset=0x320 Size=0x8
    struct _SINGLE_LIST_ENTRY PropagateBoostsEntry;// Offset=0x328 Size=0x8
    struct _SINGLE_LIST_ENTRY IoSelfBoostsEntry;// Offset=0x330 Size=0x8
    unsigned char PriorityFloorCounts[32];// Offset=0x338 Size=0x20
    unsigned long PriorityFloorSummary;// Offset=0x358 Size=0x4
    long AbCompletedIoBoostCount;// Offset=0x35c Size=0x4
    long AbCompletedIoQoSBoostCount;// Offset=0x360 Size=0x4
    short KeReferenceCount;// Offset=0x364 Size=0x2
    char DecayBoost;// Offset=0x366 Size=0x1
    unsigned char Spare6;// Offset=0x367 Size=0x1
    unsigned long ForegroundLossTime;// Offset=0x368 Size=0x4
    union // Size=0x10 (Id=0)
    {
        struct _LIST_ENTRY GlobalForegroundListEntry;// Offset=0x370 Size=0x10
        struct _SINGLE_LIST_ENTRY ForegroundDpcStackListEntry;// Offset=0x370 Size=0x8
    };
    unsigned long long InGlobalForegroundList;// Offset=0x378 Size=0x8
    long long ReadOperationCount;// Offset=0x380 Size=0x8
    long long WriteOperationCount;// Offset=0x388 Size=0x8
    long long OtherOperationCount;// Offset=0x390 Size=0x8
    long long ReadTransferCount;// Offset=0x398 Size=0x8
    long long WriteTransferCount;// Offset=0x3a0 Size=0x8
    long long OtherTransferCount;// Offset=0x3a8 Size=0x8
    struct _KSCB * QueuedScb;// Offset=0x3b0 Size=0x8
    unsigned long ThreadTimerDelay;// Offset=0x3b8 Size=0x4
    unsigned short Spare26;// Offset=0x3bc Size=0x2
    unsigned char PpmPolicy;// Offset=0x3be Size=0x1
    unsigned char CpuSetWorkloadClass;// Offset=0x3bf Size=0x1
    unsigned long long TracingPrivate[1];// Offset=0x3c0 Size=0x8
    void * SchedulerAssist;// Offset=0x3c8 Size=0x8
    void * AbWaitObject;// Offset=0x3d0 Size=0x8
    unsigned long ReservedPreviousReadyTimeValue;// Offset=0x3d8 Size=0x4
    unsigned long long KernelWaitTime;// Offset=0x3e0 Size=0x8
    unsigned long long UserWaitTime;// Offset=0x3e8 Size=0x8
    union // Size=0x10 (Id=0)
    {
        struct _LIST_ENTRY GlobalUpdateVpThreadPriorityListEntry;// Offset=0x3f0 Size=0x10
        struct _SINGLE_LIST_ENTRY UpdateVpThreadPriorityDpcStackListEntry;// Offset=0x3f0 Size=0x8
    };
    unsigned long long InGlobalUpdateVpThreadPriorityList;// Offset=0x3f8 Size=0x8
    long SchedulerAssistPriorityFloor;// Offset=0x400 Size=0x4
    long RealtimePriorityFloor;// Offset=0x404 Size=0x4
    void * KernelShadowStack;// Offset=0x408 Size=0x8
    void * KernelShadowStackInitial;// Offset=0x410 Size=0x8
    void * KernelShadowStackBase;// Offset=0x418 Size=0x8
    union _KERNEL_SHADOW_STACK_LIMIT KernelShadowStackLimit;// Offset=0x420 Size=0x8
    unsigned long long ExtendedFeatureDisableMask;// Offset=0x428 Size=0x8
    struct _KTHREAD_WPS_FEEDBACK * WpsFeedback;// Offset=0x430 Size=0x8
    unsigned long long Spare35[2];// Offset=0x438 Size=0x10
    unsigned long Spare36;// Offset=0x448 Size=0x4
    unsigned long ModeHistory;// Offset=0x44c Size=0x4
    struct _SINGLE_LIST_ENTRY SystemAffinityTokenListHead;// Offset=0x450 Size=0x8
    void * IptSaveArea;// Offset=0x458 Size=0x8
    unsigned char ResourceIndex;// Offset=0x460 Size=0x1
    unsigned char CoreIsolationReasons;// Offset=0x461 Size=0x1
    unsigned char BamQosLevelFromAssistPage;// Offset=0x462 Size=0x1
    unsigned char SecureCallCoreIsolationCount;// Offset=0x463 Size=0x1
    unsigned long SchedulerSharedOffset;// Offset=0x464 Size=0x4
    struct _KSWAPPABLE_PAGE * SchedulerSharedSwappablePage;// Offset=0x468 Size=0x8
    union // Size=0x480 (Id=0)
    {
        void * AutoBoostThreadState;// Offset=0x470 Size=0x8
        void * Spare32;// Offset=0x478 Size=0x8
        struct _KLOCK_ENTRIES * KernelAbEntries;// Offset=0x470 Size=0x8
        struct _KLOCK_ENTRIES * UserAbEntries;// Offset=0x478 Size=0x8
    };
    unsigned long long KcsanThread;// Offset=0x480 Size=0x8
    unsigned long SchedulerAssistYieldCounter;// Offset=0x488 Size=0x4
    unsigned long SchedulerAssistYieldBoostCount;// Offset=0x48c Size=0x4
    long long SchedulerAssistLastYieldBoostTime;// Offset=0x490 Size=0x8
    unsigned long long Padding[5];// Offset=0x498 Size=0x28
};
