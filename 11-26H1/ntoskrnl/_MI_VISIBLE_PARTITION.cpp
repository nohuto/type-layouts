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

struct _MI_PARTITION_WORKING_SET// Size=0x200 (Id=2027)
{
    struct _MMSUPPORT_INSTANCE VmInstance;// Offset=0x0 Size=0xc0
    struct _MMWSL_INSTANCE VmWorkingSetList;// Offset=0xc0 Size=0x110
};

struct _MI_PFN_LIST_ENTRY// Size=0x10 (Id=1850)
{
    unsigned long long Flink;// Offset=0x0 Size=0x8
    unsigned long long Blink;// Offset=0x8 Size=0x8
};

struct _MI_PFN_LIST_HEAD// Size=0x18 (Id=662)
{
    struct _MI_PFN_LIST_ENTRY Links;// Offset=0x0 Size=0x10
    unsigned long long Total;// Offset=0x10 Size=0x8
};

struct _MI_COLOR// Size=0x4 (Id=1822)
{
    union // Size=0x4 (Id=0)
    {
        unsigned long EntireField;// Offset=0x0 Size=0x4
        struct // Size=0x4 (Id=0)
        {
            unsigned long Cache:8;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x8
            unsigned long Channel:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
            unsigned long Node:6;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x6
            unsigned long HighLow:1;// Offset=0x0 Size=0x4 BitOffset=0xf BitSize=0x1
            unsigned long LargePageIndex:2;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x2
            unsigned long CacheAttribute:2;// Offset=0x0 Size=0x4 BitOffset=0x12 BitSize=0x2
            unsigned long ListName:1;// Offset=0x0 Size=0x4 BitOffset=0x14 BitSize=0x1
        };
    };
};

enum _MMLISTS
{
    ZeroedPageList=0,
    FreePageList=1,
    StandbyPageList=2,
    ModifiedPageList=3,
    ModifiedNoWritePageList=4,
    BadPageList=5,
    ActiveAndValid=6,
    TransitionPage=7
};

struct _unnamed_1734// Size=0x8 (Id=1734)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long Tradable:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long NonPagedBuddy:43;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x2b
        unsigned long long NonPagedBuddyTag:4;// Offset=0x0 Size=0x8 BitOffset=0x2c BitSize=0x4
        unsigned long long Spare:16;// Offset=0x0 Size=0x8 BitOffset=0x30 BitSize=0x10
    };
};

struct _unnamed_1735// Size=0x8 (Id=1735)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long Tradable:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long NonPagedBuddy:31;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1f
        unsigned long long NonPagedBuddyTag:4;// Offset=0x0 Size=0x8 BitOffset=0x20 BitSize=0x4
        unsigned long long UsedPageTableEntries:10;// Offset=0x0 Size=0x8 BitOffset=0x24 BitSize=0xa
        unsigned long long WsleAge:3;// Offset=0x0 Size=0x8 BitOffset=0x2e BitSize=0x3
        unsigned long long OldestWsleLeafEntries:10;// Offset=0x0 Size=0x8 BitOffset=0x31 BitSize=0xa
        unsigned long long OldestWsleLeafAge:3;// Offset=0x0 Size=0x8 BitOffset=0x3b BitSize=0x3
        unsigned long long Spare:2;// Offset=0x0 Size=0x8 BitOffset=0x3e BitSize=0x2
    };
};

struct _MI_ACTIVE_PFN// Size=0x8 (Id=1736)
{
    union // Size=0x8 (Id=0)
    {
        struct _unnamed_1734 Leaf;// Offset=0x0 Size=0x8
        struct _unnamed_1735 PageTable;// Offset=0x0 Size=0x8
        unsigned long long EntireActiveField;// Offset=0x0 Size=0x8
    };
};

struct _MIPFNFLINK// Size=0x8 (Id=1700)
{
    union // Size=0x8 (Id=0)
    {
        struct _SLIST_ENTRY * NextSlistPfn;// Offset=0x0 Size=0x8
        struct // Size=0x8 (Id=0)
        {
            unsigned long long Flink:40;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x28
            unsigned long long NodeFlinkLow:24;// Offset=0x0 Size=0x8 BitOffset=0x28 BitSize=0x18
        };
        unsigned long long EntireField;// Offset=0x0 Size=0x8
        struct _MI_ACTIVE_PFN Active;// Offset=0x0 Size=0x8
    };
};

struct _MMPTE_HARDWARE// Size=0x8 (Id=1265)
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
        unsigned long long ClearedByHiberVerifyRevert:1;// Offset=0x0 Size=0x8 BitOffset=0xa BitSize=0x1
        unsigned long long Write:1;// Offset=0x0 Size=0x8 BitOffset=0xb BitSize=0x1
        unsigned long long PageFrameNumber:40;// Offset=0x0 Size=0x8 BitOffset=0xc BitSize=0x28
        unsigned long long ReservedForSoftware:3;// Offset=0x0 Size=0x8 BitOffset=0x34 BitSize=0x3
        unsigned long long MemoryTag:1;// Offset=0x0 Size=0x8 BitOffset=0x37 BitSize=0x1
        unsigned long long WsleAge:4;// Offset=0x0 Size=0x8 BitOffset=0x38 BitSize=0x4
        unsigned long long WsleProtection:3;// Offset=0x0 Size=0x8 BitOffset=0x3c BitSize=0x3
        unsigned long long NoExecute:1;// Offset=0x0 Size=0x8 BitOffset=0x3f BitSize=0x1
    };
};

struct _MMPTE_PROTOTYPE// Size=0x8 (Id=1790)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long Valid:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long MemoryTag:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
        unsigned long long HiberVerifyConverted:1;// Offset=0x0 Size=0x8 BitOffset=0x2 BitSize=0x1
        unsigned long long ReadOnly:1;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x1
        unsigned long long SwizzleBit:1;// Offset=0x0 Size=0x8 BitOffset=0x4 BitSize=0x1
        unsigned long long Protection:5;// Offset=0x0 Size=0x8 BitOffset=0x5 BitSize=0x5
        unsigned long long Prototype:1;// Offset=0x0 Size=0x8 BitOffset=0xa BitSize=0x1
        unsigned long long Combined:1;// Offset=0x0 Size=0x8 BitOffset=0xb BitSize=0x1
        unsigned long long ProtoIndex:42;// Offset=0x0 Size=0x8 BitOffset=0xc BitSize=0x2a
        unsigned long long ProtoTagBits:4;// Offset=0x0 Size=0x8 BitOffset=0x36 BitSize=0x4
        unsigned long long DemandFillProto:1;// Offset=0x0 Size=0x8 BitOffset=0x3a BitSize=0x1
        unsigned long long PoolType:1;// Offset=0x0 Size=0x8 BitOffset=0x3b BitSize=0x1
    };
};

struct _MMPTE_SOFTWARE// Size=0x8 (Id=1585)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long Valid:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long MemoryTag:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
        unsigned long long PageFileReserved:1;// Offset=0x0 Size=0x8 BitOffset=0x2 BitSize=0x1
        unsigned long long PageFileAllocated:1;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x1
        unsigned long long SwizzleBit:1;// Offset=0x0 Size=0x8 BitOffset=0x4 BitSize=0x1
        unsigned long long Protection:5;// Offset=0x0 Size=0x8 BitOffset=0x5 BitSize=0x5
        unsigned long long Prototype:1;// Offset=0x0 Size=0x8 BitOffset=0xa BitSize=0x1
        unsigned long long Transition:1;// Offset=0x0 Size=0x8 BitOffset=0xb BitSize=0x1
        unsigned long long PageFileLow:4;// Offset=0x0 Size=0x8 BitOffset=0xc BitSize=0x4
        unsigned long long ColdPage:1;// Offset=0x0 Size=0x8 BitOffset=0x10 BitSize=0x1
        unsigned long long UsedPageTableEntries:10;// Offset=0x0 Size=0x8 BitOffset=0x11 BitSize=0xa
        unsigned long long ShadowStack:1;// Offset=0x0 Size=0x8 BitOffset=0x1b BitSize=0x1
        unsigned long long OnStandbyLookaside:1;// Offset=0x0 Size=0x8 BitOffset=0x1c BitSize=0x1
        unsigned long long Unused:3;// Offset=0x0 Size=0x8 BitOffset=0x1d BitSize=0x3
        unsigned long long PageFileHigh:32;// Offset=0x0 Size=0x8 BitOffset=0x20 BitSize=0x20
    };
};

struct _MMPTE_TIMESTAMP// Size=0x8 (Id=1901)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long MustBeZero:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long MemoryTag:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
        unsigned long long Unused:2;// Offset=0x0 Size=0x8 BitOffset=0x2 BitSize=0x2
        unsigned long long SwizzleBit:1;// Offset=0x0 Size=0x8 BitOffset=0x4 BitSize=0x1
        unsigned long long Protection:5;// Offset=0x0 Size=0x8 BitOffset=0x5 BitSize=0x5
        unsigned long long Prototype:1;// Offset=0x0 Size=0x8 BitOffset=0xa BitSize=0x1
        unsigned long long Transition:1;// Offset=0x0 Size=0x8 BitOffset=0xb BitSize=0x1
        unsigned long long PageFileLow:4;// Offset=0x0 Size=0x8 BitOffset=0xc BitSize=0x4
        unsigned long long Reserved:15;// Offset=0x0 Size=0x8 BitOffset=0x10 BitSize=0xf
        unsigned long long GlobalTimeStamp:32;// Offset=0x0 Size=0x8 BitOffset=0x1f BitSize=0x20
    };
};

struct _MMPTE_TRANSITION// Size=0x8 (Id=2266)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long Valid:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long MemoryTag:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
        unsigned long long OnStandbyLookaside:1;// Offset=0x0 Size=0x8 BitOffset=0x2 BitSize=0x1
        unsigned long long IoTracker:1;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x1
        unsigned long long SwizzleBit:1;// Offset=0x0 Size=0x8 BitOffset=0x4 BitSize=0x1
        unsigned long long Protection:5;// Offset=0x0 Size=0x8 BitOffset=0x5 BitSize=0x5
        unsigned long long Prototype:1;// Offset=0x0 Size=0x8 BitOffset=0xa BitSize=0x1
        unsigned long long Transition:1;// Offset=0x0 Size=0x8 BitOffset=0xb BitSize=0x1
        unsigned long long PageFrameNumber:40;// Offset=0x0 Size=0x8 BitOffset=0xc BitSize=0x28
        unsigned long long Unused:12;// Offset=0x0 Size=0x8 BitOffset=0x34 BitSize=0xc
    };
};

struct _MMPTE_SUBSECTION// Size=0x8 (Id=1258)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long Valid:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long Uunsed0:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
        unsigned long long ColdPage:1;// Offset=0x0 Size=0x8 BitOffset=0x2 BitSize=0x1
        unsigned long long OnStandbyLookaside:1;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x1
        unsigned long long SwizzleBit:1;// Offset=0x0 Size=0x8 BitOffset=0x4 BitSize=0x1
        unsigned long long Protection:5;// Offset=0x0 Size=0x8 BitOffset=0x5 BitSize=0x5
        unsigned long long Prototype:1;// Offset=0x0 Size=0x8 BitOffset=0xa BitSize=0x1
        unsigned long long ExecutePrivilege:1;// Offset=0x0 Size=0x8 BitOffset=0xb BitSize=0x1
        unsigned long long SubsectionIndex:42;// Offset=0x0 Size=0x8 BitOffset=0xc BitSize=0x2a
        unsigned long long SubsectionTagBits:4;// Offset=0x0 Size=0x8 BitOffset=0x36 BitSize=0x4
        unsigned long long DemandFillProto:1;// Offset=0x0 Size=0x8 BitOffset=0x3a BitSize=0x1
    };
};

struct _MMPTE_LIST// Size=0x8 (Id=2016)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long Valid:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long MemoryTag:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
        unsigned long long OneEntry:1;// Offset=0x0 Size=0x8 BitOffset=0x2 BitSize=0x1
        unsigned long long filler0:1;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x1
        unsigned long long SwizzleBit:1;// Offset=0x0 Size=0x8 BitOffset=0x4 BitSize=0x1
        unsigned long long Protection:5;// Offset=0x0 Size=0x8 BitOffset=0x5 BitSize=0x5
        unsigned long long Prototype:1;// Offset=0x0 Size=0x8 BitOffset=0xa BitSize=0x1
        unsigned long long Transition:1;// Offset=0x0 Size=0x8 BitOffset=0xb BitSize=0x1
        unsigned long long filler1:4;// Offset=0x0 Size=0x8 BitOffset=0xc BitSize=0x4
        unsigned long long filler2:8;// Offset=0x0 Size=0x8 BitOffset=0x10 BitSize=0x8
        unsigned long long NextEntry:39;// Offset=0x0 Size=0x8 BitOffset=0x18 BitSize=0x27
    };
};

struct _MMPTE_ACTIVE_PAGE_TABLE_LINKS// Size=0x8 (Id=1511)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long Flink:40;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x28
        unsigned long long BlinkHigh:24;// Offset=0x0 Size=0x8 BitOffset=0x28 BitSize=0x18
    };
};

union _unnamed_649// Size=0x8 (Id=649)
{
    unsigned long long Long;// Offset=0x0 Size=0x8
    struct _MMPTE_HARDWARE Hard;// Offset=0x0 Size=0x8
    struct _MMPTE_PROTOTYPE Proto;// Offset=0x0 Size=0x8
    struct _MMPTE_SOFTWARE Soft;// Offset=0x0 Size=0x8
    struct _MMPTE_TIMESTAMP TimeStamp;// Offset=0x0 Size=0x8
    struct _MMPTE_TRANSITION Trans;// Offset=0x0 Size=0x8
    struct _MMPTE_SUBSECTION Subsect;// Offset=0x0 Size=0x8
    struct _MMPTE_LIST List;// Offset=0x0 Size=0x8
    struct _MMPTE_ACTIVE_PAGE_TABLE_LINKS PageTableLinks;// Offset=0x0 Size=0x8
};

struct _MMPTE// Size=0x8 (Id=650)
{
    union _unnamed_649 u;// Offset=0x0 Size=0x8
};

struct _MIPFNBLINK// Size=0x8 (Id=653)
{
    union // Size=0x8 (Id=0)
    {
        struct // Size=0x8 (Id=0)
        {
            union // Size=0x8 (Id=0)
            {
                unsigned long long Blink:40;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x28
                unsigned long long NodeBlinkLow:19;// Offset=0x0 Size=0x8 BitOffset=0x28 BitSize=0x13
                unsigned long long TbFlushStamp:3;// Offset=0x0 Size=0x8 BitOffset=0x3b BitSize=0x3
                unsigned long long PageBlinkDeleteBit:1;// Offset=0x0 Size=0x8 BitOffset=0x3e BitSize=0x1
                unsigned long long PageBlinkLockBit:1;// Offset=0x0 Size=0x8 BitOffset=0x3f BitSize=0x1
                unsigned long long ShareCount:62;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x3e
            };
            unsigned long long PageShareCountDeleteBit:1;// Offset=0x0 Size=0x8 BitOffset=0x3e BitSize=0x1
            unsigned long long PageShareCountLockBit:1;// Offset=0x0 Size=0x8 BitOffset=0x3f BitSize=0x1
        };
        long long EntireField;// Offset=0x0 Size=0x8
        struct // Size=0x8 (Id=0)
        {
            unsigned long long LockNotUsed:62;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x3e
            unsigned long long DeleteBit:1;// Offset=0x0 Size=0x8 BitOffset=0x3e BitSize=0x1
            unsigned long long LockBit:1;// Offset=0x0 Size=0x8 BitOffset=0x3f BitSize=0x1
        };
    };
};

struct _MMPFNENTRY1// Size=0x1 (Id=1459)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char PageLocation:3;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x3
        unsigned char WriteInProgress:1;// Offset=0x0 Size=0x1 BitOffset=0x3 BitSize=0x1
        unsigned char Modified:1;// Offset=0x0 Size=0x1 BitOffset=0x4 BitSize=0x1
        unsigned char ReadInProgress:1;// Offset=0x0 Size=0x1 BitOffset=0x5 BitSize=0x1
        unsigned char CacheAttribute:2;// Offset=0x0 Size=0x1 BitOffset=0x6 BitSize=0x2
    };
};

struct _MMPFNENTRY3// Size=0x1 (Id=1507)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char Priority:3;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x3
        unsigned char OnProtectedStandby:1;// Offset=0x0 Size=0x1 BitOffset=0x3 BitSize=0x1
        unsigned char InPageError:1;// Offset=0x0 Size=0x1 BitOffset=0x4 BitSize=0x1
        unsigned char SystemChargedPage:1;// Offset=0x0 Size=0x1 BitOffset=0x5 BitSize=0x1
        unsigned char RemovalRequested:1;// Offset=0x0 Size=0x1 BitOffset=0x6 BitSize=0x1
        unsigned char ParityError:1;// Offset=0x0 Size=0x1 BitOffset=0x7 BitSize=0x1
    };
};

struct _unnamed_654// Size=0x2 (Id=654)
{
    unsigned short ReferenceCount;// Offset=0x0 Size=0x2
};

struct _MI_PFN_FLAGS// Size=0x4 (Id=655)
{
    union // Size=0x4 (Id=0)
    {
        struct // Size=0x4 (Id=0)
        {
            unsigned long ReferenceCount:16;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x10
            unsigned long PageLocation:3;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x3
            unsigned long WriteInProgress:1;// Offset=0x0 Size=0x4 BitOffset=0x13 BitSize=0x1
            unsigned long Modified:1;// Offset=0x0 Size=0x4 BitOffset=0x14 BitSize=0x1
            unsigned long ReadInProgress:1;// Offset=0x0 Size=0x4 BitOffset=0x15 BitSize=0x1
            unsigned long CacheAttribute:2;// Offset=0x0 Size=0x4 BitOffset=0x16 BitSize=0x2
            unsigned long Priority:3;// Offset=0x0 Size=0x4 BitOffset=0x18 BitSize=0x3
            unsigned long OnProtectedStandby:1;// Offset=0x0 Size=0x4 BitOffset=0x1b BitSize=0x1
            unsigned long InPageError:1;// Offset=0x0 Size=0x4 BitOffset=0x1c BitSize=0x1
            unsigned long SystemChargedPage:1;// Offset=0x0 Size=0x4 BitOffset=0x1d BitSize=0x1
            unsigned long RemovalRequested:1;// Offset=0x0 Size=0x4 BitOffset=0x1e BitSize=0x1
            unsigned long ParityError:1;// Offset=0x0 Size=0x4 BitOffset=0x1f BitSize=0x1
        };
        unsigned long EntireField;// Offset=0x0 Size=0x4
    };
};

union _unnamed_656// Size=0x4 (Id=656)
{
    unsigned short ReferenceCount;// Offset=0x0 Size=0x2
    struct _MMPFNENTRY1 e1;// Offset=0x2 Size=0x1
    struct _MMPFNENTRY3 e3;// Offset=0x3 Size=0x1
    struct _unnamed_654 e2;// Offset=0x0 Size=0x2
    struct _MI_PFN_FLAGS e4;// Offset=0x0 Size=0x4
};

struct _unnamed_2149// Size=0x4 (Id=2149)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long NodeBlinkHigh:21;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x15
        unsigned long NodeFlinkMiddle:11;// Offset=0x0 Size=0x4 BitOffset=0x15 BitSize=0xb
    };
};

struct _unnamed_2150// Size=0x1 (Id=2150)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char ModifiedListBucketIndex:4;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x4
    };
};

struct _unnamed_2151// Size=0x4 (Id=2151)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long PageTableBlinkLow:16;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x10
        unsigned long PageTableBuddyHigh:10;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0xa
        unsigned long PageTableLinked:1;// Offset=0x0 Size=0x4 BitOffset=0x1a BitSize=0x1
        unsigned long AnchorLargePageSize:2;// Offset=0x0 Size=0x4 BitOffset=0x1b BitSize=0x2
        unsigned long Spare1:3;// Offset=0x0 Size=0x4 BitOffset=0x1d BitSize=0x3
    };
};

struct _MI_PFN_FLAGS5// Size=0x4 (Id=2152)
{
    union // Size=0x4 (Id=0)
    {
        unsigned long EntireField;// Offset=0x0 Size=0x4
        struct _unnamed_2149 StandbyList;// Offset=0x0 Size=0x4
        struct _unnamed_2150 MappedPageList;// Offset=0x0 Size=0x1
        struct _unnamed_2151 Active;// Offset=0x0 Size=0x4
    };
};

struct _MI_PFN_FLAGS4// Size=0x8 (Id=1369)
{
    union // Size=0x8 (Id=0)
    {
        struct // Size=0x8 (Id=0)
        {
            unsigned long long PteFrame:40;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x28
            unsigned long long ResidentPage:1;// Offset=0x0 Size=0x8 BitOffset=0x28 BitSize=0x1
            unsigned long long ResidentPageContainsBadPages:1;// Offset=0x0 Size=0x8 BitOffset=0x29 BitSize=0x1
            unsigned long long Unused1:1;// Offset=0x0 Size=0x8 BitOffset=0x2a BitSize=0x1
            unsigned long long Partition:10;// Offset=0x0 Size=0x8 BitOffset=0x2b BitSize=0xa
            unsigned long long FileOnly:1;// Offset=0x0 Size=0x8 BitOffset=0x35 BitSize=0x1
            unsigned long long PfnExists:1;// Offset=0x0 Size=0x8 BitOffset=0x36 BitSize=0x1
            unsigned long long NodeFlinkHigh:5;// Offset=0x0 Size=0x8 BitOffset=0x37 BitSize=0x5
            unsigned long long PageIdentity:3;// Offset=0x0 Size=0x8 BitOffset=0x3c BitSize=0x3
            unsigned long long PrototypePte:1;// Offset=0x0 Size=0x8 BitOffset=0x3f BitSize=0x1
        };
        unsigned long long EntireField;// Offset=0x0 Size=0x8
    };
};

struct _MMPFN// Size=0x30 (Id=657)
{
    struct _MIPFNFLINK u1;// Offset=0x0 Size=0x8
    union // Size=0x8 (Id=0)
    {
        struct _MMPTE * PteAddress;// Offset=0x8 Size=0x8
        unsigned long long PteLong;// Offset=0x8 Size=0x8
    };
    struct _MMPTE OriginalPte;// Offset=0x10 Size=0x8
    struct _MIPFNBLINK u2;// Offset=0x18 Size=0x8
    union _unnamed_656 u3;// Offset=0x20 Size=0x4
    struct _MI_PFN_FLAGS5 u5;// Offset=0x24 Size=0x4
    struct _MI_PFN_FLAGS4 u4;// Offset=0x28 Size=0x8
};

struct _MMPFNLIST// Size=0x58 (Id=664)
{
    struct _MI_PFN_LIST_HEAD Core;// Offset=0x0 Size=0x18
    struct _MI_COLOR Color;// Offset=0x18 Size=0x4
    enum _MMLISTS ListName;// Offset=0x1c Size=0x4
    long Lock;// Offset=0x20 Size=0x4
    struct _MMPFN EmbeddedPfn;// Offset=0x28 Size=0x30
};

struct _MI_COMMIT_CHARGE_FAILURES// Size=0x20 (Id=2029)
{
    long ExpandFailed;// Offset=0x0 Size=0x4
    long AtMaximum;// Offset=0x4 Size=0x4
    long ExpandNoWait;// Offset=0x8 Size=0x4
    long Wrap;// Offset=0xc Size=0x4
    long ExpandTimedOut;// Offset=0x10 Size=0x4
    long ExpandFailures[3];// Offset=0x14 Size=0xc
};

struct _MDL// Size=0x30 (Id=576)
{
    struct _MDL * Next;// Offset=0x0 Size=0x8
    short Size;// Offset=0x8 Size=0x2
    short MdlFlags;// Offset=0xa Size=0x2
    unsigned short AllocationProcessorNumber;// Offset=0xc Size=0x2
    unsigned short Reserved;// Offset=0xe Size=0x2
    struct _EPROCESS * Process;// Offset=0x10 Size=0x8
    void * MappedSystemVa;// Offset=0x18 Size=0x8
    void * StartVa;// Offset=0x20 Size=0x8
    unsigned long ByteCount;// Offset=0x28 Size=0x4
    unsigned long ByteOffset;// Offset=0x2c Size=0x4
};

struct _unnamed_1796// Size=0x38 (Id=1796)
{
    struct _MDL Mdl;// Offset=0x0 Size=0x30
    unsigned long long Page[1];// Offset=0x30 Size=0x8
};

struct _MI_PAGEFILE_TRACES// Size=0x80 (Id=1797)
{
    long Status;// Offset=0x0 Size=0x4
    unsigned char PagefileNumber;// Offset=0x4 Size=0x1
    unsigned char Priority;// Offset=0x5 Size=0x1
    unsigned char IrpPriority;// Offset=0x6 Size=0x1
    unsigned char ReservationWrite;// Offset=0x7 Size=0x1
    unsigned long long CurrentTime;// Offset=0x8 Size=0x8
    unsigned long long AvailablePages;// Offset=0x10 Size=0x8
    unsigned long long ModifiedPagesTotal;// Offset=0x18 Size=0x8
    unsigned long long ModifiedPagefilePages;// Offset=0x20 Size=0x8
    unsigned long long ModifiedNoWritePages;// Offset=0x28 Size=0x8
    unsigned long long ModifiedPagefileNoReservationPages;// Offset=0x30 Size=0x8
    unsigned long long ModifiedPageFileNoReservationCompressPages;// Offset=0x38 Size=0x8
    unsigned long long ModifiedPagefileReservationPages;// Offset=0x40 Size=0x8
    struct _unnamed_1796 LocalMdl;// Offset=0x48 Size=0x38
};

struct _MI_VISIBLE_PARTITION// Size=0x1540 (Id=1422)
{
    unsigned long long LowestPhysicalPage;// Offset=0x0 Size=0x8
    unsigned long long HighestPhysicalPage;// Offset=0x8 Size=0x8
    unsigned long long NumberOfPhysicalPages;// Offset=0x10 Size=0x8
    unsigned long NumberOfPagingFiles;// Offset=0x18 Size=0x4
    unsigned char SystemCacheInitialized;// Offset=0x1c Size=0x1
    struct _MMPAGING_FILE * PagingFile[16];// Offset=0x20 Size=0x80
    unsigned long long AvailablePages;// Offset=0xc0 Size=0x8
    unsigned long long ResidentAvailablePages;// Offset=0x100 Size=0x8
    struct _MI_PARTITION_WORKING_SET PartitionWs[1];// Offset=0x140 Size=0x200
    unsigned long long TotalCommittedPages;// Offset=0x340 Size=0x8
    unsigned long long TotalCommittedPagesExposed;// Offset=0x380 Size=0x8
    struct _MMPFNLIST ModifiedPageListHead;// Offset=0x3c0 Size=0x58
    struct _MMPFNLIST ModifiedNoWritePageListHead;// Offset=0x440 Size=0x58
    unsigned long long TotalCommitLimit;// Offset=0x498 Size=0x8
    unsigned long long TotalPagesForPagingFile;// Offset=0x4a0 Size=0x8
    unsigned long long VadPhysicalPages;// Offset=0x4a8 Size=0x8
    unsigned long long ProcessLockedFilePages;// Offset=0x4b0 Size=0x8
    unsigned long long SharedCommit;// Offset=0x4b8 Size=0x8
    unsigned long long MdlPagesAllocated;// Offset=0x4c0 Size=0x8
    unsigned long long ContiguousPagesAllocated;// Offset=0x4c8 Size=0x8
    unsigned long long SlabAllocatorPages;// Offset=0x4d0 Size=0x8
    unsigned long long SlabAllocatorPagesUncharged;// Offset=0x4d8 Size=0x8
    unsigned long long BootSlabPages;// Offset=0x4e0 Size=0x8
    unsigned long long SecureKernelPagesFromNonChargedSlabs;// Offset=0x4e8 Size=0x8
    struct _MI_COMMIT_CHARGE_FAILURES ChargeCommitmentFailures;// Offset=0x4f0 Size=0x20
    long PageFileTraceIndex;// Offset=0x510 Size=0x4
    struct _MI_PAGEFILE_TRACES PageFileTraces[32];// Offset=0x518 Size=0x1000
};
