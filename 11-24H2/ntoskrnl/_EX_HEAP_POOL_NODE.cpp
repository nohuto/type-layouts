struct _unnamed_535// Size=0x10 (Id=535)
{
    struct // Size=0x10 (Id=0)
    {
        unsigned long long Depth:16;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x10
        unsigned long long Sequence:48;// Offset=0x0 Size=0x8 BitOffset=0x10 BitSize=0x30
        unsigned long long Reserved:4;// Offset=0x8 Size=0x8 BitOffset=0x0 BitSize=0x4
        unsigned long long NextEntry:60;// Offset=0x8 Size=0x8 BitOffset=0x4 BitSize=0x3c
    };
};

union _SLIST_HEADER// Size=0x10 (Id=536)
{
    unsigned long long Alignment;// Offset=0x0 Size=0x8
    unsigned long long Region;// Offset=0x8 Size=0x8
    struct _unnamed_535 HeaderX64;// Offset=0x0 Size=0x10
};

struct _RTL_LOOKASIDE// Size=0x40 (Id=947)
{
    union _SLIST_HEADER ListHead;// Offset=0x0 Size=0x10
    unsigned short Depth;// Offset=0x10 Size=0x2
    unsigned short MaximumDepth;// Offset=0x12 Size=0x2
    unsigned long TotalAllocates;// Offset=0x14 Size=0x4
    unsigned long AllocateMisses;// Offset=0x18 Size=0x4
    unsigned long TotalFrees;// Offset=0x1c Size=0x4
    unsigned long FreeMisses;// Offset=0x20 Size=0x4
    unsigned long LastTotalAllocates;// Offset=0x24 Size=0x4
    unsigned long LastAllocateMisses;// Offset=0x28 Size=0x4
    unsigned long LastTotalFrees;// Offset=0x2c Size=0x4
};

struct _RTL_DYNAMIC_LOOKASIDE// Size=0x1040 (Id=946)
{
    unsigned long long EnabledBucketBitmap;// Offset=0x0 Size=0x8
    unsigned long BucketCount;// Offset=0x8 Size=0x4
    unsigned long ActiveBucketCount;// Offset=0xc Size=0x4
    struct _RTL_LOOKASIDE Buckets[64];// Offset=0x40 Size=0x1000
};

struct _EX_HEAP_POOL_NODE// Size=0x20c0 (Id=1884)
{
    struct _SEGMENT_HEAP * Heaps[4];// Offset=0x0 Size=0x20
    struct _RTL_DYNAMIC_LOOKASIDE Lookasides[2];// Offset=0x40 Size=0x2080
};
