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

struct _LIST_ENTRY// Size=0x10 (Id=4)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
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
