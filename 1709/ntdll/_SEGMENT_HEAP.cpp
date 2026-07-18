struct _HEAP_RUNTIME_MEMORY_STATS// Size=0x20 (Id=257)
{
    unsigned long long TotalReservedPages;// Offset=0x0 Size=0x8
    unsigned long long TotalCommittedPages;// Offset=0x8 Size=0x8
    unsigned long long FreeCommittedPages;// Offset=0x10 Size=0x8
    unsigned long long LfhFreeCommittedPages;// Offset=0x18 Size=0x8
};

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

struct _LIST_ENTRY// Size=0x10 (Id=23)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
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

union _RTL_RUN_ONCE// Size=0x8 (Id=320)
{
    void * Ptr;// Offset=0x0 Size=0x8
    unsigned long long Value;// Offset=0x0 Size=0x8
    struct // Size=0x8 (Id=0)
    {
        unsigned long long State:2;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x2
    };
};

struct _HEAP_SUBALLOCATOR_CALLBACKS// Size=0x28 (Id=205)
{
    unsigned long long Allocate;// Offset=0x0 Size=0x8
    unsigned long long Free;// Offset=0x8 Size=0x8
    unsigned long long Commit;// Offset=0x10 Size=0x8
    unsigned long long Decommit;// Offset=0x18 Size=0x8
    unsigned long long ExtendContext;// Offset=0x20 Size=0x8
};

struct _HEAP_VS_CONTEXT// Size=0x70 (Id=248)
{
    struct _RTL_SRWLOCK Lock;// Offset=0x0 Size=0x8
    struct _RTL_RB_TREE FreeChunkTree;// Offset=0x8 Size=0x10
    struct _LIST_ENTRY SubsegmentList;// Offset=0x18 Size=0x10
    unsigned long long TotalCommittedUnits;// Offset=0x28 Size=0x8
    unsigned long long FreeCommittedUnits;// Offset=0x30 Size=0x8
    void * BackendCtx;// Offset=0x38 Size=0x8
    struct _HEAP_SUBALLOCATOR_CALLBACKS Callbacks;// Offset=0x40 Size=0x28
    unsigned long Flags;// Offset=0x68 Size=0x4
};

struct _HEAP_LFH_SUBSEGMENT_STAT// Size=0x2 (Id=460)
{
    unsigned char Index;// Offset=0x0 Size=0x1
    unsigned char Count;// Offset=0x1 Size=0x1
};

union _HEAP_LFH_SUBSEGMENT_STATS// Size=0x8 (Id=397)
{
    struct _HEAP_LFH_SUBSEGMENT_STAT Buckets[4];// Offset=0x0 Size=0x8
    void * AllStats;// Offset=0x0 Size=0x8
};

struct _unnamed_69// Size=0x10 (Id=69)
{
    struct // Size=0x10 (Id=0)
    {
        unsigned long long Depth:16;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x10
        unsigned long long Sequence:48;// Offset=0x0 Size=0x8 BitOffset=0x10 BitSize=0x30
        unsigned long long Reserved:4;// Offset=0x8 Size=0x8 BitOffset=0x0 BitSize=0x4
        unsigned long long NextEntry:60;// Offset=0x8 Size=0x8 BitOffset=0x4 BitSize=0x3c
    };
};

union _SLIST_HEADER// Size=0x10 (Id=70)
{
    unsigned long long Alignment;// Offset=0x0 Size=0x8
    unsigned long long Region;// Offset=0x8 Size=0x8
    struct _unnamed_69 HeaderX64;// Offset=0x0 Size=0x10
};

struct _HEAP_LFH_SUBSEGMENT_CACHE// Size=0x70 (Id=566)
{
    union _SLIST_HEADER SLists[7];// Offset=0x0 Size=0x70
};

struct _HEAP_LFH_CONTEXT// Size=0x4e0 (Id=241)
{
    void * BackendCtx;// Offset=0x0 Size=0x8
    struct _HEAP_SUBALLOCATOR_CALLBACKS Callbacks;// Offset=0x8 Size=0x28
    unsigned char MaxAffinity;// Offset=0x30 Size=0x1
    unsigned char * AffinityModArray;// Offset=0x38 Size=0x8
    struct _HEAP_RUNTIME_MEMORY_STATS * MemStats;// Offset=0x40 Size=0x8
    struct _RTL_SRWLOCK SubsegmentCreationLock;// Offset=0x48 Size=0x8
    union _HEAP_LFH_SUBSEGMENT_STATS BucketStats;// Offset=0x50 Size=0x8
    struct _HEAP_LFH_SUBSEGMENT_CACHE SubsegmentCache;// Offset=0x60 Size=0x70
    struct _HEAP_LFH_BUCKET * Buckets[129];// Offset=0xd0 Size=0x408
};

struct _SEGMENT_HEAP// Size=0x6c0 (Id=260)
{
    void * Padding[2];// Offset=0x0 Size=0x10
    unsigned long Signature;// Offset=0x10 Size=0x4
    unsigned long GlobalFlags;// Offset=0x14 Size=0x4
    struct _HEAP_RUNTIME_MEMORY_STATS MemStats;// Offset=0x18 Size=0x20
    unsigned long Interceptor;// Offset=0x38 Size=0x4
    unsigned short ProcessHeapListIndex;// Offset=0x3c Size=0x2
    unsigned short GlobalLockCount;// Offset=0x3e Size=0x2
    unsigned long GlobalLockOwner;// Offset=0x40 Size=0x4
    struct _RTL_SRWLOCK LargeMetadataLock;// Offset=0x48 Size=0x8
    struct _RTL_RB_TREE LargeAllocMetadata;// Offset=0x50 Size=0x10
    unsigned long long LargeReservedPages;// Offset=0x60 Size=0x8
    unsigned long long LargeCommittedPages;// Offset=0x68 Size=0x8
    struct _HEAP_SEG_CONTEXT SegContexts[2];// Offset=0x70 Size=0xd0
    union _RTL_RUN_ONCE StackTraceInitVar;// Offset=0x140 Size=0x8
    struct _RTL_SRWLOCK ContextExtendLock;// Offset=0x148 Size=0x8
    unsigned char * AllocatedBase;// Offset=0x150 Size=0x8
    unsigned char * UncommittedBase;// Offset=0x158 Size=0x8
    unsigned char * ReservedLimit;// Offset=0x160 Size=0x8
    struct _HEAP_VS_CONTEXT VsContext;// Offset=0x168 Size=0x70
    struct _HEAP_LFH_CONTEXT LfhContext;// Offset=0x1e0 Size=0x4e0
};
