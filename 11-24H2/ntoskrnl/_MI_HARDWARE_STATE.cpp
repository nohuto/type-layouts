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

struct _LIST_ENTRY// Size=0x10 (Id=4)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
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
