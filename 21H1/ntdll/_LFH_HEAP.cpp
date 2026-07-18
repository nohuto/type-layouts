struct _RTL_SRWLOCK// Size=0x4 (Id=468)
{
    union // Size=0x4 (Id=0)
    {
        struct // Size=0x4 (Id=0)
        {
            unsigned long Locked:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long Waiting:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
            unsigned long Waking:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
            unsigned long MultipleShared:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
            unsigned long Shared:28;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1c
        };
        unsigned long Value;// Offset=0x0 Size=0x4
        void * Ptr;// Offset=0x0 Size=0x4
    };
};

struct _LIST_ENTRY// Size=0x8 (Id=25)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x4
    struct _LIST_ENTRY * Blink;// Offset=0x4 Size=0x4
};

union _HEAP_BUCKET_RUN_INFO// Size=0x8 (Id=278)
{
    unsigned long Bucket;// Offset=0x0 Size=0x4
    unsigned long RunLength;// Offset=0x4 Size=0x4
    long long Aggregate64;// Offset=0x0 Size=0x8
};

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

struct _USER_MEMORY_CACHE_ENTRY// Size=0x20 (Id=532)
{
    union _SLIST_HEADER UserBlocks;// Offset=0x0 Size=0x8
    unsigned long AvailableBlocks;// Offset=0x8 Size=0x4
    unsigned long MinimumDepth;// Offset=0xc Size=0x4
    unsigned long CacheShiftThreshold;// Offset=0x10 Size=0x4
    unsigned short Allocations;// Offset=0x14 Size=0x2
    unsigned short Frees;// Offset=0x16 Size=0x2
    unsigned short CacheHits;// Offset=0x18 Size=0x2
};

struct _HEAP_LFH_MEM_POLICIES// Size=0x4 (Id=399)
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

struct _HEAP_BUCKET// Size=0x4 (Id=280)
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

struct _HEAP_LOCAL_DATA// Size=0x18 (Id=277)
{
    union _SLIST_HEADER DeletedSubSegments;// Offset=0x0 Size=0x8
    struct _LFH_BLOCK_ZONE * CrtZone;// Offset=0x8 Size=0x4
    struct _LFH_HEAP * LowFragHeap;// Offset=0xc Size=0x4
    unsigned long Sequence;// Offset=0x10 Size=0x4
    unsigned long DeleteRateThreshold;// Offset=0x14 Size=0x4
};

struct _LFH_HEAP// Size=0x7e8 (Id=279)
{
    struct _RTL_SRWLOCK Lock;// Offset=0x0 Size=0x4
    struct _LIST_ENTRY SubSegmentZones;// Offset=0x4 Size=0x8
    void * Heap;// Offset=0xc Size=0x4
    void * NextSegmentInfoArrayAddress;// Offset=0x10 Size=0x4
    void * FirstUncommittedAddress;// Offset=0x14 Size=0x4
    void * ReservedAddressLimit;// Offset=0x18 Size=0x4
    unsigned long SegmentCreate;// Offset=0x1c Size=0x4
    unsigned long SegmentDelete;// Offset=0x20 Size=0x4
    unsigned long MinimumCacheDepth;// Offset=0x24 Size=0x4
    unsigned long CacheShiftThreshold;// Offset=0x28 Size=0x4
    unsigned long SizeInCache;// Offset=0x2c Size=0x4
    union _HEAP_BUCKET_RUN_INFO RunInfo;// Offset=0x30 Size=0x8
    struct _USER_MEMORY_CACHE_ENTRY UserBlockCache[12];// Offset=0x38 Size=0x180
    struct _HEAP_LFH_MEM_POLICIES MemoryPolicies;// Offset=0x1b8 Size=0x4
    struct _HEAP_BUCKET Buckets[129];// Offset=0x1bc Size=0x204
    struct _HEAP_LOCAL_SEGMENT_INFO * SegmentInfoArrays[129];// Offset=0x3c0 Size=0x204
    struct _HEAP_LOCAL_SEGMENT_INFO * AffinitizedInfoArrays[129];// Offset=0x5c4 Size=0x204
    struct _SEGMENT_HEAP * SegmentAllocator;// Offset=0x7c8 Size=0x4
    struct _HEAP_LOCAL_DATA LocalData[1];// Offset=0x7d0 Size=0x18
};
