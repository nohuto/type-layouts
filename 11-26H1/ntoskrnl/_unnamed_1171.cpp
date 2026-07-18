struct _LIST_ENTRY// Size=0x10 (Id=3)
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

struct _unnamed_1171// Size=0x40 (Id=1171)
{
    void  ( * CallerCompletion)(struct _DEVICE_OBJECT * ,unsigned char ,union _POWER_STATE ,void * ,struct _IO_STATUS_BLOCK * );// Offset=0x0 Size=0x8
    void * CallerContext;// Offset=0x8 Size=0x8
    struct _DEVICE_OBJECT * CallerDevice;// Offset=0x10 Size=0x8
    unsigned char SystemWake;// Offset=0x18 Size=0x1
    struct _WORK_QUEUE_ITEM PassiveCompletionWorkItem;// Offset=0x20 Size=0x20
};
