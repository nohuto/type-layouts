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

struct KSALLOCATOR_FRAMING// Size=0x18 (Id=1702)
{
    union // Size=0x4 (Id=0)
    {
        unsigned long OptionsFlags;// Offset=0x0 Size=0x4
        unsigned long RequirementsFlags;// Offset=0x0 Size=0x4
    };
    enum _POOL_TYPE PoolType;// Offset=0x4 Size=0x4
    unsigned long Frames;// Offset=0x8 Size=0x4
    unsigned long FrameSize;// Offset=0xc Size=0x4
    union // Size=0x4 (Id=0)
    {
        unsigned long FileAlignment;// Offset=0x10 Size=0x4
        long FramePitch;// Offset=0x10 Size=0x4
    };
    unsigned long Reserved;// Offset=0x14 Size=0x4
};
