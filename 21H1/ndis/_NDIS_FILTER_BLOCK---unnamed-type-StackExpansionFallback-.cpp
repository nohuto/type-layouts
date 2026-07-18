struct _LIST_ENTRY// Size=0x10 (Id=31)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _WORK_QUEUE_ITEM// Size=0x20 (Id=84)
{
    struct _LIST_ENTRY List;// Offset=0x0 Size=0x10
    void  ( * WorkerRoutine)(void * );// Offset=0x10 Size=0x8
    void * Parameter;// Offset=0x18 Size=0x8
};

struct _PENDING_STACK_EXPANSION_FALLBACK_WORK// Size=0x38 (Id=1211)
{
    unsigned char IssueOidRequest;// Offset=0x0 Size=0x1
    unsigned char CompleteOidRequest;// Offset=0x1 Size=0x1
    struct _NDIS_OID_REQUEST * DirectOidRequestsToComplete;// Offset=0x8 Size=0x8
    struct _NDIS_STATUS_INDICATION * StatusIndications;// Offset=0x10 Size=0x8
    struct _NET_PNP_EVENT_NOTIFICATION * NetPnPEvents;// Offset=0x18 Size=0x8
    struct _NET_DEVICE_PNP_EVENT * DevicePnPEvents;// Offset=0x20 Size=0x8
    struct _NET_BUFFER_LIST * SentNblsToComplete;// Offset=0x28 Size=0x8
    struct _NET_BUFFER_LIST * ReceivedNblsToComplete;// Offset=0x30 Size=0x8
};

struct _NDIS_FILTER_BLOCK::<unnamed-type-StackExpansionFallback>// Size=0x60 (Id=857)
{
    struct _WORK_QUEUE_ITEM WorkItem;// Offset=0x0 Size=0x20
    unsigned char WorkItemQueued;// Offset=0x20 Size=0x1
    struct _PENDING_STACK_EXPANSION_FALLBACK_WORK PendingWork;// Offset=0x28 Size=0x38
};
