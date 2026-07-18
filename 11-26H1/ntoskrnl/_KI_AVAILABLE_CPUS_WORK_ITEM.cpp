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

struct _EX_RUNDOWN_REF// Size=0x8 (Id=271)
{
    union // Size=0x8 (Id=0)
    {
        unsigned long long Count;// Offset=0x0 Size=0x8
        void * Ptr;// Offset=0x0 Size=0x8
    };
};

union _KI_AVAILABLE_CPUS_WORK_STATE// Size=0x4 (Id=1505)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long WorkerExecuting:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long WorkPresent:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long Reserved:30;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1e
    };
    unsigned long AllFields;// Offset=0x0 Size=0x4
};

struct _KI_AVAILABLE_CPUS_WORK_ITEM// Size=0x40 (Id=1460)
{
    struct _WORK_QUEUE_ITEM ExWorkItem;// Offset=0x0 Size=0x20
    struct _EX_RUNDOWN_REF RundownRef;// Offset=0x20 Size=0x8
    union _KI_AVAILABLE_CPUS_WORK_STATE WorkState;// Offset=0x28 Size=0x4
    void  ( * Callback)(void * );// Offset=0x30 Size=0x8
    void * Context;// Offset=0x38 Size=0x8
};
