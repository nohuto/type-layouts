struct _MI_CACHED_PTE// Size=0x8 (Id=224)
{
    union // Size=0x8 (Id=0)
    {
        unsigned long GlobalTimeStamp;// Offset=0x0 Size=0x4
        unsigned long PteIndex;// Offset=0x4 Size=0x4
        long long Long;// Offset=0x0 Size=0x8
    };
};

struct _MI_CACHED_PTES// Size=0x48 (Id=575)
{
    struct _MI_CACHED_PTE Bins[8];// Offset=0x0 Size=0x40
    long CachedPteCount;// Offset=0x40 Size=0x4
};
