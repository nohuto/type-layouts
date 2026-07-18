union _anonymous_268// Size=0x1 (Id=268)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char LargePagePolicy:3;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x3
        unsigned char FullDecommit:1;// Offset=0x0 Size=0x1 BitOffset=0x3 BitSize=0x1
        unsigned char ReleaseEmptySegments:1;// Offset=0x0 Size=0x1 BitOffset=0x4 BitSize=0x1
    };
    unsigned char AllFlags;// Offset=0x0 Size=0x1
};

struct _LIST_ENTRY// Size=0x8 (Id=25)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x4
    struct _LIST_ENTRY * Blink;// Offset=0x4 Size=0x4
};

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

struct _SINGLE_LIST_ENTRY// Size=0x4 (Id=26)
{
    struct _SINGLE_LIST_ENTRY * Next;// Offset=0x0 Size=0x4
};

struct _HEAP_SEG_CONTEXT// Size=0x80 (Id=269)
{
    unsigned long SegmentMask;// Offset=0x0 Size=0x4
    unsigned char UnitShift;// Offset=0x4 Size=0x1
    unsigned char PagesPerUnitShift;// Offset=0x5 Size=0x1
    unsigned char FirstDescriptorIndex;// Offset=0x6 Size=0x1
    unsigned char CachedCommitSoftShift;// Offset=0x7 Size=0x1
    unsigned char CachedCommitHighShift;// Offset=0x8 Size=0x1
    union _anonymous_268 Flags;// Offset=0x9 Size=0x1
    unsigned long MaxAllocationSize;// Offset=0xc Size=0x4
    short OlpStatsOffset;// Offset=0x10 Size=0x2
    short MemStatsOffset;// Offset=0x12 Size=0x2
    void * LfhContext;// Offset=0x14 Size=0x4
    void * VsContext;// Offset=0x18 Size=0x4
    struct RTL_HP_ENV_HANDLE EnvHandle;// Offset=0x1c Size=0x8
    void * Heap;// Offset=0x24 Size=0x4
    unsigned long SegmentLock;// Offset=0x40 Size=0x4
    struct _LIST_ENTRY SegmentListHead;// Offset=0x44 Size=0x8
    unsigned long SegmentCount;// Offset=0x4c Size=0x4
    struct _RTL_RB_TREE FreePageRanges;// Offset=0x50 Size=0x8
    unsigned long FreeSegmentListLock;// Offset=0x58 Size=0x4
    struct _SINGLE_LIST_ENTRY FreeSegmentList[2];// Offset=0x5c Size=0x8
};
