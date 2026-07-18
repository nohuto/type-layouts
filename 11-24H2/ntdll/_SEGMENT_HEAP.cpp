struct _RTLP_HEAP_COMMIT_LIMIT_DATA// Size=0x10 (Id=798)
{
    unsigned long long CommitLimitBytes;// Offset=0x0 Size=0x8
    unsigned long long CommitLimitFailureCode;// Offset=0x8 Size=0x8
};

struct _RTL_RB_TREE// Size=0x10 (Id=48)
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

union _RTL_RUN_ONCE// Size=0x8 (Id=435)
{
    void * Ptr;// Offset=0x0 Size=0x8
    unsigned long long Value;// Offset=0x0 Size=0x8
    struct // Size=0x8 (Id=0)
    {
        unsigned long long State:2;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x2
    };
};

struct _HEAP_OPPORTUNISTIC_LARGE_PAGE_STATS// Size=0x10 (Id=725)
{
    unsigned long long SmallPagesInUseWithinLarge;// Offset=0x0 Size=0x8
    unsigned long long OpportunisticLargePageCount;// Offset=0x8 Size=0x8
};

struct _RTL_HP_SEG_ALLOC_POLICY// Size=0x18 (Id=537)
{
    unsigned long long MinLargePages;// Offset=0x0 Size=0x8
    unsigned long long MaxLargePages;// Offset=0x8 Size=0x8
    unsigned char MinUtilization;// Offset=0x10 Size=0x1
};

struct _HEAP_RUNTIME_MEMORY_STATS// Size=0x60 (Id=326)
{
    unsigned long long TotalReservedPages;// Offset=0x0 Size=0x8
    unsigned long long TotalCommittedPages;// Offset=0x8 Size=0x8
    unsigned long long FreeCommittedPages;// Offset=0x10 Size=0x8
    unsigned long long LfhFreeCommittedPages;// Offset=0x18 Size=0x8
    unsigned long long VsFreeCommittedPages;// Offset=0x20 Size=0x8
    struct _HEAP_OPPORTUNISTIC_LARGE_PAGE_STATS LargePageStats[2];// Offset=0x28 Size=0x20
    struct _RTL_HP_SEG_ALLOC_POLICY LargePageUtilizationPolicy;// Offset=0x48 Size=0x18
};

struct _RTL_HP_HEAP_VA_CALLBACKS_ENCODED// Size=0x20 (Id=463)
{
    unsigned long long CallbackContext;// Offset=0x0 Size=0x8
    unsigned long long AllocateVirtualMemoryEncoded;// Offset=0x8 Size=0x8
    unsigned long long FreeVirtualMemoryEncoded;// Offset=0x10 Size=0x8
    unsigned long long QueryVirtualMemoryEncoded;// Offset=0x18 Size=0x8
};

union _unnamed_331// Size=0x1 (Id=331)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char LargePagePolicy:3;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x3
        unsigned char FullDecommit:1;// Offset=0x0 Size=0x1 BitOffset=0x3 BitSize=0x1
        unsigned char ReleaseEmptySegments:1;// Offset=0x0 Size=0x1 BitOffset=0x4 BitSize=0x1
    };
    unsigned char AllFlags;// Offset=0x0 Size=0x1
};

struct _LIST_ENTRY// Size=0x10 (Id=32)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _SINGLE_LIST_ENTRY// Size=0x8 (Id=34)
{
    struct _SINGLE_LIST_ENTRY * Next;// Offset=0x0 Size=0x8
};

struct _HEAP_SEG_CONTEXT// Size=0xc0 (Id=332)
{
    unsigned long long SegmentMask;// Offset=0x0 Size=0x8
    unsigned char UnitShift;// Offset=0x8 Size=0x1
    unsigned char PagesPerUnitShift;// Offset=0x9 Size=0x1
    unsigned char FirstDescriptorIndex;// Offset=0xa Size=0x1
    unsigned char CachedCommitSoftShift;// Offset=0xb Size=0x1
    unsigned char CachedCommitHighShift;// Offset=0xc Size=0x1
    union _unnamed_331 Flags;// Offset=0xd Size=0x1
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

struct _unnamed_437// Size=0x1 (Id=437)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char PageAlignLargeAllocs:1;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char EnableDelayFree:1;// Offset=0x0 Size=0x1 BitOffset=0x1 BitSize=0x1
    };
};

struct _RTL_HP_VS_CONFIG// Size=0x1 (Id=438)
{
    struct _unnamed_437 Flags;// Offset=0x0 Size=0x1
};

struct _HEAP_SUBALLOCATOR_CALLBACKS// Size=0x30 (Id=258)
{
    unsigned long long Allocate;// Offset=0x0 Size=0x8
    unsigned long long Free;// Offset=0x8 Size=0x8
    unsigned long long Commit;// Offset=0x10 Size=0x8
    unsigned long long Decommit;// Offset=0x18 Size=0x8
    unsigned long long ExtendContext;// Offset=0x20 Size=0x8
    unsigned long long TlsCleanup;// Offset=0x28 Size=0x8
};

struct _HEAP_AFFINITY_MGR// Size=0x10 (Id=260)
{
    char MapInProgress;// Offset=0x0 Size=0x1
    char ContentionCount;// Offset=0x1 Size=0x1
    unsigned char ContentionCountLimit;// Offset=0x2 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char ConservativeAffinity:1;// Offset=0x3 Size=0x1 BitOffset=0x0 BitSize=0x1
    };
    unsigned long long LastContentionTime;// Offset=0x8 Size=0x8
};

struct _HEAP_VS_CONTEXT// Size=0x60 (Id=318)
{
    unsigned short SlotMapRef;// Offset=0x0 Size=0x2
    unsigned char AffinityMask;// Offset=0x2 Size=0x1
    unsigned char LockType;// Offset=0x3 Size=0x1
    struct _RTL_HP_VS_CONFIG Config;// Offset=0x4 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char EliminatePointers:1;// Offset=0x5 Size=0x1 BitOffset=0x0 BitSize=0x1
    };
    short MemStatsOffset;// Offset=0x6 Size=0x2
    void * BackendCtx;// Offset=0x8 Size=0x8
    struct _HEAP_SUBALLOCATOR_CALLBACKS Callbacks;// Offset=0x10 Size=0x30
    struct _HEAP_AFFINITY_MGR AffinityMgr;// Offset=0x40 Size=0x10
    unsigned long long TotalCommittedUnits;// Offset=0x50 Size=0x8
    unsigned long long FreeCommittedUnits;// Offset=0x58 Size=0x8
};

union _RTL_HP_LFH_CONFIG// Size=0x4 (Id=521)
{
    unsigned short MaxBlockSize;// Offset=0x0 Size=0x2
    struct // Size=0x2 (Id=0)
    {
        unsigned short WitholdPageCrossingBlocks:1;// Offset=0x2 Size=0x2 BitOffset=0x0 BitSize=0x1
    };
    unsigned long AllFields;// Offset=0x0 Size=0x4
};

struct _HEAP_LFH_CONFIG// Size=0x8 (Id=469)
{
    union _RTL_HP_LFH_CONFIG Global;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long EnablePrivateSlots:1;// Offset=0x4 Size=0x4 BitOffset=0x0 BitSize=0x1
    };
};

struct _HEAP_LFH_HEAT_MAP// Size=0x100 (Id=304)
{
    unsigned short Counts[126];// Offset=0x0 Size=0xfc
    unsigned long LastDecayPeriod;// Offset=0xfc Size=0x4
};

struct _HEAP_LFH_SLOT_MAP// Size=0x100 (Id=301)
{
    unsigned short Map[128];// Offset=0x0 Size=0x100
};

struct _HEAP_LFH_CONTEXT// Size=0x6c0 (Id=302)
{
    void * BackendCtx;// Offset=0x0 Size=0x8
    struct _HEAP_SUBALLOCATOR_CALLBACKS Callbacks;// Offset=0x8 Size=0x30
    unsigned char * AffinityModArray;// Offset=0x38 Size=0x8
    unsigned char MaxAffinity;// Offset=0x40 Size=0x1
    unsigned char LockType;// Offset=0x41 Size=0x1
    short MemStatsOffset;// Offset=0x42 Size=0x2
    struct _HEAP_LFH_CONFIG Config;// Offset=0x44 Size=0x8
    unsigned long TlsSlotIndex;// Offset=0x4c Size=0x4
    unsigned long long EncodeKey;// Offset=0x50 Size=0x8
    unsigned long long ExtensionLock;// Offset=0x80 Size=0x8
    struct _SINGLE_LIST_ENTRY MetadataList[4];// Offset=0x88 Size=0x20
    struct _HEAP_LFH_HEAT_MAP HeatMap;// Offset=0xc0 Size=0x100
    struct _HEAP_LFH_BUCKET * Buckets[128];// Offset=0x1c0 Size=0x400
    struct _HEAP_LFH_SLOT_MAP SlotMaps[1];// Offset=0x5c0 Size=0x100
};

struct _SEGMENT_HEAP// Size=0xa00 (Id=336)
{
    struct RTL_HP_ENV_HANDLE EnvHandle;// Offset=0x0 Size=0x10
    unsigned long Signature;// Offset=0x10 Size=0x4
    unsigned long GlobalFlags;// Offset=0x14 Size=0x4
    unsigned long Interceptor;// Offset=0x18 Size=0x4
    unsigned short ProcessHeapListIndex;// Offset=0x1c Size=0x2
    union // Size=0x2 (Id=0)
    {
        struct // Size=0x2 (Id=0)
        {
            unsigned short AllocatedFromMetadata:1;// Offset=0x1e Size=0x2 BitOffset=0x0 BitSize=0x1
            unsigned short ReadOnly:1;// Offset=0x1e Size=0x2 BitOffset=0x1 BitSize=0x1
        };
        unsigned short InternalFlags;// Offset=0x1e Size=0x2
    };
    struct _RTLP_HEAP_COMMIT_LIMIT_DATA CommitLimitData;// Offset=0x20 Size=0x10
    unsigned long long ReservedMustBeZero;// Offset=0x30 Size=0x8
    void * UserContext;// Offset=0x38 Size=0x8
    unsigned long long LargeMetadataLock;// Offset=0x40 Size=0x8
    struct _RTL_RB_TREE LargeAllocMetadata;// Offset=0x48 Size=0x10
    unsigned long long LargeReservedPages;// Offset=0x58 Size=0x8
    unsigned long long LargeCommittedPages;// Offset=0x60 Size=0x8
    unsigned long long Tag;// Offset=0x68 Size=0x8
    union _RTL_RUN_ONCE StackTraceInitVar;// Offset=0x70 Size=0x8
    struct _HEAP_RUNTIME_MEMORY_STATS MemStats;// Offset=0x80 Size=0x60
    unsigned long GlobalLockOwner;// Offset=0xe0 Size=0x4
    unsigned long long ContextExtendLock;// Offset=0xe8 Size=0x8
    unsigned char * AllocatedBase;// Offset=0xf0 Size=0x8
    unsigned char * UncommittedBase;// Offset=0xf8 Size=0x8
    unsigned char * ReservedLimit;// Offset=0x100 Size=0x8
    unsigned char * ReservedRegionEnd;// Offset=0x108 Size=0x8
    struct _RTL_HP_HEAP_VA_CALLBACKS_ENCODED CallbacksEncoded;// Offset=0x110 Size=0x20
    struct _HEAP_SEG_CONTEXT SegContexts[2];// Offset=0x140 Size=0x180
    struct _HEAP_VS_CONTEXT VsContext;// Offset=0x2c0 Size=0x60
    struct _HEAP_LFH_CONTEXT LfhContext;// Offset=0x340 Size=0x6c0
};
