struct _RTL_HEAP_MEMORY_LIMIT_DATA// Size=0x20 (Id=954)
{
    unsigned long long CommitLimitBytes;// Offset=0x0 Size=0x8
    unsigned long long CommitLimitFailureCode;// Offset=0x8 Size=0x8
    unsigned long long MaxAllocationSizeBytes;// Offset=0x10 Size=0x8
    unsigned long long AllocationLimitFailureCode;// Offset=0x18 Size=0x8
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

union _RTL_RUN_ONCE// Size=0x8 (Id=1026)
{
    void * Ptr;// Offset=0x0 Size=0x8
    unsigned long long Value;// Offset=0x0 Size=0x8
    struct // Size=0x8 (Id=0)
    {
        unsigned long long State:2;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x2
    };
};

struct _HEAP_OPPORTUNISTIC_LARGE_PAGE_STATS// Size=0x10 (Id=1668)
{
    unsigned long long SmallPagesInUseWithinLarge;// Offset=0x0 Size=0x8
    unsigned long long OpportunisticLargePageCount;// Offset=0x8 Size=0x8
};

struct _RTL_HP_SEG_ALLOC_POLICY// Size=0x18 (Id=1250)
{
    unsigned long long MinLargePages;// Offset=0x0 Size=0x8
    unsigned long long MaxLargePages;// Offset=0x8 Size=0x8
    unsigned char MinUtilization;// Offset=0x10 Size=0x1
};

struct _HEAP_RUNTIME_MEMORY_STATS// Size=0x58 (Id=757)
{
    unsigned long long TotalReservedPages;// Offset=0x0 Size=0x8
    unsigned long long TotalCommittedPages;// Offset=0x8 Size=0x8
    unsigned long long FreeCommittedPages;// Offset=0x10 Size=0x8
    unsigned long long LfhFreeCommittedPages;// Offset=0x18 Size=0x8
    struct _HEAP_OPPORTUNISTIC_LARGE_PAGE_STATS LargePageStats[2];// Offset=0x20 Size=0x20
    struct _RTL_HP_SEG_ALLOC_POLICY LargePageUtilizationPolicy;// Offset=0x40 Size=0x18
};

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

enum _RTLP_HP_LOCK_TYPE
{
    HeapLockPaged=0,
    HeapLockNonPaged=1,
    HeapLockTypeMax=2
};

struct _anonymous_23// Size=0x10 (Id=23)
{
    struct // Size=0x10 (Id=0)
    {
        unsigned long long Depth:16;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x10
        unsigned long long Sequence:48;// Offset=0x0 Size=0x8 BitOffset=0x10 BitSize=0x30
        unsigned long long Reserved:4;// Offset=0x8 Size=0x8 BitOffset=0x0 BitSize=0x4
        unsigned long long NextEntry:60;// Offset=0x8 Size=0x8 BitOffset=0x4 BitSize=0x3c
    };
};

union _SLIST_HEADER// Size=0x10 (Id=24)
{
    unsigned long long Alignment;// Offset=0x0 Size=0x8
    unsigned long long Region;// Offset=0x8 Size=0x8
    struct _anonymous_23 HeaderX64;// Offset=0x0 Size=0x10
};

struct _HEAP_VS_DELAY_FREE_CONTEXT// Size=0x10 (Id=1150)
{
    union _SLIST_HEADER ListHead;// Offset=0x0 Size=0x10
};

struct _HEAP_SUBALLOCATOR_CALLBACKS// Size=0x28 (Id=723)
{
    unsigned long long Allocate;// Offset=0x0 Size=0x8
    unsigned long long Free;// Offset=0x8 Size=0x8
    unsigned long long Commit;// Offset=0x10 Size=0x8
    unsigned long long Decommit;// Offset=0x18 Size=0x8
    unsigned long long ExtendContext;// Offset=0x20 Size=0x8
};

struct _anonymous_1029// Size=0x4 (Id=1029)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long PageAlignLargeAllocs:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long FullDecommit:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long EnableDelayFree:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
    };
};

struct _RTL_HP_VS_CONFIG// Size=0x4 (Id=1030)
{
    struct _anonymous_1029 Flags;// Offset=0x0 Size=0x4
};

struct _HEAP_VS_CONTEXT// Size=0xc0 (Id=746)
{
    unsigned long long Lock;// Offset=0x0 Size=0x8
    enum _RTLP_HP_LOCK_TYPE LockType;// Offset=0x8 Size=0x4
    struct _RTL_RB_TREE FreeChunkTree;// Offset=0x10 Size=0x10
    struct _LIST_ENTRY SubsegmentList;// Offset=0x20 Size=0x10
    unsigned long long TotalCommittedUnits;// Offset=0x30 Size=0x8
    unsigned long long FreeCommittedUnits;// Offset=0x38 Size=0x8
    struct _HEAP_VS_DELAY_FREE_CONTEXT DelayFreeContext;// Offset=0x40 Size=0x10
    void * BackendCtx;// Offset=0x80 Size=0x8
    struct _HEAP_SUBALLOCATOR_CALLBACKS Callbacks;// Offset=0x88 Size=0x28
    struct _RTL_HP_VS_CONFIG Config;// Offset=0xb0 Size=0x4
    unsigned long Flags;// Offset=0xb4 Size=0x4
};

struct _RTL_HP_LFH_CONFIG// Size=0x4 (Id=1211)
{
    unsigned short MaxBlockSize;// Offset=0x0 Size=0x2
    struct // Size=0x2 (Id=0)
    {
        unsigned short WitholdPageCrossingBlocks:1;// Offset=0x2 Size=0x2 BitOffset=0x0 BitSize=0x1
        unsigned short DisableRandomization:1;// Offset=0x2 Size=0x2 BitOffset=0x1 BitSize=0x1
    };
};

struct _HEAP_LFH_SUBSEGMENT_STAT// Size=0x2 (Id=1435)
{
    unsigned char Index;// Offset=0x0 Size=0x1
    unsigned char Count;// Offset=0x1 Size=0x1
};

union _HEAP_LFH_SUBSEGMENT_STATS// Size=0x8 (Id=1280)
{
    struct _HEAP_LFH_SUBSEGMENT_STAT Buckets[4];// Offset=0x0 Size=0x8
    void * AllStats;// Offset=0x0 Size=0x8
};

struct _HEAP_LFH_CONTEXT// Size=0x4c0 (Id=738)
{
    void * BackendCtx;// Offset=0x0 Size=0x8
    struct _HEAP_SUBALLOCATOR_CALLBACKS Callbacks;// Offset=0x8 Size=0x28
    unsigned char * AffinityModArray;// Offset=0x30 Size=0x8
    unsigned char MaxAffinity;// Offset=0x38 Size=0x1
    unsigned char LockType;// Offset=0x39 Size=0x1
    short MemStatsOffset;// Offset=0x3a Size=0x2
    struct _RTL_HP_LFH_CONFIG Config;// Offset=0x3c Size=0x4
    union _HEAP_LFH_SUBSEGMENT_STATS BucketStats;// Offset=0x40 Size=0x8
    unsigned long long SubsegmentCreationLock;// Offset=0x48 Size=0x8
    struct _HEAP_LFH_BUCKET * Buckets[129];// Offset=0x80 Size=0x408
};

struct _SEGMENT_HEAP// Size=0x800 (Id=761)
{
    struct RTL_HP_ENV_HANDLE EnvHandle;// Offset=0x0 Size=0x10
    unsigned long Signature;// Offset=0x10 Size=0x4
    unsigned long GlobalFlags;// Offset=0x14 Size=0x4
    unsigned long Interceptor;// Offset=0x18 Size=0x4
    unsigned short ProcessHeapListIndex;// Offset=0x1c Size=0x2
    struct // Size=0x2 (Id=0)
    {
        unsigned short AllocatedFromMetadata:1;// Offset=0x1e Size=0x2 BitOffset=0x0 BitSize=0x1
    };
    union // Size=0x20 (Id=0)
    {
        struct _RTL_HEAP_MEMORY_LIMIT_DATA CommitLimitData;// Offset=0x20 Size=0x20
        unsigned long long ReservedMustBeZero1;// Offset=0x20 Size=0x8
    };
    void * UserContext;// Offset=0x28 Size=0x8
    unsigned long long ReservedMustBeZero2;// Offset=0x30 Size=0x8
    void * Spare;// Offset=0x38 Size=0x8
    unsigned long long LargeMetadataLock;// Offset=0x40 Size=0x8
    struct _RTL_RB_TREE LargeAllocMetadata;// Offset=0x48 Size=0x10
    unsigned long long LargeReservedPages;// Offset=0x58 Size=0x8
    unsigned long long LargeCommittedPages;// Offset=0x60 Size=0x8
    union _RTL_RUN_ONCE StackTraceInitVar;// Offset=0x68 Size=0x8
    struct _HEAP_RUNTIME_MEMORY_STATS MemStats;// Offset=0x80 Size=0x58
    unsigned short GlobalLockCount;// Offset=0xd8 Size=0x2
    unsigned long GlobalLockOwner;// Offset=0xdc Size=0x4
    unsigned long long ContextExtendLock;// Offset=0xe0 Size=0x8
    unsigned char * AllocatedBase;// Offset=0xe8 Size=0x8
    unsigned char * UncommittedBase;// Offset=0xf0 Size=0x8
    unsigned char * ReservedLimit;// Offset=0xf8 Size=0x8
    struct _HEAP_SEG_CONTEXT SegContexts[2];// Offset=0x100 Size=0x180
    struct _HEAP_VS_CONTEXT VsContext;// Offset=0x280 Size=0xc0
    struct _HEAP_LFH_CONTEXT LfhContext;// Offset=0x340 Size=0x4c0
};
