struct _LIST_ENTRY// Size=0x10 (Id=20)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _CM_WORKITEM// Size=0x28 (Id=776)
{
    struct _LIST_ENTRY ListEntry;// Offset=0x0 Size=0x10
    unsigned long Private;// Offset=0x10 Size=0x4
    void  ( * WorkerRoutine)(void * );// Offset=0x18 Size=0x8
    void * Parameter;// Offset=0x20 Size=0x8
};
