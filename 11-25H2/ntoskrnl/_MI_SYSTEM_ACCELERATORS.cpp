struct _LIST_ENTRY// Size=0x10 (Id=3)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _SINGLE_LIST_ENTRY// Size=0x8 (Id=510)
{
    struct _SINGLE_LIST_ENTRY * Next;// Offset=0x0 Size=0x8
};

struct _MI_SYSTEM_ACCELERATORS// Size=0x30 (Id=1790)
{
    struct _LIST_ENTRY HardwareInstances;// Offset=0x0 Size=0x10
    unsigned long NumberOfHardwareInstances;// Offset=0x10 Size=0x4
    unsigned char ShuttingDown;// Offset=0x14 Size=0x1
    unsigned char AllocationFailures;// Offset=0x15 Size=0x1
    unsigned char AllocationQueryFailures;// Offset=0x16 Size=0x1
    unsigned char AllocationQueryBadNodes;// Offset=0x17 Size=0x1
    struct _SINGLE_LIST_ENTRY DeferredPoolFrees;// Offset=0x18 Size=0x8
    void ** OpaqueContext;// Offset=0x20 Size=0x8
    long Lock;// Offset=0x28 Size=0x4
};
