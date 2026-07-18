struct _RTL_HEAP_MEMORY_LIMIT_DATA// Size=0x10 (Id=311)
{
    unsigned long CommitLimitBytes;// Offset=0x0 Size=0x4
    unsigned long CommitLimitFailureCode;// Offset=0x4 Size=0x4
    unsigned long MaxAllocationSizeBytes;// Offset=0x8 Size=0x4
    unsigned long AllocationLimitFailureCode;// Offset=0xc Size=0x4
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

union _RTL_RUN_ONCE// Size=0x4 (Id=343)
{
    void * Ptr;// Offset=0x0 Size=0x4
    unsigned long Value;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long State:2;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x2
    };
};

struct _HEAP_OPPORTUNISTIC_LARGE_PAGE_STATS// Size=0x8 (Id=587)
{
    unsigned long SmallPagesInUseWithinLarge;// Offset=0x0 Size=0x4
    unsigned long OpportunisticLargePageCount;// Offset=0x4 Size=0x4
};

struct _RTL_HP_SEG_ALLOC_POLICY// Size=0xc (Id=430)
{
    unsigned long MinLargePages;// Offset=0x0 Size=0x4
    unsigned long MaxLargePages;// Offset=0x4 Size=0x4
    unsigned char MinUtilization;// Offset=0x8 Size=0x1
};

struct _HEAP_RUNTIME_MEMORY_STATS// Size=0x2c (Id=270)
{
    unsigned long TotalReservedPages;// Offset=0x0 Size=0x4
    unsigned long TotalCommittedPages;// Offset=0x4 Size=0x4
    unsigned long FreeCommittedPages;// Offset=0x8 Size=0x4
    unsigned long LfhFreeCommittedPages;// Offset=0xc Size=0x4
    struct _HEAP_OPPORTUNISTIC_LARGE_PAGE_STATS LargePageStats[2];// Offset=0x10 Size=0x10
    struct _RTL_HP_SEG_ALLOC_POLICY LargePageUtilizationPolicy;// Offset=0x20 Size=0xc
};

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

enum _RTLP_HP_LOCK_TYPE
{
    HeapLockPaged=0,
    HeapLockNonPaged=1,
    HeapLockTypeMax=2
};

union _SLIST_HEADER// Size=0x8 (Id=70)
{
    unsigned long long Alignment;// Offset=0x0 Size=0x8
    struct _SINGLE_LIST_ENTRY Next;// Offset=0x0 Size=0x4
    unsigned short Depth;// Offset=0x4 Size=0x2
    unsigned short CpuId;// Offset=0x6 Size=0x2
};

struct _HEAP_VS_DELAY_FREE_CONTEXT// Size=0x8 (Id=390)
{
    union _SLIST_HEADER ListHead;// Offset=0x0 Size=0x8
};

struct _HEAP_SUBALLOCATOR_CALLBACKS// Size=0x14 (Id=208)
{
    unsigned long Allocate;// Offset=0x0 Size=0x4
    unsigned long Free;// Offset=0x4 Size=0x4
    unsigned long Commit;// Offset=0x8 Size=0x4
    unsigned long Decommit;// Offset=0xc Size=0x4
    unsigned long ExtendContext;// Offset=0x10 Size=0x4
};

struct _anonymous_345// Size=0x4 (Id=345)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long PageAlignLargeAllocs:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long FullDecommit:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long EnableDelayFree:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
    };
};

struct _RTL_HP_VS_CONFIG// Size=0x4 (Id=346)
{
    struct _anonymous_345 Flags;// Offset=0x0 Size=0x4
};

struct _HEAP_VS_CONTEXT// Size=0xc0 (Id=259)
{
    unsigned long Lock;// Offset=0x0 Size=0x4
    enum _RTLP_HP_LOCK_TYPE LockType;// Offset=0x4 Size=0x4
    struct _RTL_RB_TREE FreeChunkTree;// Offset=0x8 Size=0x8
    struct _LIST_ENTRY SubsegmentList;// Offset=0x10 Size=0x8
    unsigned long TotalCommittedUnits;// Offset=0x18 Size=0x4
    unsigned long FreeCommittedUnits;// Offset=0x1c Size=0x4
    struct _HEAP_VS_DELAY_FREE_CONTEXT DelayFreeContext;// Offset=0x40 Size=0x8
    void * BackendCtx;// Offset=0x80 Size=0x4
    struct _HEAP_SUBALLOCATOR_CALLBACKS Callbacks;// Offset=0x84 Size=0x14
    struct _RTL_HP_VS_CONFIG Config;// Offset=0x98 Size=0x4
    unsigned long Flags;// Offset=0x9c Size=0x4
};

struct _RTL_HP_LFH_CONFIG// Size=0x4 (Id=414)
{
    unsigned short MaxBlockSize;// Offset=0x0 Size=0x2
    struct // Size=0x2 (Id=0)
    {
        unsigned short WitholdPageCrossingBlocks:1;// Offset=0x2 Size=0x2 BitOffset=0x0 BitSize=0x1
        unsigned short DisableRandomization:1;// Offset=0x2 Size=0x2 BitOffset=0x1 BitSize=0x1
    };
};

struct _HEAP_LFH_SUBSEGMENT_STAT// Size=0x2 (Id=511)
{
    unsigned char Index;// Offset=0x0 Size=0x1
    unsigned char Count;// Offset=0x1 Size=0x1
};

union _HEAP_LFH_SUBSEGMENT_STATS// Size=0x4 (Id=441)
{
    struct _HEAP_LFH_SUBSEGMENT_STAT Buckets[2];// Offset=0x0 Size=0x4
    void * AllStats;// Offset=0x0 Size=0x4
};

struct _HEAP_LFH_CONTEXT// Size=0x2c0 (Id=251)
{
    void * BackendCtx;// Offset=0x0 Size=0x4
    struct _HEAP_SUBALLOCATOR_CALLBACKS Callbacks;// Offset=0x4 Size=0x14
    unsigned char * AffinityModArray;// Offset=0x18 Size=0x4
    unsigned char MaxAffinity;// Offset=0x1c Size=0x1
    unsigned char LockType;// Offset=0x1d Size=0x1
    short MemStatsOffset;// Offset=0x1e Size=0x2
    struct _RTL_HP_LFH_CONFIG Config;// Offset=0x20 Size=0x4
    union _HEAP_LFH_SUBSEGMENT_STATS BucketStats;// Offset=0x40 Size=0x4
    unsigned long SubsegmentCreationLock;// Offset=0x44 Size=0x4
    struct _HEAP_LFH_BUCKET * Buckets[129];// Offset=0x80 Size=0x204
};

struct _SEGMENT_HEAP// Size=0x580 (Id=274)
{
    struct RTL_HP_ENV_HANDLE EnvHandle;// Offset=0x0 Size=0x8
    unsigned long Signature;// Offset=0x8 Size=0x4
    unsigned long GlobalFlags;// Offset=0xc Size=0x4
    unsigned long Interceptor;// Offset=0x10 Size=0x4
    unsigned short ProcessHeapListIndex;// Offset=0x14 Size=0x2
    struct // Size=0x2 (Id=0)
    {
        unsigned short AllocatedFromMetadata:1;// Offset=0x16 Size=0x2 BitOffset=0x0 BitSize=0x1
    };
    union // Size=0x10 (Id=0)
    {
        struct _RTL_HEAP_MEMORY_LIMIT_DATA CommitLimitData;// Offset=0x18 Size=0x10
        unsigned long ReservedMustBeZero1;// Offset=0x18 Size=0x4
    };
    void * UserContext;// Offset=0x1c Size=0x4
    unsigned long ReservedMustBeZero2;// Offset=0x20 Size=0x4
    void * Spare;// Offset=0x24 Size=0x4
    unsigned long LargeMetadataLock;// Offset=0x40 Size=0x4
    struct _RTL_RB_TREE LargeAllocMetadata;// Offset=0x44 Size=0x8
    unsigned long LargeReservedPages;// Offset=0x4c Size=0x4
    unsigned long LargeCommittedPages;// Offset=0x50 Size=0x4
    union _RTL_RUN_ONCE StackTraceInitVar;// Offset=0x54 Size=0x4
    struct _HEAP_RUNTIME_MEMORY_STATS MemStats;// Offset=0x80 Size=0x2c
    unsigned short GlobalLockCount;// Offset=0xac Size=0x2
    unsigned long GlobalLockOwner;// Offset=0xb0 Size=0x4
    unsigned long ContextExtendLock;// Offset=0xb4 Size=0x4
    unsigned char * AllocatedBase;// Offset=0xb8 Size=0x4
    unsigned char * UncommittedBase;// Offset=0xbc Size=0x4
    unsigned char * ReservedLimit;// Offset=0xc0 Size=0x4
    struct _HEAP_SEG_CONTEXT SegContexts[2];// Offset=0x100 Size=0x100
    struct _HEAP_VS_CONTEXT VsContext;// Offset=0x200 Size=0xc0
    struct _HEAP_LFH_CONTEXT LfhContext;// Offset=0x2c0 Size=0x2c0
};
