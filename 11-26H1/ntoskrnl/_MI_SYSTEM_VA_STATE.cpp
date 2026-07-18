struct _RTL_BITMAP_EX// Size=0x10 (Id=1254)
{
    unsigned long long SizeOfBitMap;// Offset=0x0 Size=0x8
    unsigned long long * Buffer;// Offset=0x8 Size=0x8
};

struct _MI_DYNAMIC_BITMAP// Size=0x48 (Id=2010)
{
    struct _RTL_BITMAP_EX Bitmap;// Offset=0x0 Size=0x10
    unsigned long long MaximumSize;// Offset=0x10 Size=0x8
    unsigned long long Hint;// Offset=0x18 Size=0x8
    void * BaseVa;// Offset=0x20 Size=0x8
    unsigned long long SizeTopDown;// Offset=0x28 Size=0x8
    unsigned long long HintTopDown;// Offset=0x30 Size=0x8
    void * BaseVaTopDown;// Offset=0x38 Size=0x8
    long SpinLock;// Offset=0x40 Size=0x4
};

struct _LIST_ENTRY// Size=0x10 (Id=3)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _MMSUPPORT_FLAGS// Size=0x4 (Id=672)
{
    union // Size=0x4 (Id=0)
    {
        struct // Size=0x1 (Id=0)
        {
            unsigned char WorkingSetType:4;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x4
            unsigned char MaximumWorkingSetHard:1;// Offset=0x0 Size=0x1 BitOffset=0x4 BitSize=0x1
            unsigned char MinimumWorkingSetHard:1;// Offset=0x0 Size=0x1 BitOffset=0x5 BitSize=0x1
            unsigned char LinearAddressProtected:1;// Offset=0x0 Size=0x1 BitOffset=0x6 BitSize=0x1
            unsigned char Reserved0:1;// Offset=0x0 Size=0x1 BitOffset=0x7 BitSize=0x1
        };
        unsigned char u1;// Offset=0x0 Size=0x1
        unsigned char Reserved1;// Offset=0x1 Size=0x1
        unsigned char MemoryPriority;// Offset=0x2 Size=0x1
        struct // Size=0x1 (Id=0)
        {
            unsigned char WsleDeleted:1;// Offset=0x3 Size=0x1 BitOffset=0x0 BitSize=0x1
            unsigned char SvmEnabled:1;// Offset=0x3 Size=0x1 BitOffset=0x1 BitSize=0x1
            unsigned char ForceAge:1;// Offset=0x3 Size=0x1 BitOffset=0x2 BitSize=0x1
            unsigned char ForceTrim:1;// Offset=0x3 Size=0x1 BitOffset=0x3 BitSize=0x1
            unsigned char CommitReleaseState:2;// Offset=0x3 Size=0x1 BitOffset=0x4 BitSize=0x2
            unsigned char Reserved3:2;// Offset=0x3 Size=0x1 BitOffset=0x6 BitSize=0x2
        };
        unsigned char u2;// Offset=0x3 Size=0x1
        unsigned long EntireFlags;// Offset=0x0 Size=0x4
    };
};

struct _MMSUPPORT_INSTANCE// Size=0xc0 (Id=674)
{
    unsigned long NextPageColor;// Offset=0x0 Size=0x4
    unsigned long PageFaultCount;// Offset=0x4 Size=0x4
    unsigned long long PeakWorkingSetSize;// Offset=0x8 Size=0x8
    struct _MMWSL_INSTANCE * VmWorkingSetList;// Offset=0x10 Size=0x8
    struct _LIST_ENTRY WorkingSetExpansionLinks[2];// Offset=0x18 Size=0x20
    unsigned long long AgeDistribution[8];// Offset=0x38 Size=0x40
    unsigned long long MinimumWorkingSetSize;// Offset=0x78 Size=0x8
    unsigned long long MaximumWorkingSetSize;// Offset=0x80 Size=0x8
    unsigned long long WorkingSetLeafSize;// Offset=0x88 Size=0x8
    unsigned long long WorkingSetLeafPrivateSize;// Offset=0x90 Size=0x8
    unsigned long long WorkingSetSize;// Offset=0x98 Size=0x8
    unsigned long long WorkingSetPrivateSize;// Offset=0xa0 Size=0x8
    unsigned long HardFaultCount;// Offset=0xa8 Size=0x4
    unsigned short LastTrimStamp;// Offset=0xac Size=0x2
    unsigned short PartitionId;// Offset=0xae Size=0x2
    unsigned long long SelfmapLock;// Offset=0xb0 Size=0x8
    struct _MMSUPPORT_FLAGS Flags;// Offset=0xb8 Size=0x4
    long InterlockedFlags;// Offset=0xbc Size=0x4
};

struct _MMSUPPORT_SHARED// Size=0x80 (Id=1816)
{
    void * WorkingSetLockArray;// Offset=0x0 Size=0x8
    unsigned long long ReleasedCommitDebt;// Offset=0x8 Size=0x8
    unsigned long long ResetPagesRepurposedCount;// Offset=0x10 Size=0x8
    void * WsSwapSupport;// Offset=0x18 Size=0x8
    void * CommitReleaseContext;// Offset=0x20 Size=0x8
    void * AccessLog;// Offset=0x28 Size=0x8
    unsigned long long ChargedWslePages;// Offset=0x30 Size=0x8
    unsigned long long ActualWslePages;// Offset=0x38 Size=0x8
    long WorkingSetCoreLock;// Offset=0x40 Size=0x4
    void * ShadowMapping;// Offset=0x48 Size=0x8
};

struct _MMSUPPORT_FULL// Size=0x140 (Id=1439)
{
    struct _MMSUPPORT_INSTANCE Instance;// Offset=0x0 Size=0xc0
    struct _MMSUPPORT_SHARED Shared;// Offset=0xc0 Size=0x80
};

struct _MI_WORKING_SET_PAGE_TABLE_AGE_LINKS// Size=0x18 (Id=2581)
{
    long Lock;// Offset=0x0 Size=0x4
    unsigned long EntryCount;// Offset=0x4 Size=0x4
    struct _MMPFN * Flink;// Offset=0x8 Size=0x8
    struct _MMPFN * Blink;// Offset=0x10 Size=0x8
};

struct _MMWSL_INSTANCE// Size=0x110 (Id=2143)
{
    struct _MMPTE * PteResumePoint[3];// Offset=0x0 Size=0x18
    unsigned long LastAccessClearingRemainder;// Offset=0x18 Size=0x4
    unsigned long LastAgingRemainder;// Offset=0x1c Size=0x4
    unsigned long long LockedEntries;// Offset=0x20 Size=0x8
    struct _MI_WORKING_SET_HARD_LIMIT * HardLimit;// Offset=0x28 Size=0x8
    unsigned long long TrimmedPageCount;// Offset=0x30 Size=0x8
    unsigned long AttachedThreads;// Offset=0x38 Size=0x4
    long long AddedLeafPages;// Offset=0x40 Size=0x8
    struct _KGATE * ExitOutswapGate;// Offset=0x48 Size=0x8
    struct _MI_WORKING_SET_PAGE_TABLE_AGE_LINKS ActivePageTableLinks[8];// Offset=0x50 Size=0xc0
};

struct _unnamed_1919// Size=0x40 (Id=1919)
{
    void * UniqueCacheLine[8];// Offset=0x0 Size=0x40
};

struct _unnamed_1920// Size=0x18 (Id=1920)
{
    struct _LIST_ENTRY Links;// Offset=0x0 Size=0x10
    unsigned long Signaled;// Offset=0x10 Size=0x4
};

struct _MI_CACHE_LINE// Size=0x40 (Id=1921)
{
    union // Size=0x40 (Id=0)
    {
        struct _unnamed_1919 u1;// Offset=0x0 Size=0x40
        struct _unnamed_1920 u2;// Offset=0x0 Size=0x18
    };
};

struct _MI_CACHE_ALIGNED_ARRAY// Size=0x40 (Id=1609)
{
    union // Size=0x8 (Id=0)
    {
        long Lock;// Offset=0x0 Size=0x4
        unsigned long long Value;// Offset=0x0 Size=0x8
        long long SignedValue;// Offset=0x0 Size=0x8
        struct _MI_CACHE_LINE CacheLinePadding;// Offset=0x0 Size=0x40
    };
};

struct _MI_SYSTEM_VA_STATE// Size=0x10c0 (Id=1814)
{
    long SystemTablesLock;// Offset=0x0 Size=0x4
    unsigned long long AvailableSystemCacheVa;// Offset=0x8 Size=0x8
    struct _MI_DYNAMIC_BITMAP DynamicBitMapKernelStacks;// Offset=0x10 Size=0x48
    struct _MI_DYNAMIC_BITMAP DynamicBitMapKernelShadowStacks;// Offset=0x58 Size=0x48
    struct _MI_DYNAMIC_BITMAP DynamicBitMapSystemPtes;// Offset=0xa0 Size=0x48
    struct _MI_DYNAMIC_BITMAP DynamicBitMapNonCachedMappings;// Offset=0xe8 Size=0x48
    struct _MI_DYNAMIC_BITMAP DynamicBitMapDriverImages;// Offset=0x130 Size=0x48
    struct _MI_DYNAMIC_BITMAP DynamicBitMapPagedPool;// Offset=0x178 Size=0x48
    struct _MI_DYNAMIC_BITMAP DynamicBitMapSystemCache;// Offset=0x1c0 Size=0x48
    struct _MI_DYNAMIC_BITMAP DynamicBitMapSystemDataViews;// Offset=0x208 Size=0x48
    struct _MI_DYNAMIC_BITMAP DynamicBitMapSecureNonPagedPool;// Offset=0x250 Size=0x48
    void * HalPrivateVaStart;// Offset=0x298 Size=0x8
    unsigned long long HalPrivateVaSize;// Offset=0x2a0 Size=0x8
    unsigned long SystemVaAssignment[8];// Offset=0x2a8 Size=0x20
    unsigned long SystemVaAssignmentHint;// Offset=0x2c8 Size=0x4
    unsigned long VaRegionShadowed[8];// Offset=0x2cc Size=0x20
    unsigned long TopLevelPteLockBits[32];// Offset=0x2ec Size=0x80
    struct _MMSUPPORT_FULL SoftWsleSystemVm;// Offset=0x380 Size=0x140
    void * HyperSpaceBase;// Offset=0x4c0 Size=0x8
    void * PagableHyperSpace;// Offset=0x4c8 Size=0x8
    void * HyperSpaceEnd;// Offset=0x4d0 Size=0x8
    void * UserSoftWsleBase;// Offset=0x4d8 Size=0x8
    unsigned long long PagableHyperSpaceBytes;// Offset=0x4e0 Size=0x8
    unsigned long long PageTableCommitmentOffset[2];// Offset=0x4e8 Size=0x10
    struct _MMWSL_INSTANCE SystemWorkingSetList[10];// Offset=0x4f8 Size=0xaa0
    unsigned long long SelfmapLock[4];// Offset=0xf98 Size=0x20
    struct _MI_CACHE_ALIGNED_ARRAY SystemCacheWorkingSetLockArray[4];// Offset=0xfc0 Size=0x100
};
