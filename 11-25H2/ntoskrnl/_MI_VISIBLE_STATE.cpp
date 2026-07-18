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

struct _MM_PAGED_POOL_INFO// Size=0x18 (Id=1278)
{
    struct _EX_PUSH_LOCK Lock;// Offset=0x0 Size=0x8
    unsigned long long MaximumSize;// Offset=0x8 Size=0x8
    unsigned long long AllocatedPagedPool;// Offset=0x10 Size=0x8
};

struct _RTL_BITMAP_EX// Size=0x10 (Id=1199)
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

struct _MI_SYSTEM_PTE_TYPE// Size=0x60 (Id=691)
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

struct _LIST_ENTRY// Size=0x10 (Id=3)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _MMSUPPORT_FLAGS// Size=0x4 (Id=672)
{
    union // Size=0x4 (Id=0)
    {
        struct // Size=0x2 (Id=0)
        {
            unsigned char WorkingSetType:4;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x4
            unsigned char Reserved0:2;// Offset=0x0 Size=0x1 BitOffset=0x4 BitSize=0x2
            unsigned char MaximumWorkingSetHard:1;// Offset=0x0 Size=0x1 BitOffset=0x6 BitSize=0x1
            unsigned char MinimumWorkingSetHard:1;// Offset=0x0 Size=0x1 BitOffset=0x7 BitSize=0x1
            unsigned char Reserved1:1;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x1
            unsigned char TrimmerState:2;// Offset=0x1 Size=0x1 BitOffset=0x1 BitSize=0x2
            unsigned char LinearAddressProtected:1;// Offset=0x1 Size=0x1 BitOffset=0x3 BitSize=0x1
            unsigned char PageStealers:4;// Offset=0x1 Size=0x1 BitOffset=0x4 BitSize=0x4
        };
        unsigned short u1;// Offset=0x0 Size=0x2
        unsigned char MemoryPriority;// Offset=0x2 Size=0x1
        struct // Size=0x1 (Id=0)
        {
            unsigned char WsleDeleted:1;// Offset=0x3 Size=0x1 BitOffset=0x0 BitSize=0x1
            unsigned char SvmEnabled:1;// Offset=0x3 Size=0x1 BitOffset=0x1 BitSize=0x1
            unsigned char ForceAge:1;// Offset=0x3 Size=0x1 BitOffset=0x2 BitSize=0x1
            unsigned char ForceTrim:1;// Offset=0x3 Size=0x1 BitOffset=0x3 BitSize=0x1
            unsigned char CommitReleaseState:2;// Offset=0x3 Size=0x1 BitOffset=0x4 BitSize=0x2
            unsigned char Reserved2:2;// Offset=0x3 Size=0x1 BitOffset=0x6 BitSize=0x2
        };
        unsigned char u2;// Offset=0x3 Size=0x1
        unsigned long EntireFlags;// Offset=0x0 Size=0x4
    };
};

struct _MMSUPPORT_INSTANCE// Size=0xc0 (Id=673)
{
    unsigned long NextPageColor;// Offset=0x0 Size=0x4
    unsigned long PageFaultCount;// Offset=0x4 Size=0x4
    unsigned long long TrimmedPageCount;// Offset=0x8 Size=0x8
    struct _MMWSL_INSTANCE * VmWorkingSetList;// Offset=0x10 Size=0x8
    struct _LIST_ENTRY WorkingSetExpansionLinks;// Offset=0x18 Size=0x10
    unsigned long long AgeDistribution[8];// Offset=0x28 Size=0x40
    struct _KGATE * ExitOutswapGate;// Offset=0x68 Size=0x8
    unsigned long long MinimumWorkingSetSize;// Offset=0x70 Size=0x8
    unsigned long long MaximumWorkingSetSize;// Offset=0x78 Size=0x8
    unsigned long long WorkingSetLeafSize;// Offset=0x80 Size=0x8
    unsigned long long WorkingSetLeafPrivateSize;// Offset=0x88 Size=0x8
    unsigned long long WorkingSetSize;// Offset=0x90 Size=0x8
    unsigned long long WorkingSetPrivateSize;// Offset=0x98 Size=0x8
    unsigned long long PeakWorkingSetSize;// Offset=0xa0 Size=0x8
    unsigned long HardFaultCount;// Offset=0xa8 Size=0x4
    unsigned short LastTrimStamp;// Offset=0xac Size=0x2
    unsigned short PartitionId;// Offset=0xae Size=0x2
    unsigned long long SelfmapLock;// Offset=0xb0 Size=0x8
    struct _MMSUPPORT_FLAGS Flags;// Offset=0xb8 Size=0x4
    unsigned long InterlockedFlags;// Offset=0xbc Size=0x4
};

struct _MMSUPPORT_SHARED// Size=0x80 (Id=1729)
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

struct _MMSUPPORT_FULL// Size=0x140 (Id=1377)
{
    struct _MMSUPPORT_INSTANCE Instance;// Offset=0x0 Size=0xc0
    struct _MMSUPPORT_SHARED Shared;// Offset=0xc0 Size=0x80
};

struct _MMSUPPORT_AGGREGATION// Size=0x20 (Id=2366)
{
    unsigned long PageFaultCount;// Offset=0x0 Size=0x4
    unsigned long long WorkingSetSize;// Offset=0x8 Size=0x8
    unsigned long long WorkingSetLeafSize;// Offset=0x10 Size=0x8
    unsigned long long PeakWorkingSetSize;// Offset=0x18 Size=0x8
};

struct _SYSPTES_HEADER// Size=0x118 (Id=2143)
{
    struct _LIST_ENTRY ListHead[16];// Offset=0x0 Size=0x100
    unsigned long long Count;// Offset=0x100 Size=0x8
    unsigned long long NumberOfEntries;// Offset=0x108 Size=0x8
    unsigned long long NumberOfEntriesPeak;// Offset=0x110 Size=0x8
};

struct _MI_SYSTEM_VA_ASSIGNMENT// Size=0x10 (Id=2408)
{
    void * BaseAddress;// Offset=0x0 Size=0x8
    unsigned long long NumberOfBytes;// Offset=0x8 Size=0x8
};

struct _MI_VISIBLE_STATE// Size=0x16c0 (Id=2213)
{
    struct _MM_PAGED_POOL_INFO PagedPoolInfo;// Offset=0x0 Size=0x18
    unsigned long long MaximumNonPagedPoolInPages;// Offset=0x18 Size=0x8
    unsigned long long SizeOfPagedPoolInPages;// Offset=0x20 Size=0x8
    struct _MI_SYSTEM_PTE_TYPE SystemPteInfo;// Offset=0x28 Size=0x60
    unsigned long long NonPagedPoolCommit;// Offset=0x88 Size=0x8
    unsigned long long SmallNonPagedPtesCommit;// Offset=0x90 Size=0x8
    unsigned long long BootCommit;// Offset=0x98 Size=0x8
    unsigned long long SystemPageTableCommit;// Offset=0xa0 Size=0x8
    unsigned long long ProcessCommit;// Offset=0xa8 Size=0x8
    long DriverCommit;// Offset=0xb0 Size=0x4
    unsigned char PagingLevels;// Offset=0xb4 Size=0x1
    unsigned long long PfnDatabaseCommit;// Offset=0xb8 Size=0x8
    unsigned long long TotalNodePagesInChildPartitions[64];// Offset=0xc0 Size=0x200
    unsigned long long TotalSpecialPurposeMemoryInChildPartitions[64][2];// Offset=0x2c0 Size=0x400
    struct _MMSUPPORT_FULL SystemWs[9];// Offset=0x6c0 Size=0xb40
    struct _MMSUPPORT_SHARED SystemCacheShared;// Offset=0x1200 Size=0x80
    struct _MMSUPPORT_AGGREGATION AggregateSystemWs[1];// Offset=0x1280 Size=0x20
    unsigned long MapCacheFailures;// Offset=0x12a0 Size=0x4
    unsigned long long PagefileHashPages;// Offset=0x12a8 Size=0x8
    struct _SYSPTES_HEADER PteHeader;// Offset=0x12b0 Size=0x118
    unsigned long long SystemVaTypeCount[20];// Offset=0x13c8 Size=0xa0
    unsigned char SystemVaType[256];// Offset=0x1468 Size=0x100
    struct _MI_SYSTEM_VA_ASSIGNMENT SystemVaRegions[18];// Offset=0x1568 Size=0x120
    unsigned long long SecurePtRoot;// Offset=0x1688 Size=0x8
};
