struct _KI_RESCHEDULE_CONTEXT_ENTRY// Size=0x28 (Id=2444)
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
