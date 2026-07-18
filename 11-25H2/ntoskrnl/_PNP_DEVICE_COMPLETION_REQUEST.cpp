struct _LIST_ENTRY// Size=0x10 (Id=3)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

enum _PNP_DEVNODE_STATE
{
    DeviceNodeUnspecified=768,
    DeviceNodeUninitialized=769,
    DeviceNodeUninitializedPending=770,
    DeviceNodeInitializedPending=771,
    DeviceNodeInitialized=772,
    DeviceNodeDriversAdded=773,
    DeviceNodeResourcesAssigned=774,
    DeviceNodeStartPending=775,
    DeviceNodeStartCompletion=776,
    DeviceNodeStartPostWork=777,
    DeviceNodeStarted=778,
    DeviceNodeQueryStopped=779,
    DeviceNodeStopped=780,
    DeviceNodeRestartCompletion=781,
    DeviceNodeEnumeratePending=782,
    DeviceNodeEnumerateCompletion=783,
    DeviceNodeAwaitingQueuedDeletion=784,
    DeviceNodeAwaitingQueuedRemoval=785,
    DeviceNodeQueryRemoved=786,
    DeviceNodeRemovePendingCloses=787,
    DeviceNodeRemoved=788,
    DeviceNodeDeletePendingCloses=789,
    DeviceNodeDeleted=790,
    MaxDeviceNodeState=791
};

struct _PNP_DEVICE_COMPLETION_REQUEST// Size=0x48 (Id=1845)
{
    struct _LIST_ENTRY ListEntry;// Offset=0x0 Size=0x10
    struct _DEVICE_NODE * DeviceNode;// Offset=0x10 Size=0x8
    void * Context;// Offset=0x18 Size=0x8
    enum _PNP_DEVNODE_STATE CompletionState;// Offset=0x20 Size=0x4
    unsigned long IrpPended;// Offset=0x24 Size=0x4
    long Status;// Offset=0x28 Size=0x4
    void * Information;// Offset=0x30 Size=0x8
    long ReferenceCount;// Offset=0x38 Size=0x4
    struct _PNP_WATCHDOG * Watchdog;// Offset=0x40 Size=0x8
};
