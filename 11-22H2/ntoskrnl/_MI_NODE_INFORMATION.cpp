struct _MI_FREE_LARGE_PAGES// Size=0x430 (Id=2237)
{
    unsigned long long LargePageFreeCount[2];// Offset=0x0 Size=0x10
    unsigned long long LargePageFreeCountHiLow[2][2];// Offset=0x10 Size=0x20
    unsigned long long LargePagesCount[2][2][4][4];// Offset=0x30 Size=0x200
    struct _MI_FREE_LARGE_PAGE_LIST * LargePageEntries[2][2][4][4];// Offset=0x230 Size=0x200
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

struct _MI_REBUILD_LARGE_PAGE_TIMER// Size=0x28 (Id=2079)
{
    struct _WORK_QUEUE_ITEM WorkItem;// Offset=0x0 Size=0x20
    unsigned char SecondsLeft;// Offset=0x20 Size=0x1
    unsigned char RebuildActive;// Offset=0x21 Size=0x1
    unsigned char NextPassDelta;// Offset=0x22 Size=0x1
    unsigned char LargeSubPagesActive;// Offset=0x23 Size=0x1
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

struct _SINGLE_LIST_ENTRY// Size=0x8 (Id=937)
{
    struct _SINGLE_LIST_ENTRY * Next;// Offset=0x0 Size=0x8
};

struct _unnamed_1517// Size=0x8 (Id=1517)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long Tradable:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long NonPagedBuddy:43;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x2b
    };
};

struct _unnamed_1518// Size=0x8 (Id=1518)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long Tradable:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long WsleAge:3;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x3
        unsigned long long OldestWsleLeafEntries:10;// Offset=0x0 Size=0x8 BitOffset=0x4 BitSize=0xa
        unsigned long long OldestWsleLeafAge:3;// Offset=0x0 Size=0x8 BitOffset=0xe BitSize=0x3
        unsigned long long NonPagedBuddy:43;// Offset=0x0 Size=0x8 BitOffset=0x11 BitSize=0x2b
    };
};

struct _MI_ACTIVE_PFN// Size=0x8 (Id=1519)
{
    union // Size=0x8 (Id=0)
    {
        struct _unnamed_1517 Leaf;// Offset=0x0 Size=0x8
        struct _unnamed_1518 PageTable;// Offset=0x0 Size=0x8
        unsigned long long EntireActiveField;// Offset=0x0 Size=0x8
    };
};

union _unnamed_618// Size=0x8 (Id=618)
{
    struct _SINGLE_LIST_ENTRY NextSlistPfn;// Offset=0x0 Size=0x8
    void * Next;// Offset=0x0 Size=0x8
    struct // Size=0x8 (Id=0)
    {
        unsigned long long Flink:40;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x28
        unsigned long long NodeFlinkLow:24;// Offset=0x0 Size=0x8 BitOffset=0x28 BitSize=0x18
    };
    struct _MI_ACTIVE_PFN Active;// Offset=0x0 Size=0x8
};

struct _MMPTE_HARDWARE// Size=0x8 (Id=1119)
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

struct _MMPTE_PROTOTYPE// Size=0x8 (Id=1561)
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

struct _MMPTE_SOFTWARE// Size=0x8 (Id=1392)
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

struct _MMPTE_TIMESTAMP// Size=0x8 (Id=1653)
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

struct _MMPTE_TRANSITION// Size=0x8 (Id=1972)
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

struct _MMPTE_SUBSECTION// Size=0x8 (Id=1113)
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

struct _MMPTE_LIST// Size=0x8 (Id=1749)
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

union _unnamed_615// Size=0x8 (Id=615)
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

struct _MMPTE// Size=0x8 (Id=616)
{
    union _unnamed_615 u;// Offset=0x0 Size=0x8
};

struct _MIPFNBLINK// Size=0x8 (Id=1858)
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
        unsigned long long EntireField;// Offset=0x0 Size=0x8
        long long Lock;// Offset=0x0 Size=0x8
        struct // Size=0x8 (Id=0)
        {
            unsigned long long LockNotUsed:62;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x3e
            unsigned long long DeleteBit:1;// Offset=0x0 Size=0x8 BitOffset=0x3e BitSize=0x1
            unsigned long long LockBit:1;// Offset=0x0 Size=0x8 BitOffset=0x3f BitSize=0x1
        };
    };
};

struct _MMPFNENTRY1// Size=0x1 (Id=1286)
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

struct _MMPFNENTRY3// Size=0x1 (Id=1330)
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

struct _unnamed_619// Size=0x2 (Id=619)
{
    unsigned short ReferenceCount;// Offset=0x0 Size=0x2
};

struct _unnamed_620// Size=0x4 (Id=620)
{
    unsigned long EntireField;// Offset=0x0 Size=0x4
};

union _unnamed_621// Size=0x4 (Id=621)
{
    unsigned short ReferenceCount;// Offset=0x0 Size=0x2
    struct _MMPFNENTRY1 e1;// Offset=0x2 Size=0x1
    struct _MMPFNENTRY3 e3;// Offset=0x3 Size=0x1
    struct _unnamed_619 e2;// Offset=0x0 Size=0x2
    struct _unnamed_620 e4;// Offset=0x0 Size=0x4
};

struct _unnamed_1486// Size=0x4 (Id=1486)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long NodeBlinkHigh:21;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x15
        unsigned long NodeFlinkMiddle:11;// Offset=0x0 Size=0x4 BitOffset=0x15 BitSize=0xb
    };
};

struct _unnamed_1487// Size=0x1 (Id=1487)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char ModifiedListBucketIndex:4;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x4
    };
};

struct _unnamed_1488// Size=0x4 (Id=1488)
{
    struct // Size=0x2 (Id=0)
    {
        unsigned char AnchorLargePageSize:2;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x2
        unsigned char Spare0:6;// Offset=0x0 Size=0x1 BitOffset=0x2 BitSize=0x6
        unsigned char Spare1:8;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x8
    };
    unsigned short Spare2;// Offset=0x2 Size=0x2
};

struct _MI_PFN_ULONG5// Size=0x4 (Id=1489)
{
    union // Size=0x4 (Id=0)
    {
        unsigned long EntireField;// Offset=0x0 Size=0x4
        struct _unnamed_1486 StandbyList;// Offset=0x0 Size=0x4
        struct _unnamed_1487 MappedPageList;// Offset=0x0 Size=0x1
        struct _unnamed_1488 Active;// Offset=0x0 Size=0x4
    };
};

union _unnamed_622// Size=0x8 (Id=622)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long PteFrame:40;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x28
        unsigned long long ResidentPage:1;// Offset=0x0 Size=0x8 BitOffset=0x28 BitSize=0x1
        unsigned long long Unused1:1;// Offset=0x0 Size=0x8 BitOffset=0x29 BitSize=0x1
        unsigned long long Unused2:1;// Offset=0x0 Size=0x8 BitOffset=0x2a BitSize=0x1
        unsigned long long Partition:10;// Offset=0x0 Size=0x8 BitOffset=0x2b BitSize=0xa
        unsigned long long FileOnly:1;// Offset=0x0 Size=0x8 BitOffset=0x35 BitSize=0x1
        unsigned long long PfnExists:1;// Offset=0x0 Size=0x8 BitOffset=0x36 BitSize=0x1
        unsigned long long NodeFlinkHigh:5;// Offset=0x0 Size=0x8 BitOffset=0x37 BitSize=0x5
        unsigned long long PageIdentity:3;// Offset=0x0 Size=0x8 BitOffset=0x3c BitSize=0x3
        unsigned long long PrototypePte:1;// Offset=0x0 Size=0x8 BitOffset=0x3f BitSize=0x1
    };
    unsigned long long EntireField;// Offset=0x0 Size=0x8
};

struct _MMPFN// Size=0x30 (Id=623)
{
    union // Size=0x18 (Id=0)
    {
        struct _LIST_ENTRY ListEntry;// Offset=0x0 Size=0x10
        struct _RTL_BALANCED_NODE TreeNode;// Offset=0x0 Size=0x18
        union _unnamed_618 u1;// Offset=0x0 Size=0x8
        union // Size=0x8 (Id=0)
        {
            struct _MMPTE * PteAddress;// Offset=0x8 Size=0x8
            unsigned long long PteLong;// Offset=0x8 Size=0x8
        };
        struct _MMPTE OriginalPte;// Offset=0x10 Size=0x8
    };
    struct _MIPFNBLINK u2;// Offset=0x18 Size=0x8
    union _unnamed_621 u3;// Offset=0x20 Size=0x4
    struct _MI_PFN_ULONG5 u5;// Offset=0x24 Size=0x4
    union _unnamed_622 u4;// Offset=0x28 Size=0x8
};

struct _MMPFNLIST// Size=0x58 (Id=628)
{
    unsigned long long Total;// Offset=0x0 Size=0x8
    enum _MMLISTS ListName;// Offset=0x8 Size=0x4
    unsigned long long Flink;// Offset=0x10 Size=0x8
    unsigned long long Blink;// Offset=0x18 Size=0x8
    long Lock;// Offset=0x20 Size=0x4
    struct _MMPFN EmbeddedPfn;// Offset=0x28 Size=0x30
};

struct _MI_STANDBY_LOOKASIDE// Size=0x200 (Id=2071)
{
    unsigned long long Array[64];// Offset=0x0 Size=0x200
};

struct _RTL_BITMAP_EX// Size=0x10 (Id=1111)
{
    unsigned long long SizeOfBitMap;// Offset=0x0 Size=0x8
    unsigned long long * Buffer;// Offset=0x8 Size=0x8
};

struct _unnamed_2057// Size=0x4 (Id=2057)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long ChannelsHotCold:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Spare:31;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1f
    };
};

struct _MI_PAGE_COLORS// Size=0x10 (Id=2125)
{
    unsigned long PageSize[4];// Offset=0x0 Size=0x10
};

struct _unnamed_506// Size=0x10 (Id=506)
{
    struct // Size=0x10 (Id=0)
    {
        unsigned long long Depth:16;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x10
        unsigned long long Sequence:48;// Offset=0x0 Size=0x8 BitOffset=0x10 BitSize=0x30
        unsigned long long Reserved:4;// Offset=0x8 Size=0x8 BitOffset=0x0 BitSize=0x4
        unsigned long long NextEntry:60;// Offset=0x8 Size=0x8 BitOffset=0x4 BitSize=0x3c
    };
};

union _SLIST_HEADER// Size=0x10 (Id=507)
{
    unsigned long long Alignment;// Offset=0x0 Size=0x8
    unsigned long long Region;// Offset=0x8 Size=0x8
    struct _unnamed_506 HeaderX64;// Offset=0x0 Size=0x10
};

struct _CACHED_KSTACK_LIST// Size=0x20 (Id=2153)
{
    union _SLIST_HEADER SListHead;// Offset=0x0 Size=0x10
    long MinimumFree;// Offset=0x10 Size=0x4
    unsigned long Misses;// Offset=0x14 Size=0x4
    unsigned long MissesLast;// Offset=0x18 Size=0x4
    unsigned char AllStacksInUse;// Offset=0x1c Size=0x1
    unsigned char NonIdealStacksPresent;// Offset=0x1d Size=0x1
    unsigned char Spare[2];// Offset=0x1e Size=0x2
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

enum _MI_SLAB_ALLOCATOR_TYPE
{
    MiSlabAllocatorTypeSlatProtectedStart=0,
    MiSlabAllocatorTypeExecuteProtected=0,
    MiSlabAllocatorTypeReadOnlyProtected=1,
    MiSlabAllocatorTypeNoAccessProtected=2,
    MiSlabAllocatorTypeKernelShadowStackProtected=3,
    MiSlabAllocatorTypeSlatProtectedLast=3,
    MiSlabAllocatorTypeSlatUnprotectedStart=4,
    MiSlabAllocatorTypeImageUnprotected=4,
    MiSlabAllocatorTypeGenericUnprotected=5,
    MiSlabAllocatorTypeNonPagedUnprotected=6,
    MiSlabAllocatorTypeSlatUnprotectedLast=6,
    MiSlabAllocatorTypeMax=7
};

struct _MI_NODE_NUMBER_ZERO_BASED// Size=0x4 (Id=2072)
{
    unsigned long ZeroBased;// Offset=0x0 Size=0x4
};

union _unnamed_2109// Size=0x4 (Id=2109)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long EntryBecameEmpty:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long DemoteInProgress:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long ZeroedPages:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long Spare:29;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1d
    };
    unsigned long AllFlags;// Offset=0x0 Size=0x4
};

struct _MI_SLAB_ALLOCATOR_CONTEXT// Size=0x108 (Id=2110)
{
    struct _RTL_RB_TREE AllocationsTree;// Offset=0x0 Size=0x10
    long Lock;// Offset=0x10 Size=0x4
    struct _MI_PARTITION * Partition;// Offset=0x18 Size=0x8
    struct _MI_SLAB_ALLOCATOR_ENTRY * SlabEntryAllocationHint;// Offset=0x20 Size=0x8
    struct _MI_SLAB_ALLOCATOR_ENTRY * SlabEntryFreeHint;// Offset=0x28 Size=0x8
    unsigned long long FreePageCount;// Offset=0x30 Size=0x8
    unsigned long long AvailablePagesGoal;// Offset=0x38 Size=0x8
    unsigned long long ChargedPageCount;// Offset=0x40 Size=0x8
    unsigned long long SlabEntryCount;// Offset=0x48 Size=0x8
    enum _MI_SLAB_ALLOCATOR_TYPE Type;// Offset=0x50 Size=0x4
    struct _MI_NODE_NUMBER_ZERO_BASED NumaNodeIndex;// Offset=0x54 Size=0x4
    union _unnamed_2109 Flags;// Offset=0x58 Size=0x4
    unsigned long SlabEntriesAllocated;// Offset=0x5c Size=0x4
    unsigned long SlabEntriesDemoted;// Offset=0x60 Size=0x4
    unsigned long SlabEntriesFailedFast;// Offset=0x64 Size=0x4
    unsigned long SlabEntriesFailedSlow;// Offset=0x68 Size=0x4
    unsigned long SlabPagesFreedNonZeroed;// Offset=0x6c Size=0x4
    struct _MMPFNLIST StandbyList;// Offset=0x70 Size=0x58
    unsigned long long LastReplenishTime;// Offset=0xc8 Size=0x8
    unsigned long long LastFailureTime;// Offset=0xd0 Size=0x8
    struct _WORK_QUEUE_ITEM ReplenishWorkItem;// Offset=0xd8 Size=0x20
    struct _LIST_ENTRY ReplenishWaitList;// Offset=0xf8 Size=0x10
};

struct _MI_NODE_INFORMATION// Size=0x6340 (Id=2058)
{
    struct _MI_FREE_LARGE_PAGES FreeLargePages[3];// Offset=0x0 Size=0xc90
    struct _MI_REBUILD_LARGE_PAGE_TIMER LargePageRebuildTimer;// Offset=0xc90 Size=0x28
    struct _MMPFNLIST StandbyPageList[4][8];// Offset=0xcb8 Size=0xb00
    struct _MI_STANDBY_LOOKASIDE StandbyPageCachePerChannel[4][8];// Offset=0x17c0 Size=0x4000
    struct _RTL_BITMAP_EX FreePageListHeadsBitmap[3][2];// Offset=0x57c0 Size=0x60
    unsigned long long FreePageListHeadsBitmapBuffer[24];// Offset=0x5820 Size=0xc0
    unsigned long long FreeCount[2];// Offset=0x58e0 Size=0x10
    unsigned long long FreeZeroCountByAttribute[4];// Offset=0x58f0 Size=0x20
    unsigned long long TotalPages[4];// Offset=0x5910 Size=0x20
    unsigned long long TotalPagesEntireNode;// Offset=0x5930 Size=0x8
    struct _MI_PARTITION * Partition;// Offset=0x5938 Size=0x8
    unsigned long CurrentHugeRangeColor;// Offset=0x5940 Size=0x4
    unsigned long long TotalHugeIoPages;// Offset=0x5948 Size=0x8
    unsigned long long HugeIoRangeFreeCount[2][4];// Offset=0x5950 Size=0x40
    unsigned long MmShiftedColor;// Offset=0x5990 Size=0x4
    unsigned long Color;// Offset=0x5994 Size=0x4
    unsigned long long ChannelFreeCount[4][2];// Offset=0x5998 Size=0x40
    struct _unnamed_2057 Flags;// Offset=0x59d8 Size=0x4
    unsigned long LargeListMoveInProgress;// Offset=0x59dc Size=0x4
    struct _MI_LARGE_PAGE_LISTS_CHANGING * LargeListWaiters;// Offset=0x59e0 Size=0x8
    long NodeLock;// Offset=0x59e8 Size=0x4
    unsigned long long ZeroThreadHugeMapLock;// Offset=0x59f0 Size=0x8
    unsigned char ChannelStatus;// Offset=0x59f8 Size=0x1
    unsigned char ChannelOrdering[4];// Offset=0x59f9 Size=0x4
    unsigned char LockedChannelOrdering[4];// Offset=0x59fd Size=0x4
    unsigned char PowerAttribute[4];// Offset=0x5a01 Size=0x4
    long LargePageLock;// Offset=0x5a40 Size=0x4
    unsigned long long ScrubResumePage;// Offset=0x5a48 Size=0x8
    struct _MI_PAGE_COLORS PageColorTable;// Offset=0x5a50 Size=0x10
    unsigned long long NumberOfPagesGoingBad;// Offset=0x5a60 Size=0x8
    void * BootZeroContext;// Offset=0x5a68 Size=0x8
    void * ZeroingContext;// Offset=0x5a70 Size=0x8
    long ZeroContextLock;// Offset=0x5a78 Size=0x4
    void * ZeroThreadConductor;// Offset=0x5a80 Size=0x8
    unsigned char BackgroundZeroingActive;// Offset=0x5a88 Size=0x1
    struct _PHYSICAL_MEMORY_DESCRIPTOR * ZeroingPhysicalMemoryBlock;// Offset=0x5a90 Size=0x8
    struct _CACHED_KSTACK_LIST CachedKernelStacks[3];// Offset=0x5aa0 Size=0x60
    struct _CACHED_KSTACK_LIST CachedKernelShadowStackLists[3];// Offset=0x5b00 Size=0x60
    struct _MI_SLAB_ALLOCATOR_CONTEXT SlabContexts[7];// Offset=0x5b60 Size=0x738
    struct _MI_SLAB_ALLOCATOR_CONTEXT * FreePageSlabContextHint;// Offset=0x6298 Size=0x8
    unsigned long long MdlSlabFragmentionLastDemoteTime;// Offset=0x62a0 Size=0x8
    struct _MMPFNLIST EnclavePageListHead;// Offset=0x62c0 Size=0x58
};
