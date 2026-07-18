struct _LIST_ENTRY// Size=0x10 (Id=24)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _WORK_QUEUE_ITEM// Size=0x20 (Id=93)
{
    struct _LIST_ENTRY List;// Offset=0x0 Size=0x10
    void  ( * WorkerRoutine)(void * );// Offset=0x10 Size=0x8
    void * Parameter;// Offset=0x18 Size=0x8
};

struct WORK_QUEUE_CONTEXT// Size=0x30 (Id=463)
{
    struct _WORK_QUEUE_ITEM Item;// Offset=0x0 Size=0x20
    struct _DEVICE_OBJECT * DeviceObject;// Offset=0x20 Size=0x8
    struct _IRP * Irp;// Offset=0x28 Size=0x8
};
