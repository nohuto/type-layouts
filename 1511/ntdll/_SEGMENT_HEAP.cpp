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

struct _RTL_RB_TREE// Size=0x10 (Id=34)
{
    struct _RTL_BALANCED_NODE * Root;// Offset=0x0 Size=0x8
    struct _RTL_BALANCED_NODE * Min;// Offset=0x8 Size=0x8
};

struct _LIST_ENTRY// Size=0x10 (Id=19)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _HEAP_SUBALLOCATOR_CALLBACKS// Size=0x28 (Id=209)
{
    unsigned long long Allocate;// Offset=0x0 Size=0x8
    unsigned long long Free;// Offset=0x8 Size=0x8
    unsigned long long Commit;// Offset=0x10 Size=0x8
    unsigned long long Decommit;// Offset=0x18 Size=0x8
    unsigned long long ExtendContext;// Offset=0x20 Size=0x8
};

struct _HEAP_VS_CONTEXT// Size=0x68 (Id=219)
{
    struct _RTL_SRWLOCK Lock;// Offset=0x0 Size=0x8
    struct _RTL_RB_TREE FreeChunkTree;// Offset=0x8 Size=0x10
    struct _LIST_ENTRY SubsegmentList;// Offset=0x18 Size=0x10
    unsigned long long TotalCommittedUnits;// Offset=0x28 Size=0x8
    unsigned long long FreeCommittedUnits;// Offset=0x30 Size=0x8
    void * BackendCtx;// Offset=0x38 Size=0x8
    struct _HEAP_SUBALLOCATOR_CALLBACKS Callbacks;// Offset=0x40 Size=0x28
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

struct _HEAP_LFH_SUBSEGMENT_CACHE// Size=0x70 (Id=408)
{
    union _SLIST_HEADER SLists[7];// Offset=0x0 Size=0x70
};

struct _HEAP_LFH_CONTEXT// Size=0x4d0 (Id=211)
{
    void * BackendCtx;// Offset=0x0 Size=0x8
    struct _HEAP_SUBALLOCATOR_CALLBACKS Callbacks;// Offset=0x8 Size=0x28
    struct _RTL_SRWLOCK SubsegmentCreationLock;// Offset=0x30 Size=0x8
    unsigned char MaxAffinity;// Offset=0x38 Size=0x1
    unsigned char * AffinityModArray;// Offset=0x40 Size=0x8
    struct _HEAP_LFH_SUBSEGMENT_CACHE SubsegmentCache;// Offset=0x50 Size=0x70
    struct _HEAP_LFH_BUCKET * Buckets[129];// Offset=0xc0 Size=0x408
};

struct _SEGMENT_HEAP// Size=0x5e0 (Id=230)
{
    unsigned long long TotalReservedPages;// Offset=0x0 Size=0x8
    unsigned long long TotalCommittedPages;// Offset=0x8 Size=0x8
    unsigned long Signature;// Offset=0x10 Size=0x4
    unsigned long GlobalFlags;// Offset=0x14 Size=0x4
    unsigned long long FreeCommittedPages;// Offset=0x18 Size=0x8
    unsigned long Interceptor;// Offset=0x20 Size=0x4
    unsigned short ProcessHeapListIndex;// Offset=0x24 Size=0x2
    unsigned short GlobalLockCount;// Offset=0x26 Size=0x2
    unsigned long GlobalLockOwner;// Offset=0x28 Size=0x4
    struct _RTL_SRWLOCK LargeMetadataLock;// Offset=0x30 Size=0x8
    struct _RTL_RB_TREE LargeAllocMetadata;// Offset=0x38 Size=0x10
    unsigned long long LargeReservedPages;// Offset=0x48 Size=0x8
    unsigned long long LargeCommittedPages;// Offset=0x50 Size=0x8
    struct _RTL_SRWLOCK SegmentAllocatorLock;// Offset=0x58 Size=0x8
    struct _LIST_ENTRY SegmentListHead;// Offset=0x60 Size=0x10
    unsigned long long SegmentCount;// Offset=0x70 Size=0x8
    struct _RTL_RB_TREE FreePageRanges;// Offset=0x78 Size=0x10
    struct _RTL_SRWLOCK ContextExtendLock;// Offset=0x88 Size=0x8
    unsigned char * AllocatedBase;// Offset=0x90 Size=0x8
    unsigned char * UncommittedBase;// Offset=0x98 Size=0x8
    unsigned char * ReservedLimit;// Offset=0xa0 Size=0x8
    struct _HEAP_VS_CONTEXT VsContext;// Offset=0xa8 Size=0x68
    struct _HEAP_LFH_CONTEXT LfhContext;// Offset=0x110 Size=0x4d0
};
