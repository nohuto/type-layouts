enum _MEMORY_CACHING_TYPE
{
    MmNonCached=0,
    MmCached=1,
    MmWriteCombined=2,
    MmHardwareCoherentCached=3,
    MmNonCachedUnordered=4,
    MmUSWCCached=5,
    MmMaximumCacheType=6,
    MmNotMapped=-1
};

struct _MEMORY_CACHING_REQUIREMENTS// Size=0x18 (Id=1284)
{
    unsigned long long BasePage;// Offset=0x0 Size=0x8
    unsigned long long PageCount;// Offset=0x8 Size=0x8
    enum _MEMORY_CACHING_TYPE MemoryCachingType;// Offset=0x10 Size=0x4
};
