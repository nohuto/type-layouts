struct _LIST_ENTRY// Size=0x10 (Id=3)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

union _KPRIORITY_STATE// Size=0x1 (Id=762)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char Priority:7;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x7
        unsigned char IsolationWidth:1;// Offset=0x0 Size=0x1 BitOffset=0x7 BitSize=0x1
    };
    unsigned char AllFields;// Offset=0x0 Size=0x1
};

union _KHETERO_STATE// Size=0x1 (Id=2520)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char Qos:3;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x3
        unsigned char WorkloadClass:3;// Offset=0x0 Size=0x1 BitOffset=0x3 BitSize=0x3
        unsigned char RunningType:1;// Offset=0x0 Size=0x1 BitOffset=0x6 BitSize=0x1
    };
    unsigned char AllFields;// Offset=0x0 Size=0x1
};

struct _SINGLE_LIST_ENTRY// Size=0x8 (Id=519)
{
    struct _SINGLE_LIST_ENTRY * Next;// Offset=0x0 Size=0x8
};

struct _KDPC// Size=0x40 (Id=83)
{
    union // Size=0x4 (Id=0)
    {
        unsigned long TargetInfoAsUlong;// Offset=0x0 Size=0x4
        unsigned char Type;// Offset=0x0 Size=0x1
        unsigned char Importance;// Offset=0x1 Size=0x1
        unsigned short Number;// Offset=0x2 Size=0x2
    };
    struct _SINGLE_LIST_ENTRY DpcListEntry;// Offset=0x8 Size=0x8
    unsigned long long ProcessorHistory;// Offset=0x10 Size=0x8
    void  ( * DeferredRoutine)(struct _KDPC * ,void * ,void * ,void * );// Offset=0x18 Size=0x8
    void * DeferredContext;// Offset=0x20 Size=0x8
    void * SystemArgument1;// Offset=0x28 Size=0x8
    void * SystemArgument2;// Offset=0x30 Size=0x8
    void * DpcData;// Offset=0x38 Size=0x8
};

struct _KSHARED_READY_QUEUE_HETERO_STATISTICS// Size=0x380 (Id=2334)
{
    unsigned long long ExpectedRuntimeByClass[7][2][8];// Offset=0x0 Size=0x380
};

struct _KSHARED_READY_QUEUE_AFFINITY_STATISTICS// Size=0x8 (Id=2033)
{
    unsigned long long AffinitySummary;// Offset=0x0 Size=0x8
};

struct _KSHARED_READY_QUEUE// Size=0x700 (Id=1798)
{
    unsigned long long Lock;// Offset=0x0 Size=0x8
    unsigned long ReadySummary;// Offset=0x8 Size=0x4
    unsigned long ReadyThreadCount;// Offset=0xc Size=0x4
    unsigned long long ReadyQueueExpectedRunTime;// Offset=0x10 Size=0x8
    unsigned long long Spare1[5];// Offset=0x18 Size=0x28
    struct _LIST_ENTRY ReadyListHead[32];// Offset=0x40 Size=0x200
    union _KPRIORITY_STATE RunningSummary[64];// Offset=0x240 Size=0x40
    union _KHETERO_STATE HeteroRunningSummary[64];// Offset=0x280 Size=0x40
    unsigned char Span;// Offset=0x2c0 Size=0x1
    unsigned char LowProcIndex;// Offset=0x2c1 Size=0x1
    unsigned char QueueIndex;// Offset=0x2c2 Size=0x1
    unsigned char NormalPriorityQueueIndex;// Offset=0x2c3 Size=0x1
    unsigned char ProcCount;// Offset=0x2c4 Size=0x1
    unsigned char ScanOwner;// Offset=0x2c5 Size=0x1
    unsigned short Group;// Offset=0x2c6 Size=0x2
    unsigned long long Affinity;// Offset=0x2c8 Size=0x8
    struct _KSCHEDULER_SUBNODE * SubNode;// Offset=0x2d0 Size=0x8
    unsigned long long Spare2[3];// Offset=0x2d8 Size=0x18
    unsigned long long SoftParkElectionLock;// Offset=0x300 Size=0x8
    unsigned long long SoftParkElectionGeneration;// Offset=0x308 Size=0x8
    unsigned long SoftParkElectionThreadCount;// Offset=0x310 Size=0x4
    unsigned char SoftParkElectionScheduled;// Offset=0x314 Size=0x1
    unsigned char Spare4[3];// Offset=0x315 Size=0x3
    unsigned long long SoftParkElectionRunTime;// Offset=0x318 Size=0x8
    struct _KDPC SoftParkElectionDpc;// Offset=0x320 Size=0x40
    struct _KSHARED_READY_QUEUE_HETERO_STATISTICS SoftParkElectionHeteroStats;// Offset=0x360 Size=0x380
    struct _KSHARED_READY_QUEUE_AFFINITY_STATISTICS SoftParkElectionAffinityStats;// Offset=0x6e0 Size=0x8
    unsigned long long ForceParkDutyCyclingArmedMask;// Offset=0x6e8 Size=0x8
};
