struct _RTL_RB_TREE// Size=0x8 (Id=37)
{
    struct _RTL_BALANCED_NODE * Root;// Offset=0x0 Size=0x4
    union // Size=0x1 (Id=0)
    {
        struct // Size=0x1 (Id=0)
        {
            unsigned char Encoded:1;// Offset=0x4 Size=0x1 BitOffset=0x0 BitSize=0x1
        };
        struct _RTL_BALANCED_NODE * Min;// Offset=0x4 Size=0x4
    };
};

struct _HEAP_VAMGR_ALLOCATOR// Size=0x1c (Id=213)
{
    unsigned long TreeLock;// Offset=0x0 Size=0x4
    struct _RTL_RB_TREE FreeRanges;// Offset=0x4 Size=0x8
    struct _HEAP_VAMGR_VASPACE * VaSpace;// Offset=0xc Size=0x4
    void * PartitionHandle;// Offset=0x10 Size=0x4
    unsigned short ChunksPerRegion;// Offset=0x14 Size=0x2
    unsigned short RefCount;// Offset=0x16 Size=0x2
    unsigned char AllocatorIndex;// Offset=0x18 Size=0x1
    unsigned char NumaNode;// Offset=0x19 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char LockType:1;// Offset=0x1a Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char MemoryType:2;// Offset=0x1a Size=0x1 BitOffset=0x1 BitSize=0x2
        unsigned char ConstrainedVA:1;// Offset=0x1a Size=0x1 BitOffset=0x3 BitSize=0x1
        unsigned char AllowFreeHead:1;// Offset=0x1a Size=0x1 BitOffset=0x4 BitSize=0x1
        unsigned char Spare0:3;// Offset=0x1a Size=0x1 BitOffset=0x5 BitSize=0x3
    };
    unsigned char Spare1;// Offset=0x1b Size=0x1
};
