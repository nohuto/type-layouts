struct _LIST_ENTRY// Size=0x10 (Id=4)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _WORK_QUEUE_ITEM// Size=0x20 (Id=27)
{
    struct _LIST_ENTRY List;// Offset=0x0 Size=0x10
    void  ( * WorkerRoutine)(void * );// Offset=0x10 Size=0x8
    void * Parameter;// Offset=0x18 Size=0x8
};

struct _POP_FX_WORK_POOL_ITEM// Size=0x28 (Id=1857)
{
    struct _POP_FX_WORK_POOL * WorkPool;// Offset=0x0 Size=0x8
    struct _WORK_QUEUE_ITEM WorkItem;// Offset=0x8 Size=0x20
};
