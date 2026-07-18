struct _WNF_NODE_HEADER// Size=0x4 (Id=880)
{
    unsigned short NodeTypeCode;// Offset=0x0 Size=0x2
    unsigned short NodeByteSize;// Offset=0x2 Size=0x2
};

struct _LIST_ENTRY// Size=0x10 (Id=3)
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

struct _WNF_DISPATCHER// Size=0x30 (Id=893)
{
    struct _WNF_NODE_HEADER Header;// Offset=0x0 Size=0x4
    struct _WORK_QUEUE_ITEM WorkItem;// Offset=0x8 Size=0x20
    long State;// Offset=0x28 Size=0x4
};
