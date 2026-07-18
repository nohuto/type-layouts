struct _unnamed_119// Size=0x8 (Id=119)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=120)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_119 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

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

struct _WDF_COMMON_BUFFER_CONFIG// Size=0x20 (Id=1632)
{
    unsigned long Size;// Offset=0x0 Size=0x4
    unsigned long AlignmentRequirement;// Offset=0x4 Size=0x4
    union _LARGE_INTEGER MinimumAddress;// Offset=0x8 Size=0x8
    union _LARGE_INTEGER MaximumAddress;// Offset=0x10 Size=0x8
    enum _MEMORY_CACHING_TYPE CacheType;// Offset=0x18 Size=0x4
};
