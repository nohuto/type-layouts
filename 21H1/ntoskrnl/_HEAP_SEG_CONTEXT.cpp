union _anonymous_755// Size=0x1 (Id=755)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char LargePagePolicy:3;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x3
        unsigned char FullDecommit:1;// Offset=0x0 Size=0x1 BitOffset=0x3 BitSize=0x1
        unsigned char ReleaseEmptySegments:1;// Offset=0x0 Size=0x1 BitOffset=0x4 BitSize=0x1
    };
    unsigned char AllFlags;// Offset=0x0 Size=0x1
};

struct _LIST_ENTRY// Size=0x10 (Id=4)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _RTL_RB_TREE// Size=0x10 (Id=118)
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

struct _SINGLE_LIST_ENTRY// Size=0x8 (Id=838)
{
    struct _SINGLE_LIST_ENTRY * Next;// Offset=0x0 Size=0x8
};

struct _HEAP_SEG_CONTEXT// Size=0xc0 (Id=756)
{
    unsigned long long SegmentMask;// Offset=0x0 Size=0x8
    unsigned char UnitShift;// Offset=0x8 Size=0x1
    unsigned char PagesPerUnitShift;// Offset=0x9 Size=0x1
    unsigned char FirstDescriptorIndex;// Offset=0xa Size=0x1
    unsigned char CachedCommitSoftShift;// Offset=0xb Size=0x1
    unsigned char CachedCommitHighShift;// Offset=0xc Size=0x1
    union _anonymous_755 Flags;// Offset=0xd Size=0x1
    unsigned long MaxAllocationSize;// Offset=0x10 Size=0x4
    short OlpStatsOffset;// Offset=0x14 Size=0x2
    short MemStatsOffset;// Offset=0x16 Size=0x2
    void * LfhContext;// Offset=0x18 Size=0x8
    void * VsContext;// Offset=0x20 Size=0x8
    struct RTL_HP_ENV_HANDLE EnvHandle;// Offset=0x28 Size=0x10
    void * Heap;// Offset=0x38 Size=0x8
    unsigned long long SegmentLock;// Offset=0x40 Size=0x8
    struct _LIST_ENTRY SegmentListHead;// Offset=0x48 Size=0x10
    unsigned long long SegmentCount;// Offset=0x58 Size=0x8
    struct _RTL_RB_TREE FreePageRanges;// Offset=0x60 Size=0x10
    unsigned long long FreeSegmentListLock;// Offset=0x70 Size=0x8
    struct _SINGLE_LIST_ENTRY FreeSegmentList[2];// Offset=0x78 Size=0x10
};
