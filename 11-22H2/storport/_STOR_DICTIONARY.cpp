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

struct _STOR_DICTIONARY// Size=0x30 (Id=216)
{
    unsigned long EntryCount;// Offset=0x0 Size=0x4
    unsigned long MaxEntryCount;// Offset=0x4 Size=0x4
    enum _POOL_TYPE PoolType;// Offset=0x8 Size=0x4
    struct _LIST_ENTRY * Entries;// Offset=0x10 Size=0x8
    void *  ( * GetKeyRoutine)(struct _LIST_ENTRY * );// Offset=0x18 Size=0x8
    long  ( * CompareKeyRoutine)(void * ,void * );// Offset=0x20 Size=0x8
    unsigned long  ( * HashKeyRoutine)(void * );// Offset=0x28 Size=0x8
};
