struct _LIST_ENTRY// Size=0x10 (Id=22)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _mutex// Size=0x10 (Id=602)
{
    unsigned long long SpinLock;// Offset=0x0 Size=0x8
    unsigned char OldIrql;// Offset=0x8 Size=0x1
};

struct _WORK_QUEUE_ITEM// Size=0x20 (Id=83)
{
    struct _LIST_ENTRY List;// Offset=0x0 Size=0x10
    void  ( * WorkerRoutine)(void * );// Offset=0x10 Size=0x8
    void * Parameter;// Offset=0x18 Size=0x8
};

struct _ctxtq// Size=0x60 (Id=369)
{
    unsigned long dwfCtxtQ;// Offset=0x0 Size=0x4
    struct _LIST_ENTRY listCtxtQ;// Offset=0x8 Size=0x10
    struct _mutex mutCtxtQ;// Offset=0x18 Size=0x10
    struct _WORK_QUEUE_ITEM WorkItem;// Offset=0x28 Size=0x20
    unsigned long PauseCount;// Offset=0x48 Size=0x4
    struct _LIST_ENTRY PauseCallbackList;// Offset=0x50 Size=0x10
};
