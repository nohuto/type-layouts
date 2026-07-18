struct _RTL_BITMAP_EX// Size=0x10 (Id=1202)
{
    unsigned long long SizeOfBitMap;// Offset=0x0 Size=0x8
    unsigned long long * Buffer;// Offset=0x8 Size=0x8
};

struct _MI_NODE_FREE_PAGE_INFORMATION// Size=0x500 (Id=1726)
{
    unsigned long PageColorHand;// Offset=0x0 Size=0x4
    unsigned long long FreeCount[2];// Offset=0x8 Size=0x10
    unsigned long long FreeZeroCountByAttribute[2][4];// Offset=0x18 Size=0x40
    struct _RTL_BITMAP_EX FreePageListHeadsBitmap[2][4][2];// Offset=0x80 Size=0x100
    unsigned long long FreePageListHeadsBitmapBuffer[64];// Offset=0x180 Size=0x200
    unsigned long long LargePageFreeCountHiLow[2][2];// Offset=0x380 Size=0x20
    unsigned long long LargePageCount[2][2][2];// Offset=0x3a0 Size=0x40
    struct _MMPFNLIST * LargePageEntries[2][2][2][4];// Offset=0x3e0 Size=0x100
};

struct _LIST_ENTRY// Size=0x10 (Id=4)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _WORK_QUEUE_ITEM// Size=0x20 (Id=21)
{
    struct _LIST_ENTRY List;// Offset=0x0 Size=0x10
    void  ( * WorkerRoutine)(void * );// Offset=0x10 Size=0x8
    void * Parameter;// Offset=0x18 Size=0x8
};

struct _MI_REBUILD_LARGE_PAGE_TIMER// Size=0x28 (Id=1979)
{
    struct _WORK_QUEUE_ITEM WorkItem;// Offset=0x0 Size=0x20
    unsigned char SecondsLeft;// Offset=0x20 Size=0x1
    unsigned char RebuildActive;// Offset=0x21 Size=0x1
    unsigned char NextPassDelta;// Offset=0x22 Size=0x1
    unsigned char LargeSubPagesActive;// Offset=0x23 Size=0x1
};

struct _MI_COLOR// Size=0x4 (Id=1738)
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

struct _RTL_BALANCED_NODE// Size=0x18 (Id=116)
{
    union // Size=0x10 (Id=0)
    {
        struct _RTL_BALANCED_NODE * Children[2];// Offset=0x0 Size=0x10
        struct _RTL_BALANCED_NODE * Left;// Offset=0x0 Size=0x8
        struct _RTL_BALANCED_NODE * Right;// Offset=0x8 Size=0x8
    };
    union // Size=0x1 (Id=0)
    {
        struct // Size=0x1 (Id=0)
        {
            union // Size=0x1 (Id=0)
            {
                unsigned char Red:1;// Offset=0x10 Size=0x1 BitOffset=0x0 BitSize=0x1
                unsigned char Balance:2;// Offset=0x10 Size=0x1 BitOffset=0x0 BitSize=0x2
            };
        };
        unsigned long long ParentValue;// Offset=0x10 Size=0x8
    };
};

struct _unnamed_1657// Size=0x8 (Id=1657)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long Tradable:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long NonPagedBuddy:43;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x2b
        unsigned long long Spare:20;// Offset=0x0 Size=0x8 BitOffset=0x2c BitSize=0x14
    };
};

struct _unnamed_1658// Size=0x8 (Id=1658)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long Tradable:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long NonPagedBuddy:31;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1f
        unsigned long long UsedPageTableEntries:10;// Offset=0x0 Size=0x8 BitOffset=0x20 BitSize=0xa
        unsigned long long WsleAge:3;// Offset=0x0 Size=0x8 BitOffset=0x2a BitSize=0x3
        unsigned long long OldestWsleLeafEntries:10;// Offset=0x0 Size=0x8 BitOffset=0x2d BitSize=0xa
        unsigned long long OldestWsleLeafAge:3;// Offset=0x0 Size=0x8 BitOffset=0x37 BitSize=0x3
        unsigned long long Spare:6;// Offset=0x0 Size=0x8 BitOffset=0x3a BitSize=0x6
    };
};

struct _MI_ACTIVE_PFN// Size=0x8 (Id=1659)
{
    union // Size=0x8 (Id=0)
    {
        struct _unnamed_1657 Leaf;// Offset=0x0 Size=0x8
        struct _unnamed_1658 PageTable;// Offset=0x0 Size=0x8
        unsigned long long EntireActiveField;// Offset=0x0 Size=0x8
    };
};

struct _MIPFNFLINK// Size=0x8 (Id=662)
{
    union // Size=0x8 (Id=0)
    {
        struct _SLIST_ENTRY * NextSlistPfn;// Offset=0x0 Size=0x8
        void * Next;// Offset=0x0 Size=0x8
        struct // Size=0x8 (Id=0)
        {
            unsigned long long Flink:40;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x28
            unsigned long long NodeFlinkLow:24;// Offset=0x0 Size=0x8 BitOffset=0x28 BitSize=0x18
        };
        unsigned long long EntireField;// Offset=0x0 Size=0x8
        struct _MI_ACTIVE_PFN Active;// Offset=0x0 Size=0x8
    };
};

struct _MMPTE_HARDWARE// Size=0x8 (Id=1213)
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
        unsigned long long PageFrameNumber:40;// Offset=0x0 Size=0x8 BitOffset=0xc BitSize=0x28
        unsigned long long ReservedForSoftware:4;// Offset=0x0 Size=0x8 BitOffset=0x34 BitSize=0x4
        unsigned long long WsleAge:4;// Offset=0x0 Size=0x8 BitOffset=0x38 BitSize=0x4
        unsigned long long WsleProtection:3;// Offset=0x0 Size=0x8 BitOffset=0x3c BitSize=0x3
        unsigned long long NoExecute:1;// Offset=0x0 Size=0x8 BitOffset=0x3f BitSize=0x1
    };
};

struct _MMPTE_PROTOTYPE// Size=0x8 (Id=1708)
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

struct _MMPTE_SOFTWARE// Size=0x8 (Id=1515)
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
        unsigned long long ShadowStack:1;// Offset=0x0 Size=0x8 BitOffset=0x1a BitSize=0x1
        unsigned long long OnStandbyLookaside:1;// Offset=0x0 Size=0x8 BitOffset=0x1b BitSize=0x1
        unsigned long long Unused:4;// Offset=0x0 Size=0x8 BitOffset=0x1c BitSize=0x4
        unsigned long long PageFileHigh:32;// Offset=0x0 Size=0x8 BitOffset=0x20 BitSize=0x20
    };
};

struct _MMPTE_TIMESTAMP// Size=0x8 (Id=1810)
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

struct _MMPTE_TRANSITION// Size=0x8 (Id=2161)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long Valid:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long Write:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
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

struct _MMPTE_SUBSECTION// Size=0x8 (Id=1206)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long Valid:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long Unused0:2;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x2
        unsigned long long OnStandbyLookaside:1;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x1
        unsigned long long SwizzleBit:1;// Offset=0x0 Size=0x8 BitOffset=0x4 BitSize=0x1
        unsigned long long Protection:5;// Offset=0x0 Size=0x8 BitOffset=0x5 BitSize=0x5
        unsigned long long Prototype:1;// Offset=0x0 Size=0x8 BitOffset=0xa BitSize=0x1
        unsigned long long ColdPage:1;// Offset=0x0 Size=0x8 BitOffset=0xb BitSize=0x1
        unsigned long long Unused2:3;// Offset=0x0 Size=0x8 BitOffset=0xc BitSize=0x3
        unsigned long long ExecutePrivilege:1;// Offset=0x0 Size=0x8 BitOffset=0xf BitSize=0x1
        long long SubsectionAddress:48;// Offset=0x0 Size=0x8 BitOffset=0x10 BitSize=0x30
    };
};

struct _MMPTE_LIST// Size=0x8 (Id=1916)
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
        unsigned long long filler1:13;// Offset=0x0 Size=0x8 BitOffset=0xc BitSize=0xd
        unsigned long long NextEntry:39;// Offset=0x0 Size=0x8 BitOffset=0x19 BitSize=0x27
    };
};

struct _MMPTE_ACTIVE_PAGE_TABLE_LINKS// Size=0x8 (Id=1447)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long Flink:40;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x28
        unsigned long long BlinkHigh:24;// Offset=0x0 Size=0x8 BitOffset=0x28 BitSize=0x18
    };
};

union _unnamed_653// Size=0x8 (Id=653)
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

struct _MMPTE// Size=0x8 (Id=654)
{
    union _unnamed_653 u;// Offset=0x0 Size=0x8
};

struct _MIPFNBLINK// Size=0x8 (Id=657)
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

struct _MMPFNENTRY1// Size=0x1 (Id=1397)
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

struct _MMPFNENTRY3// Size=0x1 (Id=1444)
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

struct _unnamed_658// Size=0x2 (Id=658)
{
    unsigned short ReferenceCount;// Offset=0x0 Size=0x2
};

struct _MI_PFN_FLAGS// Size=0x4 (Id=659)
{
    union // Size=0x4 (Id=0)
    {
        unsigned short ReferenceCount;// Offset=0x0 Size=0x2
        struct // Size=0x2 (Id=0)
        {
            unsigned char PageLocation:3;// Offset=0x2 Size=0x1 BitOffset=0x0 BitSize=0x3
            unsigned char WriteInProgress:1;// Offset=0x2 Size=0x1 BitOffset=0x3 BitSize=0x1
            unsigned char Modified:1;// Offset=0x2 Size=0x1 BitOffset=0x4 BitSize=0x1
            unsigned char ReadInProgress:1;// Offset=0x2 Size=0x1 BitOffset=0x5 BitSize=0x1
            unsigned char CacheAttribute:2;// Offset=0x2 Size=0x1 BitOffset=0x6 BitSize=0x2
            unsigned char Priority:3;// Offset=0x3 Size=0x1 BitOffset=0x0 BitSize=0x3
            unsigned char OnProtectedStandby:1;// Offset=0x3 Size=0x1 BitOffset=0x3 BitSize=0x1
            unsigned char InPageError:1;// Offset=0x3 Size=0x1 BitOffset=0x4 BitSize=0x1
            unsigned char SystemChargedPage:1;// Offset=0x3 Size=0x1 BitOffset=0x5 BitSize=0x1
            unsigned char RemovalRequested:1;// Offset=0x3 Size=0x1 BitOffset=0x6 BitSize=0x1
            unsigned char ParityError:1;// Offset=0x3 Size=0x1 BitOffset=0x7 BitSize=0x1
        };
        unsigned long EntireField;// Offset=0x0 Size=0x4
    };
};

union _unnamed_660// Size=0x4 (Id=660)
{
    unsigned short ReferenceCount;// Offset=0x0 Size=0x2
    struct _MMPFNENTRY1 e1;// Offset=0x2 Size=0x1
    struct _MMPFNENTRY3 e3;// Offset=0x3 Size=0x1
    struct _unnamed_658 e2;// Offset=0x0 Size=0x2
    struct _MI_PFN_FLAGS e4;// Offset=0x0 Size=0x4
};

struct _unnamed_2043// Size=0x4 (Id=2043)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long NodeBlinkHigh:21;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x15
        unsigned long NodeFlinkMiddle:11;// Offset=0x0 Size=0x4 BitOffset=0x15 BitSize=0xb
    };
};

struct _unnamed_2044// Size=0x1 (Id=2044)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char ModifiedListBucketIndex:4;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x4
    };
};

struct _unnamed_2045// Size=0x4 (Id=2045)
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

struct _MI_PFN_FLAGS5// Size=0x4 (Id=2046)
{
    union // Size=0x4 (Id=0)
    {
        unsigned long EntireField;// Offset=0x0 Size=0x4
        struct _unnamed_2043 StandbyList;// Offset=0x0 Size=0x4
        struct _unnamed_2044 MappedPageList;// Offset=0x0 Size=0x1
        struct _unnamed_2045 Active;// Offset=0x0 Size=0x4
    };
};

struct _MI_PFN_FLAGS4// Size=0x8 (Id=1318)
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

struct _MMPFN// Size=0x30 (Id=661)
{
    union // Size=0x18 (Id=0)
    {
        struct _LIST_ENTRY ListEntry;// Offset=0x0 Size=0x10
        struct _RTL_BALANCED_NODE TreeNode;// Offset=0x0 Size=0x18
        struct _MIPFNFLINK u1;// Offset=0x0 Size=0x8
        union // Size=0x8 (Id=0)
        {
            struct _MMPTE * PteAddress;// Offset=0x8 Size=0x8
            unsigned long long PteLong;// Offset=0x8 Size=0x8
        };
        struct _MMPTE OriginalPte;// Offset=0x10 Size=0x8
    };
    struct _MIPFNBLINK u2;// Offset=0x18 Size=0x8
    union _unnamed_660 u3;// Offset=0x20 Size=0x4
    struct _MI_PFN_FLAGS5 u5;// Offset=0x24 Size=0x4
    struct _MI_PFN_FLAGS4 u4;// Offset=0x28 Size=0x8
};

struct _MMPFNLIST// Size=0x58 (Id=667)
{
    unsigned long long Total;// Offset=0x0 Size=0x8
    struct _MI_COLOR Color;// Offset=0x8 Size=0x4
    enum _MMLISTS ListName;// Offset=0xc Size=0x4
    unsigned long long Flink;// Offset=0x10 Size=0x8
    unsigned long long Blink;// Offset=0x18 Size=0x8
    long Lock;// Offset=0x20 Size=0x4
    struct _MMPFN EmbeddedPfn;// Offset=0x28 Size=0x30
};

struct _MI_STANDBY_LOOKASIDE// Size=0x200 (Id=1363)
{
    unsigned long long Array[64];// Offset=0x0 Size=0x200
};

struct _unnamed_1469// Size=0x8 (Id=1469)
{
    unsigned long long EntireField;// Offset=0x0 Size=0x8
};

struct _unnamed_1723// Size=0x8 (Id=1723)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long PageState:3;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x3
        unsigned long long LockBit:1;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x1
        unsigned long long Partition:11;// Offset=0x0 Size=0x8 BitOffset=0x4 BitSize=0xb
        unsigned long long Flink:22;// Offset=0x0 Size=0x8 BitOffset=0xf BitSize=0x16
        unsigned long long Blink:22;// Offset=0x0 Size=0x8 BitOffset=0x25 BitSize=0x16
    };
};

union _unnamed_1724// Size=0x8 (Id=1724)
{
    struct _unnamed_1469 e1;// Offset=0x0 Size=0x8
    struct _unnamed_1723 OnList;// Offset=0x0 Size=0x8
};

struct _MI_HUGE_PFN_COLORHEAD// Size=0x8 (Id=1725)
{
    union _unnamed_1724 u1;// Offset=0x0 Size=0x8
};

struct _unnamed_670// Size=0x4 (Id=670)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long ChannelsHotCold:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long HeatHintsDisabled:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long Spare:30;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1e
    };
};

union _MI_PAGE_MOVE_PROGRESS_STATE// Size=0x8 (Id=1386)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long InProgressProcessors:16;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x10
        unsigned long long SequenceNumber:48;// Offset=0x0 Size=0x8 BitOffset=0x10 BitSize=0x30
    };
    long long EntireValue;// Offset=0x0 Size=0x8
};

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

struct _MI_KSTACK_ALLOCATIONS// Size=0x10 (Id=1686)
{
    unsigned long AllocationPeaks[4];// Offset=0x0 Size=0x10
};

struct _CACHED_KSTACK_LIST// Size=0x30 (Id=1322)
{
    union _SLIST_HEADER SListHead;// Offset=0x0 Size=0x10
    struct _MI_KSTACK_ALLOCATIONS Counters;// Offset=0x10 Size=0x10
    unsigned long CurrentIndex;// Offset=0x20 Size=0x4
    unsigned long InUseAtOnce;// Offset=0x24 Size=0x4
    unsigned long MinimumFree;// Offset=0x28 Size=0x4
    unsigned char NonIdealStacksPresent;// Offset=0x2c Size=0x1
};

struct _RTL_RB_TREE// Size=0x10 (Id=115)
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

struct _unnamed_702// Size=0x10 (Id=702)
{
    struct _MI_SLAB_ALLOCATOR_ENTRY * AllocationHint;// Offset=0x0 Size=0x8
    struct _MI_SLAB_ALLOCATOR_ENTRY * FreeHint;// Offset=0x8 Size=0x8
};

struct _unnamed_703// Size=0x10 (Id=703)
{
    struct _MI_SLAB_ALLOCATOR_ENTRY ** AllocationHints;// Offset=0x0 Size=0x8
    struct _MI_SLAB_ALLOCATOR_ENTRY ** FreeHints;// Offset=0x8 Size=0x8
};

struct _unnamed_704// Size=0x20 (Id=704)
{
    union // Size=0x10 (Id=0)
    {
        struct _unnamed_702 NonIdentity;// Offset=0x0 Size=0x10
        struct _unnamed_703 Identity;// Offset=0x0 Size=0x10
    };
    struct _MI_SLAB_ALLOCATOR_ENTRY * DefragSourceEntry;// Offset=0x10 Size=0x8
    struct _MI_SLAB_ALLOCATOR_ENTRY * DefragTargetEntry;// Offset=0x18 Size=0x8
};

enum _MI_SLAB_ALLOCATOR_TYPE
{
    MiSlabAllocatorTypeSlatProtectedStart=0,
    MiSlabAllocatorTypeExecuteProtected=0,
    MiSlabAllocatorTypeReadOnlyProtected=1,
    MiSlabAllocatorTypeNoAccessProtected=2,
    MiSlabAllocatorTypeKernelShadowStackProtected=3,
    MiSlabAllocatorTypePagingProtected=4,
    MiSlabAllocatorTypeSlatProtectedLast=4,
    MiSlabAllocatorTypeSlatUnprotectedStart=5,
    MiSlabAllocatorTypeImageUnprotected=5,
    MiSlabAllocatorTypeGenericUnprotected=6,
    MiSlabAllocatorTypeNonPagedUnprotected=7,
    MiSlabAllocatorTypeIdentityUnprotected=8,
    MiSlabAllocatorTypeSlatUnprotectedLast=8,
    MiSlabAllocatorTypeMax=9
};

struct _MI_NODE_NUMBER_ZERO_BASED// Size=0x4 (Id=699)
{
    unsigned long ZeroBased;// Offset=0x0 Size=0x4
};

union _unnamed_705// Size=0x4 (Id=705)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long EntryBecameEmpty:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long DemoteInProgress:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long PreferZeroedPages:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long ZeroOnFree:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long LargePageIndex:2;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x2
        unsigned long Spare:26;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1a
    };
    unsigned long AllFlags;// Offset=0x0 Size=0x4
};

struct _MI_SLAB_ALLOCATOR_CONTEXT// Size=0xe8 (Id=706)
{
    struct _RTL_RB_TREE SlabTree;// Offset=0x0 Size=0x10
    long Lock;// Offset=0x10 Size=0x4
    struct _MI_PARTITION * Partition;// Offset=0x18 Size=0x8
    struct _unnamed_704 Hints;// Offset=0x20 Size=0x20
    void * StandbyPageCache;// Offset=0x40 Size=0x8
    void * StandbyPageList;// Offset=0x48 Size=0x8
    struct _MMPFNLIST * RepurposedStandbyPageList;// Offset=0x50 Size=0x8
    struct _LIST_ENTRY * SlabListsByIdentity;// Offset=0x58 Size=0x8
    unsigned long long FreePageCount;// Offset=0x60 Size=0x8
    unsigned long long AvailablePagesGoal;// Offset=0x68 Size=0x8
    unsigned long long ChargedPageCount;// Offset=0x70 Size=0x8
    unsigned long long SlabEntryCount;// Offset=0x78 Size=0x8
    enum _MI_SLAB_ALLOCATOR_TYPE Type;// Offset=0x80 Size=0x4
    struct _MI_NODE_NUMBER_ZERO_BASED NumaNodeIndex;// Offset=0x84 Size=0x4
    union _unnamed_705 Flags;// Offset=0x88 Size=0x4
    long ReEvaluateAllocationHint;// Offset=0x8c Size=0x4
    unsigned long SlabEntriesAllocated;// Offset=0x90 Size=0x4
    unsigned long SlabEntriesDemoted;// Offset=0x94 Size=0x4
    unsigned long SlabEntriesFailedFast;// Offset=0x98 Size=0x4
    unsigned long SlabEntriesFailedSlow;// Offset=0x9c Size=0x4
    unsigned long SlabPagesFreedNonZeroed;// Offset=0xa0 Size=0x4
    unsigned long SlabPagesCrossIdentity;// Offset=0xa4 Size=0x4
    unsigned long long LastReplenishTime;// Offset=0xa8 Size=0x8
    unsigned long long LastFailureTime;// Offset=0xb0 Size=0x8
    struct _WORK_QUEUE_ITEM ReplenishWorkItem;// Offset=0xb8 Size=0x20
    struct _LIST_ENTRY ReplenishWaitList;// Offset=0xd8 Size=0x10
};

struct _RTL_BITMAP// Size=0x10 (Id=13)
{
    unsigned long SizeOfBitMap;// Offset=0x0 Size=0x4
    unsigned long * Buffer;// Offset=0x8 Size=0x8
};

struct _MI_LARGE_PAGE_NODE_COALESCE_STATE// Size=0x30 (Id=1323)
{
    long long CandidateCount[3];// Offset=0x0 Size=0x18
    unsigned long long NewCandidateSequence[3];// Offset=0x18 Size=0x18
};

struct _MI_NODE_INFORMATION// Size=0xdf80 (Id=671)
{
    struct _MI_NODE_FREE_PAGE_INFORMATION FreePageInfo[4];// Offset=0x0 Size=0x1400
    unsigned long long * HotZeroedPageCountsByColor[4];// Offset=0x1400 Size=0x20
    struct _MI_REBUILD_LARGE_PAGE_TIMER LargePageRebuildTimer;// Offset=0x1420 Size=0x28
    struct _MMPFNLIST StandbyPageList[2][8];// Offset=0x1448 Size=0x580
    struct _MI_STANDBY_LOOKASIDE StandbyPageCachePerChannel[2][8];// Offset=0x1a00 Size=0x2000
    struct _RTL_BITMAP_EX FreePageSListsBitmap[2];// Offset=0x3a00 Size=0x20
    unsigned long long FreePageSListsBitmapBuffer[8];// Offset=0x3a20 Size=0x40
    union _SLIST_HEADER * FreeZeroPageSlists[2];// Offset=0x3a60 Size=0x10
    unsigned long long TotalPages[2];// Offset=0x3a70 Size=0x10
    unsigned long long TotalPagesEntireNode;// Offset=0x3a80 Size=0x8
    struct _MI_PARTITION * Partition;// Offset=0x3a88 Size=0x8
    unsigned long long TotalHugeIoPages;// Offset=0x3a90 Size=0x8
    unsigned long long HugeIoRangeFreeCount[2][2];// Offset=0x3a98 Size=0x20
    struct _RTL_BITMAP_EX FreeHugeRangeListHeadsBitmap[2];// Offset=0x3ac0 Size=0x20
    unsigned long long FreeHugeRangeListHeadsBitmapBuffer[8];// Offset=0x3ae0 Size=0x40
    struct _MI_HUGE_PFN_COLORHEAD BadHugeRangeListHead;// Offset=0x3b20 Size=0x8
    unsigned long Color;// Offset=0x3b28 Size=0x4
    unsigned long long ChannelFreeCount[2][2];// Offset=0x3b30 Size=0x20
    struct _unnamed_670 Flags;// Offset=0x3b50 Size=0x4
    union _MI_PAGE_MOVE_PROGRESS_STATE PageListMoveInProgress[3];// Offset=0x3b58 Size=0x18
    unsigned long CurrentHugeRangeColor;// Offset=0x3b70 Size=0x4
    long NodeLock;// Offset=0x3b74 Size=0x4
    long ZeroThreadHugeMapLock;// Offset=0x3b78 Size=0x4
    long LargePageRebuildLock;// Offset=0x3b7c Size=0x4
    unsigned char ChannelStatus;// Offset=0x3b80 Size=0x1
    unsigned char ChannelOrdering[2];// Offset=0x3b81 Size=0x2
    unsigned char LockedChannelOrdering[2];// Offset=0x3b83 Size=0x2
    unsigned char PowerAttribute[2];// Offset=0x3b85 Size=0x2
    unsigned long RollingKernelStackAllocationIndex;// Offset=0x3b88 Size=0x4
    unsigned long long ScrubResumePage;// Offset=0x3b90 Size=0x8
    unsigned long long NumberOfPagesGoingBad;// Offset=0x3b98 Size=0x8
    void * BootZeroContext;// Offset=0x3ba0 Size=0x8
    void * ZeroingContext;// Offset=0x3ba8 Size=0x8
    long ZeroContextLock;// Offset=0x3bb0 Size=0x4
    void * ZeroThreadConductor;// Offset=0x3bb8 Size=0x8
    unsigned char BackgroundZeroingActive;// Offset=0x3bc0 Size=0x1
    struct _PHYSICAL_MEMORY_DESCRIPTOR * ZeroingPhysicalMemoryBlock;// Offset=0x3bc8 Size=0x8
    struct _CACHED_KSTACK_LIST CachedKernelStacks[8];// Offset=0x3bd0 Size=0x180
    struct _MI_SLAB_ALLOCATOR_CONTEXT SlabContexts[9];// Offset=0x3d50 Size=0x828
    struct _MI_STANDBY_LOOKASIDE SlabStandbyListCaches[8][8];// Offset=0x4580 Size=0x8000
    struct _MMPFNLIST SlabStandbyPageLists[8][8];// Offset=0xc580 Size=0x1600
    struct _MMPFNLIST SlabRepurposedStandbyPageLists[9];// Offset=0xdb80 Size=0x318
    struct _RTL_BITMAP SlabTypeStandbyExistsBitmap;// Offset=0xde98 Size=0x10
    unsigned long SlabTypeStandbyExistsBitmapBuffer[1];// Offset=0xdea8 Size=0x4
    struct _MI_NODE_SLAB_IDENTITY_STATE * SlabIdentityState;// Offset=0xdeb0 Size=0x8
    unsigned long long MdlSlabFragmentionLastDemoteTime;// Offset=0xdeb8 Size=0x8
    struct _MMPFNLIST EnclavePageListHead;// Offset=0xdec0 Size=0x58
    struct _MI_LARGE_PAGE_NODE_COALESCE_STATE LargePageCoalesceState;// Offset=0xdf18 Size=0x30
};
