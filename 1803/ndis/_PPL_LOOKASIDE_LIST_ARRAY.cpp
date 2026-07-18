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

struct _PPL_LOOKASIDE_LIST_ARRAY// Size=0x40 (Id=413)
{
    unsigned long ValidEntryCount;// Offset=0x0 Size=0x4
    unsigned long Flags;// Offset=0x4 Size=0x4
    unsigned long Tag;// Offset=0x8 Size=0x4
    unsigned long LookasideTag;// Offset=0xc Size=0x4
    unsigned long long Size;// Offset=0x10 Size=0x8
    enum _POOL_TYPE PoolType;// Offset=0x18 Size=0x4
    unsigned short Depth;// Offset=0x1c Size=0x2
    struct _PPL_LOOKASIDE_LIST ** LookasideLists;// Offset=0x20 Size=0x8
};
