struct _LIST_ENTRY// Size=0x10 (Id=20)
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

struct _GUID// Size=0x10 (Id=101)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

struct _IO_WORKITEM// Size=0x58 (Id=624)
{
    struct _WORK_QUEUE_ITEM WorkItem;// Offset=0x0 Size=0x20
    void  ( * Routine)(void * ,void * ,struct _IO_WORKITEM * );// Offset=0x20 Size=0x8
    void * IoObject;// Offset=0x28 Size=0x8
    void * Context;// Offset=0x30 Size=0x8
    void * WorkingOnBehalfClient;// Offset=0x38 Size=0x8
    unsigned long Type;// Offset=0x40 Size=0x4
    struct _GUID ActivityId;// Offset=0x44 Size=0x10
};
