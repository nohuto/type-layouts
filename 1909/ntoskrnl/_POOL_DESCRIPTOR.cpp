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

struct _POOL_DESCRIPTOR// Size=0x100 (Id=998)
{
    enum _POOL_TYPE PoolType;// Offset=0x0 Size=0x4
    long RunningAllocs;// Offset=0x40 Size=0x4
    unsigned long long PagesAllocated;// Offset=0x48 Size=0x8
    unsigned long long BigPagesAllocated;// Offset=0x50 Size=0x8
    unsigned long long BytesAllocated;// Offset=0x58 Size=0x8
    long RunningDeallocs;// Offset=0x80 Size=0x4
    unsigned long long PagesDeallocated;// Offset=0x88 Size=0x8
    unsigned long long BigPagesDeallocated;// Offset=0x90 Size=0x8
    unsigned long long BytesDeallocated;// Offset=0x98 Size=0x8
    unsigned long PoolIndex;// Offset=0xc0 Size=0x4
};
