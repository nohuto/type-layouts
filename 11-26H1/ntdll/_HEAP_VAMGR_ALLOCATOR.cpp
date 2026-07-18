struct _RTL_RB_TREE// Size=0x10 (Id=48)
{
    struct _RTL_BALANCED_NODE * Root;// Offset=0x0 Size=0x8
    union // Size=0x1 (Id=0)
    {
        struct // Size=0x1 (Id=0)
        {
            unsigned char Encoded:1;// Offset=0x8 Size=0x1 BitOffset=0x0 BitSize=0x1
        };
        struct _RTL_BALANCED_NODE * Min;// Offset=0x8 Size=0x8
    };
};

struct _HEAP_VAMGR_ALLOCATOR// Size=0x30 (Id=258)
{
    unsigned long long TreeLock;// Offset=0x0 Size=0x8
    struct _RTL_RB_TREE FreeRanges;// Offset=0x8 Size=0x10
    struct _HEAP_VAMGR_VASPACE * VaSpace;// Offset=0x18 Size=0x8
    void * ContextHandle;// Offset=0x20 Size=0x8
    unsigned short ChunksPerRegion;// Offset=0x28 Size=0x2
    unsigned short RefCount;// Offset=0x2a Size=0x2
    unsigned char AllocatorIndex;// Offset=0x2c Size=0x1
    unsigned char NumaNode;// Offset=0x2d Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char LockType:1;// Offset=0x2e Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char MemoryType:3;// Offset=0x2e Size=0x1 BitOffset=0x1 BitSize=0x3
        unsigned char ConstrainedVA:1;// Offset=0x2e Size=0x1 BitOffset=0x4 BitSize=0x1
        unsigned char AllowFreeHead:1;// Offset=0x2e Size=0x1 BitOffset=0x5 BitSize=0x1
        unsigned char Spare0:2;// Offset=0x2e Size=0x1 BitOffset=0x6 BitSize=0x2
    };
    unsigned char Spare1;// Offset=0x2f Size=0x1
};
