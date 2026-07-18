struct _MMPTE_HARDWARE// Size=0x8 (Id=655)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long Valid:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long Dirty1:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
        unsigned long long Owner:1;// Offset=0x0 Size=0x8 BitOffset=0x2 BitSize=0x1
        unsigned long long WriteThrough:1;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x1
        unsigned long long CacheDisable:1;// Offset=0x0 Size=0x8 BitOffset=0x4 BitSize=0x1
        unsigned long long Accessed:1;// Offset=0x0 Size=0x8 BitOffset=0x5 BitSize=0x1
        unsigned long long Dirty:1;// Offset=0x0 Size=0x8 BitOffset=0x6 BitSize=0x1
        unsigned long long LargePage:1;// Offset=0x0 Size=0x8 BitOffset=0x7 BitSize=0x1
        unsigned long long Global:1;// Offset=0x0 Size=0x8 BitOffset=0x8 BitSize=0x1
        unsigned long long CopyOnWrite:1;// Offset=0x0 Size=0x8 BitOffset=0x9 BitSize=0x1
        unsigned long long Unused:1;// Offset=0x0 Size=0x8 BitOffset=0xa BitSize=0x1
        unsigned long long Write:1;// Offset=0x0 Size=0x8 BitOffset=0xb BitSize=0x1
        unsigned long long PageFrameNumber:36;// Offset=0x0 Size=0x8 BitOffset=0xc BitSize=0x24
        unsigned long long ReservedForHardware:4;// Offset=0x0 Size=0x8 BitOffset=0x30 BitSize=0x4
        unsigned long long ReservedForSoftware:4;// Offset=0x0 Size=0x8 BitOffset=0x34 BitSize=0x4
        unsigned long long WsleAge:4;// Offset=0x0 Size=0x8 BitOffset=0x38 BitSize=0x4
        unsigned long long WsleProtection:3;// Offset=0x0 Size=0x8 BitOffset=0x3c BitSize=0x3
        unsigned long long NoExecute:1;// Offset=0x0 Size=0x8 BitOffset=0x3f BitSize=0x1
    };
};

struct _MMPTE_PROTOTYPE// Size=0x8 (Id=1065)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long Valid:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long DemandFillProto:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
        unsigned long long HiberVerifyConverted:1;// Offset=0x0 Size=0x8 BitOffset=0x2 BitSize=0x1
        unsigned long long ReadOnly:1;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x1
        unsigned long long SwizzleBit:1;// Offset=0x0 Size=0x8 BitOffset=0x4 BitSize=0x1
        unsigned long long Protection:5;// Offset=0x0 Size=0x8 BitOffset=0x5 BitSize=0x5
        unsigned long long Prototype:1;// Offset=0x0 Size=0x8 BitOffset=0xa BitSize=0x1
        unsigned long long Combined:1;// Offset=0x0 Size=0x8 BitOffset=0xb BitSize=0x1
        unsigned long long Unused1:4;// Offset=0x0 Size=0x8 BitOffset=0xc BitSize=0x4
        long long ProtoAddress:48;// Offset=0x0 Size=0x8 BitOffset=0x10 BitSize=0x30
    };
};

struct _MMPTE_SOFTWARE// Size=0x8 (Id=898)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long Valid:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long PageFileReserved:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
        unsigned long long PageFileAllocated:1;// Offset=0x0 Size=0x8 BitOffset=0x2 BitSize=0x1
        unsigned long long ColdPage:1;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x1
        unsigned long long SwizzleBit:1;// Offset=0x0 Size=0x8 BitOffset=0x4 BitSize=0x1
        unsigned long long Protection:5;// Offset=0x0 Size=0x8 BitOffset=0x5 BitSize=0x5
        unsigned long long Prototype:1;// Offset=0x0 Size=0x8 BitOffset=0xa BitSize=0x1
        unsigned long long Transition:1;// Offset=0x0 Size=0x8 BitOffset=0xb BitSize=0x1
        unsigned long long PageFileLow:4;// Offset=0x0 Size=0x8 BitOffset=0xc BitSize=0x4
        unsigned long long UsedPageTableEntries:10;// Offset=0x0 Size=0x8 BitOffset=0x10 BitSize=0xa
        unsigned long long Unused:6;// Offset=0x0 Size=0x8 BitOffset=0x1a BitSize=0x6
        unsigned long long PageFileHigh:32;// Offset=0x0 Size=0x8 BitOffset=0x20 BitSize=0x20
    };
};

struct _MMPTE_TIMESTAMP// Size=0x8 (Id=1147)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long MustBeZero:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long Unused:3;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x3
        unsigned long long SwizzleBit:1;// Offset=0x0 Size=0x8 BitOffset=0x4 BitSize=0x1
        unsigned long long Protection:5;// Offset=0x0 Size=0x8 BitOffset=0x5 BitSize=0x5
        unsigned long long Prototype:1;// Offset=0x0 Size=0x8 BitOffset=0xa BitSize=0x1
        unsigned long long Transition:1;// Offset=0x0 Size=0x8 BitOffset=0xb BitSize=0x1
        unsigned long long PageFileLow:4;// Offset=0x0 Size=0x8 BitOffset=0xc BitSize=0x4
        unsigned long long Reserved:16;// Offset=0x0 Size=0x8 BitOffset=0x10 BitSize=0x10
        unsigned long long GlobalTimeStamp:32;// Offset=0x0 Size=0x8 BitOffset=0x20 BitSize=0x20
    };
};

struct _MMPTE_TRANSITION// Size=0x8 (Id=1439)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long Valid:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long Write:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
        unsigned long long Spare:1;// Offset=0x0 Size=0x8 BitOffset=0x2 BitSize=0x1
        unsigned long long IoTracker:1;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x1
        unsigned long long SwizzleBit:1;// Offset=0x0 Size=0x8 BitOffset=0x4 BitSize=0x1
        unsigned long long Protection:5;// Offset=0x0 Size=0x8 BitOffset=0x5 BitSize=0x5
        unsigned long long Prototype:1;// Offset=0x0 Size=0x8 BitOffset=0xa BitSize=0x1
        unsigned long long Transition:1;// Offset=0x0 Size=0x8 BitOffset=0xb BitSize=0x1
        unsigned long long PageFrameNumber:36;// Offset=0x0 Size=0x8 BitOffset=0xc BitSize=0x24
        unsigned long long Unused:16;// Offset=0x0 Size=0x8 BitOffset=0x30 BitSize=0x10
    };
};

struct _MMPTE_SUBSECTION// Size=0x8 (Id=649)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long Valid:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long Unused0:3;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x3
        unsigned long long SwizzleBit:1;// Offset=0x0 Size=0x8 BitOffset=0x4 BitSize=0x1
        unsigned long long Protection:5;// Offset=0x0 Size=0x8 BitOffset=0x5 BitSize=0x5
        unsigned long long Prototype:1;// Offset=0x0 Size=0x8 BitOffset=0xa BitSize=0x1
        unsigned long long ColdPage:1;// Offset=0x0 Size=0x8 BitOffset=0xb BitSize=0x1
        unsigned long long Unused1:3;// Offset=0x0 Size=0x8 BitOffset=0xc BitSize=0x3
        unsigned long long ExecutePrivilege:1;// Offset=0x0 Size=0x8 BitOffset=0xf BitSize=0x1
        long long SubsectionAddress:48;// Offset=0x0 Size=0x8 BitOffset=0x10 BitSize=0x30
    };
};

struct _MMPTE_LIST// Size=0x8 (Id=1231)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long Valid:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long OneEntry:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
        unsigned long long filler0:2;// Offset=0x0 Size=0x8 BitOffset=0x2 BitSize=0x2
        unsigned long long SwizzleBit:1;// Offset=0x0 Size=0x8 BitOffset=0x4 BitSize=0x1
        unsigned long long Protection:5;// Offset=0x0 Size=0x8 BitOffset=0x5 BitSize=0x5
        unsigned long long Prototype:1;// Offset=0x0 Size=0x8 BitOffset=0xa BitSize=0x1
        unsigned long long Transition:1;// Offset=0x0 Size=0x8 BitOffset=0xb BitSize=0x1
        unsigned long long filler1:16;// Offset=0x0 Size=0x8 BitOffset=0xc BitSize=0x10
        unsigned long long NextEntry:36;// Offset=0x0 Size=0x8 BitOffset=0x1c BitSize=0x24
    };
};

union _unnamed_220// Size=0x8 (Id=220)
{
    unsigned long long Long;// Offset=0x0 Size=0x8
    unsigned long long VolatileLong;// Offset=0x0 Size=0x8
    struct _MMPTE_HARDWARE Hard;// Offset=0x0 Size=0x8
    struct _MMPTE_PROTOTYPE Proto;// Offset=0x0 Size=0x8
    struct _MMPTE_SOFTWARE Soft;// Offset=0x0 Size=0x8
    struct _MMPTE_TIMESTAMP TimeStamp;// Offset=0x0 Size=0x8
    struct _MMPTE_TRANSITION Trans;// Offset=0x0 Size=0x8
    struct _MMPTE_SUBSECTION Subsect;// Offset=0x0 Size=0x8
    struct _MMPTE_LIST List;// Offset=0x0 Size=0x8
};

struct _MMPTE// Size=0x8 (Id=221)
{
    union _unnamed_220 u;// Offset=0x0 Size=0x8
};

struct _MI_PTE_CHAIN_HEAD// Size=0x18 (Id=747)
{
    struct _MMPTE Flink;// Offset=0x0 Size=0x8
    struct _MMPTE Blink;// Offset=0x8 Size=0x8
    struct _MMPTE * PteBase;// Offset=0x10 Size=0x8
};

struct _MI_SPECIAL_POOL// Size=0x40 (Id=668)
{
    unsigned long long Lock;// Offset=0x0 Size=0x8
    struct _MI_PTE_CHAIN_HEAD Paged;// Offset=0x8 Size=0x18
    struct _MI_PTE_CHAIN_HEAD NonPaged;// Offset=0x20 Size=0x18
    unsigned long long PagesInUse;// Offset=0x38 Size=0x8
};

struct _LIST_ENTRY// Size=0x10 (Id=22)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _EX_PUSH_LOCK// Size=0x8 (Id=86)
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

struct _RTL_BITMAP_EX// Size=0x10 (Id=648)
{
    unsigned long long SizeOfBitMap;// Offset=0x0 Size=0x8
    unsigned long long * Buffer;// Offset=0x8 Size=0x8
};

struct _MM_PAGED_POOL_INFO// Size=0x38 (Id=716)
{
    struct _EX_PUSH_LOCK Lock;// Offset=0x0 Size=0x8
    struct _RTL_BITMAP_EX PagedPoolAllocationMap;// Offset=0x8 Size=0x10
    struct _MMPTE * FirstPteForPagedPool;// Offset=0x18 Size=0x8
    unsigned long long MaximumSize;// Offset=0x20 Size=0x8
    unsigned long long PagedPoolHint;// Offset=0x28 Size=0x8
    unsigned long long AllocatedPagedPool;// Offset=0x30 Size=0x8
};

enum _MI_SYSTEM_VA_TYPE
{
    MiVaUnused=0,
    MiVaSessionSpace=1,
    MiVaProcessSpace=2,
    MiVaBootLoaded=3,
    MiVaPfnDatabase=4,
    MiVaNonPagedPool=5,
    MiVaPagedPool=6,
    MiVaSpecialPoolPaged=7,
    MiVaSystemCache=8,
    MiVaSystemPtes=9,
    MiVaHal=10,
    MiVaSessionGlobalSpace=11,
    MiVaDriverImages=12,
    MiVaSpecialPoolNonPaged=13,
    MiVaSystemPtesLarge=14,
    MiVaKernelStacks=15,
    MiVaMaximumType=16
};

struct _MI_SYSTEM_PTE_TYPE// Size=0x60 (Id=248)
{
    struct _RTL_BITMAP_EX Bitmap;// Offset=0x0 Size=0x10
    struct _MMPTE * BasePte;// Offset=0x10 Size=0x8
    unsigned long Flags;// Offset=0x18 Size=0x4
    enum _MI_SYSTEM_VA_TYPE VaType;// Offset=0x1c Size=0x4
    unsigned long * FailureCount;// Offset=0x20 Size=0x8
    unsigned long PteFailures;// Offset=0x28 Size=0x4
    union // Size=0x8 (Id=0)
    {
        unsigned long long SpinLock;// Offset=0x30 Size=0x8
        struct _EX_PUSH_LOCK * GlobalPushLock;// Offset=0x30 Size=0x8
    };
    unsigned long long TotalSystemPtes;// Offset=0x38 Size=0x8
    unsigned long long Hint;// Offset=0x40 Size=0x8
    unsigned long long LowestBitEverAllocated;// Offset=0x48 Size=0x8
    struct _MI_CACHED_PTES * CachedPtes;// Offset=0x50 Size=0x8
    unsigned long long TotalFreeSystemPtes;// Offset=0x58 Size=0x8
};

struct _MMSUPPORT_FLAGS// Size=0x4 (Id=1221)
{
    union // Size=0x2 (Id=0)
    {
        struct // Size=0x2 (Id=0)
        {
            unsigned char WorkingSetType:3;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x3
            unsigned char Reserved0:3;// Offset=0x0 Size=0x1 BitOffset=0x3 BitSize=0x3
            unsigned char MaximumWorkingSetHard:1;// Offset=0x0 Size=0x1 BitOffset=0x6 BitSize=0x1
            unsigned char MinimumWorkingSetHard:1;// Offset=0x0 Size=0x1 BitOffset=0x7 BitSize=0x1
            unsigned char SessionMaster:1;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x1
            unsigned char TrimmerState:2;// Offset=0x1 Size=0x1 BitOffset=0x1 BitSize=0x2
            unsigned char Reserved:1;// Offset=0x1 Size=0x1 BitOffset=0x3 BitSize=0x1
            unsigned char PageStealers:4;// Offset=0x1 Size=0x1 BitOffset=0x4 BitSize=0x4
        };
        unsigned short u1;// Offset=0x0 Size=0x2
    };
    unsigned char MemoryPriority;// Offset=0x2 Size=0x1
    union // Size=0x1 (Id=0)
    {
        struct // Size=0x1 (Id=0)
        {
            unsigned char WsleDeleted:1;// Offset=0x3 Size=0x1 BitOffset=0x0 BitSize=0x1
            unsigned char SvmEnabled:1;// Offset=0x3 Size=0x1 BitOffset=0x1 BitSize=0x1
            unsigned char ForceAge:1;// Offset=0x3 Size=0x1 BitOffset=0x2 BitSize=0x1
            unsigned char ForceTrim:1;// Offset=0x3 Size=0x1 BitOffset=0x3 BitSize=0x1
            unsigned char NewMaximum:1;// Offset=0x3 Size=0x1 BitOffset=0x4 BitSize=0x1
            unsigned char CommitReleaseState:2;// Offset=0x3 Size=0x1 BitOffset=0x5 BitSize=0x2
        };
        unsigned char u2;// Offset=0x3 Size=0x1
    };
};

struct _MMSUPPORT_INSTANCE// Size=0xc0 (Id=1056)
{
    unsigned long NextPageColor;// Offset=0x0 Size=0x4
    unsigned long PageFaultCount;// Offset=0x4 Size=0x4
    unsigned long long TrimmedPageCount;// Offset=0x8 Size=0x8
    struct _MMWSL_INSTANCE * VmWorkingSetList;// Offset=0x10 Size=0x8
    struct _LIST_ENTRY WorkingSetExpansionLinks;// Offset=0x18 Size=0x10
    unsigned long long AgeDistribution[8];// Offset=0x28 Size=0x40
    struct _KGATE * ExitOutswapGate;// Offset=0x68 Size=0x8
    unsigned long long MinimumWorkingSetSize;// Offset=0x70 Size=0x8
    unsigned long long WorkingSetLeafSize;// Offset=0x78 Size=0x8
    unsigned long long WorkingSetLeafPrivateSize;// Offset=0x80 Size=0x8
    unsigned long long WorkingSetSize;// Offset=0x88 Size=0x8
    unsigned long long WorkingSetPrivateSize;// Offset=0x90 Size=0x8
    unsigned long long MaximumWorkingSetSize;// Offset=0x98 Size=0x8
    unsigned long long PeakWorkingSetSize;// Offset=0xa0 Size=0x8
    unsigned long HardFaultCount;// Offset=0xa8 Size=0x4
    unsigned short LastTrimStamp;// Offset=0xac Size=0x2
    unsigned short PartitionId;// Offset=0xae Size=0x2
    unsigned long long SelfmapLock;// Offset=0xb0 Size=0x8
    struct _MMSUPPORT_FLAGS Flags;// Offset=0xb8 Size=0x4
};

struct _MMSUPPORT_SHARED// Size=0x50 (Id=1084)
{
    long WorkingSetLock;// Offset=0x0 Size=0x4
    long GoodCitizenWaiting;// Offset=0x4 Size=0x4
    unsigned long long ReleasedCommitDebt;// Offset=0x8 Size=0x8
    unsigned long long ResetPagesRepurposedCount;// Offset=0x10 Size=0x8
    void * WsSwapSupport;// Offset=0x18 Size=0x8
    void * CommitReleaseContext;// Offset=0x20 Size=0x8
    long WorkingSetCoreLock;// Offset=0x28 Size=0x4
    void * AccessLog;// Offset=0x30 Size=0x8
    unsigned long long ChargedWslePages;// Offset=0x38 Size=0x8
    unsigned long long ActualWslePages;// Offset=0x40 Size=0x8
    void * ShadowMapping;// Offset=0x48 Size=0x8
};

struct _MMSUPPORT_FULL// Size=0x110 (Id=791)
{
    struct _MMSUPPORT_INSTANCE Instance;// Offset=0x0 Size=0xc0
    struct _MMSUPPORT_SHARED Shared;// Offset=0xc0 Size=0x50
};

struct _MMSUPPORT_AGGREGATION// Size=0x20 (Id=794)
{
    unsigned long PageFaultCount;// Offset=0x0 Size=0x4
    unsigned long long WorkingSetSize;// Offset=0x8 Size=0x8
    unsigned long long WorkingSetLeafSize;// Offset=0x10 Size=0x8
    unsigned long long PeakWorkingSetSize;// Offset=0x18 Size=0x8
};

struct _SYSPTES_HEADER// Size=0x118 (Id=1428)
{
    struct _LIST_ENTRY ListHead[16];// Offset=0x0 Size=0x100
    unsigned long long Count;// Offset=0x100 Size=0x8
    unsigned long long NumberOfEntries;// Offset=0x108 Size=0x8
    unsigned long long NumberOfEntriesPeak;// Offset=0x110 Size=0x8
};

struct _MI_SYSTEM_VA_ASSIGNMENT// Size=0x10 (Id=1681)
{
    void * BaseAddress;// Offset=0x0 Size=0x8
    unsigned long long NumberOfBytes;// Offset=0x8 Size=0x8
};

struct _MI_VISIBLE_STATE// Size=0xc40 (Id=1515)
{
    struct _MI_SPECIAL_POOL SpecialPool;// Offset=0x0 Size=0x40
    struct _LIST_ENTRY SessionWsList;// Offset=0x40 Size=0x10
    struct _RTL_BITMAP * SessionIdBitmap;// Offset=0x50 Size=0x8
    struct _MM_PAGED_POOL_INFO PagedPoolInfo;// Offset=0x58 Size=0x38
    unsigned long long MaximumNonPagedPoolInPages;// Offset=0x90 Size=0x8
    unsigned long long SizeOfPagedPoolInPages;// Offset=0x98 Size=0x8
    struct _MI_SYSTEM_PTE_TYPE SystemPteInfo;// Offset=0xa0 Size=0x60
    unsigned long long NonPagedPoolCommit;// Offset=0x100 Size=0x8
    unsigned long long SmallNonPagedPtesCommit;// Offset=0x108 Size=0x8
    unsigned long long BootCommit;// Offset=0x110 Size=0x8
    unsigned long long MdlPagesAllocated;// Offset=0x118 Size=0x8
    unsigned long long SystemPageTableCommit;// Offset=0x120 Size=0x8
    unsigned long long SpecialPagesInUse;// Offset=0x128 Size=0x8
    unsigned long long ProcessCommit;// Offset=0x130 Size=0x8
    long DriverCommit;// Offset=0x138 Size=0x4
    unsigned long long PfnDatabaseCommit;// Offset=0x140 Size=0x8
    struct _MMSUPPORT_FULL SystemWs[6];// Offset=0x180 Size=0x660
    struct _MMSUPPORT_SHARED SystemCacheShared;// Offset=0x800 Size=0x50
    struct _MMSUPPORT_AGGREGATION AggregateSystemWs[1];// Offset=0x880 Size=0x20
    unsigned long MapCacheFailures;// Offset=0x8a0 Size=0x4
    unsigned long long PagefileHashPages;// Offset=0x8a8 Size=0x8
    struct _SYSPTES_HEADER PteHeader;// Offset=0x8b0 Size=0x118
    struct _MI_SPECIAL_POOL * SessionSpecialPool;// Offset=0x9c8 Size=0x8
    unsigned long long SystemVaTypeCount[16];// Offset=0x9d0 Size=0x80
    unsigned char SystemVaType[256];// Offset=0xa50 Size=0x100
    struct _MI_SYSTEM_VA_ASSIGNMENT SystemVaRegions[14];// Offset=0xb50 Size=0xe0
};
