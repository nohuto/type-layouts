enum _NDIS_M_PERIODIC_RECEIVE_STATE
{
    PeriodicReceivesOff=0,
    PeriodicReceivesOn=1,
    PeriodicReceivesBlocked=2
};

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

struct _NDIS_M_PERIODIC_RECEIVES// Size=0x88 (Id=501)
{
    struct _NDIS_MINIPORT_BLOCK * NextMiniportBlock;// Offset=0x0 Size=0x8
    enum _NDIS_M_PERIODIC_RECEIVE_STATE State;// Offset=0x8 Size=0x4
    unsigned long long SpinLock;// Offset=0x10 Size=0x8
    void * LockThread;// Offset=0x18 Size=0x8
    long NumMQueuedNbls;// Offset=0x20 Size=0x4
    long NumNblsDequeued;// Offset=0x24 Size=0x4
    struct _NET_BUFFER_LIST * QueuedHead;// Offset=0x28 Size=0x8
    struct _NET_BUFFER_LIST * QueuedTail;// Offset=0x30 Size=0x8
    unsigned long BoundToIP;// Offset=0x38 Size=0x4
    unsigned char Paused;// Offset=0x3c Size=0x1
    long NblsAllocated;// Offset=0x40 Size=0x4
    unsigned long TrackingQueued;// Offset=0x44 Size=0x4
    unsigned long TrackingDequeued;// Offset=0x48 Size=0x4
    unsigned long TrackingResources;// Offset=0x4c Size=0x4
    unsigned long TrackingPending;// Offset=0x50 Size=0x4
    unsigned long TrackingIndicated;// Offset=0x54 Size=0x4
    unsigned long TrackingEmptied;// Offset=0x58 Size=0x4
    struct _WORK_QUEUE_ITEM WorkItem;// Offset=0x60 Size=0x20
    long WorkItemQueued;// Offset=0x80 Size=0x4
};
