struct _LIST_ENTRY// Size=0x10 (Id=23)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

enum _PNP_DEVNODE_STATE
{
    DeviceNodeUnspecified=768,
    DeviceNodeUninitialized=769,
    DeviceNodeInitialized=770,
    DeviceNodeDriversAdded=771,
    DeviceNodeResourcesAssigned=772,
    DeviceNodeStartPending=773,
    DeviceNodeStartCompletion=774,
    DeviceNodeStartPostWork=775,
    DeviceNodeStarted=776,
    DeviceNodeQueryStopped=777,
    DeviceNodeStopped=778,
    DeviceNodeRestartCompletion=779,
    DeviceNodeEnumeratePending=780,
    DeviceNodeEnumerateCompletion=781,
    DeviceNodeAwaitingQueuedDeletion=782,
    DeviceNodeAwaitingQueuedRemoval=783,
    DeviceNodeQueryRemoved=784,
    DeviceNodeRemovePendingCloses=785,
    DeviceNodeRemoved=786,
    DeviceNodeDeletePendingCloses=787,
    DeviceNodeDeleted=788,
    MaxDeviceNodeState=789
};

struct _PNP_DEVICE_COMPLETION_REQUEST// Size=0x40 (Id=1089)
{
    struct _LIST_ENTRY ListEntry;// Offset=0x0 Size=0x10
    struct _DEVICE_NODE * DeviceNode;// Offset=0x10 Size=0x8
    void * Context;// Offset=0x18 Size=0x8
    enum _PNP_DEVNODE_STATE CompletionState;// Offset=0x20 Size=0x4
    unsigned long IrpPended;// Offset=0x24 Size=0x4
    long Status;// Offset=0x28 Size=0x4
    void * Information;// Offset=0x30 Size=0x8
    long ReferenceCount;// Offset=0x38 Size=0x4
};
