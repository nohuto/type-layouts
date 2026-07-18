enum _KISOLATION_WIDTH
{
    KiIsolationWidthLogicalProcessor=0,
    KiIsolationWidthCore=1,
    KiIsolationWidthMax=2
};

struct _KI_RESCHEDULE_CONTEXT_ENTRY// Size=0x28 (Id=2564)
{
    struct _KPRCB * Prcb;// Offset=0x0 Size=0x8
    struct _KSHARED_READY_QUEUE * SharedReadyQueue;// Offset=0x8 Size=0x8
    struct _KTHREAD * CompareThread;// Offset=0x10 Size=0x8
    struct _KTHREAD * NewThread;// Offset=0x18 Size=0x8
    union // Size=0x1 (Id=0)
    {
        struct // Size=0x1 (Id=0)
        {
            unsigned char Idle:1;// Offset=0x20 Size=0x1 BitOffset=0x0 BitSize=0x1
            unsigned char IsolationWidth:1;// Offset=0x20 Size=0x1 BitOffset=0x1 BitSize=0x1
            unsigned char CanCheckDeferredPreemption:1;// Offset=0x20 Size=0x1 BitOffset=0x2 BitSize=0x1
            unsigned char PartialYield:1;// Offset=0x20 Size=0x1 BitOffset=0x3 BitSize=0x1
            unsigned char FullYield:1;// Offset=0x20 Size=0x1 BitOffset=0x4 BitSize=0x1
            unsigned char IsolationPlaceholder:1;// Offset=0x20 Size=0x1 BitOffset=0x5 BitSize=0x1
            unsigned char SpareCompateThreadStateFlags:2;// Offset=0x20 Size=0x1 BitOffset=0x6 BitSize=0x2
        };
        unsigned char AllCompareThreadStateFlags;// Offset=0x20 Size=0x1
    };
    union // Size=0x1 (Id=0)
    {
        struct // Size=0x1 (Id=0)
        {
            unsigned char ReadyTransition:1;// Offset=0x21 Size=0x1 BitOffset=0x0 BitSize=0x1
            unsigned char SpareNewThreadStateFlags:7;// Offset=0x21 Size=0x1 BitOffset=0x1 BitSize=0x7
        };
        unsigned char AllNewThreadStateFlags;// Offset=0x21 Size=0x1
    };
    union // Size=0x1 (Id=0)
    {
        struct // Size=0x1 (Id=0)
        {
            unsigned char SkipStandbyReschedule:1;// Offset=0x22 Size=0x1 BitOffset=0x0 BitSize=0x1
            unsigned char DoNotSetPreemptionBit:1;// Offset=0x22 Size=0x1 BitOffset=0x1 BitSize=0x1
            unsigned char SpareCommitFlags:6;// Offset=0x22 Size=0x1 BitOffset=0x2 BitSize=0x6
        };
        unsigned char AllCommitFlags;// Offset=0x22 Size=0x1
    };
    union // Size=0x1 (Id=0)
    {
        struct // Size=0x1 (Id=0)
        {
            unsigned char NewThreadReferenced:1;// Offset=0x23 Size=0x1 BitOffset=0x0 BitSize=0x1
            unsigned char LogEtw:1;// Offset=0x23 Size=0x1 BitOffset=0x1 BitSize=0x1
            unsigned char IssuePriorityKick:1;// Offset=0x23 Size=0x1 BitOffset=0x2 BitSize=0x1
            unsigned char DispatchInterruptIfHalted:1;// Offset=0x23 Size=0x1 BitOffset=0x3 BitSize=0x1
            unsigned char DispatchInterruptAlways:1;// Offset=0x23 Size=0x1 BitOffset=0x4 BitSize=0x1
            unsigned char SpareCompletionFlags:3;// Offset=0x23 Size=0x1 BitOffset=0x5 BitSize=0x3
        };
        unsigned char AllCompletionFlags;// Offset=0x23 Size=0x1
    };
    char KickPriority;// Offset=0x24 Size=0x1
    unsigned char Spare[3];// Offset=0x25 Size=0x3
};

struct _KSPIN_LOCK_QUEUE// Size=0x10 (Id=179)
{
    struct _KSPIN_LOCK_QUEUE * Next;// Offset=0x0 Size=0x8
    unsigned long long * Lock;// Offset=0x8 Size=0x8
};

struct _KI_SHARED_READY_QUEUE_LOCK_HANDLE// Size=0x10 (Id=2426)
{
    struct _KSPIN_LOCK_QUEUE Queue;// Offset=0x0 Size=0x10
};

struct _KI_RESCHEDULE_CONTEXT// Size=0xf0 (Id=2031)
{
    unsigned char ProcessorCount;// Offset=0x0 Size=0x1
    unsigned char ScanStart;// Offset=0x1 Size=0x1
    enum _KISOLATION_WIDTH MaximumThreadIsolationWidth;// Offset=0x4 Size=0x4
    enum _KISOLATION_WIDTH IsolationWidth;// Offset=0x8 Size=0x4
    struct _KI_RESCHEDULE_CONTEXT_ENTRY ProcessorEntries[4];// Offset=0x10 Size=0xa0
    struct _KI_SHARED_READY_QUEUE_LOCK_HANDLE SharedReadyLockQueues[4];// Offset=0xb0 Size=0x40
};
