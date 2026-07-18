struct _LIST_ENTRY// Size=0x8 (Id=25)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x4
    struct _LIST_ENTRY * Blink;// Offset=0x4 Size=0x4
};

struct _RTL_BALANCED_LINKS// Size=0x10 (Id=625)
{
    struct _RTL_BALANCED_LINKS * Parent;// Offset=0x0 Size=0x4
    struct _RTL_BALANCED_LINKS * LeftChild;// Offset=0x4 Size=0x4
    struct _RTL_BALANCED_LINKS * RightChild;// Offset=0x8 Size=0x4
    char Balance;// Offset=0xc Size=0x1
    unsigned char Reserved[3];// Offset=0xd Size=0x3
};

struct _DPH_HEAP_BLOCK// Size=0x40 (Id=404)
{
    union // Size=0x8 (Id=0)
    {
        struct _DPH_HEAP_BLOCK * pNextAlloc;// Offset=0x0 Size=0x4
        struct _LIST_ENTRY AvailableEntry;// Offset=0x0 Size=0x8
        struct _RTL_BALANCED_LINKS TableLinks;// Offset=0x0 Size=0x10
    };
    unsigned char * pUserAllocation;// Offset=0x10 Size=0x4
    unsigned char * pVirtualBlock;// Offset=0x14 Size=0x4
    unsigned long nVirtualBlockSize;// Offset=0x18 Size=0x4
    unsigned long nVirtualAccessSize;// Offset=0x1c Size=0x4
    unsigned long nUserRequestedSize;// Offset=0x20 Size=0x4
    unsigned long nUserActualSize;// Offset=0x24 Size=0x4
    void * UserValue;// Offset=0x28 Size=0x4
    unsigned long UserFlags;// Offset=0x2c Size=0x4
    struct _RTL_TRACE_BLOCK * StackTrace;// Offset=0x30 Size=0x4
    struct _LIST_ENTRY AdjacencyEntry;// Offset=0x34 Size=0x8
    unsigned char * pVirtualRegion;// Offset=0x3c Size=0x4
};
