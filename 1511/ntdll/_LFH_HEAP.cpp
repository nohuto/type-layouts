struct _RTL_SRWLOCK// Size=0x8 (Id=218)
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

struct _LIST_ENTRY// Size=0x10 (Id=19)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

union _HEAP_BUCKET_RUN_INFO// Size=0x8 (Id=234)
{
    unsigned long Bucket;// Offset=0x0 Size=0x4
    unsigned long RunLength;// Offset=0x4 Size=0x4
    long long Aggregate64;// Offset=0x0 Size=0x8
};

struct _unnamed_60// Size=0x10 (Id=60)
{
    struct // Size=0x10 (Id=0)
    {
        unsigned long long Depth:16;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x10
        unsigned long long Sequence:48;// Offset=0x0 Size=0x8 BitOffset=0x10 BitSize=0x30
        unsigned long long Reserved:4;// Offset=0x8 Size=0x8 BitOffset=0x0 BitSize=0x4
        unsigned long long NextEntry:60;// Offset=0x8 Size=0x8 BitOffset=0x4 BitSize=0x3c
    };
};

union _SLIST_HEADER// Size=0x10 (Id=61)
{
    unsigned long long Alignment;// Offset=0x0 Size=0x8
    unsigned long long Region;// Offset=0x8 Size=0x8
    struct _unnamed_60 HeaderX64;// Offset=0x0 Size=0x10
};

struct _USER_MEMORY_CACHE_ENTRY// Size=0x30 (Id=383)
{
    union _SLIST_HEADER UserBlocks;// Offset=0x0 Size=0x10
    unsigned long AvailableBlocks;// Offset=0x10 Size=0x4
    unsigned long MinimumDepth;// Offset=0x14 Size=0x4
    unsigned long CacheShiftThreshold;// Offset=0x18 Size=0x4
    unsigned short Allocations;// Offset=0x1c Size=0x2
    unsigned short Frees;// Offset=0x1e Size=0x2
    unsigned short CacheHits;// Offset=0x20 Size=0x2
};

struct _HEAP_LFH_MEM_POLICIES// Size=0x4 (Id=312)
{
    union // Size=0x4 (Id=0)
    {
        struct // Size=0x4 (Id=0)
        {
            unsigned long DisableAffinity:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long SlowSubsegmentGrowth:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
            unsigned long Spare:30;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1e
        };
        unsigned long AllPolicies;// Offset=0x0 Size=0x4
    };
};

struct _HEAP_BUCKET// Size=0x4 (Id=236)
{
    unsigned short BlockUnits;// Offset=0x0 Size=0x2
    unsigned char SizeIndex;// Offset=0x2 Size=0x1
    union // Size=0x1 (Id=0)
    {
        struct // Size=0x1 (Id=0)
        {
            unsigned char UseAffinity:1;// Offset=0x3 Size=0x1 BitOffset=0x0 BitSize=0x1
            unsigned char DebugFlags:2;// Offset=0x3 Size=0x1 BitOffset=0x1 BitSize=0x2
        };
        unsigned char Flags;// Offset=0x3 Size=0x1
    };
};

struct _HEAP_LOCAL_DATA// Size=0x30 (Id=233)
{
    union _SLIST_HEADER DeletedSubSegments;// Offset=0x0 Size=0x10
    struct _LFH_BLOCK_ZONE * CrtZone;// Offset=0x10 Size=0x8
    struct _LFH_HEAP * LowFragHeap;// Offset=0x18 Size=0x8
    unsigned long Sequence;// Offset=0x20 Size=0x4
    unsigned long DeleteRateThreshold;// Offset=0x24 Size=0x4
};

struct _LFH_HEAP// Size=0xcf0 (Id=235)
{
    struct _RTL_SRWLOCK Lock;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY SubSegmentZones;// Offset=0x8 Size=0x10
    void * Heap;// Offset=0x18 Size=0x8
    void * NextSegmentInfoArrayAddress;// Offset=0x20 Size=0x8
    void * FirstUncommittedAddress;// Offset=0x28 Size=0x8
    void * ReservedAddressLimit;// Offset=0x30 Size=0x8
    unsigned long SegmentCreate;// Offset=0x38 Size=0x4
    unsigned long SegmentDelete;// Offset=0x3c Size=0x4
    unsigned long MinimumCacheDepth;// Offset=0x40 Size=0x4
    unsigned long CacheShiftThreshold;// Offset=0x44 Size=0x4
    unsigned long long SizeInCache;// Offset=0x48 Size=0x8
    union _HEAP_BUCKET_RUN_INFO RunInfo;// Offset=0x50 Size=0x8
    struct _USER_MEMORY_CACHE_ENTRY UserBlockCache[12];// Offset=0x60 Size=0x240
    struct _HEAP_LFH_MEM_POLICIES MemoryPolicies;// Offset=0x2a0 Size=0x4
    struct _HEAP_BUCKET Buckets[129];// Offset=0x2a4 Size=0x204
    struct _HEAP_LOCAL_SEGMENT_INFO * SegmentInfoArrays[129];// Offset=0x4a8 Size=0x408
    struct _HEAP_LOCAL_SEGMENT_INFO * AffinitizedInfoArrays[129];// Offset=0x8b0 Size=0x408
    struct _SEGMENT_HEAP * SegmentAllocator;// Offset=0xcb8 Size=0x8
    struct _HEAP_LOCAL_DATA LocalData[1];// Offset=0xcc0 Size=0x30
};
