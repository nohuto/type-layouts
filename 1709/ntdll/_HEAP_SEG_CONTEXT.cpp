struct _RTL_SRWLOCK// Size=0x8 (Id=204)
{
    union // Size=0x8 (Id=0)
    {
        struct // Size=0x8 (Id=0)
        {
            unsigned long long Locked:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
            unsigned long long Waiting:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
            unsigned long long Waking:1;// Offset=0x0 Size=0x8 BitOffset=0x2 BitSize=0x1
            unsigned long long MultipleShared:1;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x1
            unsigned long long Shared:60;// Offset=0x0 Size=0x8 BitOffset=0x4 BitSize=0x3c
        };
        unsigned long long Value;// Offset=0x0 Size=0x8
        void * Ptr;// Offset=0x0 Size=0x8
    };
};

struct _LIST_ENTRY// Size=0x10 (Id=23)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _RTL_RB_TREE// Size=0x10 (Id=38)
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

struct _HEAP_SEG_CONTEXT// Size=0x68 (Id=256)
{
    unsigned long long SegmentMask;// Offset=0x0 Size=0x8
    unsigned char UnitShift;// Offset=0x8 Size=0x1
    unsigned char PagesPerUnitShift;// Offset=0x9 Size=0x1
    unsigned char FirstDescriptorIndex;// Offset=0xa Size=0x1
    unsigned char CachedCommitSoftShift;// Offset=0xb Size=0x1
    unsigned char CachedCommitHighShift;// Offset=0xc Size=0x1
    unsigned long MaxAllocationSize;// Offset=0x10 Size=0x4
    struct _RTL_SRWLOCK SegmentLock;// Offset=0x18 Size=0x8
    struct _LIST_ENTRY SegmentListHead;// Offset=0x20 Size=0x10
    unsigned long long SegmentCount;// Offset=0x30 Size=0x8
    struct _RTL_RB_TREE FreePageRanges;// Offset=0x38 Size=0x10
    struct _HEAP_RUNTIME_MEMORY_STATS * MemStats;// Offset=0x48 Size=0x8
    void * LfhContext;// Offset=0x50 Size=0x8
    void * VsContext;// Offset=0x58 Size=0x8
    void * Heap;// Offset=0x60 Size=0x8
};
