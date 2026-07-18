struct _LIST_ENTRY// Size=0x10 (Id=3)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _RTL_BITMAP_EX// Size=0x10 (Id=1254)
{
    unsigned long long SizeOfBitMap;// Offset=0x0 Size=0x8
    unsigned long long * Buffer;// Offset=0x8 Size=0x8
};

struct _EX_PUSH_LOCK// Size=0x8 (Id=120)
{
    union // Size=0x8 (Id=0)
    {
        struct // Size=0x8 (Id=0)
        {
            unsigned long long Locked:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
            unsigned long long Waiting:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
            unsigned long long Waking:1;// Offset=0x0 Size=0x8 BitOffset=0x2 BitSize=0x1
            unsigned long long MultipleShared:1;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x1
            unsigned long long Shared:60;// Offset=0x0 Size=0x8 BitOffset=0x4 BitSize=0x3c
        };
        unsigned long long Value;// Offset=0x0 Size=0x8
        void * Ptr;// Offset=0x0 Size=0x8
    };
};

struct _MM_SYSTEM_PAGE_COUNTS// Size=0x10 (Id=1750)
{
    unsigned long SystemCodePage;// Offset=0x0 Size=0x4
    unsigned long SystemDriverPage;// Offset=0x4 Size=0x4
    long TotalSystemCodePages;// Offset=0x8 Size=0x4
    long TotalSystemDriverPages;// Offset=0xc Size=0x4
};

struct _RTL_AVL_TREE// Size=0x8 (Id=117)
{
    struct _RTL_BALANCED_NODE * Root;// Offset=0x0 Size=0x8
};

struct _unnamed_1919// Size=0x40 (Id=1919)
{
    void * UniqueCacheLine[8];// Offset=0x0 Size=0x40
};

struct _unnamed_1920// Size=0x18 (Id=1920)
{
    struct _LIST_ENTRY Links;// Offset=0x0 Size=0x10
    unsigned long Signaled;// Offset=0x10 Size=0x4
};

struct _MI_CACHE_LINE// Size=0x40 (Id=1921)
{
    union // Size=0x40 (Id=0)
    {
        struct _unnamed_1919 u1;// Offset=0x0 Size=0x40
        struct _unnamed_1920 u2;// Offset=0x0 Size=0x18
    };
};

struct _MI_CACHE_ALIGNED_ARRAY// Size=0x40 (Id=1609)
{
    union // Size=0x8 (Id=0)
    {
        long Lock;// Offset=0x0 Size=0x4
        unsigned long long Value;// Offset=0x0 Size=0x8
        long long SignedValue;// Offset=0x0 Size=0x8
        struct _MI_CACHE_LINE CacheLinePadding;// Offset=0x0 Size=0x40
    };
};

struct _RTL_FUNCTION_OVERRIDE_CAPABILITIES// Size=0x5a (Id=2085)
{
    unsigned char AMD64Capabilities[45];// Offset=0x0 Size=0x2d
    unsigned char AMD64KernelCapabilities[45];// Offset=0x2d Size=0x2d
};

struct _MI_SYSTEM_IMAGE_STATE// Size=0x240 (Id=1458)
{
    struct _LIST_ENTRY FixupList;// Offset=0x0 Size=0x10
    struct _ETHREAD * LoadLockOwner;// Offset=0x10 Size=0x8
    unsigned long LoadLockCount;// Offset=0x18 Size=0x4
    long FixupLock;// Offset=0x1c Size=0x4
    unsigned char FirstLoadEver;// Offset=0x20 Size=0x1
    unsigned char SystemImagesLoaded;// Offset=0x21 Size=0x1
    struct _LIST_ENTRY StrongCodeLoadFailureList;// Offset=0x28 Size=0x10
    struct _KLDR_DATA_TABLE_ENTRY * SystemBase[1];// Offset=0x38 Size=0x8
    struct _RTL_BITMAP_EX BaseImageDiscardedBitmaps[1];// Offset=0x40 Size=0x10
    struct _EX_PUSH_LOCK MappingRangesPushLock;// Offset=0x50 Size=0x8
    struct _MI_DRIVER_VA * MappingRanges;// Offset=0x58 Size=0x8
    struct _MM_SYSTEM_PAGE_COUNTS PageCounts;// Offset=0x60 Size=0x10
    struct _EX_PUSH_LOCK CollidedLock;// Offset=0x70 Size=0x8
    struct _RTL_AVL_TREE ImageTree;// Offset=0x78 Size=0x8
    struct _LIST_ENTRY LoadInProgress;// Offset=0x80 Size=0x10
    unsigned long long ImportEntriesReplaced;// Offset=0x90 Size=0x8
    struct _EX_PUSH_LOCK SecurePteExclusionLock;// Offset=0x98 Size=0x8
    void * SecurePteExclusionBase;// Offset=0xa0 Size=0x8
    void * SecurePteExclusionTop;// Offset=0xa8 Size=0x8
    struct _MI_CACHE_ALIGNED_ARRAY WorkingSetLockArray[4];// Offset=0xc0 Size=0x100
    struct _RTL_FUNCTION_OVERRIDE_CAPABILITIES FunctionOverrideCapabilities;// Offset=0x1c0 Size=0x5a
};
