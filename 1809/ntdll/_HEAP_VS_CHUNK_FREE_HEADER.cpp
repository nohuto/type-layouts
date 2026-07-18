union _HEAP_VS_CHUNK_HEADER_SIZE// Size=0x8 (Id=265)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long MemoryCost:16;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x10
        unsigned long UnsafeSize:16;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x10
        unsigned long UnsafePrevSize:16;// Offset=0x4 Size=0x4 BitOffset=0x0 BitSize=0x10
        unsigned long Allocated:8;// Offset=0x4 Size=0x4 BitOffset=0x10 BitSize=0x8
    };
    unsigned short KeyUShort;// Offset=0x0 Size=0x2
    unsigned long KeyULong;// Offset=0x0 Size=0x4
    unsigned long long HeaderBits;// Offset=0x0 Size=0x8
};

struct _HEAP_VS_CHUNK_HEADER// Size=0x10 (Id=264)
{
    union _HEAP_VS_CHUNK_HEADER_SIZE Sizes;// Offset=0x0 Size=0x8
    union // Size=0x4 (Id=0)
    {
        struct // Size=0x4 (Id=0)
        {
            unsigned long EncodedSegmentPageOffset:8;// Offset=0x8 Size=0x4 BitOffset=0x0 BitSize=0x8
            unsigned long UnusedBytes:1;// Offset=0x8 Size=0x4 BitOffset=0x8 BitSize=0x1
            unsigned long SkipDuringWalk:1;// Offset=0x8 Size=0x4 BitOffset=0x9 BitSize=0x1
            unsigned long Spare:22;// Offset=0x8 Size=0x4 BitOffset=0xa BitSize=0x16
        };
        unsigned long AllocatedChunkBits;// Offset=0x8 Size=0x4
    };
};

struct _RTL_BALANCED_NODE// Size=0x18 (Id=39)
{
    union // Size=0x10 (Id=0)
    {
        struct _RTL_BALANCED_NODE * Children[2];// Offset=0x0 Size=0x10
        struct _RTL_BALANCED_NODE * Left;// Offset=0x0 Size=0x8
        struct _RTL_BALANCED_NODE * Right;// Offset=0x8 Size=0x8
    };
    union // Size=0x1 (Id=0)
    {
        struct // Size=0x1 (Id=0)
        {
            union // Size=0x1 (Id=0)
            {
                unsigned char Red:1;// Offset=0x10 Size=0x1 BitOffset=0x0 BitSize=0x1
                unsigned char Balance:2;// Offset=0x10 Size=0x1 BitOffset=0x0 BitSize=0x2
            };
        };
        unsigned long long ParentValue;// Offset=0x10 Size=0x8
    };
};

struct _HEAP_VS_CHUNK_FREE_HEADER// Size=0x20 (Id=266)
{
    union // Size=0x10 (Id=0)
    {
        struct _HEAP_VS_CHUNK_HEADER Header;// Offset=0x0 Size=0x10
        unsigned long long OverlapsHeader;// Offset=0x0 Size=0x8
        struct _RTL_BALANCED_NODE Node;// Offset=0x8 Size=0x18
    };
};
