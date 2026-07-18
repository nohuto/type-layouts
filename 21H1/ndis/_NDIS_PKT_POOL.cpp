struct _LIST_ENTRY// Size=0x10 (Id=31)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

union _LARGE_INTEGER// Size=0x8 (Id=77)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct <unnamed-type-u>// Size=0x8 (Id=5239)
    {
        unsigned long LowPart;// Offset=0x0 Size=0x4
        long HighPart;// Offset=0x4 Size=0x4
    };
    struct _LARGE_INTEGER::<unnamed-type-u> u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _NDIS_PKT_POOL// Size=0x70 (Id=485)
{
    unsigned long Tag;// Offset=0x0 Size=0x4
    unsigned short PacketLength;// Offset=0x4 Size=0x2
    unsigned short PktsPerBlock;// Offset=0x6 Size=0x2
    unsigned short MaxBlocks;// Offset=0x8 Size=0x2
    unsigned short StackSize;// Offset=0xa Size=0x2
    long BlocksAllocated;// Offset=0xc Size=0x4
    unsigned long ProtocolId;// Offset=0x10 Size=0x4
    unsigned long BlockSize;// Offset=0x14 Size=0x4
    void * Allocator;// Offset=0x18 Size=0x8
    unsigned long long Lock;// Offset=0x20 Size=0x8
    struct _LIST_ENTRY FreeBlocks;// Offset=0x28 Size=0x10
    struct _LIST_ENTRY UsedBlocks;// Offset=0x38 Size=0x10
    struct _LIST_ENTRY AgingBlocks;// Offset=0x48 Size=0x10
    struct _LIST_ENTRY GlobalPacketPoolList;// Offset=0x58 Size=0x10
    union _LARGE_INTEGER NextScavengeTick;// Offset=0x68 Size=0x8
};
