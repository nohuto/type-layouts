struct _LIST_ENTRY// Size=0x10 (Id=127)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
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

struct FX_POOL_TRACKER// Size=0x40 (Id=853)
{
    struct _LIST_ENTRY Link;// Offset=0x0 Size=0x10
    struct FX_POOL * Pool;// Offset=0x10 Size=0x8
    unsigned long Tag;// Offset=0x18 Size=0x4
    unsigned long long Size;// Offset=0x20 Size=0x8
    enum _POOL_TYPE PoolType;// Offset=0x28 Size=0x4
    void * CallersAddress;// Offset=0x30 Size=0x8
};
