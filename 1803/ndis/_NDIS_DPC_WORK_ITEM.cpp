struct _LIST_ENTRY// Size=0x10 (Id=29)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _WORK_QUEUE_ITEM// Size=0x20 (Id=79)
{
    struct _LIST_ENTRY List;// Offset=0x0 Size=0x10
    void  ( * WorkerRoutine)(void * );// Offset=0x10 Size=0x8
    void * Parameter;// Offset=0x18 Size=0x8
};

struct _NDIS_DPC_WORK_ITEM// Size=0x50 (Id=822)
{
    struct _WORK_QUEUE_ITEM WorkItem;// Offset=0x0 Size=0x20
    struct _KDPC * Dpc;// Offset=0x20 Size=0x8
    void * InterruptContext;// Offset=0x28 Size=0x8
    void * SystemArgument1;// Offset=0x30 Size=0x8
    void * SystemArgument2;// Offset=0x38 Size=0x8
    unsigned long TargetCpu;// Offset=0x40 Size=0x4
    unsigned long Flags;// Offset=0x44 Size=0x4
    unsigned long long Lock;// Offset=0x48 Size=0x8
};
