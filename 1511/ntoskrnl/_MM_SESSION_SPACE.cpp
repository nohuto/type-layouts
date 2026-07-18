struct _MM_SESSION_SPACE_FLAGS// Size=0x4 (Id=1412)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long Initialized:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long DeletePending:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long PoolInitialized:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long DynamicVaInitialized:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long WsInitialized:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long PoolDestroyed:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long ObjectInitialized:1;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1
        unsigned long LeakedPoolDeliberately:1;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x1
        unsigned long Filler:24;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x18
    };
};

union _unnamed_1065// Size=0x4 (Id=1065)
{
    unsigned long LongFlags;// Offset=0x0 Size=0x4
    struct _MM_SESSION_SPACE_FLAGS Flags;// Offset=0x0 Size=0x4
};

struct _LIST_ENTRY// Size=0x10 (Id=20)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _RTL_AVL_TREE// Size=0x8 (Id=36)
{
    struct _RTL_BALANCED_NODE * Root;// Offset=0x0 Size=0x8
};

struct _DISPATCHER_HEADER// Size=0x18 (Id=504)
{
    union // Size=0x4 (Id=0)
    {
        long Lock;// Offset=0x0 Size=0x4
        long LockNV;// Offset=0x0 Size=0x4
        unsigned char Type;// Offset=0x0 Size=0x1
        unsigned char Signalling;// Offset=0x1 Size=0x1
        unsigned char Size;// Offset=0x2 Size=0x1
        unsigned char Reserved1;// Offset=0x3 Size=0x1
        unsigned char TimerType;// Offset=0x0 Size=0x1
        union // Size=0x1 (Id=0)
        {
            unsigned char TimerControlFlags;// Offset=0x1 Size=0x1
            struct // Size=0x1 (Id=0)
            {
                unsigned char Absolute:1;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x1
                unsigned char Wake:1;// Offset=0x1 Size=0x1 BitOffset=0x1 BitSize=0x1
                unsigned char EncodedTolerableDelay:6;// Offset=0x1 Size=0x1 BitOffset=0x2 BitSize=0x6
            };
        };
        unsigned char Hand;// Offset=0x2 Size=0x1
        unsigned char TimerMiscFlags;// Offset=0x3 Size=0x1
        struct // Size=0x1 (Id=0)
        {
            unsigned char Index:6;// Offset=0x3 Size=0x1 BitOffset=0x0 BitSize=0x6
            unsigned char Inserted:1;// Offset=0x3 Size=0x1 BitOffset=0x6 BitSize=0x1
            unsigned char Expired:1;// Offset=0x3 Size=0x1 BitOffset=0x7 BitSize=0x1
        };
        unsigned char Timer2Type;// Offset=0x0 Size=0x1
        union // Size=0x1 (Id=0)
        {
            unsigned char Timer2Flags;// Offset=0x1 Size=0x1
            struct // Size=0x1 (Id=0)
            {
                unsigned char Timer2Inserted:1;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x1
                unsigned char Timer2Expiring:1;// Offset=0x1 Size=0x1 BitOffset=0x1 BitSize=0x1
                unsigned char Timer2CancelPending:1;// Offset=0x1 Size=0x1 BitOffset=0x2 BitSize=0x1
                unsigned char Timer2SetPending:1;// Offset=0x1 Size=0x1 BitOffset=0x3 BitSize=0x1
                unsigned char Timer2Running:1;// Offset=0x1 Size=0x1 BitOffset=0x4 BitSize=0x1
                unsigned char Timer2Disabled:1;// Offset=0x1 Size=0x1 BitOffset=0x5 BitSize=0x1
                unsigned char Timer2ReservedFlags:2;// Offset=0x1 Size=0x1 BitOffset=0x6 BitSize=0x2
            };
        };
        unsigned char Timer2Reserved1;// Offset=0x2 Size=0x1
        unsigned char Timer2Reserved2;// Offset=0x3 Size=0x1
        unsigned char QueueType;// Offset=0x0 Size=0x1
        union // Size=0x1 (Id=0)
        {
            unsigned char QueueControlFlags;// Offset=0x1 Size=0x1
            struct // Size=0x1 (Id=0)
            {
                unsigned char Abandoned:1;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x1
                unsigned char DisableIncrement:1;// Offset=0x1 Size=0x1 BitOffset=0x1 BitSize=0x1
                unsigned char QueueReservedControlFlags:6;// Offset=0x1 Size=0x1 BitOffset=0x2 BitSize=0x6
            };
        };
        unsigned char QueueSize;// Offset=0x2 Size=0x1
        unsigned char QueueReserved;// Offset=0x3 Size=0x1
        unsigned char ThreadType;// Offset=0x0 Size=0x1
        union // Size=0x1 (Id=0)
        {
            unsigned char ThreadSpecControl;// Offset=0x1 Size=0x1
            struct // Size=0x1 (Id=0)
            {
                unsigned char SpecControlIbrs:1;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x1
                unsigned char SpecControlStibp:1;// Offset=0x1 Size=0x1 BitOffset=0x1 BitSize=0x1
                unsigned char SpecControlReserved:6;// Offset=0x1 Size=0x1 BitOffset=0x2 BitSize=0x6
            };
        };
        union // Size=0x1 (Id=0)
        {
            unsigned char ThreadControlFlags;// Offset=0x2 Size=0x1
            struct // Size=0x1 (Id=0)
            {
                unsigned char CycleProfiling:1;// Offset=0x2 Size=0x1 BitOffset=0x0 BitSize=0x1
                unsigned char CounterProfiling:1;// Offset=0x2 Size=0x1 BitOffset=0x1 BitSize=0x1
                unsigned char GroupScheduling:1;// Offset=0x2 Size=0x1 BitOffset=0x2 BitSize=0x1
                unsigned char AffinitySet:1;// Offset=0x2 Size=0x1 BitOffset=0x3 BitSize=0x1
                unsigned char Tagged:1;// Offset=0x2 Size=0x1 BitOffset=0x4 BitSize=0x1
                unsigned char EnergyProfiling:1;// Offset=0x2 Size=0x1 BitOffset=0x5 BitSize=0x1
                unsigned char ThreadReservedControlFlags:2;// Offset=0x2 Size=0x1 BitOffset=0x6 BitSize=0x2
            };
        };
        unsigned char DebugActive;// Offset=0x3 Size=0x1
        struct // Size=0x1 (Id=0)
        {
            unsigned char ActiveDR7:1;// Offset=0x3 Size=0x1 BitOffset=0x0 BitSize=0x1
            unsigned char Instrumented:1;// Offset=0x3 Size=0x1 BitOffset=0x1 BitSize=0x1
            unsigned char Minimal:1;// Offset=0x3 Size=0x1 BitOffset=0x2 BitSize=0x1
            unsigned char Reserved4:3;// Offset=0x3 Size=0x1 BitOffset=0x3 BitSize=0x3
            unsigned char UmsScheduled:1;// Offset=0x3 Size=0x1 BitOffset=0x6 BitSize=0x1
            unsigned char UmsPrimary:1;// Offset=0x3 Size=0x1 BitOffset=0x7 BitSize=0x1
        };
        unsigned char MutantType;// Offset=0x0 Size=0x1
        unsigned char MutantSize;// Offset=0x1 Size=0x1
        unsigned char DpcActive;// Offset=0x2 Size=0x1
        unsigned char MutantReserved;// Offset=0x3 Size=0x1
    };
    long SignalState;// Offset=0x4 Size=0x4
    struct _LIST_ENTRY WaitListHead;// Offset=0x8 Size=0x10
};

struct _KGATE// Size=0x18 (Id=579)
{
    struct _DISPATCHER_HEADER Header;// Offset=0x0 Size=0x18
};

struct _unnamed_65// Size=0x10 (Id=65)
{
    struct // Size=0x10 (Id=0)
    {
        unsigned long long Depth:16;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x10
        unsigned long long Sequence:48;// Offset=0x0 Size=0x8 BitOffset=0x10 BitSize=0x30
        unsigned long long Reserved:4;// Offset=0x8 Size=0x8 BitOffset=0x0 BitSize=0x4
        unsigned long long NextEntry:60;// Offset=0x8 Size=0x8 BitOffset=0x4 BitSize=0x3c
    };
};

union _SLIST_HEADER// Size=0x10 (Id=66)
{
    unsigned long long Alignment;// Offset=0x0 Size=0x8
    unsigned long long Region;// Offset=0x8 Size=0x8
    struct _unnamed_65 HeaderX64;// Offset=0x0 Size=0x10
};

struct _SINGLE_LIST_ENTRY// Size=0x8 (Id=21)
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

struct _GENERAL_LOOKASIDE// Size=0x80 (Id=84)
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

struct _EX_PUSH_LOCK// Size=0x8 (Id=81)
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

struct _MMSESSION// Size=0x20 (Id=874)
{
    struct _EX_PUSH_LOCK SystemSpaceViewLock;// Offset=0x0 Size=0x8
    struct _EX_PUSH_LOCK * SystemSpaceViewLockPointer;// Offset=0x8 Size=0x8
    struct _RTL_AVL_TREE ViewRoot;// Offset=0x10 Size=0x8
    unsigned long ViewCount;// Offset=0x18 Size=0x4
    unsigned long BitmapFailures;// Offset=0x1c Size=0x4
};

struct _RTL_BITMAP_EX// Size=0x10 (Id=659)
{
    unsigned long long SizeOfBitMap;// Offset=0x0 Size=0x8
    unsigned long long * Buffer;// Offset=0x8 Size=0x8
};

struct _MM_PAGED_POOL_INFO// Size=0x38 (Id=931)
{
    struct _EX_PUSH_LOCK Lock;// Offset=0x0 Size=0x8
    struct _RTL_BITMAP_EX PagedPoolAllocationMap;// Offset=0x8 Size=0x10
    struct _MMPTE * FirstPteForPagedPool;// Offset=0x18 Size=0x8
    unsigned long long MaximumSize;// Offset=0x20 Size=0x8
    unsigned long long PagedPoolHint;// Offset=0x28 Size=0x8
    unsigned long long AllocatedPagedPool;// Offset=0x30 Size=0x8
};

struct _MMSUPPORT_FLAGS// Size=0x4 (Id=697)
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
    unsigned char MemoryPriority;// Offset=0x2 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char WsleDeleted:1;// Offset=0x3 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char VmExiting:1;// Offset=0x3 Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char ExpansionFailed:1;// Offset=0x3 Size=0x1 BitOffset=0x2 BitSize=0x1
        unsigned char SvmEnabled:1;// Offset=0x3 Size=0x1 BitOffset=0x3 BitSize=0x1
        unsigned char ForceAge:1;// Offset=0x3 Size=0x1 BitOffset=0x4 BitSize=0x1
        unsigned char NewMaximum:1;// Offset=0x3 Size=0x1 BitOffset=0x5 BitSize=0x1
        unsigned char CommitReleaseState:2;// Offset=0x3 Size=0x1 BitOffset=0x6 BitSize=0x2
    };
};

struct _MMSUPPORT// Size=0x100 (Id=224)
{
    long WorkingSetLock;// Offset=0x0 Size=0x4
    struct _KGATE * ExitOutswapGate;// Offset=0x8 Size=0x8
    void * AccessLog;// Offset=0x10 Size=0x8
    struct _LIST_ENTRY WorkingSetExpansionLinks;// Offset=0x18 Size=0x10
    unsigned long long AgeDistribution[7];// Offset=0x28 Size=0x38
    unsigned long long MinimumWorkingSetSize;// Offset=0x60 Size=0x8
    unsigned long long WorkingSetLeafSize;// Offset=0x68 Size=0x8
    unsigned long long WorkingSetLeafPrivateSize;// Offset=0x70 Size=0x8
    unsigned long long WorkingSetSize;// Offset=0x78 Size=0x8
    unsigned long long WorkingSetPrivateSize;// Offset=0x80 Size=0x8
    unsigned long long MaximumWorkingSetSize;// Offset=0x88 Size=0x8
    unsigned long long ChargedWslePages;// Offset=0x90 Size=0x8
    unsigned long long ActualWslePages;// Offset=0x98 Size=0x8
    unsigned long long WorkingSetSizeOverhead;// Offset=0xa0 Size=0x8
    unsigned long long PeakWorkingSetSize;// Offset=0xa8 Size=0x8
    unsigned long HardFaultCount;// Offset=0xb0 Size=0x4
    unsigned short PartitionId;// Offset=0xb4 Size=0x2
    unsigned short Pad0;// Offset=0xb6 Size=0x2
    struct _MMWSL * VmWorkingSetList;// Offset=0xb8 Size=0x8
    unsigned short NextPageColor;// Offset=0xc0 Size=0x2
    unsigned short LastTrimStamp;// Offset=0xc2 Size=0x2
    unsigned long PageFaultCount;// Offset=0xc4 Size=0x4
    unsigned long long TrimmedPageCount;// Offset=0xc8 Size=0x8
    unsigned long long Reserved0;// Offset=0xd0 Size=0x8
    struct _MMSUPPORT_FLAGS Flags;// Offset=0xd8 Size=0x4
    unsigned long long ReleasedCommitDebt;// Offset=0xe0 Size=0x8
    void * WsSwapSupport;// Offset=0xe8 Size=0x8
    void * CommitReAcquireFailSupport;// Offset=0xf0 Size=0x8
    void * ShadowMapping;// Offset=0xf8 Size=0x8
};

struct _MI_SESSION_DRIVER_UNLOAD// Size=0x8 (Id=1353)
{
    union // Size=0x8 (Id=0)
    {
        void  ( * Function)(struct _DRIVER_OBJECT * );// Offset=0x0 Size=0x8
        unsigned long long FunctionValue;// Offset=0x0 Size=0x8
    };
};

struct _KEVENT// Size=0x18 (Id=64)
{
    struct _DISPATCHER_HEADER Header;// Offset=0x0 Size=0x18
};

struct _FAST_MUTEX// Size=0x38 (Id=62)
{
    long Count;// Offset=0x0 Size=0x4
    void * Owner;// Offset=0x8 Size=0x8
    unsigned long Contention;// Offset=0x10 Size=0x4
    struct _KEVENT Event;// Offset=0x18 Size=0x18
    unsigned long OldIrql;// Offset=0x30 Size=0x4
};

struct _POOL_DESCRIPTOR// Size=0x1140 (Id=576)
{
    enum _POOL_TYPE PoolType;// Offset=0x0 Size=0x4
    union // Size=0x38 (Id=0)
    {
        struct _FAST_MUTEX PagedLock;// Offset=0x8 Size=0x38
        unsigned long long NonPagedLock;// Offset=0x8 Size=0x8
        long RunningAllocs;// Offset=0x40 Size=0x4
    };
    long RunningDeAllocs;// Offset=0x44 Size=0x4
    long TotalBigPages;// Offset=0x48 Size=0x4
    long ThreadsProcessingDeferrals;// Offset=0x4c Size=0x4
    unsigned long long TotalBytes;// Offset=0x50 Size=0x8
    unsigned long PoolIndex;// Offset=0x80 Size=0x4
    long TotalPages;// Offset=0xc0 Size=0x4
    struct _SINGLE_LIST_ENTRY PendingFrees;// Offset=0x100 Size=0x8
    long PendingFreeDepth;// Offset=0x108 Size=0x4
    struct _LIST_ENTRY ListHeads[256];// Offset=0x140 Size=0x1000
};

struct _MMPTE_HARDWARE// Size=0x8 (Id=603)
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
        unsigned long long reserved1:4;// Offset=0x0 Size=0x8 BitOffset=0x30 BitSize=0x4
        unsigned long long SoftwareWsIndex:11;// Offset=0x0 Size=0x8 BitOffset=0x34 BitSize=0xb
        unsigned long long NoExecute:1;// Offset=0x0 Size=0x8 BitOffset=0x3f BitSize=0x1
    };
};

struct _HARDWARE_PTE// Size=0x8 (Id=496)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long Valid:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long Write:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
        unsigned long long Owner:1;// Offset=0x0 Size=0x8 BitOffset=0x2 BitSize=0x1
        unsigned long long WriteThrough:1;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x1
        unsigned long long CacheDisable:1;// Offset=0x0 Size=0x8 BitOffset=0x4 BitSize=0x1
        unsigned long long Accessed:1;// Offset=0x0 Size=0x8 BitOffset=0x5 BitSize=0x1
        unsigned long long Dirty:1;// Offset=0x0 Size=0x8 BitOffset=0x6 BitSize=0x1
        unsigned long long LargePage:1;// Offset=0x0 Size=0x8 BitOffset=0x7 BitSize=0x1
        unsigned long long Global:1;// Offset=0x0 Size=0x8 BitOffset=0x8 BitSize=0x1
        unsigned long long CopyOnWrite:1;// Offset=0x0 Size=0x8 BitOffset=0x9 BitSize=0x1
        unsigned long long Prototype:1;// Offset=0x0 Size=0x8 BitOffset=0xa BitSize=0x1
        unsigned long long reserved0:1;// Offset=0x0 Size=0x8 BitOffset=0xb BitSize=0x1
        unsigned long long PageFrameNumber:36;// Offset=0x0 Size=0x8 BitOffset=0xc BitSize=0x24
        unsigned long long reserved1:4;// Offset=0x0 Size=0x8 BitOffset=0x30 BitSize=0x4
        unsigned long long SoftwareWsIndex:11;// Offset=0x0 Size=0x8 BitOffset=0x34 BitSize=0xb
        unsigned long long NoExecute:1;// Offset=0x0 Size=0x8 BitOffset=0x3f BitSize=0x1
    };
};

struct _MMPTE_PROTOTYPE// Size=0x8 (Id=545)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long Valid:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long DemandFillProto:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
        unsigned long long HiberVerifyConverted:1;// Offset=0x0 Size=0x8 BitOffset=0x2 BitSize=0x1
        unsigned long long Unused1:5;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x5
        unsigned long long ReadOnly:1;// Offset=0x0 Size=0x8 BitOffset=0x8 BitSize=0x1
        unsigned long long Combined:1;// Offset=0x0 Size=0x8 BitOffset=0x9 BitSize=0x1
        unsigned long long Prototype:1;// Offset=0x0 Size=0x8 BitOffset=0xa BitSize=0x1
        unsigned long long Protection:5;// Offset=0x0 Size=0x8 BitOffset=0xb BitSize=0x5
        long long ProtoAddress:48;// Offset=0x0 Size=0x8 BitOffset=0x10 BitSize=0x30
    };
};

struct _MMPTE_SOFTWARE// Size=0x8 (Id=666)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long Valid:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long PageFileLow:4;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x4
        unsigned long long Protection:5;// Offset=0x0 Size=0x8 BitOffset=0x5 BitSize=0x5
        unsigned long long Prototype:1;// Offset=0x0 Size=0x8 BitOffset=0xa BitSize=0x1
        unsigned long long Transition:1;// Offset=0x0 Size=0x8 BitOffset=0xb BitSize=0x1
        unsigned long long PageFileReserved:1;// Offset=0x0 Size=0x8 BitOffset=0xc BitSize=0x1
        unsigned long long PageFileAllocated:1;// Offset=0x0 Size=0x8 BitOffset=0xd BitSize=0x1
        unsigned long long UsedPageTableEntries:10;// Offset=0x0 Size=0x8 BitOffset=0xe BitSize=0xa
        unsigned long long LocalPartition:1;// Offset=0x0 Size=0x8 BitOffset=0x18 BitSize=0x1
        unsigned long long Unused:7;// Offset=0x0 Size=0x8 BitOffset=0x19 BitSize=0x7
        unsigned long long PageFileHigh:32;// Offset=0x0 Size=0x8 BitOffset=0x20 BitSize=0x20
    };
};

struct _MMPTE_TIMESTAMP// Size=0x8 (Id=818)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long MustBeZero:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long PageFileLow:4;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x4
        unsigned long long Protection:5;// Offset=0x0 Size=0x8 BitOffset=0x5 BitSize=0x5
        unsigned long long Prototype:1;// Offset=0x0 Size=0x8 BitOffset=0xa BitSize=0x1
        unsigned long long Transition:1;// Offset=0x0 Size=0x8 BitOffset=0xb BitSize=0x1
        unsigned long long Reserved:20;// Offset=0x0 Size=0x8 BitOffset=0xc BitSize=0x14
        unsigned long long GlobalTimeStamp:32;// Offset=0x0 Size=0x8 BitOffset=0x20 BitSize=0x20
    };
};

struct _MMPTE_TRANSITION// Size=0x8 (Id=1275)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long Valid:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long Write:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
        unsigned long long Spare:1;// Offset=0x0 Size=0x8 BitOffset=0x2 BitSize=0x1
        unsigned long long WriteThrough:1;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x1
        unsigned long long CacheDisable:1;// Offset=0x0 Size=0x8 BitOffset=0x4 BitSize=0x1
        unsigned long long Protection:5;// Offset=0x0 Size=0x8 BitOffset=0x5 BitSize=0x5
        unsigned long long Prototype:1;// Offset=0x0 Size=0x8 BitOffset=0xa BitSize=0x1
        unsigned long long Transition:1;// Offset=0x0 Size=0x8 BitOffset=0xb BitSize=0x1
        unsigned long long PageFrameNumber:36;// Offset=0x0 Size=0x8 BitOffset=0xc BitSize=0x24
        unsigned long long Unused:16;// Offset=0x0 Size=0x8 BitOffset=0x30 BitSize=0x10
    };
};

struct _MMPTE_SUBSECTION// Size=0x8 (Id=903)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long Valid:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long Unused0:4;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x4
        unsigned long long Protection:5;// Offset=0x0 Size=0x8 BitOffset=0x5 BitSize=0x5
        unsigned long long Prototype:1;// Offset=0x0 Size=0x8 BitOffset=0xa BitSize=0x1
        unsigned long long Unused1:4;// Offset=0x0 Size=0x8 BitOffset=0xb BitSize=0x4
        unsigned long long ExecutePrivilege:1;// Offset=0x0 Size=0x8 BitOffset=0xf BitSize=0x1
        long long SubsectionAddress:48;// Offset=0x0 Size=0x8 BitOffset=0x10 BitSize=0x30
    };
};

struct _MMPTE_LIST// Size=0x8 (Id=776)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long Valid:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long OneEntry:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
        unsigned long long filler0:3;// Offset=0x0 Size=0x8 BitOffset=0x2 BitSize=0x3
        unsigned long long Protection:5;// Offset=0x0 Size=0x8 BitOffset=0x5 BitSize=0x5
        unsigned long long Prototype:1;// Offset=0x0 Size=0x8 BitOffset=0xa BitSize=0x1
        unsigned long long Transition:1;// Offset=0x0 Size=0x8 BitOffset=0xb BitSize=0x1
        unsigned long long filler1:16;// Offset=0x0 Size=0x8 BitOffset=0xc BitSize=0x10
        unsigned long long NextEntry:36;// Offset=0x0 Size=0x8 BitOffset=0x1c BitSize=0x24
    };
};

union _unnamed_202// Size=0x8 (Id=202)
{
    unsigned long long Long;// Offset=0x0 Size=0x8
    unsigned long long VolatileLong;// Offset=0x0 Size=0x8
    struct _MMPTE_HARDWARE Hard;// Offset=0x0 Size=0x8
    struct _HARDWARE_PTE Flush;// Offset=0x0 Size=0x8
    struct _MMPTE_PROTOTYPE Proto;// Offset=0x0 Size=0x8
    struct _MMPTE_SOFTWARE Soft;// Offset=0x0 Size=0x8
    struct _MMPTE_TIMESTAMP TimeStamp;// Offset=0x0 Size=0x8
    struct _MMPTE_TRANSITION Trans;// Offset=0x0 Size=0x8
    struct _MMPTE_SUBSECTION Subsect;// Offset=0x0 Size=0x8
    struct _MMPTE_LIST List;// Offset=0x0 Size=0x8
};

struct _MMPTE// Size=0x8 (Id=203)
{
    union _unnamed_202 u;// Offset=0x0 Size=0x8
};

struct _RTL_BITMAP// Size=0x10 (Id=30)
{
    unsigned long SizeOfBitMap;// Offset=0x0 Size=0x4
    unsigned long * Buffer;// Offset=0x8 Size=0x8
};

struct _MI_PTE_CHAIN_HEAD// Size=0x18 (Id=1041)
{
    struct _MMPTE Flink;// Offset=0x0 Size=0x8
    struct _MMPTE Blink;// Offset=0x8 Size=0x8
    struct _MMPTE * PteBase;// Offset=0x10 Size=0x8
};

struct _MI_SPECIAL_POOL// Size=0x50 (Id=1114)
{
    unsigned long long Lock;// Offset=0x0 Size=0x8
    struct _MI_PTE_CHAIN_HEAD Paged;// Offset=0x8 Size=0x18
    struct _MI_PTE_CHAIN_HEAD NonPaged;// Offset=0x20 Size=0x18
    unsigned long long PagesInUse;// Offset=0x38 Size=0x8
    struct _RTL_BITMAP SpecialPoolPdes;// Offset=0x40 Size=0x10
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
    MiVaMaximumType=14,
    MiVaSystemPtesLarge=15
};

struct _MI_SYSTEM_PTE_TYPE// Size=0x60 (Id=219)
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
    struct _MMSUPPORT * Vm;// Offset=0x38 Size=0x8
    unsigned long long TotalSystemPtes;// Offset=0x40 Size=0x8
    unsigned long long Hint;// Offset=0x48 Size=0x8
    struct _MI_CACHED_PTES * CachedPtes;// Offset=0x50 Size=0x8
    unsigned long long TotalFreeSystemPtes;// Offset=0x58 Size=0x8
};

enum _IO_SESSION_STATE
{
    IoSessionStateCreated=1,
    IoSessionStateInitialized=2,
    IoSessionStateConnected=3,
    IoSessionStateDisconnected=4,
    IoSessionStateDisconnectedLoggedOn=5,
    IoSessionStateLoggedOn=6,
    IoSessionStateLoggedOff=7,
    IoSessionStateTerminated=8,
    IoSessionStateMax=9
};

struct _MM_SESSION_SPACE// Size=0x1f40 (Id=1067)
{
    long ReferenceCount;// Offset=0x0 Size=0x4
    union _unnamed_1065 u;// Offset=0x4 Size=0x4
    unsigned long SessionId;// Offset=0x8 Size=0x4
    long ProcessReferenceToSession;// Offset=0xc Size=0x4
    struct _LIST_ENTRY ProcessList;// Offset=0x10 Size=0x10
    unsigned long long SessionPageDirectoryIndex;// Offset=0x20 Size=0x8
    unsigned long long NonPagablePages;// Offset=0x28 Size=0x8
    unsigned long long CommittedPages;// Offset=0x30 Size=0x8
    void * PagedPoolStart;// Offset=0x38 Size=0x8
    void * PagedPoolEnd;// Offset=0x40 Size=0x8
    void * SessionObject;// Offset=0x48 Size=0x8
    void * SessionObjectHandle;// Offset=0x50 Size=0x8
    unsigned long SessionPoolAllocationFailures[4];// Offset=0x58 Size=0x10
    struct _RTL_AVL_TREE ImageTree;// Offset=0x68 Size=0x8
    unsigned long LocaleId;// Offset=0x70 Size=0x4
    unsigned long AttachCount;// Offset=0x74 Size=0x4
    struct _KGATE AttachGate;// Offset=0x78 Size=0x18
    struct _LIST_ENTRY WsListEntry;// Offset=0x90 Size=0x10
    struct _GENERAL_LOOKASIDE Lookaside[21];// Offset=0xc0 Size=0xa80
    struct _MMSESSION Session;// Offset=0xb40 Size=0x20
    struct _MM_PAGED_POOL_INFO PagedPoolInfo;// Offset=0xb60 Size=0x38
    struct _MMSUPPORT Vm;// Offset=0xb98 Size=0x100
    struct _MMWSLE * Wsle;// Offset=0xc98 Size=0x8
    struct _MI_SESSION_DRIVER_UNLOAD DriverUnload;// Offset=0xca0 Size=0x8
    struct _POOL_DESCRIPTOR PagedPool;// Offset=0xcc0 Size=0x1140
    struct _MMPTE PageDirectory;// Offset=0x1e00 Size=0x8
    struct _EX_PUSH_LOCK SessionVaLock;// Offset=0x1e08 Size=0x8
    struct _RTL_BITMAP DynamicVaBitMap;// Offset=0x1e10 Size=0x10
    unsigned long DynamicVaHint;// Offset=0x1e20 Size=0x4
    struct _MI_SPECIAL_POOL SpecialPool;// Offset=0x1e28 Size=0x50
    struct _EX_PUSH_LOCK SessionPteLock;// Offset=0x1e78 Size=0x8
    long PoolBigEntriesInUse;// Offset=0x1e80 Size=0x4
    unsigned long PagedPoolPdeCount;// Offset=0x1e84 Size=0x4
    unsigned long SpecialPoolPdeCount;// Offset=0x1e88 Size=0x4
    unsigned long DynamicSessionPdeCount;// Offset=0x1e8c Size=0x4
    struct _MI_SYSTEM_PTE_TYPE SystemPteInfo;// Offset=0x1e90 Size=0x60
    void * PoolTrackTableExpansion;// Offset=0x1ef0 Size=0x8
    unsigned long long PoolTrackTableExpansionSize;// Offset=0x1ef8 Size=0x8
    void * PoolTrackBigPages;// Offset=0x1f00 Size=0x8
    unsigned long long PoolTrackBigPagesSize;// Offset=0x1f08 Size=0x8
    enum _IO_SESSION_STATE IoState;// Offset=0x1f10 Size=0x4
    unsigned long IoStateSequence;// Offset=0x1f14 Size=0x4
    struct _KEVENT IoNotificationEvent;// Offset=0x1f18 Size=0x18
    struct _EJOB * ServerSilo;// Offset=0x1f30 Size=0x8
    unsigned long long CreateTime;// Offset=0x1f38 Size=0x8
};
