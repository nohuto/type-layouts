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

struct _SINGLE_LIST_ENTRY// Size=0x8 (Id=512)
{
    struct _SINGLE_LIST_ENTRY * Next;// Offset=0x0 Size=0x8
};

enum _POOL_TYPE
{
    NonPagedPool=0,
    NonPagedPoolExecute=0,
    PagedPool=1,
    NonPagedPoolMustSucceed=2,
    DontUseThisType=3,
    NonPagedPoolCacheAligned=4,
    PagedPoolCacheAligned=5,
    NonPagedPoolCacheAlignedMustS=6,
    MaxPoolType=7,
    NonPagedPoolBase=0,
    NonPagedPoolBaseMustSucceed=2,
    NonPagedPoolBaseCacheAligned=4,
    NonPagedPoolBaseCacheAlignedMustS=6,
    NonPagedPoolSession=32,
    PagedPoolSession=33,
    NonPagedPoolMustSucceedSession=34,
    DontUseThisTypeSession=35,
    NonPagedPoolCacheAlignedSession=36,
    PagedPoolCacheAlignedSession=37,
    NonPagedPoolCacheAlignedMustSSession=38,
    NonPagedPoolNx=512,
    NonPagedPoolNxCacheAligned=516,
    NonPagedPoolSessionNx=544
};

struct _LIST_ENTRY// Size=0x10 (Id=4)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _GENERAL_LOOKASIDE// Size=0x80 (Id=545)
{
    union // Size=0x10 (Id=0)
    {
        union _SLIST_HEADER ListHead;// Offset=0x0 Size=0x10
        struct _SINGLE_LIST_ENTRY SingleListHead;// Offset=0x0 Size=0x8
        unsigned short Depth;// Offset=0x10 Size=0x2
    };
    unsigned short MaximumDepth;// Offset=0x12 Size=0x2
    unsigned long TotalAllocates;// Offset=0x14 Size=0x4
    union // Size=0x4 (Id=0)
    {
        unsigned long AllocateMisses;// Offset=0x18 Size=0x4
        unsigned long AllocateHits;// Offset=0x18 Size=0x4
    };
    unsigned long TotalFrees;// Offset=0x1c Size=0x4
    union // Size=0x4 (Id=0)
    {
        unsigned long FreeMisses;// Offset=0x20 Size=0x4
        unsigned long FreeHits;// Offset=0x20 Size=0x4
    };
    enum _POOL_TYPE Type;// Offset=0x24 Size=0x4
    unsigned long Tag;// Offset=0x28 Size=0x4
    unsigned long Size;// Offset=0x2c Size=0x4
    union // Size=0x8 (Id=0)
    {
        void *  ( * AllocateEx)(enum _POOL_TYPE ,unsigned long long ,unsigned long ,struct _LOOKASIDE_LIST_EX * );// Offset=0x30 Size=0x8
        void *  ( * Allocate)(enum _POOL_TYPE ,unsigned long long ,unsigned long );// Offset=0x30 Size=0x8
    };
    union // Size=0x8 (Id=0)
    {
        void  ( * FreeEx)(void * ,struct _LOOKASIDE_LIST_EX * );// Offset=0x38 Size=0x8
        void  ( * Free)(void * );// Offset=0x38 Size=0x8
    };
    struct _LIST_ENTRY ListEntry;// Offset=0x40 Size=0x10
    unsigned long LastTotalAllocates;// Offset=0x50 Size=0x4
    union // Size=0x4 (Id=0)
    {
        unsigned long LastAllocateMisses;// Offset=0x54 Size=0x4
        unsigned long LastAllocateHits;// Offset=0x54 Size=0x4
    };
    unsigned long Future[2];// Offset=0x58 Size=0x8
};

struct _NPAGED_LOOKASIDE_LIST// Size=0x80 (Id=883)
{
    struct _GENERAL_LOOKASIDE L;// Offset=0x0 Size=0x80
};

struct _RTL_BITMAP_EX// Size=0x10 (Id=1202)
{
    unsigned long long SizeOfBitMap;// Offset=0x0 Size=0x8
    unsigned long long * Buffer;// Offset=0x8 Size=0x8
};

enum _MI_SYSTEM_VA_TYPE
{
    MiVaUnused=0,
    MiVaProcessSpace=1,
    MiVaBootLoaded=2,
    MiVaPfnDatabase=3,
    MiVaNonPagedPool=4,
    MiVaPagedPool=5,
    MiVaNonCachedMappings=6,
    MiVaSystemCache=7,
    MiVaSystemPtes=8,
    MiVaHal=9,
    MiVaNonCachedMappingsLarge=10,
    MiVaDriverImages=11,
    MiVaSystemPtesLarge=12,
    MiVaKernelStacks=13,
    MiVaSecureNonPagedPool=14,
    MiVaKernelShadowStacks=15,
    MiVaSoftWsles=16,
    MiVaSystemDataViews=17,
    MiVaKernelControlFlowGuard=18,
    MiVaKasan=19,
    MiVaMaximumType=20
};

struct _MI_SYSTEM_PTE_TYPE// Size=0x60 (Id=694)
{
    struct _RTL_BITMAP_EX Bitmap;// Offset=0x0 Size=0x10
    struct _RTL_BITMAP_EX TrackingBitmap;// Offset=0x10 Size=0x10
    struct _MMPTE * BasePte;// Offset=0x20 Size=0x8
    unsigned long Flags;// Offset=0x28 Size=0x4
    enum _MI_SYSTEM_VA_TYPE VaType;// Offset=0x2c Size=0x4
    unsigned long PteFailures;// Offset=0x30 Size=0x4
    long SpinLock;// Offset=0x34 Size=0x4
    unsigned long long TotalSystemPtes;// Offset=0x38 Size=0x8
    unsigned long long Hint;// Offset=0x40 Size=0x8
    unsigned long long LowestBitEverAllocated;// Offset=0x48 Size=0x8
    struct _MI_CACHED_PTES * CachedPtes;// Offset=0x50 Size=0x8
    unsigned long long TotalFreeSystemPtes;// Offset=0x58 Size=0x8
};

struct _RTL_AVL_TREE// Size=0x8 (Id=117)
{
    struct _RTL_BALANCED_NODE * Root;// Offset=0x0 Size=0x8
};

struct _MI_PAGE_CHAIN_HEAD// Size=0x18 (Id=2253)
{
    struct _MMPFN * Head;// Offset=0x0 Size=0x8
    struct _MMPFN * Tail;// Offset=0x8 Size=0x8
    unsigned long long NumberOfEntries;// Offset=0x10 Size=0x8
};

struct _MI_ULTRA_VA_CONTEXT// Size=0x40 (Id=1747)
{
    long Lock;// Offset=0x0 Size=0x4
    void * ZeroMapping;// Offset=0x8 Size=0x8
    unsigned long long AllocationHintBit;// Offset=0x10 Size=0x8
    struct _RTL_BITMAP_EX Bitmap[2];// Offset=0x18 Size=0x20
    unsigned long ConcurrencyMaximum;// Offset=0x38 Size=0x4
    long ConcurrencyCount;// Offset=0x3c Size=0x4
};

struct _EX_PUSH_LOCK// Size=0x8 (Id=120)
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

struct _unnamed_1831// Size=0x40 (Id=1831)
{
    void * UniqueCacheLine[8];// Offset=0x0 Size=0x40
};

struct _unnamed_1832// Size=0x18 (Id=1832)
{
    struct _LIST_ENTRY Links;// Offset=0x0 Size=0x10
    unsigned long Signaled;// Offset=0x10 Size=0x4
};

struct _MI_CACHE_LINE// Size=0x40 (Id=1833)
{
    union // Size=0x40 (Id=0)
    {
        struct _unnamed_1831 u1;// Offset=0x0 Size=0x40
        struct _unnamed_1832 u2;// Offset=0x0 Size=0x18
    };
};

struct _MI_CACHE_ALIGNED_ARRAY// Size=0x40 (Id=1534)
{
    union // Size=0x8 (Id=0)
    {
        long Lock;// Offset=0x0 Size=0x4
        unsigned long long Value;// Offset=0x0 Size=0x8
        long long SignedValue;// Offset=0x0 Size=0x8
        struct _MI_CACHE_LINE CacheLinePadding;// Offset=0x0 Size=0x40
    };
};

struct _MI_HUGE_SYSTEM_VIEW_HEAD// Size=0x10 (Id=1941)
{
    struct _RTL_AVL_TREE ViewRoot;// Offset=0x0 Size=0x8
    unsigned long ViewCount;// Offset=0x8 Size=0x4
    long Lock;// Offset=0xc Size=0x4
};

struct _MI_SYSTEM_PTE_STATE// Size=0x1500 (Id=1696)
{
    struct _NPAGED_LOOKASIDE_LIST MdlTrackerLookaside;// Offset=0x0 Size=0x80
    union _SLIST_HEADER DeadPteTrackerSListHead;// Offset=0x80 Size=0x10
    long PteTrackerLock;// Offset=0x90 Size=0x4
    struct _MI_CACHED_PTES * CachedPteHeads;// Offset=0x98 Size=0x8
    struct _MI_SYSTEM_PTE_TYPE SystemViewPteInfo;// Offset=0xa0 Size=0x60
    struct _MI_SYSTEM_PTE_TYPE NonCachedMappingsPteInfo;// Offset=0x100 Size=0x60
    struct _MI_SYSTEM_PTE_TYPE KernelStackPteInfo[2];// Offset=0x160 Size=0xc0
    unsigned long StackGrowthFailures;// Offset=0x220 Size=0x4
    unsigned char KernelStackPages;// Offset=0x224 Size=0x1
    unsigned char TrackPtesAborted;// Offset=0x225 Size=0x1
    unsigned char AdjustCounter;// Offset=0x226 Size=0x1
    long ReservedMappingLock;// Offset=0x228 Size=0x4
    struct _RTL_AVL_TREE ReservedMappingTree;// Offset=0x230 Size=0x8
    struct _MI_PAGE_CHAIN_HEAD ReservedMappingPageTablePfns;// Offset=0x238 Size=0x18
    struct _RTL_AVL_TREE OutswappedKernelStackRoot;// Offset=0x250 Size=0x8
    long OutswappedKernelStackLock;// Offset=0x258 Size=0x4
    struct _MI_ULTRA_VA_CONTEXT UltraSpaceContext;// Offset=0x260 Size=0x40
    unsigned long NumberOfUltraMdlMaps;// Offset=0x2a0 Size=0x4
    struct _MI_ULTRA_MDL_NODE * UltraMdlNodeMappings;// Offset=0x2a8 Size=0x8
    struct _MMPTE * UltraSpaceLowPpe;// Offset=0x2b0 Size=0x8
    struct _MMPTE * UltraSpaceHighPpe;// Offset=0x2b8 Size=0x8
    struct _EX_PUSH_LOCK SystemSpaceViewLock;// Offset=0x2c0 Size=0x8
    struct _RTL_AVL_TREE ViewRoot;// Offset=0x2c8 Size=0x8
    unsigned long ViewCount;// Offset=0x2d0 Size=0x4
    struct _MI_CACHE_ALIGNED_ARRAY WorkingSetLockArray[4];// Offset=0x300 Size=0x100
    struct _MI_CACHE_ALIGNED_ARRAY SystemDataViewsWorkingSetLockArray[4];// Offset=0x400 Size=0x100
    struct _MI_HUGE_SYSTEM_VIEW_HEAD SystemViewBuckets[256];// Offset=0x500 Size=0x1000
};
