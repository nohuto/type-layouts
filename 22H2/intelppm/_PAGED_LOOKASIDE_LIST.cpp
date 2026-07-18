struct _anonymous_59// Size=0x10 (Id=59)
{
    struct // Size=0x10 (Id=0)
    {
        unsigned long long Depth:16;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x10
        unsigned long long Sequence:48;// Offset=0x0 Size=0x8 BitOffset=0x10 BitSize=0x30
        unsigned long long Reserved:4;// Offset=0x8 Size=0x8 BitOffset=0x0 BitSize=0x4
        unsigned long long NextEntry:60;// Offset=0x8 Size=0x8 BitOffset=0x4 BitSize=0x3c
    };
};

union _SLIST_HEADER// Size=0x10 (Id=60)
{
    unsigned long long Alignment;// Offset=0x0 Size=0x8
    unsigned long long Region;// Offset=0x8 Size=0x8
    struct _anonymous_59 HeaderX64;// Offset=0x0 Size=0x10
};

struct _SINGLE_LIST_ENTRY// Size=0x8 (Id=24)
{
    struct _SINGLE_LIST_ENTRY * Next;// Offset=0x0 Size=0x8
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

struct _LIST_ENTRY// Size=0x10 (Id=22)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _GENERAL_LOOKASIDE// Size=0x80 (Id=467)
{
    union // Size=0x10 (Id=0)
    {
        union _SLIST_HEADER ListHead;// Offset=0x0 Size=0x10
        struct _SINGLE_LIST_ENTRY SingleListHead;// Offset=0x0 Size=0x8
        unsigned short Depth;// Offset=0x10 Size=0x2
    };
    unsigned short MaximumDepth;// Offset=0x12 Size=0x2
    unsigned long TotalAllocates;// Offset=0x14 Size=0x4
    union // Size=0x4 (Id=0)
    {
        unsigned long AllocateMisses;// Offset=0x18 Size=0x4
        unsigned long AllocateHits;// Offset=0x18 Size=0x4
    };
    unsigned long TotalFrees;// Offset=0x1c Size=0x4
    union // Size=0x4 (Id=0)
    {
        unsigned long FreeMisses;// Offset=0x20 Size=0x4
        unsigned long FreeHits;// Offset=0x20 Size=0x4
    };
    enum _POOL_TYPE Type;// Offset=0x24 Size=0x4
    unsigned long Tag;// Offset=0x28 Size=0x4
    unsigned long Size;// Offset=0x2c Size=0x4
    union // Size=0x8 (Id=0)
    {
        void *  ( * AllocateEx)(enum _POOL_TYPE ,unsigned long long ,unsigned long ,struct _LOOKASIDE_LIST_EX * );// Offset=0x30 Size=0x8
        void *  ( * Allocate)(enum _POOL_TYPE ,unsigned long long ,unsigned long );// Offset=0x30 Size=0x8
    };
    union // Size=0x8 (Id=0)
    {
        void  ( * FreeEx)(void * ,struct _LOOKASIDE_LIST_EX * );// Offset=0x38 Size=0x8
        void  ( * Free)(void * );// Offset=0x38 Size=0x8
    };
    struct _LIST_ENTRY ListEntry;// Offset=0x40 Size=0x10
    unsigned long LastTotalAllocates;// Offset=0x50 Size=0x4
    union // Size=0x4 (Id=0)
    {
        unsigned long LastAllocateMisses;// Offset=0x54 Size=0x4
        unsigned long LastAllocateHits;// Offset=0x54 Size=0x4
    };
    unsigned long Future[2];// Offset=0x58 Size=0x8
};

struct _PAGED_LOOKASIDE_LIST// Size=0x80 (Id=62)
{
    struct _GENERAL_LOOKASIDE L;// Offset=0x0 Size=0x80
};
