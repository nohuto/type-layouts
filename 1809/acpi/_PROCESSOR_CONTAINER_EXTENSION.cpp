struct _LIST_ENTRY// Size=0x10 (Id=22)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _PROCESSOR_CONTAINER_EXTENSION// Size=0x58 (Id=437)
{
    struct EXTENSION_WORKER WorkQueue;// Offset=0x0 Size=0x18
    struct _LIST_ENTRY Link;// Offset=0x18 Size=0x10
    struct _LIST_ENTRY ChildContainerList;// Offset=0x28 Size=0x10
    struct _LIST_ENTRY ChildProcessorList;// Offset=0x38 Size=0x10
    struct _ObjData * LpiObjectData;// Offset=0x48 Size=0x8
    unsigned long NodeId;// Offset=0x50 Size=0x4
};
