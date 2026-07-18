struct _anonymous_9// Size=0x8 (Id=9)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=977)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _anonymous_9 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _LIST_ENTRY// Size=0x10 (Id=4)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

union _anonymous_701// Size=0x10 (Id=701)
{
    union _LARGE_INTEGER FileOffset;// Offset=0x0 Size=0x8
    unsigned short ActiveCount;// Offset=0x0 Size=0x2
    struct _LIST_ENTRY Links;// Offset=0x0 Size=0x10
};

struct _VACB// Size=0x28 (Id=702)
{
    void * BaseAddress;// Offset=0x0 Size=0x8
    struct _SHARED_CACHE_MAP * SharedCacheMap;// Offset=0x8 Size=0x8
    union _anonymous_701 Overlay;// Offset=0x10 Size=0x10
    struct _VACB_ARRAY_HEADER * ArrayHead;// Offset=0x20 Size=0x8
};
