enum _MI_PFN_CACHE_ATTRIBUTE
{
    MiNonCached=0,
    MiCached=1,
    MiWriteCombined=2,
    MiNotMapped=3
};

struct _MI_ZERO_COST_COUNTS// Size=0x10 (Id=1530)
{
    unsigned long long NativeSum;// Offset=0x0 Size=0x8
    unsigned long long CachedSum;// Offset=0x8 Size=0x8
};

struct _RTL_AVL_TREE// Size=0x8 (Id=40)
{
    struct _RTL_BALANCED_NODE * Root;// Offset=0x0 Size=0x8
};

struct _EX_PUSH_LOCK// Size=0x8 (Id=87)
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

struct _MI_HARDWARE_STATE// Size=0x180 (Id=1496)
{
    unsigned long NodeMask;// Offset=0x0 Size=0x4
    unsigned long NumaLastRangeIndex;// Offset=0x4 Size=0x4
    unsigned char NumaTableCaptured;// Offset=0x8 Size=0x1
    unsigned char NodeShift;// Offset=0x9 Size=0x1
    unsigned char ChannelShift;// Offset=0xa Size=0x1
    wchar_t * NodeGraph;// Offset=0x10 Size=0x8
    struct _MI_SYSTEM_NODE_INFORMATION * SystemNodeInformation;// Offset=0x18 Size=0x8
    struct _HAL_NODE_RANGE * NumaMemoryRanges;// Offset=0x20 Size=0x8
    struct _HAL_CHANNEL_MEMORY_RANGES * ChannelMemoryRanges;// Offset=0x28 Size=0x8
    unsigned long SecondLevelCacheSize;// Offset=0x30 Size=0x4
    unsigned long FirstLevelCacheSize;// Offset=0x34 Size=0x4
    unsigned long PhysicalAddressBits;// Offset=0x38 Size=0x4
    unsigned char ProcessorCachesFlushedOnPowerLoss;// Offset=0x3c Size=0x1
    unsigned long long TotalPagesAllowed;// Offset=0x40 Size=0x8
    unsigned long SecondaryColorMask;// Offset=0x48 Size=0x4
    unsigned long SecondaryColors;// Offset=0x4c Size=0x4
    unsigned long FlushTbForAttributeChange;// Offset=0x50 Size=0x4
    unsigned long FlushCacheForAttributeChange;// Offset=0x54 Size=0x4
    unsigned long FlushCacheForPageAttributeChange;// Offset=0x58 Size=0x4
    unsigned long CacheFlushPromoteThreshold;// Offset=0x5c Size=0x4
    unsigned long long InvalidPteMask;// Offset=0x80 Size=0x8
    unsigned long LargePageColors[3];// Offset=0xc0 Size=0xc
    unsigned long long FlushTbThreshold;// Offset=0xd0 Size=0x8
    enum _MI_PFN_CACHE_ATTRIBUTE OptimalZeroingAttribute[4][4];// Offset=0xd8 Size=0x40
    unsigned char AttributeChangeRequiresReZero;// Offset=0x118 Size=0x1
    struct _MI_ZERO_COST_COUNTS ZeroCostCounts[2];// Offset=0x120 Size=0x20
    unsigned long long VsmKernelPageCount;// Offset=0x140 Size=0x8
    struct _RTL_AVL_TREE EnclaveRegions;// Offset=0x148 Size=0x8
    void * EnclaveMetadataPage;// Offset=0x150 Size=0x8
    struct _RTL_BITMAP * EnclaveMetadataBitMap;// Offset=0x158 Size=0x8
    struct _EX_PUSH_LOCK EnclaveMetadataEntryLock;// Offset=0x160 Size=0x8
    long EnclaveMetadataPageLock;// Offset=0x168 Size=0x4
};
