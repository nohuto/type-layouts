struct _LIST_ENTRY// Size=0x10 (Id=22)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _DISPATCHER_HEADER// Size=0x18 (Id=259)
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

union _KWAIT_STATUS_REGISTER// Size=0x1 (Id=376)
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

struct _KAPC_STATE// Size=0x30 (Id=332)
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
    unsigned char UserApcPending;// Offset=0x2a Size=0x1
};

struct _SINGLE_LIST_ENTRY// Size=0x8 (Id=24)
{
    struct _SINGLE_LIST_ENTRY * Next;// Offset=0x0 Size=0x8
};

struct _unnamed_11// Size=0x8 (Id=11)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    unsigned long HighPart;// Offset=0x4 Size=0x4
};

union _ULARGE_INTEGER// Size=0x8 (Id=77)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    unsigned long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_11 u;// Offset=0x0 Size=0x8
    unsigned long long QuadPart;// Offset=0x0 Size=0x8
};

struct _KTIMER// Size=0x40 (Id=455)
{
    struct _DISPATCHER_HEADER Header;// Offset=0x0 Size=0x18
    union _ULARGE_INTEGER DueTime;// Offset=0x18 Size=0x8
    struct _LIST_ENTRY TimerListEntry;// Offset=0x20 Size=0x10
    struct _KDPC * Dpc;// Offset=0x30 Size=0x8
    unsigned long Processor;// Offset=0x38 Size=0x4
    unsigned long Period;// Offset=0x3c Size=0x4
};

struct _KWAIT_BLOCK// Size=0x30 (Id=351)
{
    struct _LIST_ENTRY WaitListEntry;// Offset=0x0 Size=0x10
    unsigned char WaitType;// Offset=0x10 Size=0x1
    unsigned char BlockState;// Offset=0x11 Size=0x1
    unsigned short WaitKey;// Offset=0x12 Size=0x2
    long SpareLong;// Offset=0x14 Size=0x4
    union // Size=0x8 (Id=0)
    {
        struct _KTHREAD * Thread;// Offset=0x18 Size=0x8
        struct _KQUEUE * NotificationQueue;// Offset=0x18 Size=0x8
    };
    void * Object;// Offset=0x20 Size=0x8
    void * SparePtr;// Offset=0x28 Size=0x8
};

struct _GROUP_AFFINITY// Size=0x10 (Id=216)
{
    unsigned long long Mask;// Offset=0x0 Size=0x8
    unsigned short Group;// Offset=0x8 Size=0x2
    unsigned short Reserved[3];// Offset=0xa Size=0x6
};

struct _KAPC// Size=0x58 (Id=322)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char SpareByte0;// Offset=0x1 Size=0x1
    unsigned char Size;// Offset=0x2 Size=0x1
    unsigned char SpareByte1;// Offset=0x3 Size=0x1
    unsigned long SpareLong0;// Offset=0x4 Size=0x4
    struct _KTHREAD * Thread;// Offset=0x8 Size=0x8
    struct _LIST_ENTRY ApcListEntry;// Offset=0x10 Size=0x10
    union // Size=0x38 (Id=0)
    {
        void  ( * KernelRoutine)(struct _KAPC * ,void  ( ** )(void * ,void * ,void * ),void ** ,void ** ,void ** );// Offset=0x20 Size=0x8
        void  ( * RundownRoutine)(struct _KAPC * );// Offset=0x28 Size=0x8
        void  ( * NormalRoutine)(void * ,void * ,void * );// Offset=0x30 Size=0x8
        void * Reserved[3];// Offset=0x20 Size=0x18
    };
    void * NormalContext;// Offset=0x38 Size=0x8
    void * SystemArgument1;// Offset=0x40 Size=0x8
    void * SystemArgument2;// Offset=0x48 Size=0x8
    char ApcStateIndex;// Offset=0x50 Size=0x1
    char ApcMode;// Offset=0x51 Size=0x1
    unsigned char Inserted;// Offset=0x52 Size=0x1
};

struct _KEVENT// Size=0x18 (Id=68)
{
    struct _DISPATCHER_HEADER Header;// Offset=0x0 Size=0x18
};

struct _RTL_BALANCED_NODE// Size=0x18 (Id=37)
{
    union // Size=0x10 (Id=0)
    {
        struct _RTL_BALANCED_NODE * Children[2];// Offset=0x0 Size=0x10
        struct _RTL_BALANCED_NODE * Left;// Offset=0x0 Size=0x8
        struct _RTL_BALANCED_NODE * Right;// Offset=0x8 Size=0x8
    };
    union // Size=0x1 (Id=0)
    {
        struct // Size=0x1 (Id=0)
        {
            union // Size=0x1 (Id=0)
            {
                unsigned char Red:1;// Offset=0x10 Size=0x1 BitOffset=0x0 BitSize=0x1
                unsigned char Balance:2;// Offset=0x10 Size=0x1 BitOffset=0x0 BitSize=0x2
            };
        };
        unsigned long long ParentValue;// Offset=0x10 Size=0x8
    };
};

struct _KLOCK_ENTRY_LOCK_STATE// Size=0x10 (Id=388)
{
    union // Size=0x8 (Id=0)
    {
        struct // Size=0x8 (Id=0)
        {
            unsigned long long CrossThreadReleasable:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
            unsigned long long Busy:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
            unsigned long long Reserved:61;// Offset=0x0 Size=0x8 BitOffset=0x2 BitSize=0x3d
            unsigned long long InTree:1;// Offset=0x0 Size=0x8 BitOffset=0x3f BitSize=0x1
        };
        void * LockState;// Offset=0x0 Size=0x8
    };
    union // Size=0x8 (Id=0)
    {
        void * SessionState;// Offset=0x8 Size=0x8
        unsigned long SessionId;// Offset=0x8 Size=0x4
    };
    unsigned long SessionPad;// Offset=0xc Size=0x4
};

struct _RTL_RB_TREE// Size=0x10 (Id=38)
{
    struct _RTL_BALANCED_NODE * Root;// Offset=0x0 Size=0x8
    union // Size=0x1 (Id=0)
    {
        struct // Size=0x1 (Id=0)
        {
            unsigned char Encoded:1;// Offset=0x8 Size=0x1 BitOffset=0x0 BitSize=0x1
        };
        struct _RTL_BALANCED_NODE * Min;// Offset=0x8 Size=0x8
    };
};

union _KLOCK_ENTRY_BOOST_BITMAP// Size=0x4 (Id=222)
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

struct _KLOCK_ENTRY// Size=0x60 (Id=213)
{
    union // Size=0x18 (Id=0)
    {
        struct _RTL_BALANCED_NODE TreeNode;// Offset=0x0 Size=0x18
        struct _SINGLE_LIST_ENTRY FreeListEntry;// Offset=0x0 Size=0x8
        unsigned long EntryFlags;// Offset=0x18 Size=0x4
    };
    unsigned char EntryOffset;// Offset=0x18 Size=0x1
    union // Size=0x1 (Id=0)
    {
        unsigned char ThreadLocalFlags;// Offset=0x19 Size=0x1
        struct // Size=0x1 (Id=0)
        {
            unsigned char WaitingBit:1;// Offset=0x19 Size=0x1 BitOffset=0x0 BitSize=0x1
            unsigned char Spare0:7;// Offset=0x19 Size=0x1 BitOffset=0x1 BitSize=0x7
        };
    };
    union // Size=0x1 (Id=0)
    {
        unsigned char AcquiredByte;// Offset=0x1a Size=0x1
        struct // Size=0x1 (Id=0)
        {
            unsigned char AcquiredBit:1;// Offset=0x1a Size=0x1 BitOffset=0x0 BitSize=0x1
        };
    };
    union // Size=0x1 (Id=0)
    {
        unsigned char CrossThreadFlags;// Offset=0x1b Size=0x1
        struct // Size=0x1 (Id=0)
        {
            unsigned char HeadNodeBit:1;// Offset=0x1b Size=0x1 BitOffset=0x0 BitSize=0x1
            unsigned char IoPriorityBit:1;// Offset=0x1b Size=0x1 BitOffset=0x1 BitSize=0x1
            unsigned char IoQoSWaiter:1;// Offset=0x1b Size=0x1 BitOffset=0x2 BitSize=0x1
            unsigned char Spare1:5;// Offset=0x1b Size=0x1 BitOffset=0x3 BitSize=0x5
            unsigned long StaticState:8;// Offset=0x18 Size=0x4 BitOffset=0x0 BitSize=0x8
            unsigned long AllFlags:24;// Offset=0x18 Size=0x4 BitOffset=0x8 BitSize=0x18
        };
    };
    unsigned long SpareFlags;// Offset=0x1c Size=0x4
    union // Size=0x28 (Id=0)
    {
        struct _KLOCK_ENTRY_LOCK_STATE LockState;// Offset=0x20 Size=0x10
        void * LockUnsafe;// Offset=0x20 Size=0x8
        unsigned char CrossThreadReleasableAndBusyByte;// Offset=0x20 Size=0x1
        unsigned char Reserved[6];// Offset=0x21 Size=0x6
        unsigned char InTreeByte;// Offset=0x27 Size=0x1
    };
    union // Size=0x8 (Id=0)
    {
        void * SessionState;// Offset=0x28 Size=0x8
        unsigned long SessionId;// Offset=0x28 Size=0x4
    };
    unsigned long SessionPad;// Offset=0x2c Size=0x4
    union // Size=0x50 (Id=0)
    {
        struct _RTL_RB_TREE OwnerTree;// Offset=0x30 Size=0x10
        struct _RTL_RB_TREE WaiterTree;// Offset=0x40 Size=0x10
        char CpuPriorityKey;// Offset=0x30 Size=0x1
        unsigned long long EntryLock;// Offset=0x50 Size=0x8
    };
    union _KLOCK_ENTRY_BOOST_BITMAP BoostBitmap;// Offset=0x58 Size=0x4
    unsigned long SparePad;// Offset=0x5c Size=0x4
};

struct _KTHREAD// Size=0x5f0 (Id=63)
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
    unsigned char Running;// Offset=0x71 Size=0x1
    unsigned char Alerted[2];// Offset=0x72 Size=0x2
    union // Size=0x4 (Id=0)
    {
        struct // Size=0x4 (Id=0)
        {
            unsigned long AutoBoostActive:1;// Offset=0x74 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long ReadyTransition:1;// Offset=0x74 Size=0x4 BitOffset=0x1 BitSize=0x1
            unsigned long WaitNext:1;// Offset=0x74 Size=0x4 BitOffset=0x2 BitSize=0x1
            unsigned long SystemAffinityActive:1;// Offset=0x74 Size=0x4 BitOffset=0x3 BitSize=0x1
            unsigned long Alertable:1;// Offset=0x74 Size=0x4 BitOffset=0x4 BitSize=0x1
            unsigned long UserStackWalkActive:1;// Offset=0x74 Size=0x4 BitOffset=0x5 BitSize=0x1
            unsigned long ApcInterruptRequest:1;// Offset=0x74 Size=0x4 BitOffset=0x6 BitSize=0x1
            unsigned long QuantumEndMigrate:1;// Offset=0x74 Size=0x4 BitOffset=0x7 BitSize=0x1
            unsigned long UmsDirectedSwitchEnable:1;// Offset=0x74 Size=0x4 BitOffset=0x8 BitSize=0x1
            unsigned long TimerActive:1;// Offset=0x74 Size=0x4 BitOffset=0x9 BitSize=0x1
            unsigned long SystemThread:1;// Offset=0x74 Size=0x4 BitOffset=0xa BitSize=0x1
            unsigned long ProcessDetachActive:1;// Offset=0x74 Size=0x4 BitOffset=0xb BitSize=0x1
            unsigned long CalloutActive:1;// Offset=0x74 Size=0x4 BitOffset=0xc BitSize=0x1
            unsigned long ScbReadyQueue:1;// Offset=0x74 Size=0x4 BitOffset=0xd BitSize=0x1
            unsigned long ApcQueueable:1;// Offset=0x74 Size=0x4 BitOffset=0xe BitSize=0x1
            unsigned long ReservedStackInUse:1;// Offset=0x74 Size=0x4 BitOffset=0xf BitSize=0x1
            unsigned long UmsPerformingSyscall:1;// Offset=0x74 Size=0x4 BitOffset=0x10 BitSize=0x1
            unsigned long TimerSuspended:1;// Offset=0x74 Size=0x4 BitOffset=0x11 BitSize=0x1
            unsigned long SuspendedWaitMode:1;// Offset=0x74 Size=0x4 BitOffset=0x12 BitSize=0x1
            unsigned long SuspendSchedulerApcWait:1;// Offset=0x74 Size=0x4 BitOffset=0x13 BitSize=0x1
            unsigned long Reserved:12;// Offset=0x74 Size=0x4 BitOffset=0x14 BitSize=0xc
        };
        long MiscFlags;// Offset=0x74 Size=0x4
    };
    union // Size=0x4 (Id=0)
    {
        struct // Size=0x4 (Id=0)
        {
            unsigned long BamQosLevel:2;// Offset=0x78 Size=0x4 BitOffset=0x0 BitSize=0x2
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
            unsigned long ThreadFlagsSpare:1;// Offset=0x78 Size=0x4 BitOffset=0x17 BitSize=0x1
            unsigned long EtwStackTraceApcInserted:8;// Offset=0x78 Size=0x4 BitOffset=0x18 BitSize=0x8
        };
        long ThreadFlags;// Offset=0x78 Size=0x4
    };
    unsigned char Tag;// Offset=0x7c Size=0x1
    unsigned char SystemHeteroCpuPolicy;// Offset=0x7d Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char UserHeteroCpuPolicy:7;// Offset=0x7e Size=0x1 BitOffset=0x0 BitSize=0x7
        unsigned char ExplicitSystemHeteroCpuPolicy:1;// Offset=0x7e Size=0x1 BitOffset=0x7 BitSize=0x1
    };
    unsigned char Spare0;// Offset=0x7f Size=0x1
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
    struct _UMS_CONTROL_BLOCK * Ucb;// Offset=0x1f0 Size=0x8
    struct _KUMS_CONTEXT_HEADER * Uch;// Offset=0x1f8 Size=0x8
    void * Spare21;// Offset=0x200 Size=0x8
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
    union // Size=0x10 (Id=0)
    {
        struct _GROUP_AFFINITY UserAffinity;// Offset=0x228 Size=0x10
        unsigned char UserAffinityFill[10];// Offset=0x228 Size=0xa
    };
    char PreviousMode;// Offset=0x232 Size=0x1
    char BasePriority;// Offset=0x233 Size=0x1
    union // Size=0x1 (Id=0)
    {
        char PriorityDecrement;// Offset=0x234 Size=0x1
        struct // Size=0x1 (Id=0)
        {
            unsigned char ForegroundBoost:4;// Offset=0x234 Size=0x1 BitOffset=0x0 BitSize=0x4
            unsigned char UnusualBoost:4;// Offset=0x234 Size=0x1 BitOffset=0x4 BitSize=0x4
        };
    };
    unsigned char Preempted;// Offset=0x235 Size=0x1
    unsigned char AdjustReason;// Offset=0x236 Size=0x1
    char AdjustIncrement;// Offset=0x237 Size=0x1
    unsigned long long AffinityVersion;// Offset=0x238 Size=0x8
    union // Size=0x10 (Id=0)
    {
        struct _GROUP_AFFINITY Affinity;// Offset=0x240 Size=0x10
        unsigned char AffinityFill[10];// Offset=0x240 Size=0xa
    };
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
        unsigned char SchedulerApcFill0[1];// Offset=0x288 Size=0x1
        unsigned char ResourceIndex;// Offset=0x289 Size=0x1
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
    unsigned char AbEntrySummary;// Offset=0x318 Size=0x1
    unsigned char AbWaitEntryCount;// Offset=0x319 Size=0x1
    unsigned char AbAllocationRegionCount;// Offset=0x31a Size=0x1
    unsigned char Spare20;// Offset=0x31b Size=0x1
    unsigned long SecureThreadCookie;// Offset=0x31c Size=0x4
    struct _KLOCK_ENTRY LockEntries[6];// Offset=0x320 Size=0x240
    struct _SINGLE_LIST_ENTRY PropagateBoostsEntry;// Offset=0x560 Size=0x8
    struct _SINGLE_LIST_ENTRY IoSelfBoostsEntry;// Offset=0x568 Size=0x8
    unsigned char PriorityFloorCounts[16];// Offset=0x570 Size=0x10
    unsigned long PriorityFloorSummary;// Offset=0x580 Size=0x4
    long AbCompletedIoBoostCount;// Offset=0x584 Size=0x4
    long AbCompletedIoQoSBoostCount;// Offset=0x588 Size=0x4
    short KeReferenceCount;// Offset=0x58c Size=0x2
    unsigned char AbOrphanedEntrySummary;// Offset=0x58e Size=0x1
    unsigned char AbOwnedEntryCount;// Offset=0x58f Size=0x1
    unsigned long ForegroundLossTime;// Offset=0x590 Size=0x4
    union // Size=0x10 (Id=0)
    {
        struct _LIST_ENTRY GlobalForegroundListEntry;// Offset=0x598 Size=0x10
        struct _SINGLE_LIST_ENTRY ForegroundDpcStackListEntry;// Offset=0x598 Size=0x8
    };
    unsigned long long InGlobalForegroundList;// Offset=0x5a0 Size=0x8
    long long ReadOperationCount;// Offset=0x5a8 Size=0x8
    long long WriteOperationCount;// Offset=0x5b0 Size=0x8
    long long OtherOperationCount;// Offset=0x5b8 Size=0x8
    long long ReadTransferCount;// Offset=0x5c0 Size=0x8
    long long WriteTransferCount;// Offset=0x5c8 Size=0x8
    long long OtherTransferCount;// Offset=0x5d0 Size=0x8
    struct _KSCB * QueuedScb;// Offset=0x5d8 Size=0x8
    unsigned long ThreadTimerDelay;// Offset=0x5e0 Size=0x4
    union // Size=0x4 (Id=0)
    {
        long ThreadFlags2;// Offset=0x5e4 Size=0x4
        struct // Size=0x4 (Id=0)
        {
            unsigned long PpmPolicy:2;// Offset=0x5e4 Size=0x4 BitOffset=0x0 BitSize=0x2
            unsigned long ThreadFlags2Reserved:30;// Offset=0x5e4 Size=0x4 BitOffset=0x2 BitSize=0x1e
        };
    };
    void * SchedulerAssist;// Offset=0x5e8 Size=0x8
};

struct _unnamed_31// Size=0x8 (Id=31)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=32)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_31 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _CLIENT_ID// Size=0x10 (Id=218)
{
    void * UniqueProcess;// Offset=0x0 Size=0x8
    void * UniqueThread;// Offset=0x8 Size=0x8
};

struct _KSEMAPHORE// Size=0x20 (Id=325)
{
    struct _DISPATCHER_HEADER Header;// Offset=0x0 Size=0x18
    long Limit;// Offset=0x18 Size=0x4
};

union _PS_CLIENT_SECURITY_CONTEXT// Size=0x8 (Id=373)
{
    unsigned long long ImpersonationData;// Offset=0x0 Size=0x8
    void * ImpersonationToken;// Offset=0x0 Size=0x8
    struct // Size=0x8 (Id=0)
    {
        unsigned long long ImpersonationLevel:2;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x2
        unsigned long long EffectiveOnly:1;// Offset=0x0 Size=0x8 BitOffset=0x2 BitSize=0x1
    };
};

struct _EX_RUNDOWN_REF// Size=0x8 (Id=189)
{
    union // Size=0x8 (Id=0)
    {
        unsigned long long Count;// Offset=0x0 Size=0x8
        void * Ptr;// Offset=0x0 Size=0x8
    };
};

struct _EX_PUSH_LOCK// Size=0x8 (Id=85)
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

struct _PS_PROPERTY_SET// Size=0x18 (Id=245)
{
    struct _LIST_ENTRY ListHead;// Offset=0x0 Size=0x10
    unsigned long long Lock;// Offset=0x10 Size=0x8
};

struct _ETHREAD// Size=0x818 (Id=102)
{
    struct _KTHREAD Tcb;// Offset=0x0 Size=0x5f0
    union _LARGE_INTEGER CreateTime;// Offset=0x5f0 Size=0x8
    union // Size=0x8 (Id=0)
    {
        union _LARGE_INTEGER ExitTime;// Offset=0x5f8 Size=0x8
        struct _LIST_ENTRY KeyedWaitChain;// Offset=0x5f8 Size=0x10
    };
    union // Size=0x10 (Id=0)
    {
        struct _LIST_ENTRY PostBlockList;// Offset=0x608 Size=0x10
        void * ForwardLinkShadow;// Offset=0x608 Size=0x8
    };
    void * StartAddress;// Offset=0x610 Size=0x8
    union // Size=0x620 (Id=0)
    {
        struct _TERMINATION_PORT * TerminationPort;// Offset=0x618 Size=0x8
        struct _ETHREAD * ReaperLink;// Offset=0x618 Size=0x8
        void * KeyedWaitValue;// Offset=0x618 Size=0x8
    };
    unsigned long long ActiveTimerListLock;// Offset=0x620 Size=0x8
    struct _LIST_ENTRY ActiveTimerListHead;// Offset=0x628 Size=0x10
    struct _CLIENT_ID Cid;// Offset=0x638 Size=0x10
    union // Size=0x20 (Id=0)
    {
        struct _KSEMAPHORE KeyedWaitSemaphore;// Offset=0x648 Size=0x20
        struct _KSEMAPHORE AlpcWaitSemaphore;// Offset=0x648 Size=0x20
    };
    union _PS_CLIENT_SECURITY_CONTEXT ClientSecurity;// Offset=0x668 Size=0x8
    struct _LIST_ENTRY IrpList;// Offset=0x670 Size=0x10
    unsigned long long TopLevelIrp;// Offset=0x680 Size=0x8
    struct _DEVICE_OBJECT * DeviceToVerify;// Offset=0x688 Size=0x8
    void * Win32StartAddress;// Offset=0x690 Size=0x8
    void * ChargeOnlySession;// Offset=0x698 Size=0x8
    void * LegacyPowerObject;// Offset=0x6a0 Size=0x8
    struct _LIST_ENTRY ThreadListEntry;// Offset=0x6a8 Size=0x10
    struct _EX_RUNDOWN_REF RundownProtect;// Offset=0x6b8 Size=0x8
    struct _EX_PUSH_LOCK ThreadLock;// Offset=0x6c0 Size=0x8
    unsigned long ReadClusterSize;// Offset=0x6c8 Size=0x4
    long MmLockOrdering;// Offset=0x6cc Size=0x4
    union // Size=0x4 (Id=0)
    {
        unsigned long CrossThreadFlags;// Offset=0x6d0 Size=0x4
        struct // Size=0x4 (Id=0)
        {
            unsigned long Terminated:1;// Offset=0x6d0 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long ThreadInserted:1;// Offset=0x6d0 Size=0x4 BitOffset=0x1 BitSize=0x1
            unsigned long HideFromDebugger:1;// Offset=0x6d0 Size=0x4 BitOffset=0x2 BitSize=0x1
            unsigned long ActiveImpersonationInfo:1;// Offset=0x6d0 Size=0x4 BitOffset=0x3 BitSize=0x1
            unsigned long HardErrorsAreDisabled:1;// Offset=0x6d0 Size=0x4 BitOffset=0x4 BitSize=0x1
            unsigned long BreakOnTermination:1;// Offset=0x6d0 Size=0x4 BitOffset=0x5 BitSize=0x1
            unsigned long SkipCreationMsg:1;// Offset=0x6d0 Size=0x4 BitOffset=0x6 BitSize=0x1
            unsigned long SkipTerminationMsg:1;// Offset=0x6d0 Size=0x4 BitOffset=0x7 BitSize=0x1
            unsigned long CopyTokenOnOpen:1;// Offset=0x6d0 Size=0x4 BitOffset=0x8 BitSize=0x1
            unsigned long ThreadIoPriority:3;// Offset=0x6d0 Size=0x4 BitOffset=0x9 BitSize=0x3
            unsigned long ThreadPagePriority:3;// Offset=0x6d0 Size=0x4 BitOffset=0xc BitSize=0x3
            unsigned long RundownFail:1;// Offset=0x6d0 Size=0x4 BitOffset=0xf BitSize=0x1
            unsigned long UmsForceQueueTermination:1;// Offset=0x6d0 Size=0x4 BitOffset=0x10 BitSize=0x1
            unsigned long IndirectCpuSets:1;// Offset=0x6d0 Size=0x4 BitOffset=0x11 BitSize=0x1
            unsigned long DisableDynamicCodeOptOut:1;// Offset=0x6d0 Size=0x4 BitOffset=0x12 BitSize=0x1
            unsigned long ExplicitCaseSensitivity:1;// Offset=0x6d0 Size=0x4 BitOffset=0x13 BitSize=0x1
            unsigned long PicoNotifyExit:1;// Offset=0x6d0 Size=0x4 BitOffset=0x14 BitSize=0x1
            unsigned long DbgWerUserReportActive:1;// Offset=0x6d0 Size=0x4 BitOffset=0x15 BitSize=0x1
            unsigned long ForcedSelfTrimActive:1;// Offset=0x6d0 Size=0x4 BitOffset=0x16 BitSize=0x1
            unsigned long ReservedCrossThreadFlags:9;// Offset=0x6d0 Size=0x4 BitOffset=0x17 BitSize=0x9
        };
    };
    union // Size=0x4 (Id=0)
    {
        unsigned long SameThreadPassiveFlags;// Offset=0x6d4 Size=0x4
        struct // Size=0x4 (Id=0)
        {
            unsigned long ActiveExWorker:1;// Offset=0x6d4 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long MemoryMaker:1;// Offset=0x6d4 Size=0x4 BitOffset=0x1 BitSize=0x1
            unsigned long StoreLockThread:2;// Offset=0x6d4 Size=0x4 BitOffset=0x2 BitSize=0x2
            unsigned long ClonedThread:1;// Offset=0x6d4 Size=0x4 BitOffset=0x4 BitSize=0x1
            unsigned long KeyedEventInUse:1;// Offset=0x6d4 Size=0x4 BitOffset=0x5 BitSize=0x1
            unsigned long SelfTerminate:1;// Offset=0x6d4 Size=0x4 BitOffset=0x6 BitSize=0x1
            unsigned long RespectIoPriority:1;// Offset=0x6d4 Size=0x4 BitOffset=0x7 BitSize=0x1
            unsigned long ActivePageLists:1;// Offset=0x6d4 Size=0x4 BitOffset=0x8 BitSize=0x1
            unsigned long SecureContext:1;// Offset=0x6d4 Size=0x4 BitOffset=0x9 BitSize=0x1
            unsigned long ZeroPageThread:1;// Offset=0x6d4 Size=0x4 BitOffset=0xa BitSize=0x1
            unsigned long ReservedSameThreadPassiveFlags:21;// Offset=0x6d4 Size=0x4 BitOffset=0xb BitSize=0x15
        };
    };
    union // Size=0x4 (Id=0)
    {
        unsigned long SameThreadApcFlags;// Offset=0x6d8 Size=0x4
        struct // Size=0x2 (Id=0)
        {
            unsigned char OwnsProcessAddressSpaceExclusive:1;// Offset=0x6d8 Size=0x1 BitOffset=0x0 BitSize=0x1
            unsigned char OwnsProcessAddressSpaceShared:1;// Offset=0x6d8 Size=0x1 BitOffset=0x1 BitSize=0x1
            unsigned char HardFaultBehavior:1;// Offset=0x6d8 Size=0x1 BitOffset=0x2 BitSize=0x1
            unsigned char StartAddressInvalid:1;// Offset=0x6d8 Size=0x1 BitOffset=0x3 BitSize=0x1
            unsigned char EtwCalloutActive:1;// Offset=0x6d8 Size=0x1 BitOffset=0x4 BitSize=0x1
            unsigned char SuppressSymbolLoad:1;// Offset=0x6d8 Size=0x1 BitOffset=0x5 BitSize=0x1
            unsigned char Prefetching:1;// Offset=0x6d8 Size=0x1 BitOffset=0x6 BitSize=0x1
            unsigned char OwnsVadExclusive:1;// Offset=0x6d8 Size=0x1 BitOffset=0x7 BitSize=0x1
            unsigned char SystemPagePriorityActive:1;// Offset=0x6d9 Size=0x1 BitOffset=0x0 BitSize=0x1
            unsigned char SystemPagePriority:3;// Offset=0x6d9 Size=0x1 BitOffset=0x1 BitSize=0x3
            unsigned char AllowWritesToExecutableMemory:1;// Offset=0x6d9 Size=0x1 BitOffset=0x4 BitSize=0x1
        };
    };
    unsigned char CacheManagerActive;// Offset=0x6dc Size=0x1
    unsigned char DisablePageFaultClustering;// Offset=0x6dd Size=0x1
    unsigned char ActiveFaultCount;// Offset=0x6de Size=0x1
    unsigned char LockOrderState;// Offset=0x6df Size=0x1
    unsigned long long AlpcMessageId;// Offset=0x6e0 Size=0x8
    union // Size=0x8 (Id=0)
    {
        void * AlpcMessage;// Offset=0x6e8 Size=0x8
        unsigned long AlpcReceiveAttributeSet;// Offset=0x6e8 Size=0x4
    };
    struct _LIST_ENTRY AlpcWaitListEntry;// Offset=0x6f0 Size=0x10
    long ExitStatus;// Offset=0x700 Size=0x4
    unsigned long CacheManagerCount;// Offset=0x704 Size=0x4
    unsigned long IoBoostCount;// Offset=0x708 Size=0x4
    unsigned long IoQoSBoostCount;// Offset=0x70c Size=0x4
    unsigned long IoQoSThrottleCount;// Offset=0x710 Size=0x4
    struct _LIST_ENTRY BoostList;// Offset=0x718 Size=0x10
    struct _LIST_ENTRY DeboostList;// Offset=0x728 Size=0x10
    unsigned long long BoostListLock;// Offset=0x738 Size=0x8
    unsigned long long IrpListLock;// Offset=0x740 Size=0x8
    void * ReservedForSynchTracking;// Offset=0x748 Size=0x8
    struct _SINGLE_LIST_ENTRY CmCallbackListHead;// Offset=0x750 Size=0x8
    struct _GUID * ActivityId;// Offset=0x758 Size=0x8
    struct _SINGLE_LIST_ENTRY SeLearningModeListHead;// Offset=0x760 Size=0x8
    void * VerifierContext;// Offset=0x768 Size=0x8
    unsigned long KernelStackReference;// Offset=0x770 Size=0x4
    void * AdjustedClientToken;// Offset=0x778 Size=0x8
    void * WorkOnBehalfThread;// Offset=0x780 Size=0x8
    struct _PS_PROPERTY_SET PropertySet;// Offset=0x788 Size=0x18
    void * PicoContext;// Offset=0x7a0 Size=0x8
    unsigned long long UserFsBase;// Offset=0x7a8 Size=0x8
    unsigned long long UserGsBase;// Offset=0x7b0 Size=0x8
    struct _THREAD_ENERGY_VALUES * EnergyValues;// Offset=0x7b8 Size=0x8
    void * CmDbgInfo;// Offset=0x7c0 Size=0x8
    union // Size=0x8 (Id=0)
    {
        unsigned long long SelectedCpuSets;// Offset=0x7c8 Size=0x8
        unsigned long long * SelectedCpuSetsIndirect;// Offset=0x7c8 Size=0x8
    };
    struct _EJOB * Silo;// Offset=0x7d0 Size=0x8
    struct _UNICODE_STRING * ThreadName;// Offset=0x7d8 Size=0x8
    struct _CONTEXT * SetContextState;// Offset=0x7e0 Size=0x8
    unsigned long LastExpectedRunTime;// Offset=0x7e8 Size=0x4
    struct _LIST_ENTRY OwnerEntryListHead;// Offset=0x7f0 Size=0x10
    unsigned long long DisownedOwnerEntryListLock;// Offset=0x800 Size=0x8
    struct _LIST_ENTRY DisownedOwnerEntryListHead;// Offset=0x808 Size=0x10
};
