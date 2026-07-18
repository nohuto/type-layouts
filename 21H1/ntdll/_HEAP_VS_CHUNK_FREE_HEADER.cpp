union _HEAP_VS_CHUNK_HEADER_SIZE// Size=0x4 (Id=261)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long MemoryCost:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long UnsafeSize:15;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0xf
        unsigned long UnsafePrevSize:15;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0xf
        unsigned long Allocated:1;// Offset=0x0 Size=0x4 BitOffset=0x1f BitSize=0x1
    };
    unsigned short KeyUShort;// Offset=0x0 Size=0x2
    unsigned long KeyULong;// Offset=0x0 Size=0x4
    unsigned long HeaderBits;// Offset=0x0 Size=0x4
};

struct _HEAP_VS_CHUNK_HEADER// Size=0x8 (Id=260)
{
    union _HEAP_VS_CHUNK_HEADER_SIZE Sizes;// Offset=0x0 Size=0x4
    union // Size=0x4 (Id=0)
    {
        struct // Size=0x4 (Id=0)
        {
            unsigned long EncodedSegmentPageOffset:8;// Offset=0x4 Size=0x4 BitOffset=0x0 BitSize=0x8
            unsigned long UnusedBytes:1;// Offset=0x4 Size=0x4 BitOffset=0x8 BitSize=0x1
            unsigned long SkipDuringWalk:1;// Offset=0x4 Size=0x4 BitOffset=0x9 BitSize=0x1
            unsigned long Spare:22;// Offset=0x4 Size=0x4 BitOffset=0xa BitSize=0x16
        };
        unsigned long AllocatedChunkBits;// Offset=0x4 Size=0x4
    };
};

struct _RTL_BALANCED_NODE// Size=0xc (Id=38)
{
    union // Size=0x8 (Id=0)
    {
        struct _RTL_BALANCED_NODE * Children[2];// Offset=0x0 Size=0x8
        struct _RTL_BALANCED_NODE * Left;// Offset=0x0 Size=0x4
        struct _RTL_BALANCED_NODE * Right;// Offset=0x4 Size=0x4
    };
    union // Size=0x1 (Id=0)
    {
        struct // Size=0x1 (Id=0)
        {
            union // Size=0x1 (Id=0)
            {
                unsigned char Red:1;// Offset=0x8 Size=0x1 BitOffset=0x0 BitSize=0x1
                unsigned char Balance:2;// Offset=0x8 Size=0x1 BitOffset=0x0 BitSize=0x2
            };
        };
        unsigned long ParentValue;// Offset=0x8 Size=0x4
    };
};

struct _HEAP_VS_CHUNK_FREE_HEADER// Size=0x10 (Id=262)
{
    union // Size=0x8 (Id=0)
    {
        struct _HEAP_VS_CHUNK_HEADER Header;// Offset=0x0 Size=0x8
        unsigned long OverlapsHeader;// Offset=0x0 Size=0x4
        struct _RTL_BALANCED_NODE Node;// Offset=0x4 Size=0xc
    };
};
