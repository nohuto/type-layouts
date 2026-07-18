struct _HAL_NODE_RANGE// Size=0x10 (Id=2042)
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

struct _LIST_ENTRY// Size=0x10 (Id=3)
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

struct _MI_HARDWARE_STATE// Size=0x1280 (Id=1955)
{
    unsigned long NodeMask;// Offset=0x0 Size=0x4
    unsigned long NumaHintIndex;// Offset=0x4 Size=0x4
    unsigned long NumaLastRangeIndexInclusive;// Offset=0x8 Size=0x4
    unsigned char MemoryNodeWithNoProcessorsFound;// Offset=0xc Size=0x1
    unsigned char NodeShift;// Offset=0xd Size=0x1
    unsigned char ChannelShift;// Offset=0xe Size=0x1
    unsigned char AccessBitReplacementHonored;// Offset=0xf Size=0x1
    unsigned long ChannelHintIndex;// Offset=0x10 Size=0x4
    unsigned long ChannelLastRangeIndexInclusive;// Offset=0x14 Size=0x4
    struct _MI_NODE_NUMBER_ZERO_BASED * NodeGraph;// Offset=0x18 Size=0x8
    struct _MI_SYSTEM_NODE_NONPAGED_POOL * SystemNodeNonPagedPool;// Offset=0x20 Size=0x8
    struct _HAL_NODE_RANGE TemporaryNumaRanges[2];// Offset=0x28 Size=0x20
    struct _HAL_NODE_RANGE * NumaMemoryRanges;// Offset=0x48 Size=0x8
    struct _HAL_CHANNEL_MEMORY_RANGES * ChannelMemoryRanges;// Offset=0x50 Size=0x8
    unsigned long SecondLevelCacheSize;// Offset=0x58 Size=0x4
    unsigned long FirstLevelCacheSize;// Offset=0x5c Size=0x4
    unsigned long PhysicalAddressBits;// Offset=0x60 Size=0x4
    unsigned long PfnDatabasePageBits;// Offset=0x64 Size=0x4
    unsigned char ProcessorCachesFlushedOnPowerLoss;// Offset=0x68 Size=0x1
    unsigned char PageTableReuseRequiresFlush;// Offset=0x69 Size=0x1
    unsigned long long TotalPagesAllowed;// Offset=0x70 Size=0x8
    unsigned long SecondaryColorMask;// Offset=0x78 Size=0x4
    unsigned long SecondaryColors;// Offset=0x7c Size=0x4
    unsigned long FlushTbForAttributeChange;// Offset=0x80 Size=0x4
    unsigned long FlushCacheForAttributeChange;// Offset=0x84 Size=0x4
    unsigned long FlushCacheForPageAttributeChange;// Offset=0x88 Size=0x4
    unsigned long CacheFlushPromoteThreshold;// Offset=0x8c Size=0x4
    unsigned long long InvalidPteMask;// Offset=0xc0 Size=0x8
    unsigned long LargePageColors[3];// Offset=0x100 Size=0xc
    unsigned long long FlushTbThreshold;// Offset=0x110 Size=0x8
    unsigned char AttributeChangeRequiresReZero;// Offset=0x118 Size=0x1
    unsigned long long HighestPossiblePhysicalPage;// Offset=0x120 Size=0x8
    unsigned long long VsmKernelPageCount;// Offset=0x128 Size=0x8
    unsigned long long HugePageRemoveTracker[512];// Offset=0x130 Size=0x1000
    unsigned long long HotAddSequenceNumber;// Offset=0x1130 Size=0x8
    long ParkedCoresLock;// Offset=0x1140 Size=0x4
    struct _KAFFINITY_EX ParkedCores;// Offset=0x1148 Size=0x108
    struct _WORK_QUEUE_ITEM ParkedCoresWorkItem;// Offset=0x1250 Size=0x20
    unsigned long long SpecialPurposeMemoryTypeId;// Offset=0x1270 Size=0x8
    unsigned long SpecialPurposeMemoryQueryTypeExtraSpace;// Offset=0x1278 Size=0x4
    unsigned char GlobalBitPolarity[2];// Offset=0x127c Size=0x2
};
