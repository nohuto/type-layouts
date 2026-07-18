union _SLIST_HEADER// Size=0x10 (Id=232)
{
    unsigned long long Alignment;// Offset=0x0 Size=0x8
    unsigned long long Region;// Offset=0x8 Size=0x8
    struct <unnamed-type-HeaderX64>// Size=0x10 (Id=13974)
    {
        unsigned long long Depth:16;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x10
        unsigned long long Sequence:48;// Offset=0x0 Size=0x8 BitOffset=0x10 BitSize=0x30
        unsigned long long Reserved:4;// Offset=0x8 Size=0x8 BitOffset=0x0 BitSize=0x4
        unsigned long long NextEntry:60;// Offset=0x8 Size=0x8 BitOffset=0x4 BitSize=0x3c
    };
    struct _SLIST_HEADER::<unnamed-type-HeaderX64> HeaderX64;// Offset=0x0 Size=0x10
};

union _NET_BUFFER_DATA_LENGTH// Size=0x8 (Id=1716)
{
    unsigned long DataLength;// Offset=0x0 Size=0x4
    unsigned long long stDataLength;// Offset=0x0 Size=0x8
};

struct _NET_BUFFER_DATA// Size=0x30 (Id=864)
{
    struct _NET_BUFFER * Next;// Offset=0x0 Size=0x8
    struct _MDL * CurrentMdl;// Offset=0x8 Size=0x8
    unsigned long CurrentMdlOffset;// Offset=0x10 Size=0x4
    union _NET_BUFFER_DATA_LENGTH NbDataLength;// Offset=0x18 Size=0x8
    struct _MDL * MdlChain;// Offset=0x20 Size=0x8
    unsigned long DataOffset;// Offset=0x28 Size=0x4
};

union _NET_BUFFER_HEADER// Size=0x30 (Id=1309)
{
    union // Size=0x30 (Id=0)
    {
        struct _NET_BUFFER_DATA NetBufferData;// Offset=0x0 Size=0x30
        union _SLIST_HEADER Link;// Offset=0x0 Size=0x10
    };
};

union _NET_BUFFER::_unnamed_1818// Size=0x30 (Id=1818)
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
