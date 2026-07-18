enum _MI_PFN_CACHE_ATTRIBUTE
{
    MiNonCached=0,
    MiCached=1,
    MiWriteCombined=2,
    MiNotMapped=3
};

struct _MI_ZERO_COST_COUNTS// Size=0x10 (Id=1289)
{
    unsigned long long NativeSum;// Offset=0x0 Size=0x8
    unsigned long long CachedSum;// Offset=0x8 Size=0x8
};

struct _RTL_AVL_TREE// Size=0x8 (Id=36)
{
    struct _RTL_BALANCED_NODE * Root;// Offset=0x0 Size=0x8
};

struct _MI_HARDWARE_STATE// Size=0x110 (Id=1261)
{
    unsigned long NodeMask;// Offset=0x0 Size=0x4
    unsigned short * NodeGraph;// Offset=0x8 Size=0x8
    struct _MI_SYSTEM_NODE_INFORMATION * SystemNodeInformation;// Offset=0x10 Size=0x8
    unsigned long NumaLastRangeIndex;// Offset=0x18 Size=0x4
    struct _HAL_NODE_RANGE * NumaMemoryRanges;// Offset=0x20 Size=0x8
    unsigned char NumaTableCaptured;// Offset=0x28 Size=0x1
    unsigned char NodeShift;// Offset=0x29 Size=0x1
    struct _HAL_CHANNEL_MEMORY_RANGES * ChannelMemoryRanges;// Offset=0x30 Size=0x8
    unsigned char ChannelShift;// Offset=0x38 Size=0x1
    unsigned long SecondLevelCacheSize;// Offset=0x3c Size=0x4
    unsigned long FirstLevelCacheSize;// Offset=0x40 Size=0x4
    unsigned long PhysicalAddressBits;// Offset=0x44 Size=0x4
    unsigned char AllMainMemoryMustBeCached;// Offset=0x48 Size=0x1
    unsigned long long TotalPagesAllowed;// Offset=0x50 Size=0x8
    unsigned long SecondaryColorMask;// Offset=0x58 Size=0x4
    unsigned long SecondaryColors;// Offset=0x5c Size=0x4
    unsigned long long InvalidPteMask;// Offset=0x60 Size=0x8
    unsigned long FlushTbForAttributeChange;// Offset=0x68 Size=0x4
    unsigned long FlushCacheForAttributeChange;// Offset=0x6c Size=0x4
    unsigned long FlushCacheForPageAttributeChange;// Offset=0x70 Size=0x4
    unsigned long CacheFlushPromoteThreshold;// Offset=0x74 Size=0x4
    unsigned long long FlushTbThreshold;// Offset=0x78 Size=0x8
    enum _MI_PFN_CACHE_ATTRIBUTE OptimalZeroingAttribute[4][4];// Offset=0x80 Size=0x40
    unsigned char AttributeChangeRequiresReZero;// Offset=0xc0 Size=0x1
    struct _MI_ZERO_COST_COUNTS ZeroCostCounts[2];// Offset=0xc8 Size=0x20
    unsigned long long PrimaryPfns;// Offset=0xe8 Size=0x8
    unsigned long long HighestPossiblePhysicalPage;// Offset=0xf0 Size=0x8
    struct _RTL_AVL_TREE EnclaveRegions;// Offset=0xf8 Size=0x8
    unsigned long long VsmKernelPageCount;// Offset=0x100 Size=0x8
    unsigned char GlobalBitPolarity[2];// Offset=0x108 Size=0x2
};
