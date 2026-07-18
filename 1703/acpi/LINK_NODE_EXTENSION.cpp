struct _LIST_ENTRY// Size=0x10 (Id=22)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct LINK_NODE_EXTENSION// Size=0x60 (Id=234)
{
    struct EXTENSION_WORKER WorkQueue;// Offset=0x0 Size=0x18
    unsigned long CurrentRefCount;// Offset=0x18 Size=0x4
    long PossibleRefCount;// Offset=0x1c Size=0x4
    unsigned long CurrentGsiv;// Offset=0x20 Size=0x4
    unsigned long PossibleGsiv;// Offset=0x24 Size=0x4
    unsigned long PreferredGsiv;// Offset=0x28 Size=0x4
    struct _IO_RESOURCE_REQUIREMENTS_LIST * ResourceOverride;// Offset=0x30 Size=0x8
    struct _LIST_ENTRY ListEntry;// Offset=0x38 Size=0x10
    struct _LIST_ENTRY AttachedDevices;// Offset=0x48 Size=0x10
    struct _IO_WORKITEM * WorkItem;// Offset=0x58 Size=0x8
};
