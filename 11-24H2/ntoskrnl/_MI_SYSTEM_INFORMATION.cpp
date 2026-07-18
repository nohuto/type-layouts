struct _RTL_AVL_TREE// Size=0x8 (Id=117)
{
    struct _RTL_BALANCED_NODE * Root;// Offset=0x0 Size=0x8
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

struct _MI_ACCESS_VIOLATION_RANGE// Size=0x28 (Id=2394)
{
    struct _RTL_BALANCED_NODE Node;// Offset=0x0 Size=0x18
    void * Va;// Offset=0x18 Size=0x8
    void * EndVaInclusive;// Offset=0x20 Size=0x8
};

struct _unnamed_1831// Size=0x40 (Id=1831)
{
    void * UniqueCacheLine[8];// Offset=0x0 Size=0x40
};

struct _LIST_ENTRY// Size=0x10 (Id=4)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
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

struct _MI_POOL_STATE// Size=0x1c0 (Id=2123)
{
    unsigned long long MaximumNonPagedPoolThreshold;// Offset=0x0 Size=0x8
    unsigned long long AllocatedNonPagedPool;// Offset=0x8 Size=0x8
    unsigned long long AllocatedSecureNonPagedPool;// Offset=0x10 Size=0x8
    unsigned long HighEventSets;// Offset=0x18 Size=0x4
    unsigned char HighEventSetsValid;// Offset=0x1c Size=0x1
    unsigned long long LowPagedPoolThreshold;// Offset=0x20 Size=0x8
    unsigned long long HighPagedPoolThreshold;// Offset=0x28 Size=0x8
    long PermittedFaultsLock;// Offset=0x30 Size=0x4
    struct _RTL_AVL_TREE PermittedFaultsTree;// Offset=0x38 Size=0x8
    struct _MI_ACCESS_VIOLATION_RANGE PermittedFaultsInitialNode[2];// Offset=0x40 Size=0x50
    unsigned long long TotalPagedPoolQuota;// Offset=0x90 Size=0x8
    unsigned long long TotalNonPagedPoolQuota;// Offset=0x98 Size=0x8
    struct _MI_CACHE_ALIGNED_ARRAY PagedPoolWorkingSetLockArray[4];// Offset=0xc0 Size=0x100
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

struct _MI_UNUSED_SEGMENT_TRACES// Size=0x20 (Id=1921)
{
    unsigned long long ElapsedTime;// Offset=0x0 Size=0x8
    unsigned long long PagesMoved;// Offset=0x8 Size=0x8
    unsigned long long PagesFlushed;// Offset=0x10 Size=0x8
    unsigned long NumberOfThreads;// Offset=0x18 Size=0x4
};

union _MMSUBSECTION_FLAGS// Size=0x4 (Id=2083)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long SubsectionAccessed:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Protection:5;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x5
        unsigned long StartingSector4132:10;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0xa
        unsigned long SubsectionStatic:1;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x1
        unsigned long GlobalMemory:1;// Offset=0x0 Size=0x4 BitOffset=0x11 BitSize=0x1
        unsigned long Spare:1;// Offset=0x0 Size=0x4 BitOffset=0x12 BitSize=0x1
        unsigned long OnDereferenceList:1;// Offset=0x0 Size=0x4 BitOffset=0x13 BitSize=0x1
        unsigned long SectorEndOffset:12;// Offset=0x0 Size=0x4 BitOffset=0x14 BitSize=0xc
    };
    unsigned long EntireField;// Offset=0x0 Size=0x4
};

struct _MI_SUBSECTION_ENTRY1// Size=0x4 (Id=1484)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long CrossPartitionReferences:30;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1e
        unsigned long SubsectionMappedLarge:2;// Offset=0x0 Size=0x4 BitOffset=0x1e BitSize=0x2
    };
};

union _unnamed_1262// Size=0x4 (Id=1262)
{
    struct _MI_SUBSECTION_ENTRY1 e1;// Offset=0x0 Size=0x4
    unsigned long EntireField;// Offset=0x0 Size=0x4
};

struct _SUBSECTION// Size=0x38 (Id=1263)
{
    struct _CONTROL_AREA * ControlArea;// Offset=0x0 Size=0x8
    struct _MMPTE * SubsectionBase;// Offset=0x8 Size=0x8
    struct _SUBSECTION * NextSubsection;// Offset=0x10 Size=0x8
    union // Size=0x8 (Id=0)
    {
        struct _RTL_AVL_TREE GlobalPerSessionHead;// Offset=0x18 Size=0x8
        struct _MI_CONTROL_AREA_WAIT_BLOCK * CreationWaitList;// Offset=0x18 Size=0x8
    };
    union _MMSUBSECTION_FLAGS SubsectionFlags;// Offset=0x20 Size=0x4
    unsigned long StartingSector;// Offset=0x24 Size=0x4
    unsigned long NumberOfFullSectors;// Offset=0x28 Size=0x4
    unsigned long PtesInSubsection;// Offset=0x2c Size=0x4
    union _unnamed_1262 u1;// Offset=0x30 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long UnusedPtes:30;// Offset=0x34 Size=0x4 BitOffset=0x0 BitSize=0x1e
        unsigned long ExtentQueryNeeded:1;// Offset=0x34 Size=0x4 BitOffset=0x1e BitSize=0x1
        unsigned long Spare:1;// Offset=0x34 Size=0x4 BitOffset=0x1f BitSize=0x1
    };
};

struct _unnamed_1578// Size=0x8 (Id=1578)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long AllocationType:3;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x3
        unsigned long long Inserted:1;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x1
    };
};

struct _unnamed_1579// Size=0x8 (Id=1579)
{
    unsigned long long PrototypePtesFlags;// Offset=0x0 Size=0x8
};

union _unnamed_1580// Size=0x8 (Id=1580)
{
    struct _unnamed_1578 e1;// Offset=0x0 Size=0x8
    struct _unnamed_1579 e2;// Offset=0x0 Size=0x8
};

struct _MI_PROTOTYPE_PTES_NODE// Size=0x20 (Id=1581)
{
    struct _RTL_BALANCED_NODE Node;// Offset=0x0 Size=0x18
    union _unnamed_1580 u1;// Offset=0x18 Size=0x8
};

struct _MSUBSECTION// Size=0x98 (Id=2219)
{
    struct _SUBSECTION Core;// Offset=0x0 Size=0x38
    struct _RTL_BALANCED_NODE SubsectionNode;// Offset=0x38 Size=0x18
    unsigned long long NumberOfMappedViews;// Offset=0x50 Size=0x8
    struct _LIST_ENTRY DereferenceList;// Offset=0x58 Size=0x10
    unsigned long NumberOfPfnReferences;// Offset=0x68 Size=0x4
    unsigned long LargeViews;// Offset=0x6c Size=0x4
    void * SubsectionExtentList;// Offset=0x70 Size=0x8
    struct _MI_PROTOTYPE_PTES_NODE ProtosNode;// Offset=0x78 Size=0x20
};

struct _MMSECTION_FLAGS// Size=0x4 (Id=1095)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned int BeingDeleted:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned int BeingCreated:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned int BeingPurged:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned int NoModifiedWriting:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned int FailAllIo:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned int Image:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned int Based:1;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1
        unsigned int File:1;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x1
        unsigned int SectionOfInterest:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
        unsigned int PrefetchCreated:1;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x1
        unsigned int PhysicalMemory:1;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x1
        unsigned int ImageControlAreaOnRemovableMedia:1;// Offset=0x0 Size=0x4 BitOffset=0xb BitSize=0x1
        unsigned int Reserve:1;// Offset=0x0 Size=0x4 BitOffset=0xc BitSize=0x1
        unsigned int Commit:1;// Offset=0x0 Size=0x4 BitOffset=0xd BitSize=0x1
        unsigned int NoChange:1;// Offset=0x0 Size=0x4 BitOffset=0xe BitSize=0x1
        unsigned int WasPurged:1;// Offset=0x0 Size=0x4 BitOffset=0xf BitSize=0x1
        unsigned int UserReference:1;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x1
        unsigned int GlobalMemory:1;// Offset=0x0 Size=0x4 BitOffset=0x11 BitSize=0x1
        unsigned int DeleteOnClose:1;// Offset=0x0 Size=0x4 BitOffset=0x12 BitSize=0x1
        unsigned int FilePointerNull:1;// Offset=0x0 Size=0x4 BitOffset=0x13 BitSize=0x1
        unsigned long PreferredNode:7;// Offset=0x0 Size=0x4 BitOffset=0x14 BitSize=0x7
        unsigned int GlobalOnlyPerSession:1;// Offset=0x0 Size=0x4 BitOffset=0x1b BitSize=0x1
        unsigned int ControlAreaOnUnusedList:1;// Offset=0x0 Size=0x4 BitOffset=0x1c BitSize=0x1
        unsigned int SystemVaAllocated:1;// Offset=0x0 Size=0x4 BitOffset=0x1d BitSize=0x1
        unsigned int NotBeingUsed:1;// Offset=0x0 Size=0x4 BitOffset=0x1e BitSize=0x1
        unsigned int PageSize64K:1;// Offset=0x0 Size=0x4 BitOffset=0x1f BitSize=0x1
    };
};

union _unnamed_683// Size=0x4 (Id=683)
{
    unsigned long LongFlags;// Offset=0x0 Size=0x4
    struct _MMSECTION_FLAGS Flags;// Offset=0x0 Size=0x4
};

struct _MMSECTION_FLAGS2// Size=0x4 (Id=1326)
{
    struct // Size=0x3 (Id=0)
    {
        unsigned short PartitionId:10;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0xa
        unsigned char NoCrossPartitionAccess:1;// Offset=0x2 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char SubsectionCrossPartitionReferenceOverflow:1;// Offset=0x2 Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char UsingFileExtents:2;// Offset=0x2 Size=0x1 BitOffset=0x2 BitSize=0x2
    };
};

union _unnamed_684// Size=0x4 (Id=684)
{
    unsigned long LongFlags;// Offset=0x0 Size=0x4
    struct _MMSECTION_FLAGS2 Flags;// Offset=0x0 Size=0x4
};

struct _EX_FAST_REF// Size=0x8 (Id=551)
{
    union // Size=0x8 (Id=0)
    {
        void * Object;// Offset=0x0 Size=0x8
        struct // Size=0x8 (Id=0)
        {
            unsigned long long RefCnt:4;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x4
        };
        unsigned long long Value;// Offset=0x0 Size=0x8
    };
};

union _MI_IMAGE_INFO_REF// Size=0x8 (Id=689)
{
    long LongValue;// Offset=0x0 Size=0x4
    unsigned long long FullValue;// Offset=0x0 Size=0x8
    struct _MI_IMAGE_ADDITIONAL_INFO * PointerValue;// Offset=0x0 Size=0x8
    struct // Size=0x8 (Id=0)
    {
        union // Size=0x8 (Id=0)
        {
            unsigned long long AllFlags:3;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x3
            unsigned long long DebugRecordsPresent:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        };
    };
};

struct _unnamed_685// Size=0x10 (Id=685)
{
    union // Size=0x4 (Id=0)
    {
        unsigned long NumberOfSystemCacheViews;// Offset=0x0 Size=0x4
        unsigned long ImageRelocationStartBit;// Offset=0x0 Size=0x4
    };
    union // Size=0x4 (Id=0)
    {
        long WritableUserReferences;// Offset=0x4 Size=0x4
        struct // Size=0x4 (Id=0)
        {
            unsigned long ImageRelocationSizeIn64k:16;// Offset=0x4 Size=0x4 BitOffset=0x0 BitSize=0x10
            unsigned long SystemImage:1;// Offset=0x4 Size=0x4 BitOffset=0x10 BitSize=0x1
            unsigned long CantMove:1;// Offset=0x4 Size=0x4 BitOffset=0x11 BitSize=0x1
            unsigned long StrongCode:2;// Offset=0x4 Size=0x4 BitOffset=0x12 BitSize=0x2
            unsigned long BitMap:2;// Offset=0x4 Size=0x4 BitOffset=0x14 BitSize=0x2
            unsigned long ImageActive:1;// Offset=0x4 Size=0x4 BitOffset=0x16 BitSize=0x1
            unsigned long ImageBaseOkToReuse:1;// Offset=0x4 Size=0x4 BitOffset=0x17 BitSize=0x1
        };
    };
    union // Size=0x4 (Id=0)
    {
        unsigned long NumberOfSubsections;// Offset=0x8 Size=0x4
        union _MI_IMAGE_INFO_REF ImageInfoRef;// Offset=0x8 Size=0x8
    };
};

union _unnamed_686// Size=0x10 (Id=686)
{
    struct _unnamed_685 e2;// Offset=0x0 Size=0x10
};

union _unnamed_687// Size=0x8 (Id=687)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long Spare:3;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x3
        unsigned long long IoAttributionContext:61;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x3d
    };
    unsigned long long ImageCrossPartitionCharge;// Offset=0x0 Size=0x8
    struct // Size=0x8 (Id=0)
    {
        unsigned long long CommittedPageCount:36;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x24
    };
};

struct _CONTROL_AREA// Size=0x80 (Id=688)
{
    struct _SEGMENT * Segment;// Offset=0x0 Size=0x8
    union // Size=0x10 (Id=0)
    {
        struct _LIST_ENTRY ListHead;// Offset=0x8 Size=0x10
        void * AweContext;// Offset=0x8 Size=0x8
    };
    unsigned long long NumberOfSectionReferences;// Offset=0x18 Size=0x8
    unsigned long long NumberOfPfnReferences;// Offset=0x20 Size=0x8
    unsigned long long NumberOfMappedViews;// Offset=0x28 Size=0x8
    unsigned long long NumberOfUserReferences;// Offset=0x30 Size=0x8
    union _unnamed_683 u;// Offset=0x38 Size=0x4
    union _unnamed_684 u1;// Offset=0x3c Size=0x4
    struct _EX_FAST_REF FilePointer;// Offset=0x40 Size=0x8
    long ControlAreaLock;// Offset=0x48 Size=0x4
    unsigned long ModifiedWriteCount;// Offset=0x4c Size=0x4
    struct _MI_CONTROL_AREA_WAIT_BLOCK * WaitList;// Offset=0x50 Size=0x8
    union _unnamed_686 u2;// Offset=0x58 Size=0x10
    struct _EX_PUSH_LOCK FileObjectLock;// Offset=0x68 Size=0x8
    unsigned long long LockedPages;// Offset=0x70 Size=0x8
    union _unnamed_687 u3;// Offset=0x78 Size=0x8
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

struct _MI_PAGE_CHAIN_HEAD// Size=0x18 (Id=2253)
{
    struct _MMPFN * Head;// Offset=0x0 Size=0x8
    struct _MMPFN * Tail;// Offset=0x8 Size=0x8
    unsigned long long NumberOfEntries;// Offset=0x10 Size=0x8
};

struct _WORK_QUEUE_ITEM// Size=0x20 (Id=21)
{
    struct _LIST_ENTRY List;// Offset=0x0 Size=0x10
    void  ( * WorkerRoutine)(void * );// Offset=0x10 Size=0x8
    void * Parameter;// Offset=0x18 Size=0x8
};

struct _DISPATCHER_HEADER// Size=0x18 (Id=174)
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

struct _KGATE// Size=0x18 (Id=1460)
{
    struct _DISPATCHER_HEADER Header;// Offset=0x0 Size=0x18
};

struct _MI_EXTENT_DELETION_WAIT_BLOCK// Size=0x20 (Id=2090)
{
    struct _MI_EXTENT_DELETION_WAIT_BLOCK * Next;// Offset=0x0 Size=0x8
    struct _KGATE Gate;// Offset=0x8 Size=0x18
};

struct _RTL_BITMAP_EX// Size=0x10 (Id=1202)
{
    unsigned long long SizeOfBitMap;// Offset=0x0 Size=0x8
    unsigned long long * Buffer;// Offset=0x8 Size=0x8
};

struct _MI_DLL_OVERFLOW_AREA// Size=0x20 (Id=1763)
{
    void * RangeStart;// Offset=0x0 Size=0x8
    void * NextVa;// Offset=0x8 Size=0x8
    void * RangeStartAbove2gb;// Offset=0x10 Size=0x8
    void * NextVaAbove2gb;// Offset=0x18 Size=0x8
};

struct _MI_SECTION_WOW_STATE// Size=0x40 (Id=1835)
{
    struct _RTL_BITMAP_EX ImageBitMap;// Offset=0x0 Size=0x10
    struct _MI_DLL_OVERFLOW_AREA OverflowArea;// Offset=0x10 Size=0x20
    struct _SECTION * CfgBitMapSection;// Offset=0x30 Size=0x8
    struct _CONTROL_AREA * CfgBitMapControlArea;// Offset=0x38 Size=0x8
};

struct _MI_SECTION_STATE// Size=0xc00 (Id=1499)
{
    long SectionObjectPointersLock;// Offset=0x0 Size=0x4
    struct _RTL_AVL_TREE SectionBasedRoot;// Offset=0x8 Size=0x8
    struct _EX_PUSH_LOCK SectionBasedLock;// Offset=0x10 Size=0x8
    unsigned long long UnusedSegmentPagedPool;// Offset=0x18 Size=0x8
    long CalibrationIndex;// Offset=0x20 Size=0x4
    struct _MI_UNUSED_SEGMENT_TRACES CalibrationData[64];// Offset=0x28 Size=0x800
    unsigned long DataSectionProtectionMask;// Offset=0x828 Size=0x4
    void * HighSectionBase;// Offset=0x830 Size=0x8
    struct _MSUBSECTION PhysicalSubsection;// Offset=0x838 Size=0x98
    struct _CONTROL_AREA PhysicalControlArea;// Offset=0x8d0 Size=0x80
    struct _MMPFNLIST PurgingExtentPages;// Offset=0x950 Size=0x58
    struct _MI_PAGE_CHAIN_HEAD DanglingExtentPages;// Offset=0x9a8 Size=0x18
    struct _WORK_QUEUE_ITEM DanglingExtentsWorkItem;// Offset=0x9c0 Size=0x20
    struct _MI_EXTENT_DELETION_WAIT_BLOCK DanglingExtentsDeletionWaitList;// Offset=0x9e0 Size=0x20
    unsigned char FileOnlyMemoryPfnsCreated;// Offset=0xa00 Size=0x1
    unsigned char DanglingExtentsWorkerActive;// Offset=0xa01 Size=0x1
    unsigned char PurgingExtentsNeedWatchdog;// Offset=0xa02 Size=0x1
    struct _RTL_AVL_TREE PrototypePtesTree;// Offset=0xa08 Size=0x8
    long PrototypePtesTreeSpinLock;// Offset=0xa10 Size=0x4
    struct _EX_PUSH_LOCK PrivateFixupMappingLock;// Offset=0xa18 Size=0x8
    struct _MMPTE * PrivateFixupPte;// Offset=0xa20 Size=0x8
    struct _EX_PUSH_LOCK RelocateBitmapsLock;// Offset=0xa28 Size=0x8
    struct _RTL_BITMAP_EX ImageBitMapNative;// Offset=0xa30 Size=0x10
    unsigned long long ImageBiasNative;// Offset=0xa40 Size=0x8
    struct _MI_DLL_OVERFLOW_AREA OverflowArea;// Offset=0xa48 Size=0x20
    struct _MI_SECTION_WOW_STATE Wow[1];// Offset=0xa68 Size=0x40
    unsigned long long ImageBiasWow;// Offset=0xaa8 Size=0x8
    struct _RTL_BITMAP_EX ImageBitMapWowScratch;// Offset=0xab0 Size=0x10
    struct _RTL_BITMAP_EX ImageBitMap64Low;// Offset=0xac0 Size=0x10
    unsigned long long ImageBias64Low;// Offset=0xad0 Size=0x8
    void * ApiSetSection;// Offset=0xad8 Size=0x8
    void * ApiSetSchema;// Offset=0xae0 Size=0x8
    unsigned long long ApiSetSchemaSize;// Offset=0xae8 Size=0x8
    unsigned long LostDataFiles;// Offset=0xaf0 Size=0x4
    unsigned long LostDataPages;// Offset=0xaf4 Size=0x4
    unsigned long ImageFailureReason;// Offset=0xaf8 Size=0x4
    struct _SECTION * CfgBitMapSection;// Offset=0xb00 Size=0x8
    struct _CONTROL_AREA * CfgBitMapControlArea;// Offset=0xb08 Size=0x8
    struct _RTL_BITMAP_EX KernelCfgBitMap;// Offset=0xb10 Size=0x10
    struct _EX_PUSH_LOCK KernelCfgBitMapLock;// Offset=0xb20 Size=0x8
    unsigned long ImageCfgFailure;// Offset=0xb28 Size=0x4
    void * KernelScpStartAddress;// Offset=0xb30 Size=0x8
    unsigned long KernelScpReservePages;// Offset=0xb38 Size=0x4
    unsigned long KernelScpPages;// Offset=0xb3c Size=0x4
    struct _MDL * KernelScpMdl;// Offset=0xb40 Size=0x8
    long RetpolineBootStatus;// Offset=0xb48 Size=0x4
    struct _MMPTE * RetpolineRevertPte;// Offset=0xb50 Size=0x8
    struct _RTL_BITMAP_EX KernelRetpolineBitMap;// Offset=0xb58 Size=0x10
    struct _LIST_ENTRY NonRetpolineImageLoadList;// Offset=0xb68 Size=0x10
    unsigned long ImageBreakpointEnabled;// Offset=0xb78 Size=0x4
    unsigned long ImageBreakpointChecksum;// Offset=0xb7c Size=0x4
    unsigned long ImageBreakpointSize;// Offset=0xb80 Size=0x4
    long ImageValidationFailed;// Offset=0xb84 Size=0x4
    struct _RTL_AVL_TREE ExtentTree[2];// Offset=0xb88 Size=0x10
    struct _EX_PUSH_LOCK ExtentTreeLock;// Offset=0xb98 Size=0x8
    unsigned long ImageViewExtensionOffsets[3];// Offset=0xba0 Size=0xc
    unsigned long TotalImageViewExtensionSize;// Offset=0xbac Size=0x4
    unsigned long TotalImageViewReservationSize;// Offset=0xbb0 Size=0x4
    struct _MI_COMBINE_BLOCK * ScpCfgPages[4];// Offset=0xbb8 Size=0x20
    struct _MI_COMBINE_BLOCK * EmulatedScpCfgPages[4];// Offset=0xbd8 Size=0x20
};

struct _MM_SYSTEM_PAGE_COUNTS// Size=0x10 (Id=1672)
{
    unsigned long SystemCodePage;// Offset=0x0 Size=0x4
    unsigned long SystemDriverPage;// Offset=0x4 Size=0x4
    long TotalSystemCodePages;// Offset=0x8 Size=0x4
    long TotalSystemDriverPages;// Offset=0xc Size=0x4
};

struct _RTL_FUNCTION_OVERRIDE_CAPABILITIES// Size=0x5a (Id=1981)
{
    unsigned char AMD64Capabilities[45];// Offset=0x0 Size=0x2d
    unsigned char AMD64KernelCapabilities[45];// Offset=0x2d Size=0x2d
};

struct _MI_SYSTEM_IMAGE_STATE// Size=0x240 (Id=1396)
{
    struct _LIST_ENTRY FixupList;// Offset=0x0 Size=0x10
    struct _ETHREAD * LoadLockOwner;// Offset=0x10 Size=0x8
    unsigned long LoadLockCount;// Offset=0x18 Size=0x4
    long FixupLock;// Offset=0x1c Size=0x4
    struct _EX_PUSH_LOCK EncodeDecodeLock;// Offset=0x20 Size=0x8
    unsigned long EncodeDecodeDepth;// Offset=0x28 Size=0x4
    unsigned char FirstLoadEver;// Offset=0x2c Size=0x1
    unsigned char SystemImagesLoaded;// Offset=0x2d Size=0x1
    struct _LIST_ENTRY StrongCodeLoadFailureList;// Offset=0x30 Size=0x10
    struct _KLDR_DATA_TABLE_ENTRY * SystemBase[1];// Offset=0x40 Size=0x8
    struct _RTL_BITMAP_EX BaseImageDiscardedBitmaps[1];// Offset=0x48 Size=0x10
    struct _EX_PUSH_LOCK MappingRangesPushLock;// Offset=0x58 Size=0x8
    struct _MI_DRIVER_VA * MappingRanges;// Offset=0x60 Size=0x8
    struct _MM_SYSTEM_PAGE_COUNTS PageCounts;// Offset=0x68 Size=0x10
    struct _EX_PUSH_LOCK CollidedLock;// Offset=0x78 Size=0x8
    struct _RTL_AVL_TREE ImageTree;// Offset=0x80 Size=0x8
    struct _LIST_ENTRY LoadInProgress;// Offset=0x88 Size=0x10
    unsigned long long ImportEntriesReplaced;// Offset=0x98 Size=0x8
    struct _EX_PUSH_LOCK SecurePteExclusionLock;// Offset=0xa0 Size=0x8
    void * SecurePteExclusionBase;// Offset=0xa8 Size=0x8
    void * SecurePteExclusionTop;// Offset=0xb0 Size=0x8
    struct _MI_CACHE_ALIGNED_ARRAY WorkingSetLockArray[4];// Offset=0xc0 Size=0x100
    struct _RTL_FUNCTION_OVERRIDE_CAPABILITIES FunctionOverrideCapabilities;// Offset=0x1c0 Size=0x5a
};

struct _unnamed_9// Size=0x8 (Id=9)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=252)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_9 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _MI_PROCESS_STATE// Size=0x58 (Id=1382)
{
    void * SystemDllBase;// Offset=0x0 Size=0x8
    unsigned long ColorSeed;// Offset=0x8 Size=0x4
    long RotatingUniprocessorNumber;// Offset=0xc Size=0x4
    union _LARGE_INTEGER CriticalSectionTimeout;// Offset=0x10 Size=0x8
    struct _LIST_ENTRY ProcessList;// Offset=0x18 Size=0x10
    struct _MMPTE * SharedUserDataPte[2];// Offset=0x28 Size=0x10
    void * HypervisorSharedVa;// Offset=0x38 Size=0x8
    unsigned long long VadSecureCookie;// Offset=0x40 Size=0x8
    void * NativeCfgBitmapPreferredAddress;// Offset=0x48 Size=0x8
    void * EcBitmapPreferredAddress;// Offset=0x50 Size=0x8
};

struct _MI_SYSTEM_NODE_AFFINITY_INFORMATION// Size=0x20 (Id=2441)
{
    struct _GROUP_AFFINITY * GroupAffinity;// Offset=0x0 Size=0x8
    unsigned long NumberOfDomains;// Offset=0x8 Size=0x4
    unsigned long GlobalDomainIndex;// Offset=0xc Size=0x4
    unsigned short GroupAffinityCount;// Offset=0x10 Size=0x2
    unsigned short ProcessorCount[3];// Offset=0x12 Size=0x6
    unsigned short UsableProcessorCount[3];// Offset=0x18 Size=0x6
};

struct _HAL_NODE_RANGE// Size=0x10 (Id=2235)
{
    unsigned long long PageFrameIndex;// Offset=0x0 Size=0x8
    unsigned long Node;// Offset=0x8 Size=0x4
};

struct _KAFFINITY_EX// Size=0x108 (Id=119)
{
    unsigned short Count;// Offset=0x0 Size=0x2
    unsigned short Size;// Offset=0x2 Size=0x2
    unsigned long Reserved;// Offset=0x4 Size=0x4
    union // Size=0x8 (Id=0)
    {
        unsigned long long Bitmap[1];// Offset=0x8 Size=0x8
        unsigned long long StaticBitmap[32];// Offset=0x8 Size=0x100
    };
};

struct _MI_HARDWARE_STATE// Size=0x1300 (Id=2137)
{
    unsigned long NumaHintIndex;// Offset=0x0 Size=0x4
    unsigned long NumaLastRangeIndexInclusive;// Offset=0x4 Size=0x4
    unsigned char MemoryNodeWithNoProcessorsFound;// Offset=0x8 Size=0x1
    unsigned char AccessBitReplacementHonored;// Offset=0x9 Size=0x1
    unsigned char ChannelHintIndex;// Offset=0xa Size=0x1
    unsigned char ChannelLastRangeIndexInclusive;// Offset=0xb Size=0x1
    struct _MI_NODE_NUMBER_ZERO_BASED * NodeGraph;// Offset=0x10 Size=0x8
    struct _MI_SYSTEM_NODE_AFFINITY_INFORMATION AffinityInfo;// Offset=0x18 Size=0x20
    struct _MI_SYSTEM_NODE_NONPAGED_POOL * SystemNodeNonPagedPool;// Offset=0x38 Size=0x8
    struct _HAL_NODE_RANGE TemporaryNumaRanges[2];// Offset=0x40 Size=0x20
    struct _HAL_NODE_RANGE * NumaMemoryRanges;// Offset=0x60 Size=0x8
    struct _HAL_CHANNEL_MEMORY_RANGES * ChannelMemoryRanges;// Offset=0x68 Size=0x8
    unsigned long SecondLevelCacheSize;// Offset=0x70 Size=0x4
    unsigned long FirstLevelCacheSize;// Offset=0x74 Size=0x4
    unsigned long PhysicalAddressBits;// Offset=0x78 Size=0x4
    unsigned long PfnDatabasePageBits;// Offset=0x7c Size=0x4
    unsigned char ProcessorCachesFlushedOnPowerLoss;// Offset=0x80 Size=0x1
    unsigned char PageTableReuseRequiresFlush;// Offset=0x81 Size=0x1
    unsigned long long TotalPagesAllowed;// Offset=0x88 Size=0x8
    unsigned long FlushTbForAttributeChange;// Offset=0x90 Size=0x4
    unsigned long FlushCacheForAttributeChange;// Offset=0x94 Size=0x4
    unsigned long FlushCacheForPageAttributeChange;// Offset=0x98 Size=0x4
    unsigned long CacheFlushPromoteThreshold;// Offset=0x9c Size=0x4
    unsigned long long InvalidPteMask;// Offset=0xc0 Size=0x8
    unsigned long PageColors[4];// Offset=0x100 Size=0x10
    unsigned long long FlushTbThreshold;// Offset=0x110 Size=0x8
    unsigned char AttributeChangeRequiresReZero;// Offset=0x118 Size=0x1
    unsigned long long HighestPossiblePhysicalPage;// Offset=0x120 Size=0x8
    unsigned long long VsmKernelPageCount;// Offset=0x128 Size=0x8
    unsigned long long HugePageRemoveTracker[512];// Offset=0x130 Size=0x1000
    unsigned long long HotAddSequenceNumber;// Offset=0x1130 Size=0x8
    unsigned long long HotRemoveSequenceNumber;// Offset=0x1138 Size=0x8
    struct _LIST_ENTRY HotAddsInFlight;// Offset=0x1140 Size=0x10
    unsigned long HotAddInFlightCount;// Offset=0x1150 Size=0x4
    unsigned long HotAddInFlightNumaCount;// Offset=0x1154 Size=0x4
    long ParkedCoresLock;// Offset=0x1180 Size=0x4
    struct _KAFFINITY_EX ParkedCores;// Offset=0x1188 Size=0x108
    struct _WORK_QUEUE_ITEM ParkedCoresWorkItem;// Offset=0x1290 Size=0x20
    struct _EX_PUSH_LOCK ShadowPageTablesLock;// Offset=0x12b0 Size=0x8
    unsigned long long SpecialPurposeMemoryTypeId;// Offset=0x12b8 Size=0x8
    unsigned long SpecialPurposeMemoryQueryTypeExtraSpace;// Offset=0x12c0 Size=0x4
    unsigned char GlobalBitPolarity[2];// Offset=0x12c4 Size=0x2
};

struct _MI_DYNAMIC_BITMAP// Size=0x48 (Id=1910)
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

struct _MMSUPPORT_FLAGS// Size=0x4 (Id=674)
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

struct _MMSUPPORT_INSTANCE// Size=0xc0 (Id=676)
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

struct _MMSUPPORT_SHARED// Size=0x80 (Id=1733)
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

struct _MMSUPPORT_FULL// Size=0x140 (Id=1380)
{
    struct _MMSUPPORT_INSTANCE Instance;// Offset=0x0 Size=0xc0
    struct _MMSUPPORT_SHARED Shared;// Offset=0xc0 Size=0x80
};

struct _MI_WORKING_SET_PAGE_TABLE_AGE_LINKS// Size=0x18 (Id=2461)
{
    long Lock;// Offset=0x0 Size=0x4
    unsigned long EntryCount;// Offset=0x4 Size=0x4
    struct _MMPFN * Flink;// Offset=0x8 Size=0x8
    struct _MMPFN * Blink;// Offset=0x10 Size=0x8
};

struct _MMWSL_INSTANCE// Size=0x100 (Id=2037)
{
    struct _MMPTE * PteResumePoint[3];// Offset=0x0 Size=0x18
    unsigned long LastAccessClearingRemainder;// Offset=0x18 Size=0x4
    unsigned long LastAgingRemainder;// Offset=0x1c Size=0x4
    unsigned long long LockedEntries;// Offset=0x20 Size=0x8
    struct _MI_WORKING_SET_PAGE_TABLE_AGE_LINKS ActivePageTableLinks[8];// Offset=0x40 Size=0xc0
};

struct _MI_SYSTEM_VA_STATE// Size=0x1040 (Id=1731)
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
    long SystemCacheViewLock;// Offset=0x4f8 Size=0x4
    struct _MMWSL_INSTANCE SystemWorkingSetList[10];// Offset=0x500 Size=0xa00
    unsigned long long SelfmapLock[4];// Offset=0xf00 Size=0x20
    struct _MI_CACHE_ALIGNED_ARRAY SystemCacheWorkingSetLockArray[4];// Offset=0xf40 Size=0x100
};

struct _MI_COMBINE_STATE// Size=0x20 (Id=1999)
{
    long ActiveSpinLock;// Offset=0x0 Size=0x4
    unsigned long CombiningThreadCount;// Offset=0x4 Size=0x4
    struct _RTL_AVL_TREE ActiveThreadTree;// Offset=0x8 Size=0x8
    unsigned long long CommonPageCombineDomain;// Offset=0x10 Size=0x8
    unsigned long CommonCombineDomainAssigned;// Offset=0x18 Size=0x4
    long CombineSequence;// Offset=0x1c Size=0x4
};

struct _KEVENT// Size=0x18 (Id=20)
{
    struct _DISPATCHER_HEADER Header;// Offset=0x0 Size=0x18
};

struct _MI_PAGELIST_STATE// Size=0x110 (Id=2023)
{
    long ActiveSpinLock;// Offset=0x0 Size=0x4
    struct _RTL_AVL_TREE ActiveThreadTree;// Offset=0x8 Size=0x8
    long ActiveZeroSpinLock;// Offset=0x10 Size=0x4
    struct _RTL_AVL_TREE ActiveZeroThreadTree;// Offset=0x18 Size=0x8
    struct _MMPFN LargePfnTemplate;// Offset=0x20 Size=0x30
    struct _MMPFN LargePfnBasePageTemplate;// Offset=0x50 Size=0x30
    unsigned long NumberOfZeroFreePageListHeads;// Offset=0x80 Size=0x4
    struct _KEVENT Phase1BootComplete;// Offset=0x88 Size=0x18
    struct _RTL_AVL_TREE PendingBadPageTree;// Offset=0xa0 Size=0x8
    unsigned long long PendingBadPageCount;// Offset=0xa8 Size=0x8
    long PendingBadPageTreeLock;// Offset=0xb0 Size=0x4
    unsigned long long PendingBadPagesWithoutNodesCount;// Offset=0xb8 Size=0x8
    struct _LIST_ENTRY PendingBadPageNodesAwaitingDeleteList;// Offset=0xc0 Size=0x10
    unsigned long long PendingBadPageNodesAwaitingDeleteCount;// Offset=0xd0 Size=0x8
    unsigned char PendingBadPageNodeDeleteActive;// Offset=0xd8 Size=0x1
    struct _WORK_QUEUE_ITEM PendingBadPageNodeDeleteWorkItem;// Offset=0xe0 Size=0x20
    struct _RTL_AVL_TREE BadHugePageTree;// Offset=0x100 Size=0x8
    unsigned long long BadHugePageCount;// Offset=0x108 Size=0x8
};

struct _RTL_BITMAP// Size=0x10 (Id=13)
{
    unsigned long SizeOfBitMap;// Offset=0x0 Size=0x4
    unsigned long * Buffer;// Offset=0x8 Size=0x8
};

struct _MI_PARTITION_STATE// Size=0x100 (Id=1421)
{
    long PartitionLock;// Offset=0x0 Size=0x4
    struct _EX_PUSH_LOCK PartitionIdLock;// Offset=0x8 Size=0x8
    unsigned long long InitialPartitionIdBits;// Offset=0x10 Size=0x8
    struct _LIST_ENTRY PartitionList;// Offset=0x18 Size=0x10
    struct _RTL_BITMAP * PartitionIdBitmap;// Offset=0x28 Size=0x8
    struct _RTL_BITMAP InitialPartitionIdBitmap;// Offset=0x30 Size=0x10
    struct _MI_PARTITION * TempPartitionPointers[1];// Offset=0x40 Size=0x8
    struct _MI_PARTITION ** Partition;// Offset=0x48 Size=0x8
    unsigned long CrossPartitionDenials;// Offset=0x50 Size=0x4
    unsigned char MultiplePartitionsExist;// Offset=0x54 Size=0x1
    void * ExtendedPartitionStart;// Offset=0x58 Size=0x8
    unsigned long long ExtendedPartitionBytes;// Offset=0x60 Size=0x8
    unsigned long long ChildPartitionBytes;// Offset=0x68 Size=0x8
    struct _RTL_BITMAP_EX HugeIoPfnBitMap;// Offset=0x70 Size=0x10
    struct _MI_HUGE_PFN * HugePfnDatabase;// Offset=0x80 Size=0x8
    long * HugePfnLockArray;// Offset=0x88 Size=0x8
    long HugeRangesLock;// Offset=0xc0 Size=0x4
};

struct _MI_RESUME_WORKITEM// Size=0x38 (Id=2333)
{
    struct _KEVENT ResumeCompleteEvent;// Offset=0x0 Size=0x18
    struct _WORK_QUEUE_ITEM WorkItem;// Offset=0x18 Size=0x20
};

enum _MI_MIRROR_BITMAP_STATE
{
    MirrorBitmapStateDormant=0,
    MirrorBitmapStateFailedInitialize=1,
    MirrorBitmapStateFullyInitialized=2
};

struct _MI_SHUTDOWN_STATE// Size=0x88 (Id=1787)
{
    unsigned char CrashDumpInitialized;// Offset=0x0 Size=0x1
    unsigned char ConnectedStandbyActive;// Offset=0x1 Size=0x1
    unsigned char ZeroPageFileAtShutdown;// Offset=0x2 Size=0x1
    unsigned char CacheConflictsAllowed;// Offset=0x3 Size=0x1
    unsigned long SystemShutdown;// Offset=0x4 Size=0x4
    long ShutdownFlushInProgress;// Offset=0x8 Size=0x4
    unsigned long MirroringActive;// Offset=0xc Size=0x4
    struct _MI_RESUME_WORKITEM ResumeItem;// Offset=0x10 Size=0x38
    struct _ETHREAD * MirrorHoldsPfn;// Offset=0x48 Size=0x8
    struct _RTL_BITMAP_EX MirrorBitMaps[2];// Offset=0x50 Size=0x20
    enum _MI_MIRROR_BITMAP_STATE MirrorBitMapState;// Offset=0x70 Size=0x4
    struct _MMPTE * CrashDumpPte;// Offset=0x78 Size=0x8
    unsigned long CrashDumpPteCount;// Offset=0x80 Size=0x4
};

struct _MI_BAD_MEMORY_EVENT_ENTRY// Size=0x38 (Id=2245)
{
    unsigned long BugCheckCode;// Offset=0x0 Size=0x4
    long Active;// Offset=0x4 Size=0x4
    unsigned long Data;// Offset=0x8 Size=0x4
    union _LARGE_INTEGER PhysicalAddress;// Offset=0x10 Size=0x8
    struct _WORK_QUEUE_ITEM WorkItem;// Offset=0x18 Size=0x20
};

struct _MI_PROBE_RAISE_TRACKER// Size=0x40 (Id=2315)
{
    unsigned long UserRangeInKernel;// Offset=0x0 Size=0x4
    unsigned long FaultFailed;// Offset=0x4 Size=0x4
    unsigned long WriteFaultFailed;// Offset=0x8 Size=0x4
    unsigned long LargePageFailed;// Offset=0xc Size=0x4
    unsigned long UserAccessToKernelPte;// Offset=0x10 Size=0x4
    unsigned long BadPageLocation;// Offset=0x14 Size=0x4
    unsigned long InsufficientCharge;// Offset=0x18 Size=0x4
    unsigned long PageTableCharge;// Offset=0x1c Size=0x4
    unsigned long NoIoReference;// Offset=0x20 Size=0x4
    unsigned long ProbeFailed;// Offset=0x24 Size=0x4
    unsigned long PteIsZero;// Offset=0x28 Size=0x4
    unsigned long StrongCodeWrite;// Offset=0x2c Size=0x4
    unsigned long ReducedCloneCommitChargeFailed;// Offset=0x30 Size=0x4
    unsigned long CopyOnWriteAtDispatchNoPages;// Offset=0x34 Size=0x4
    unsigned long NoPageTablesAllowed;// Offset=0x38 Size=0x4
    unsigned long EnclavePageFailed;// Offset=0x3c Size=0x4
};

struct _MI_FORCED_COMMITS// Size=0x8 (Id=2274)
{
    unsigned long Regular;// Offset=0x0 Size=0x4
    unsigned long Wrap;// Offset=0x4 Size=0x4
};

enum _MI_PRE_PHASE0_BUGCHECK_PARAMETER
{
    LoaderPfnDatabaseAllGood=0,
    LoaderPfnDatabaseNoBytes=1,
    LoaderPfnDatabaseBadPxeFormat=2,
    LoaderPfnDatabaseInsufficientSetPxes=3,
    LoaderPfnDatabaseInconsistentBits=4,
    LoaderPfnDatabaseNoRegionSpace=5
};

enum _MI_PAGE_HASH_ERROR_BEHAVIOR
{
    MiPageHashErrorBugcheck=0,
    MiPageHashErrorReturnError=1,
    MiPageHashErrorIgnore=2
};

struct _MI_RESAVAIL_FAILURES// Size=0x8 (Id=2302)
{
    unsigned long Wrap;// Offset=0x0 Size=0x4
    unsigned long NoCharge;// Offset=0x4 Size=0x4
};

struct _MI_ERROR_STATE// Size=0x100 (Id=2150)
{
    struct _MI_BAD_MEMORY_EVENT_ENTRY BadMemoryEventEntry;// Offset=0x0 Size=0x38
    struct _MI_PROBE_RAISE_TRACKER ProbeRaises;// Offset=0x38 Size=0x40
    struct _MI_FORCED_COMMITS ForcedCommits;// Offset=0x78 Size=0x8
    enum _MI_PRE_PHASE0_BUGCHECK_PARAMETER PrePhase0BugCheckParameter;// Offset=0x80 Size=0x4
    unsigned long WsleFailures;// Offset=0x84 Size=0x4
    unsigned char PendingBadPages;// Offset=0x88 Size=0x1
    unsigned char FatalGraphicsFailures;// Offset=0x89 Size=0x1
    unsigned char BadPagesInsertSignalState;// Offset=0x8a Size=0x1
    enum _MI_PAGE_HASH_ERROR_BEHAVIOR PageHashErrorBehavior;// Offset=0x8c Size=0x4
    unsigned long PageHashReadErrors;// Offset=0x90 Size=0x4
    unsigned long PageHashStandbyErrors;// Offset=0x94 Size=0x4
    unsigned long PageHashTransferErrors;// Offset=0x98 Size=0x4
    unsigned long PageHashAllocationErrors;// Offset=0x9c Size=0x4
    unsigned long long FailedHashPageFrameIndex;// Offset=0xa0 Size=0x8
    unsigned long CheckZeroCount;// Offset=0xa8 Size=0x4
    unsigned long ZeroedPageSingleBitErrorsDetected;// Offset=0xac Size=0x4
    unsigned long BadPagesDetected;// Offset=0xb0 Size=0x4
    unsigned long BadPagesInserted;// Offset=0xb4 Size=0x4
    struct _WORK_QUEUE_ITEM BadPageInsertWorkItem;// Offset=0xb8 Size=0x20
    unsigned long ScrubPasses;// Offset=0xd8 Size=0x4
    unsigned long ScrubBadPagesFound;// Offset=0xdc Size=0x4
    unsigned long UserViewFailures;// Offset=0xe0 Size=0x4
    unsigned long UserViewCollisionFailures;// Offset=0xe4 Size=0x4
    unsigned long UserAllocateFailures;// Offset=0xe8 Size=0x4
    unsigned long UserAllocateCollisionFailures;// Offset=0xec Size=0x4
    struct _MI_RESAVAIL_FAILURES ResavailFailures;// Offset=0xf0 Size=0x8
    unsigned long BadPhysicalMapsEarly;// Offset=0xf8 Size=0x4
    unsigned long BadPhysicalMaps;// Offset=0xfc Size=0x4
};

union _unnamed_2131// Size=0x8 (Id=2131)
{
    struct _CONTROL_AREA * ControlArea;// Offset=0x0 Size=0x8
};

struct _unnamed_2132// Size=0x4 (Id=2132)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long Pending:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Reserved:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long Offset:30;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1e
    };
};

union _unnamed_2133// Size=0x4 (Id=2133)
{
    unsigned long EntireField;// Offset=0x0 Size=0x4
    struct _unnamed_2132 e2;// Offset=0x0 Size=0x4
};

struct _MI_DBG_PATCH// Size=0x18 (Id=2134)
{
    union _unnamed_2131 u1;// Offset=0x0 Size=0x8
    union _unnamed_2133 u2;// Offset=0x8 Size=0x4
    unsigned long OriginalBytes;// Offset=0xc Size=0x4
    unsigned long NewBytes;// Offset=0x10 Size=0x4
    unsigned long Padding;// Offset=0x14 Size=0x4
};

struct _MI_DEBUGGER_STATE// Size=0x5938 (Id=1783)
{
    unsigned char TransientWrite;// Offset=0x0 Size=0x1
    struct _MMPTE * DebugPtes[2];// Offset=0x8 Size=0x10
    unsigned long PoisonedTb;// Offset=0x18 Size=0x4
    long InDebugger;// Offset=0x1c Size=0x4
    void * Pfns[32];// Offset=0x20 Size=0x100
    struct _MI_DBG_PATCH PatchBuffer[256];// Offset=0x120 Size=0x1800
    unsigned long PatchBufferInsertIndex;// Offset=0x1920 Size=0x4
    unsigned long PatchBufferRemoveIndex;// Offset=0x1924 Size=0x4
    struct _MI_DBG_PATCH PatchTableSpace[512];// Offset=0x1928 Size=0x3000
    struct _MI_DBG_PATCH * PatchTable[512];// Offset=0x4928 Size=0x1000
    long PatchTableLock;// Offset=0x5928 Size=0x4
    unsigned long PatchTableFreeEntry;// Offset=0x592c Size=0x4
    unsigned long PatchTableEntryCount;// Offset=0x5930 Size=0x4
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

struct _MI_STANDBY_STATE// Size=0x160 (Id=1987)
{
    unsigned long long FirstDecayPage;// Offset=0x0 Size=0x8
    union _SLIST_HEADER PfnDecayFreeSList;// Offset=0x10 Size=0x10
    long DecayPfnLock;// Offset=0x20 Size=0x4
    struct _RTL_BITMAP DecayPfnsToBeFreed;// Offset=0x28 Size=0x10
    unsigned long DecayPfnsToBeFreedBuffer[64];// Offset=0x38 Size=0x100
    union _SLIST_HEADER PageHeatListSlist;// Offset=0x140 Size=0x10
    long PageHeatListDisableAllocation;// Offset=0x150 Size=0x4
    unsigned long TransitionPagesMadeCold;// Offset=0x154 Size=0x4
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

struct _MI_ULTRA_VA_CONTEXT// Size=0x40 (Id=1747)
{
    long Lock;// Offset=0x0 Size=0x4
    void * ZeroMapping;// Offset=0x8 Size=0x8
    unsigned long long AllocationHintBit;// Offset=0x10 Size=0x8
    struct _RTL_BITMAP_EX Bitmap[2];// Offset=0x18 Size=0x20
    unsigned long ConcurrencyMaximum;// Offset=0x38 Size=0x4
    long ConcurrencyCount;// Offset=0x3c Size=0x4
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

struct _MI_IO_PAGE_STATE_CELL// Size=0x40 (Id=2454)
{
    struct _RTL_AVL_TREE PfnRoot;// Offset=0x0 Size=0x8
    unsigned long long UnmappedNodeCount;// Offset=0x8 Size=0x8
    unsigned long long UnmappedHugeIoSpaceNodeCount;// Offset=0x10 Size=0x8
    unsigned long long TotalNodeCount;// Offset=0x18 Size=0x8
    unsigned long long ResumePageForDeleteScans;// Offset=0x20 Size=0x8
};

struct _MI_IO_CACHE_STATS// Size=0x14 (Id=2379)
{
    unsigned long UnmappedCacheFlush;// Offset=0x0 Size=0x4
    unsigned long UnmappedCacheConflict;// Offset=0x4 Size=0x4
    unsigned long PermanentIoAttributeConflict;// Offset=0x8 Size=0x4
    unsigned long PermanentIoNodeConflict;// Offset=0xc Size=0x4
    unsigned long ExclusionReferenceConflict;// Offset=0x10 Size=0x4
};

struct _MI_IO_PAGE_STATE// Size=0x100 (Id=2279)
{
    struct _MI_IO_PAGE_STATE_CELL TypeCell[2];// Offset=0x0 Size=0x80
    struct _RTL_AVL_TREE InvariantIoSpace;// Offset=0x80 Size=0x8
    struct _RTL_AVL_TREE ExclusionSpace;// Offset=0x88 Size=0x8
    long IoPfnPruneLock;// Offset=0x90 Size=0x4
    struct _WORK_QUEUE_ITEM UnmappedNodeWorkItem;// Offset=0x98 Size=0x20
    struct _MI_IO_CACHE_STATS IoCacheStats;// Offset=0xb8 Size=0x14
};

struct _MI_PAGEFILE_METADATA_LAYOUT// Size=0x8 (Id=2320)
{
    unsigned long EntryInBytes;// Offset=0x0 Size=0x4
    unsigned long OwningPteOffset;// Offset=0x4 Size=0x4
};

struct _MI_PAGING_IO_STATE// Size=0xb0 (Id=1985)
{
    struct _RTL_AVL_TREE PageFileHead;// Offset=0x0 Size=0x8
    long PageFileHeadSpinLock;// Offset=0x8 Size=0x4
    struct _MI_PAGEFILE_METADATA_LAYOUT PageFileMetadata;// Offset=0xc Size=0x8
    long PrefetchSeekThreshold;// Offset=0x14 Size=0x4
    unsigned long InPageSinglePages;// Offset=0x18 Size=0x4
    union _SLIST_HEADER InPageSupportSListHead[2];// Offset=0x20 Size=0x20
    union _SLIST_HEADER ReservedInPageSupportSListHead[2];// Offset=0x40 Size=0x20
    unsigned char InPageSupportSListMinimum[2];// Offset=0x60 Size=0x2
    struct _MMINPAGE_SUPPORT * FirstReservedInPageBlock[2];// Offset=0x68 Size=0x10
    struct _MMINPAGE_SUPPORT * LastReservedInPageBlock[2];// Offset=0x78 Size=0x10
    struct _MMPTE * ReservedPtes;// Offset=0x88 Size=0x8
    long ReservedPtesLock;// Offset=0x90 Size=0x4
    unsigned long ReservedPtesBitBuffer;// Offset=0x94 Size=0x4
    long DelayPageFaults;// Offset=0x98 Size=0x4
    unsigned char MdlsAdjusted;// Offset=0x9c Size=0x1
    long NumberOfFailedStoreReads;// Offset=0xa0 Size=0x4
};

struct _MI_FILLED_COMMON_PAGE_STATE// Size=0x38 (Id=2463)
{
    unsigned long long PageFrameIndex[4];// Offset=0x0 Size=0x20
    void * LeafMapping;// Offset=0x20 Size=0x8
    unsigned long long LeafCrc;// Offset=0x28 Size=0x8
    struct _MMPTE PdeContents;// Offset=0x30 Size=0x8
};

struct _MI_COMMON_PAGE_STATE// Size=0x80 (Id=2153)
{
    struct _MMPFN * DummyPagePfn;// Offset=0x0 Size=0x8
    unsigned long long DummyPage;// Offset=0x8 Size=0x8
    struct _MI_FILLED_COMMON_PAGE_STATE GapFrames[2];// Offset=0x10 Size=0x70
};

struct _MI_VERIFIER_TRIM_STATE// Size=0x20 (Id=1798)
{
    unsigned long long StartTime;// Offset=0x0 Size=0x8
    unsigned long long ActualTrimTime;// Offset=0x8 Size=0x8
    unsigned long long MaximumSingleTrimTimeReached;// Offset=0x10 Size=0x8
    unsigned long Instances;// Offset=0x18 Size=0x4
    long TrimInProgress;// Offset=0x1c Size=0x4
};

struct _MI_SYSTEM_TRIM_STATE// Size=0x80 (Id=1651)
{
    long ExpansionLock;// Offset=0x0 Size=0x4
    long TrimInProgressCount;// Offset=0x4 Size=0x4
    struct _KEVENT PeriodicWorkingSetEvent;// Offset=0x8 Size=0x18
    struct _MI_VERIFIER_TRIM_STATE Verifier;// Offset=0x20 Size=0x20
    unsigned long TrimAllPageFaultCount[4];// Offset=0x40 Size=0x10
    struct _ETHREAD * EmptyAllThread;// Offset=0x50 Size=0x8
    unsigned long FaultedInSystemPage;// Offset=0x58 Size=0x4
};

struct _MI_SYSTEM_ACCELERATORS// Size=0x30 (Id=1794)
{
    struct _LIST_ENTRY HardwareInstances;// Offset=0x0 Size=0x10
    unsigned long NumberOfHardwareInstances;// Offset=0x10 Size=0x4
    unsigned char ShuttingDown;// Offset=0x14 Size=0x1
    unsigned char AllocationFailures;// Offset=0x15 Size=0x1
    unsigned char AllocationQueryFailures;// Offset=0x16 Size=0x1
    unsigned char AllocationQueryBadNodes;// Offset=0x17 Size=0x1
    struct _SINGLE_LIST_ENTRY DeferredPoolFrees;// Offset=0x18 Size=0x8
    void ** OpaqueContext;// Offset=0x20 Size=0x8
    long Lock;// Offset=0x28 Size=0x4
};

struct _MI_HOT_PATCH_STATE// Size=0x48 (Id=1606)
{
    struct _RTL_AVL_TREE UserSidPatchLists;// Offset=0x0 Size=0x8
    struct _RTL_AVL_TREE GlobalHotPatchList;// Offset=0x8 Size=0x8
    struct _RTL_AVL_TREE PreviouslyRegisteredHotPatchList;// Offset=0x10 Size=0x8
    struct _RTL_AVL_TREE SecureImageActivePatches;// Offset=0x18 Size=0x8
    struct _EX_PUSH_LOCK HotPatchListLock;// Offset=0x20 Size=0x8
    struct _KLDR_DATA_TABLE_ENTRY * InProgressPatchTableEntry;// Offset=0x28 Size=0x8
    struct _KLDR_DATA_TABLE_ENTRY * InProgressBaseTableEntry;// Offset=0x30 Size=0x8
    char ReadyForPatchOperations;// Offset=0x38 Size=0x1
    unsigned long HotPatchReserveSize;// Offset=0x3c Size=0x4
    unsigned long DriverProxyReserveSize;// Offset=0x40 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long HotPatchingEnabled:1;// Offset=0x44 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Spare:31;// Offset=0x44 Size=0x4 BitOffset=0x1 BitSize=0x1f
    };
};

struct _EX_RUNDOWN_REF// Size=0x8 (Id=269)
{
    union // Size=0x8 (Id=0)
    {
        unsigned long long Count;// Offset=0x0 Size=0x8
        void * Ptr;// Offset=0x0 Size=0x8
    };
};

struct _MI_ENCLAVE_STATE// Size=0x48 (Id=1422)
{
    struct _RTL_AVL_TREE EnclaveRegions;// Offset=0x0 Size=0x8
    void * EnclaveMetadataPage;// Offset=0x8 Size=0x8
    struct _RTL_BITMAP * EnclaveMetadataBitMap;// Offset=0x10 Size=0x8
    struct _EX_PUSH_LOCK EnclaveMetadataEntryLock;// Offset=0x18 Size=0x8
    long EnclaveMetadataPageLock;// Offset=0x20 Size=0x4
    struct _LIST_ENTRY EnclaveList;// Offset=0x28 Size=0x10
    struct _EX_PUSH_LOCK EnclaveListLock;// Offset=0x38 Size=0x8
    struct _EX_RUNDOWN_REF ShutdownRundown;// Offset=0x40 Size=0x8
};

struct _MM_PAGED_POOL_INFO// Size=0x18 (Id=1281)
{
    struct _EX_PUSH_LOCK Lock;// Offset=0x0 Size=0x8
    unsigned long long MaximumSize;// Offset=0x8 Size=0x8
    unsigned long long AllocatedPagedPool;// Offset=0x10 Size=0x8
};

struct _MMSUPPORT_AGGREGATION// Size=0x20 (Id=2369)
{
    unsigned long PageFaultCount;// Offset=0x0 Size=0x4
    unsigned long long WorkingSetSize;// Offset=0x8 Size=0x8
    unsigned long long WorkingSetLeafSize;// Offset=0x10 Size=0x8
    unsigned long long PeakWorkingSetSize;// Offset=0x18 Size=0x8
};

struct _SYSPTES_HEADER// Size=0x118 (Id=2146)
{
    struct _LIST_ENTRY ListHead[16];// Offset=0x0 Size=0x100
    unsigned long long Count;// Offset=0x100 Size=0x8
    unsigned long long NumberOfEntries;// Offset=0x108 Size=0x8
    unsigned long long NumberOfEntriesPeak;// Offset=0x110 Size=0x8
};

struct _MI_SYSTEM_VA_ASSIGNMENT// Size=0x10 (Id=2411)
{
    void * BaseAddress;// Offset=0x0 Size=0x8
    unsigned long long NumberOfBytes;// Offset=0x8 Size=0x8
};

struct _MI_VISIBLE_STATE// Size=0x16c0 (Id=2216)
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

struct _MI_SYSTEM_INFORMATION// Size=0xc1c0 (Id=1361)
{
    struct _MI_POOL_STATE Pools;// Offset=0x0 Size=0x1c0
    struct _MI_SECTION_STATE Sections;// Offset=0x1c0 Size=0xc00
    struct _MI_SYSTEM_IMAGE_STATE SystemImages;// Offset=0xdc0 Size=0x240
    struct _MI_PROCESS_STATE Processes;// Offset=0x1000 Size=0x58
    struct _MI_HARDWARE_STATE Hardware;// Offset=0x1080 Size=0x1300
    struct _MI_SYSTEM_VA_STATE SystemVa;// Offset=0x2380 Size=0x1040
    struct _MI_COMBINE_STATE PageCombines;// Offset=0x33c0 Size=0x20
    struct _MI_PAGELIST_STATE PageLists;// Offset=0x33e0 Size=0x110
    struct _MI_PARTITION_STATE Partitions;// Offset=0x3500 Size=0x100
    struct _MI_SHUTDOWN_STATE Shutdowns;// Offset=0x3600 Size=0x88
    struct _MI_ERROR_STATE Errors;// Offset=0x3688 Size=0x100
    struct _MI_DEBUGGER_STATE Debugger;// Offset=0x3788 Size=0x5938
    struct _MI_STANDBY_STATE Standby;// Offset=0x90c0 Size=0x160
    struct _MI_SYSTEM_PTE_STATE SystemPtes;// Offset=0x9240 Size=0x1500
    struct _MI_IO_PAGE_STATE IoPages;// Offset=0xa740 Size=0x100
    struct _MI_PAGING_IO_STATE PagingIo;// Offset=0xa840 Size=0xb0
    struct _MI_COMMON_PAGE_STATE CommonPages;// Offset=0xa8f0 Size=0x80
    struct _MI_SYSTEM_TRIM_STATE Trims;// Offset=0xa980 Size=0x80
    struct _MI_SYSTEM_ACCELERATORS Accelerators;// Offset=0xaa00 Size=0x30
    struct _MI_HOT_PATCH_STATE HotPatch;// Offset=0xaa30 Size=0x48
    struct _MI_ENCLAVE_STATE Enclaves;// Offset=0xaa78 Size=0x48
    unsigned long long Cookie;// Offset=0xaac0 Size=0x8
    void * BootRegistryRuns;// Offset=0xaac8 Size=0x8
    long ZeroingDisabled;// Offset=0xaad0 Size=0x4
    unsigned char FullyInitialized;// Offset=0xaad4 Size=0x1
    unsigned char SafeBooted;// Offset=0xaad5 Size=0x1
    struct _tlgProvider_t * TraceLogging;// Offset=0xaad8 Size=0x8
    struct _MI_VISIBLE_STATE Vs;// Offset=0xab00 Size=0x16c0
};
