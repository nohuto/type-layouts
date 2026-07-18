struct _GROUP_AFFINITY// Size=0x10 (Id=196)
{
    unsigned long long Mask;// Offset=0x0 Size=0x8
    unsigned short Group;// Offset=0x8 Size=0x2
    unsigned short Reserved[3];// Offset=0xa Size=0x6
};

struct _flags// Size=0x1 (Id=516)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char Removable:1;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char GroupAssigned:1;// Offset=0x0 Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char GroupCommitted:1;// Offset=0x0 Size=0x1 BitOffset=0x2 BitSize=0x1
        unsigned char GroupAssignmentFixed:1;// Offset=0x0 Size=0x1 BitOffset=0x3 BitSize=0x1
        unsigned char Fill:4;// Offset=0x0 Size=0x1 BitOffset=0x4 BitSize=0x4
    };
};

struct _KHETERO_PROCESSOR_SET// Size=0x10 (Id=498)
{
    unsigned long long PreferredMask;// Offset=0x0 Size=0x8
    unsigned long long AvailableMask;// Offset=0x8 Size=0x8
};

struct _KNODE// Size=0x100 (Id=80)
{
    unsigned long long IdleNonParkedCpuSet;// Offset=0x0 Size=0x8
    unsigned long long IdleSmtSet;// Offset=0x8 Size=0x8
    unsigned long long IdleCpuSet;// Offset=0x10 Size=0x8
    unsigned long long DeepIdleSet;// Offset=0x40 Size=0x8
    unsigned long long IdleConstrainedSet;// Offset=0x48 Size=0x8
    unsigned long long NonParkedSet;// Offset=0x50 Size=0x8
    long ParkLock;// Offset=0x58 Size=0x4
    unsigned long Seed;// Offset=0x5c Size=0x4
    unsigned long SiblingMask;// Offset=0x80 Size=0x4
    union // Size=0x10 (Id=0)
    {
        struct _GROUP_AFFINITY Affinity;// Offset=0x88 Size=0x10
        unsigned char AffinityFill[10];// Offset=0x88 Size=0xa
    };
    unsigned short NodeNumber;// Offset=0x92 Size=0x2
    unsigned short PrimaryNodeNumber;// Offset=0x94 Size=0x2
    unsigned char Stride;// Offset=0x96 Size=0x1
    unsigned char Spare0;// Offset=0x97 Size=0x1
    unsigned long long SharedReadyQueueLeaders;// Offset=0x98 Size=0x8
    unsigned long ProximityId;// Offset=0xa0 Size=0x4
    unsigned long Lowest;// Offset=0xa4 Size=0x4
    unsigned long Highest;// Offset=0xa8 Size=0x4
    unsigned char MaximumProcessors;// Offset=0xac Size=0x1
    struct _flags Flags;// Offset=0xad Size=0x1
    unsigned char Spare10;// Offset=0xae Size=0x1
    struct _KHETERO_PROCESSOR_SET HeteroSets[5];// Offset=0xb0 Size=0x50
};

struct _LIST_ENTRY// Size=0x10 (Id=20)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _DISPATCHER_HEADER// Size=0x18 (Id=192)
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

struct _KPRIQUEUE// Size=0x2b0 (Id=340)
{
    struct _DISPATCHER_HEADER Header;// Offset=0x0 Size=0x18
    struct _LIST_ENTRY EntryListHead[32];// Offset=0x18 Size=0x200
    long CurrentCount[32];// Offset=0x218 Size=0x80
    unsigned long MaximumCount;// Offset=0x298 Size=0x4
    struct _LIST_ENTRY ThreadListHead;// Offset=0x2a0 Size=0x10
};

enum _EXQUEUEINDEX
{
    ExPoolUntrusted=0,
    ExPoolTrusted=1,
    ExPoolMax=8
};

struct _EX_WORK_QUEUE// Size=0x2d0 (Id=239)
{
    struct _KPRIQUEUE WorkPriQueue;// Offset=0x0 Size=0x2b0
    struct _ENODE * Node;// Offset=0x2b0 Size=0x8
    unsigned long WorkItemsProcessed;// Offset=0x2b8 Size=0x4
    unsigned long WorkItemsProcessedLastPass;// Offset=0x2bc Size=0x4
    long ThreadCount;// Offset=0x2c0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        long MinThreads:31;// Offset=0x2c4 Size=0x4 BitOffset=0x0 BitSize=0x1f
        unsigned long TryFailed:1;// Offset=0x2c4 Size=0x4 BitOffset=0x1f BitSize=0x1
    };
    long MaxThreads;// Offset=0x2c8 Size=0x4
    enum _EXQUEUEINDEX QueueIndex;// Offset=0x2cc Size=0x4
};

struct _KEVENT// Size=0x18 (Id=59)
{
    struct _DISPATCHER_HEADER Header;// Offset=0x0 Size=0x18
};

struct _unnamed_8// Size=0x8 (Id=8)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    unsigned long HighPart;// Offset=0x4 Size=0x4
};

union _ULARGE_INTEGER// Size=0x8 (Id=9)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    unsigned long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_8 u;// Offset=0x0 Size=0x8
    unsigned long long QuadPart;// Offset=0x0 Size=0x8
};

struct _KTIMER// Size=0x40 (Id=400)
{
    struct _DISPATCHER_HEADER Header;// Offset=0x0 Size=0x18
    union _ULARGE_INTEGER DueTime;// Offset=0x18 Size=0x8
    struct _LIST_ENTRY TimerListEntry;// Offset=0x20 Size=0x10
    struct _KDPC * Dpc;// Offset=0x30 Size=0x8
    unsigned long Processor;// Offset=0x38 Size=0x4
    unsigned long Period;// Offset=0x3c Size=0x4
};

struct _KWAIT_BLOCK// Size=0x30 (Id=206)
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

struct _ENODE// Size=0x540 (Id=81)
{
    struct _KNODE Ncb;// Offset=0x0 Size=0x100
    struct _EX_WORK_QUEUE * ExWorkQueues[8];// Offset=0x100 Size=0x40
    struct _EX_WORK_QUEUE ExWorkQueue;// Offset=0x140 Size=0x2d0
    struct _KEVENT ExpThreadSetManagerEvent;// Offset=0x410 Size=0x18
    struct _KTIMER ExpDeadlockTimer;// Offset=0x428 Size=0x40
    struct _KEVENT ExpThreadReaperEvent;// Offset=0x468 Size=0x18
    struct _KWAIT_BLOCK WaitBlocks[3];// Offset=0x480 Size=0x90
    struct _ETHREAD * ExpWorkerThreadBalanceManagerPtr;// Offset=0x510 Size=0x8
    unsigned long ExpWorkerSeed;// Offset=0x518 Size=0x4
    union // Size=0x4 (Id=0)
    {
        struct // Size=0x4 (Id=0)
        {
            unsigned long ExWorkerFullInit:1;// Offset=0x51c Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long ExWorkerStructInit:1;// Offset=0x51c Size=0x4 BitOffset=0x1 BitSize=0x1
        };
        unsigned long ExWorkerFlags;// Offset=0x51c Size=0x4
    };
};
