struct _POOL_HEADER// Size=0x10 (Id=1052)
{
    union // Size=0x4 (Id=0)
    {
        struct // Size=0x4 (Id=0)
        {
            unsigned short PreviousSize:8;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x8
            unsigned short PoolIndex:8;// Offset=0x0 Size=0x2 BitOffset=0x8 BitSize=0x8
            unsigned short BlockSize:8;// Offset=0x2 Size=0x2 BitOffset=0x0 BitSize=0x8
            unsigned short PoolType:8;// Offset=0x2 Size=0x2 BitOffset=0x8 BitSize=0x8
        };
        unsigned long Ulong1;// Offset=0x0 Size=0x4
    };
    unsigned long PoolTag;// Offset=0x4 Size=0x4
    union // Size=0x8 (Id=0)
    {
        struct _EPROCESS * ProcessBilled;// Offset=0x8 Size=0x8
        unsigned short AllocatorBackTraceIndex;// Offset=0x8 Size=0x2
    };
    unsigned short PoolTagHash;// Offset=0xa Size=0x2
};

struct _POOL_HACKER// Size=0x30 (Id=786)
{
    struct _POOL_HEADER Header;// Offset=0x0 Size=0x10
    unsigned long Contents[8];// Offset=0x10 Size=0x20
};
