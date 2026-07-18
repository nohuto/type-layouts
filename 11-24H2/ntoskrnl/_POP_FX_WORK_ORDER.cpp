struct _LIST_ENTRY// Size=0x10 (Id=4)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _WORK_QUEUE_ITEM// Size=0x20 (Id=21)
{
    struct _LIST_ENTRY List;// Offset=0x0 Size=0x10
    void  ( * WorkerRoutine)(void * );// Offset=0x10 Size=0x8
    void * Parameter;// Offset=0x18 Size=0x8
};

struct _POP_FX_WORK_ORDER// Size=0x38 (Id=2020)
{
    struct _WORK_QUEUE_ITEM WorkItem;// Offset=0x0 Size=0x20
    long WorkCount;// Offset=0x20 Size=0x4
    void * Context;// Offset=0x28 Size=0x8
    struct _POP_FX_WORK_ORDER_WATCHDOG_INFO * WatchdogTimerInfo;// Offset=0x30 Size=0x8
};
