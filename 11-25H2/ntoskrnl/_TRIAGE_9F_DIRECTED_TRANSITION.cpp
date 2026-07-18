struct _TRIAGE_9F_DIRECTED_TRANSITION// Size=0x48 (Id=2266)
{
    unsigned short Signature;// Offset=0x0 Size=0x2
    unsigned short Revision;// Offset=0x2 Size=0x2
    struct _LIST_ENTRY * IrpList;// Offset=0x8 Size=0x8
    struct _LIST_ENTRY * ThreadList;// Offset=0x10 Size=0x8
    struct _TRIAGE_EX_WORK_QUEUE * DelayedWorkQueue;// Offset=0x18 Size=0x8
    struct _TRIAGE_EX_WORK_QUEUE * DelayedIoWorkQueue;// Offset=0x20 Size=0x8
    unsigned long WatchdogTimeout;// Offset=0x28 Size=0x4
    unsigned long long WatchdogStartTimestamp;// Offset=0x30 Size=0x8
    struct _KTHREAD * WatchdogStartThread;// Offset=0x38 Size=0x8
    unsigned long DirectedTransitionStatus;// Offset=0x40 Size=0x4
    unsigned long DirectedTransitionCallCount;// Offset=0x44 Size=0x4
};
