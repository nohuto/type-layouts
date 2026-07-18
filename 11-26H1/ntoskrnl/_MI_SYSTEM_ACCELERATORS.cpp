struct _LIST_ENTRY// Size=0x10 (Id=3)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _MI_SYSTEM_ACCELERATORS// Size=0x438 (Id=1885)
{
    struct _LIST_ENTRY HardwareInstances[64];// Offset=0x0 Size=0x400
    unsigned long NumberOfHardwareInstances;// Offset=0x400 Size=0x4
    unsigned char ShuttingDown;// Offset=0x404 Size=0x1
    unsigned char AllocationFailures;// Offset=0x405 Size=0x1
    unsigned char AllocationQueryFailures;// Offset=0x406 Size=0x1
    unsigned char AllocationQueryBadNodes;// Offset=0x407 Size=0x1
    struct _LIST_ENTRY DeferredPoolFrees;// Offset=0x408 Size=0x10
    struct _MI_WAIT_BLOCK * DeleteWaitList;// Offset=0x418 Size=0x8
    unsigned long DeleteWaitListCount;// Offset=0x420 Size=0x4
    void ** OpaqueContext;// Offset=0x428 Size=0x8
    long Lock;// Offset=0x430 Size=0x4
};
