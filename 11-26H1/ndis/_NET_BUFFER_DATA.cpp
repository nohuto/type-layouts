union _NET_BUFFER_DATA_LENGTH// Size=0x8 (Id=1720)
{
    unsigned long DataLength;// Offset=0x0 Size=0x4
    unsigned long long stDataLength;// Offset=0x0 Size=0x8
};

struct _NET_BUFFER_DATA// Size=0x30 (Id=861)
{
    struct _NET_BUFFER * Next;// Offset=0x0 Size=0x8
    struct _MDL * CurrentMdl;// Offset=0x8 Size=0x8
    unsigned long CurrentMdlOffset;// Offset=0x10 Size=0x4
    union _NET_BUFFER_DATA_LENGTH NbDataLength;// Offset=0x18 Size=0x8
    struct _MDL * MdlChain;// Offset=0x20 Size=0x8
    unsigned long DataOffset;// Offset=0x28 Size=0x4
};
