struct _unnamed_98// Size=0x10 (Id=98)
{
    struct // Size=0x10 (Id=0)
    {
        unsigned long long Depth:16;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x10
        unsigned long long Sequence:48;// Offset=0x0 Size=0x8 BitOffset=0x10 BitSize=0x30
        unsigned long long Reserved:4;// Offset=0x8 Size=0x8 BitOffset=0x0 BitSize=0x4
        unsigned long long NextEntry:60;// Offset=0x8 Size=0x8 BitOffset=0x4 BitSize=0x3c
    };
};

union _SLIST_HEADER// Size=0x10 (Id=99)
{
    unsigned long long Alignment;// Offset=0x0 Size=0x8
    unsigned long long Region;// Offset=0x8 Size=0x8
    struct _unnamed_98 HeaderX64;// Offset=0x0 Size=0x10
};

union _HEAP_BUCKET_COUNTERS// Size=0x8 (Id=307)
{
    unsigned long TotalBlocks;// Offset=0x0 Size=0x4
    unsigned long SubSegmentCounts;// Offset=0x4 Size=0x4
    long long Aggregate64;// Offset=0x0 Size=0x8
};

struct _HEAP_LOCAL_SEGMENT_INFO// Size=0xc0 (Id=308)
{
    struct _HEAP_LOCAL_DATA * LocalData;// Offset=0x0 Size=0x8
    struct _HEAP_SUBSEGMENT * ActiveSubsegment;// Offset=0x8 Size=0x8
    struct _HEAP_SUBSEGMENT * CachedItems[16];// Offset=0x10 Size=0x80
    union _SLIST_HEADER SListHeader;// Offset=0x90 Size=0x10
    union _HEAP_BUCKET_COUNTERS Counters;// Offset=0xa0 Size=0x8
    unsigned long LastOpSequence;// Offset=0xa8 Size=0x4
    unsigned short BucketIndex;// Offset=0xac Size=0x2
    unsigned short LastUsed;// Offset=0xae Size=0x2
    unsigned short NoThrashCount;// Offset=0xb0 Size=0x2
};
