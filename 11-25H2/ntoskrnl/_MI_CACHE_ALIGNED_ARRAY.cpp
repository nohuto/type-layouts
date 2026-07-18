struct _unnamed_1827// Size=0x40 (Id=1827)
{
    void * UniqueCacheLine[8];// Offset=0x0 Size=0x40
};

struct _LIST_ENTRY// Size=0x10 (Id=3)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _unnamed_1828// Size=0x18 (Id=1828)
{
    struct _LIST_ENTRY Links;// Offset=0x0 Size=0x10
    unsigned long Signaled;// Offset=0x10 Size=0x4
};

struct _MI_CACHE_LINE// Size=0x40 (Id=1829)
{
    union // Size=0x40 (Id=0)
    {
        struct _unnamed_1827 u1;// Offset=0x0 Size=0x40
        struct _unnamed_1828 u2;// Offset=0x0 Size=0x18
    };
};

struct _MI_CACHE_ALIGNED_ARRAY// Size=0x40 (Id=1531)
{
    union // Size=0x8 (Id=0)
    {
        long Lock;// Offset=0x0 Size=0x4
        unsigned long long Value;// Offset=0x0 Size=0x8
        long long SignedValue;// Offset=0x0 Size=0x8
        struct _MI_CACHE_LINE CacheLinePadding;// Offset=0x0 Size=0x40
    };
};
