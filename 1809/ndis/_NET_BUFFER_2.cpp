union _SLIST_HEADER// Size=0x10 (Id=68)
{
    unsigned long long Alignment;// Offset=0x0 Size=0x8
    unsigned long long Region;// Offset=0x8 Size=0x8
    struct <unnamed-type-HeaderX64>// Size=0x10 (Id=13682)
    {
        unsigned long long Depth:16;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x10
        unsigned long long Sequence:48;// Offset=0x0 Size=0x8 BitOffset=0x10 BitSize=0x30
        unsigned long long Reserved:4;// Offset=0x8 Size=0x8 BitOffset=0x0 BitSize=0x4
        unsigned long long NextEntry:60;// Offset=0x8 Size=0x8 BitOffset=0x4 BitSize=0x3c
    };
    struct _SLIST_HEADER::<unnamed-type-HeaderX64> HeaderX64;// Offset=0x0 Size=0x10
};

union _NET_BUFFER_DATA_LENGTH// Size=0x8 (Id=181)
{
    unsigned long DataLength;// Offset=0x0 Size=0x4
    unsigned long long stDataLength;// Offset=0x0 Size=0x8
};

struct _NET_BUFFER_DATA// Size=0x30 (Id=180)
{
    struct _NET_BUFFER * Next;// Offset=0x0 Size=0x8
    struct _MDL * CurrentMdl;// Offset=0x8 Size=0x8
    unsigned long CurrentMdlOffset;// Offset=0x10 Size=0x4
    union _NET_BUFFER_DATA_LENGTH NbDataLength;// Offset=0x18 Size=0x8
    struct _MDL * MdlChain;// Offset=0x20 Size=0x8
    unsigned long DataOffset;// Offset=0x28 Size=0x4
};

union _NET_BUFFER_HEADER// Size=0x30 (Id=179)
{
    union // Size=0x30 (Id=0)
    {
        struct _NET_BUFFER_DATA NetBufferData;// Offset=0x0 Size=0x30
        union _SLIST_HEADER Link;// Offset=0x0 Size=0x10
    };
};

union _LARGE_INTEGER// Size=0x8 (Id=365)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct <unnamed-type-u>// Size=0x8 (Id=5303)
    {
        unsigned long LowPart;// Offset=0x0 Size=0x4
        long HighPart;// Offset=0x4 Size=0x4
    };
    struct _LARGE_INTEGER::<unnamed-type-u> u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _NET_BUFFER// Size=0xb0 (Id=177)
{
    union // Size=0x2c (Id=0)
    {
        struct _NET_BUFFER * Next;// Offset=0x0 Size=0x8
        struct _MDL * CurrentMdl;// Offset=0x8 Size=0x8
        unsigned long CurrentMdlOffset;// Offset=0x10 Size=0x4
        union // Size=0x4 (Id=0)
        {
            unsigned long DataLength;// Offset=0x18 Size=0x4
            unsigned long long stDataLength;// Offset=0x18 Size=0x8
        };
        struct _MDL * MdlChain;// Offset=0x20 Size=0x8
        unsigned long DataOffset;// Offset=0x28 Size=0x4
        union _SLIST_HEADER Link;// Offset=0x0 Size=0x10
        union _NET_BUFFER_HEADER NetBufferHeader;// Offset=0x0 Size=0x30
    };
    unsigned short ChecksumBias;// Offset=0x30 Size=0x2
    unsigned short Reserved;// Offset=0x32 Size=0x2
    void * NdisPoolHandle;// Offset=0x38 Size=0x8
    void * NdisReserved[2];// Offset=0x40 Size=0x10
    void * ProtocolReserved[6];// Offset=0x50 Size=0x30
    void * MiniportReserved[4];// Offset=0x80 Size=0x20
    union _LARGE_INTEGER DataPhysicalAddress;// Offset=0xa0 Size=0x8
    union // Size=0x8 (Id=0)
    {
        struct _NET_BUFFER_SHARED_MEMORY * SharedMemoryInfo;// Offset=0xa8 Size=0x8
        struct _SCATTER_GATHER_LIST * ScatterGatherList;// Offset=0xa8 Size=0x8
    };
};
