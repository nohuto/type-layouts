struct _MI_AWEINFO_FLAGS// Size=0x4 (Id=2401)
{
    union // Size=0x4 (Id=0)
    {
        struct // Size=0x4 (Id=0)
        {
            unsigned long ProcessDefault:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long PagesLockInitialized:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
            unsigned long ZeroPagesOptional:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
            unsigned long IoSpace:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
            unsigned long LazyTbFlush:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
            unsigned long Unused:27;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1b
        };
        unsigned long AllBits;// Offset=0x0 Size=0x4
    };
};

struct _RTL_BITMAP_EX// Size=0x10 (Id=1202)
{
    unsigned long long SizeOfBitMap;// Offset=0x0 Size=0x8
    unsigned long long * Buffer;// Offset=0x8 Size=0x8
};

enum _MI_PFN_CACHE_ATTRIBUTE
{
    MiNonCached=0,
    MiCached=1,
    MiWriteCombined=2,
    MiNotMapped=3
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

struct _EX_PUSH_LOCK_AUTO_EXPAND_STATE// Size=0x4 (Id=1162)
{
    union // Size=0x4 (Id=0)
    {
        struct // Size=0x4 (Id=0)
        {
            unsigned long Expanded:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long Transitioning:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
            unsigned long Pageable:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        };
        unsigned long Value;// Offset=0x0 Size=0x4
    };
};

struct _EX_PUSH_LOCK_AUTO_EXPAND// Size=0x10 (Id=655)
{
    struct _EX_PUSH_LOCK LocalLock;// Offset=0x0 Size=0x8
    struct _EX_PUSH_LOCK_AUTO_EXPAND_STATE State;// Offset=0x8 Size=0x4
    unsigned long Stats;// Offset=0xc Size=0x4
};

struct _AWEINFO// Size=0x80 (Id=2376)
{
    void * AweInfoSignature;// Offset=0x0 Size=0x8
    struct _MI_AWEINFO_FLAGS Flags;// Offset=0x8 Size=0x4
    unsigned long long PageSize;// Offset=0x10 Size=0x8
    struct _RTL_BITMAP_EX VadPhysicalPagesBitMap;// Offset=0x18 Size=0x10
    struct _CONTROL_AREA * ControlArea;// Offset=0x28 Size=0x8
    long ChangeClusterAttributeLock;// Offset=0x30 Size=0x4
    enum _MI_PFN_CACHE_ATTRIBUTE CacheAttribute;// Offset=0x34 Size=0x4
    struct _EX_PUSH_LOCK_AUTO_EXPAND AwePagesLock;// Offset=0x40 Size=0x10
    struct _MI_AWE_ATTRIBUTE_CHANGE_WAIT_BLOCK * ChangeClusterAttributeWaitList;// Offset=0x50 Size=0x8
};
