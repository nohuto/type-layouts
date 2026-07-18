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

struct _NDIS_COMMON_OPEN_BLOCK::_QUEUED_CLOSE// Size=0x28 (Id=838)
{
    int Status;// Offset=0x0 Size=0x4
    struct _WORK_QUEUE_ITEM WorkItem;// Offset=0x8 Size=0x20
};
