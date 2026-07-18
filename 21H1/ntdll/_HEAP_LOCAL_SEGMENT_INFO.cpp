struct _SINGLE_LIST_ENTRY// Size=0x4 (Id=26)
{
    struct _SINGLE_LIST_ENTRY * Next;// Offset=0x0 Size=0x4
};

union _SLIST_HEADER// Size=0x8 (Id=70)
{
    unsigned long long Alignment;// Offset=0x0 Size=0x8
    struct _SINGLE_LIST_ENTRY Next;// Offset=0x0 Size=0x4
    unsigned short Depth;// Offset=0x4 Size=0x2
    unsigned short CpuId;// Offset=0x6 Size=0x2
};

union _HEAP_BUCKET_COUNTERS// Size=0x8 (Id=565)
{
    unsigned long TotalBlocks;// Offset=0x0 Size=0x4
    unsigned long SubSegmentCounts;// Offset=0x4 Size=0x4
    long long Aggregate64;// Offset=0x0 Size=0x8
};

struct _HEAP_LOCAL_SEGMENT_INFO// Size=0x68 (Id=276)
{
    struct _HEAP_LOCAL_DATA * LocalData;// Offset=0x0 Size=0x4
    struct _HEAP_SUBSEGMENT * ActiveSubsegment;// Offset=0x4 Size=0x4
    struct _HEAP_SUBSEGMENT * CachedItems[16];// Offset=0x8 Size=0x40
    union _SLIST_HEADER SListHeader;// Offset=0x48 Size=0x8
    union _HEAP_BUCKET_COUNTERS Counters;// Offset=0x50 Size=0x8
    unsigned long LastOpSequence;// Offset=0x58 Size=0x4
    unsigned short BucketIndex;// Offset=0x5c Size=0x2
    unsigned short LastUsed;// Offset=0x5e Size=0x2
    unsigned short NoThrashCount;// Offset=0x60 Size=0x2
};
