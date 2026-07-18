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

struct _DISPATCHER_HEADER// Size=0x18 (Id=159)
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
        unsigned char Timer2ComponentId;// Offset=0x2 Size=0x1
        unsigned char Timer2RelativeId;// Offset=0x3 Size=0x1
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
        unsigned char ThreadReserved;// Offset=0x1 Size=0x1
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
                unsigned char SchedulerAssist:1;// Offset=0x2 Size=0x1 BitOffset=0x6 BitSize=0x1
                unsigned char ThreadReservedControlFlags:1;// Offset=0x2 Size=0x1 BitOffset=0x7 BitSize=0x1
            };
        };
        unsigned char DebugActive;// Offset=0x3 Size=0x1
        struct // Size=0x1 (Id=0)
        {
            unsigned char ActiveDR7:1;// Offset=0x3 Size=0x1 BitOffset=0x0 BitSize=0x1
            unsigned char Instrumented:1;// Offset=0x3 Size=0x1 BitOffset=0x1 BitSize=0x1
            unsigned char Minimal:1;// Offset=0x3 Size=0x1 BitOffset=0x2 BitSize=0x1
            unsigned char Reserved4:2;// Offset=0x3 Size=0x1 BitOffset=0x3 BitSize=0x2
            unsigned char AltSyscall:1;// Offset=0x3 Size=0x1 BitOffset=0x5 BitSize=0x1
            unsigned char Emulation:1;// Offset=0x3 Size=0x1 BitOffset=0x6 BitSize=0x1
            unsigned char Reserved5:1;// Offset=0x3 Size=0x1 BitOffset=0x7 BitSize=0x1
        };
        unsigned char MutantType;// Offset=0x0 Size=0x1
        unsigned char MutantSize;// Offset=0x1 Size=0x1
        unsigned char DpcActive;// Offset=0x2 Size=0x1
        unsigned char MutantReserved;// Offset=0x3 Size=0x1
    };
    long SignalState;// Offset=0x4 Size=0x4
    struct _LIST_ENTRY WaitListHead;// Offset=0x8 Size=0x10
};

struct _KEVENT// Size=0x18 (Id=20)
{
    struct _DISPATCHER_HEADER Header;// Offset=0x0 Size=0x18
};

struct _MI_STANDBY_LOOKASIDE// Size=0x200 (Id=2071)
{
    unsigned long long Array[64];// Offset=0x0 Size=0x200
};

struct _MI_DECAY_TIMER_LINKAGE// Size=0x8 (Id=1810)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long Spare0:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long PreviousDecayPfn:31;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1f
        unsigned long long TimerRemoved:1;// Offset=0x0 Size=0x8 BitOffset=0x20 BitSize=0x1
        unsigned long long NextDecayPfn:31;// Offset=0x0 Size=0x8 BitOffset=0x21 BitSize=0x1f
    };
};

union _unnamed_1429// Size=0x8 (Id=1429)
{
    unsigned long long Long;// Offset=0x0 Size=0x8
    struct _MI_DECAY_TIMER_LINKAGE e1;// Offset=0x0 Size=0x8
};

struct _MI_DECAY_TIMER_LINK// Size=0x8 (Id=1430)
{
    union _unnamed_1429 u1;// Offset=0x0 Size=0x8
};

struct _WORK_QUEUE_ITEM// Size=0x20 (Id=21)
{
    struct _LIST_ENTRY List;// Offset=0x0 Size=0x10
    void  ( * WorkerRoutine)(void * );// Offset=0x10 Size=0x8
    void * Parameter;// Offset=0x18 Size=0x8
};

struct _MI_LDW_WORK_CONTEXT// Size=0x38 (Id=1627)
{
    struct _WORK_QUEUE_ITEM WorkItem;// Offset=0x0 Size=0x20
    struct _FILE_OBJECT * FileObject;// Offset=0x20 Size=0x8
    long ErrorStatus;// Offset=0x28 Size=0x4
    long Active;// Offset=0x2c Size=0x4
    unsigned char FreeWhenDone;// Offset=0x30 Size=0x1
};

struct _MI_AVAILABLE_PAGE_WAIT_STATES// Size=0x20 (Id=1652)
{
    struct _KEVENT Event;// Offset=0x0 Size=0x18
    unsigned long EventSets;// Offset=0x18 Size=0x4
};

struct _RTL_BITMAP_EX// Size=0x10 (Id=1111)
{
    unsigned long long SizeOfBitMap;// Offset=0x0 Size=0x8
    unsigned long long * Buffer;// Offset=0x8 Size=0x8
};

struct _MI_PARTITION_PAGE_LISTS// Size=0x3640 (Id=1427)
{
    struct _MMPFNLIST * FreePagesByColor[2];// Offset=0x0 Size=0x10
    struct _MMPFNLIST ZeroedPageListHead;// Offset=0x40 Size=0x58
    struct _MMPFNLIST FreePageListHead;// Offset=0xc0 Size=0x58
    struct _MMPFNLIST StandbyPageListHead;// Offset=0x140 Size=0x58
    struct _MMPFNLIST StandbyPageListByPriority[8];// Offset=0x1c0 Size=0x2c0
    struct _MMPFNLIST ModifiedPageListNoReservation;// Offset=0x480 Size=0x58
    struct _MMPFNLIST ModifiedPageListNoReservationCompress;// Offset=0x500 Size=0x58
    struct _MMPFNLIST ModifiedPageListByReservation[16];// Offset=0x580 Size=0x580
    struct _MMPFNLIST MappedPageListHead[16];// Offset=0xb00 Size=0x580
    struct _MMPFNLIST BadPageListHead;// Offset=0x1080 Size=0x58
    union _SLIST_HEADER * FreePageSlist[2];// Offset=0x10d8 Size=0x10
    struct _MMPFNLIST * PageLocationList[8];// Offset=0x10e8 Size=0x40
    unsigned long StandbyRepurposedByPriority[8];// Offset=0x1128 Size=0x20
    unsigned long long TransitionSharedPages;// Offset=0x1180 Size=0x8
    unsigned long long TransitionSharedPagesPeak[6];// Offset=0x1188 Size=0x30
    struct _KEVENT MappedPageListHeadEvent[16];// Offset=0x11b8 Size=0x180
    struct _MI_STANDBY_LOOKASIDE OldestStandbyPageCache[8];// Offset=0x1340 Size=0x1000
    struct _MI_STANDBY_LOOKASIDE NewestStandbyPageCache[8];// Offset=0x2340 Size=0x1000
    unsigned long long NewestStandbyPageCacheInserts[2][8];// Offset=0x3340 Size=0x80
    struct _MI_DECAY_TIMER_LINK DecayClusterTimerHeads[4];// Offset=0x33c0 Size=0x20
    unsigned long DecayHand;// Offset=0x33e0 Size=0x4
    unsigned char StandbyListDiscard;// Offset=0x33e4 Size=0x1
    unsigned char FreeListDiscard;// Offset=0x33e5 Size=0x1
    unsigned char PfnBitMapsReady;// Offset=0x33e6 Size=0x1
    unsigned long long LastDecayHandUpdateTime;// Offset=0x33e8 Size=0x8
    struct _MI_LDW_WORK_CONTEXT LastChanceLdwContext;// Offset=0x33f0 Size=0x38
    unsigned long long AvailableEventsLock;// Offset=0x3440 Size=0x8
    struct _MI_AVAILABLE_PAGE_WAIT_STATES AvailablePageWaitStates[3];// Offset=0x3448 Size=0x60
    unsigned long long TransitionPrivatePages;// Offset=0x34c0 Size=0x8
    struct _RTL_BITMAP_EX LargePfnBitMap[2];// Offset=0x34c8 Size=0x20
    struct _MI_FREE_LARGE_PAGE_LIST * LargePageListHeads;// Offset=0x34e8 Size=0x8
    char * MediumPagesOnFreeZeroList;// Offset=0x34f0 Size=0x8
    struct _RTL_BITMAP_EX LargePageRebuildCandidates;// Offset=0x34f8 Size=0x10
    short * LargePagesOnFreeZeroList;// Offset=0x3508 Size=0x8
    long HugePageRebuildCandidatesExist;// Offset=0x3510 Size=0x4
    long ProcessLargePageCacheLock;// Offset=0x3514 Size=0x4
    struct _LIST_ENTRY ProcessLargePageCacheLinks;// Offset=0x3518 Size=0x10
    unsigned long ProcessLargePageCachePeriodicCount;// Offset=0x3528 Size=0x4
    struct _KEVENT LargePageCandidatesExistEvent;// Offset=0x3530 Size=0x18
    unsigned long long LowMemoryConfiguredThreshold;// Offset=0x3548 Size=0x8
    unsigned long long HighMemoryConfiguredThreshold;// Offset=0x3550 Size=0x8
    unsigned long long LowMemoryThreshold;// Offset=0x3558 Size=0x8
    unsigned long long HighMemoryThreshold;// Offset=0x3560 Size=0x8
    struct _RTL_BITMAP_EX SlabPfnBitMap[2];// Offset=0x3568 Size=0x20
    unsigned char SlabPagesNotAvailable[7];// Offset=0x3588 Size=0x7
    void * HugePfnLists;// Offset=0x3590 Size=0x8
    unsigned long long AvailableHugeIoRanges;// Offset=0x3598 Size=0x8
    unsigned long long SlabEntriesDemoted;// Offset=0x35a0 Size=0x8
    long SlabDemoteInProgress;// Offset=0x35a8 Size=0x4
    unsigned long SlabTypeAcquiresCharges;// Offset=0x35ac Size=0x4
    unsigned long long DriverPageCount;// Offset=0x35b0 Size=0x8
    unsigned long long DriverLastPage;// Offset=0x35b8 Size=0x8
    unsigned long long DriverNonSlabAttempted;// Offset=0x35c0 Size=0x8
    unsigned long long DriverSlabLastFailTime;// Offset=0x35c8 Size=0x8
    unsigned long long MdlPagesByListsTotal;// Offset=0x35d0 Size=0x8
    unsigned long long MdlPagesByListsFromSlab;// Offset=0x35d8 Size=0x8
    unsigned long long MdlPagesByListsSlabNotEligible;// Offset=0x35e0 Size=0x8
    unsigned long long MdlPagesPreferContiguousSlabEligible;// Offset=0x35e8 Size=0x8
    unsigned long long MdlPagesPreferContiguousFromSlab;// Offset=0x35f0 Size=0x8
    unsigned long long MdlSlabPagesFreeZeroedTotal;// Offset=0x35f8 Size=0x8
    unsigned long MdlSlabPagesFreeZeroedBuckets[4];// Offset=0x3600 Size=0x10
    unsigned long long SystemPageTablePagesNoSlab;// Offset=0x3610 Size=0x8
};
