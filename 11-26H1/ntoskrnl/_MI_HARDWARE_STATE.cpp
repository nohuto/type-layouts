struct _MI_SYSTEM_NODE_AFFINITY_INFORMATION// Size=0x20 (Id=2561)
{
    struct _GROUP_AFFINITY * GroupAffinity;// Offset=0x0 Size=0x8
    unsigned long NumberOfDomains;// Offset=0x8 Size=0x4
    unsigned long GlobalDomainIndex;// Offset=0xc Size=0x4
    unsigned short GroupAffinityCount;// Offset=0x10 Size=0x2
    unsigned short ProcessorCount[3];// Offset=0x12 Size=0x6
    unsigned short UsableProcessorCount[3];// Offset=0x18 Size=0x6
};

struct _HAL_NODE_RANGE// Size=0x10 (Id=2342)
{
    unsigned long long PageFrameIndex;// Offset=0x0 Size=0x8
    unsigned long Node;// Offset=0x8 Size=0x4
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

struct _RTL_BITMAP_EX// Size=0x10 (Id=1254)
{
    unsigned long long SizeOfBitMap;// Offset=0x0 Size=0x8
    unsigned long long * Buffer;// Offset=0x8 Size=0x8
};

struct _LIST_ENTRY// Size=0x10 (Id=3)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _KAFFINITY_EX// Size=0x108 (Id=535)
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

struct _WORK_QUEUE_ITEM// Size=0x20 (Id=21)
{
    struct _LIST_ENTRY List;// Offset=0x0 Size=0x10
    void  ( * WorkerRoutine)(void * );// Offset=0x10 Size=0x8
    void * Parameter;// Offset=0x18 Size=0x8
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

struct _unnamed_542// Size=0x10 (Id=542)
{
    struct // Size=0x10 (Id=0)
    {
        unsigned long long Depth:16;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x10
        unsigned long long Sequence:48;// Offset=0x0 Size=0x8 BitOffset=0x10 BitSize=0x30
        unsigned long long Reserved:4;// Offset=0x8 Size=0x8 BitOffset=0x0 BitSize=0x4
        unsigned long long NextEntry:60;// Offset=0x8 Size=0x8 BitOffset=0x4 BitSize=0x3c
    };
};

union _SLIST_HEADER// Size=0x10 (Id=543)
{
    unsigned long long Alignment;// Offset=0x0 Size=0x8
    unsigned long long Region;// Offset=0x8 Size=0x8
    struct _unnamed_542 HeaderX64;// Offset=0x0 Size=0x10
};

struct _MI_HARDWARE_STATE// Size=0x300 (Id=2241)
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
    unsigned long long InitialPfnAllocation;// Offset=0x80 Size=0x8
    unsigned long long TrailingPfnPages;// Offset=0x88 Size=0x8
    void * PfnDatabaseEnd;// Offset=0x90 Size=0x8
    unsigned char NumberOfChannels;// Offset=0x98 Size=0x1
    unsigned char ProcessorCachesFlushedOnPowerLoss;// Offset=0x99 Size=0x1
    unsigned char PageTableReuseRequiresFlush;// Offset=0x9a Size=0x1
    unsigned long long TotalPagesAllowed;// Offset=0xa0 Size=0x8
    unsigned long FlushTbForAttributeChange;// Offset=0xa8 Size=0x4
    unsigned long FlushCacheForAttributeChange;// Offset=0xac Size=0x4
    unsigned long FlushCacheForPageAttributeChange;// Offset=0xb0 Size=0x4
    unsigned long CacheFlushPromoteThreshold;// Offset=0xb4 Size=0x4
    struct _MMPTE InvalidPteMask;// Offset=0xc0 Size=0x8
    struct _MMPTE ClearInvalidBitPteMask;// Offset=0xc8 Size=0x8
    unsigned long PageColors[4];// Offset=0x100 Size=0x10
    unsigned long long FlushTbThreshold;// Offset=0x110 Size=0x8
    unsigned char AttributeChangeRequiresReZero;// Offset=0x118 Size=0x1
    unsigned long long HighestPossiblePhysicalPage;// Offset=0x120 Size=0x8
    unsigned long long VsmKernelPageCount;// Offset=0x128 Size=0x8
    unsigned long long MdlAllocatedSecurePageCount;// Offset=0x130 Size=0x8
    struct _RTL_BITMAP_EX HugePageRamRemovedBitmap;// Offset=0x138 Size=0x10
    unsigned long long HotAddSequenceNumber;// Offset=0x148 Size=0x8
    unsigned long long HotRemoveSequenceNumber;// Offset=0x150 Size=0x8
    struct _LIST_ENTRY HotAddsInFlight;// Offset=0x158 Size=0x10
    unsigned long HotAddInFlightCount;// Offset=0x168 Size=0x4
    unsigned long HotAddInFlightNumaCount;// Offset=0x16c Size=0x4
    long ParkedCoresLock;// Offset=0x180 Size=0x4
    struct _KAFFINITY_EX ParkedCores;// Offset=0x188 Size=0x108
    struct _WORK_QUEUE_ITEM ParkedCoresWorkItem;// Offset=0x290 Size=0x20
    struct _EX_PUSH_LOCK ShadowPageTablesLock;// Offset=0x2b0 Size=0x8
    unsigned long long SpecialPurposeMemoryTypeId;// Offset=0x2b8 Size=0x8
    unsigned long SpecialPurposeMemoryQueryTypeExtraSpace;// Offset=0x2c0 Size=0x4
    unsigned char GlobalBitPolarity[2];// Offset=0x2c4 Size=0x2
    union _SLIST_HEADER MemoryBlocksToFree;// Offset=0x2d0 Size=0x10
};
