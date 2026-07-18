struct _LIST_ENTRY// Size=0x10 (Id=35)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

union _KPRIORITY_STATE// Size=0x1 (Id=330)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char Priority:7;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x7
        unsigned char IsolationWidth:1;// Offset=0x0 Size=0x1 BitOffset=0x7 BitSize=0x1
    };
    unsigned char AllFields;// Offset=0x0 Size=0x1
};

union _KHETERO_STATE// Size=0x1 (Id=750)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char Qos:3;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x3
        unsigned char WorkloadClass:3;// Offset=0x0 Size=0x1 BitOffset=0x3 BitSize=0x3
        unsigned char RunningType:1;// Offset=0x0 Size=0x1 BitOffset=0x6 BitSize=0x1
    };
    unsigned char AllFields;// Offset=0x0 Size=0x1
};

struct _KSHARED_READY_QUEUE// Size=0x2b0 (Id=524)
{
    unsigned long long Lock;// Offset=0x0 Size=0x8
    unsigned long ReadySummary;// Offset=0x8 Size=0x4
    struct _LIST_ENTRY ReadyListHead[32];// Offset=0x10 Size=0x200
    union _KPRIORITY_STATE RunningSummary[64];// Offset=0x210 Size=0x40
    union _KHETERO_STATE HeteroRunningSummary[64];// Offset=0x250 Size=0x40
    unsigned char Span;// Offset=0x290 Size=0x1
    unsigned char LowProcIndex;// Offset=0x291 Size=0x1
    unsigned char QueueIndex;// Offset=0x292 Size=0x1
    unsigned char NormalPriorityQueueIndex;// Offset=0x293 Size=0x1
    unsigned char ProcCount;// Offset=0x294 Size=0x1
    unsigned char ScanOwner;// Offset=0x295 Size=0x1
    unsigned char Spare[2];// Offset=0x296 Size=0x2
    unsigned long long Affinity;// Offset=0x298 Size=0x8
    unsigned long ReadyThreadCount;// Offset=0x2a0 Size=0x4
    unsigned long long ReadyQueueExpectedRunTime;// Offset=0x2a8 Size=0x8
};
