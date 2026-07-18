struct _LIST_ENTRY// Size=0x10 (Id=34)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _RTL_BALANCED_LINKS// Size=0x20 (Id=686)
{
    struct _RTL_BALANCED_LINKS * Parent;// Offset=0x0 Size=0x8
    struct _RTL_BALANCED_LINKS * LeftChild;// Offset=0x8 Size=0x8
    struct _RTL_BALANCED_LINKS * RightChild;// Offset=0x10 Size=0x8
    char Balance;// Offset=0x18 Size=0x1
    unsigned char Reserved[3];// Offset=0x19 Size=0x3
};

struct _DPH_HEAP_BLOCK// Size=0x80 (Id=453)
{
    union // Size=0x10 (Id=0)
    {
        struct _DPH_HEAP_BLOCK * pNextAlloc;// Offset=0x0 Size=0x8
        struct _LIST_ENTRY AvailableEntry;// Offset=0x0 Size=0x10
        struct _RTL_BALANCED_LINKS TableLinks;// Offset=0x0 Size=0x20
    };
    unsigned char * pUserAllocation;// Offset=0x20 Size=0x8
    unsigned char * pVirtualBlock;// Offset=0x28 Size=0x8
    unsigned long long nVirtualBlockSize;// Offset=0x30 Size=0x8
    unsigned long long nVirtualAccessSize;// Offset=0x38 Size=0x8
    unsigned long long nUserRequestedSize;// Offset=0x40 Size=0x8
    unsigned long long nUserActualSize;// Offset=0x48 Size=0x8
    void * UserValue;// Offset=0x50 Size=0x8
    unsigned long UserFlags;// Offset=0x58 Size=0x4
    struct _RTL_TRACE_BLOCK * StackTrace;// Offset=0x60 Size=0x8
    struct _LIST_ENTRY AdjacencyEntry;// Offset=0x68 Size=0x10
    unsigned char * pVirtualRegion;// Offset=0x78 Size=0x8
};
