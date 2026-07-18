struct _LIST_ENTRY// Size=0x8 (Id=32)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x4
    struct _LIST_ENTRY * Blink;// Offset=0x4 Size=0x4
};

struct _WORK_QUEUE_ITEM// Size=0x10 (Id=79)
{
    struct _LIST_ENTRY List;// Offset=0x0 Size=0x8
    void  ( * WorkerRoutine)(void * );// Offset=0x8 Size=0x4
    void * Parameter;// Offset=0xc Size=0x4
};
