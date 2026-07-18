struct _LIST_ENTRY// Size=0x10 (Id=28)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

union _LARGE_INTEGER// Size=0x8 (Id=38)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct <unnamed-type-u>// Size=0x8 (Id=5474)
    {
        unsigned long LowPart;// Offset=0x0 Size=0x4
        long HighPart;// Offset=0x4 Size=0x4
    };
    struct _LARGE_INTEGER::<unnamed-type-u> u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

union _SLIST_HEADER// Size=0x10 (Id=71)
{
    unsigned long long Alignment;// Offset=0x0 Size=0x8
    unsigned long long Region;// Offset=0x8 Size=0x8
    struct <unnamed-type-HeaderX64>// Size=0x10 (Id=13856)
    {
        unsigned long long Depth:16;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x10
        unsigned long long Sequence:48;// Offset=0x0 Size=0x8 BitOffset=0x10 BitSize=0x30
        unsigned long long Reserved:4;// Offset=0x8 Size=0x8 BitOffset=0x0 BitSize=0x4
        unsigned long long NextEntry:60;// Offset=0x8 Size=0x8 BitOffset=0x4 BitSize=0x3c
    };
    struct _SLIST_HEADER::<unnamed-type-HeaderX64> HeaderX64;// Offset=0x0 Size=0x10
};

enum _POOL_BLOCK_TYPE
{
    NDIS_PACKET_POOL_BLOCK_FREE=0,
    NDIS_PACKET_POOL_BLOCK_USED=1,
    NDIS_PACKET_POOL_BLOCK_AGING=2
};

struct _NDIS_PKT_POOL_HDR// Size=0x40 (Id=1835)
{
    struct _LIST_ENTRY List;// Offset=0x0 Size=0x10
    union _LARGE_INTEGER TimeStamp;// Offset=0x10 Size=0x8
    union _SLIST_HEADER FreeList;// Offset=0x20 Size=0x10
    enum _POOL_BLOCK_TYPE State;// Offset=0x30 Size=0x4
};
