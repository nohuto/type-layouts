struct _LIST_ENTRY// Size=0x10 (Id=37)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _WORK_QUEUE_ITEM// Size=0x20 (Id=82)
{
    struct _LIST_ENTRY List;// Offset=0x0 Size=0x10
    void  ( * WorkerRoutine)(void * );// Offset=0x10 Size=0x8
    void * Parameter;// Offset=0x18 Size=0x8
};

struct _IO_STATUS_BLOCK// Size=0x10 (Id=78)
{
    union // Size=0x4 (Id=0)
    {
        long Status;// Offset=0x0 Size=0x4
        void * Pointer;// Offset=0x0 Size=0x8
    };
    unsigned long long Information;// Offset=0x8 Size=0x8
};

struct _HW_DEBUG_DIAGNOSTIC_MONITOR// Size=0x38 (Id=626)
{
    void * KeyHandle;// Offset=0x0 Size=0x8
    struct _WORK_QUEUE_ITEM NotifyWorkItem;// Offset=0x8 Size=0x20
    struct _IO_STATUS_BLOCK Iosb;// Offset=0x28 Size=0x10
};
