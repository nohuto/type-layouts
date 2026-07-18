struct _NET_BUFFER::_anonymous_1600::_anonymous_1600// Size=0x30 (Id=1600)
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
};
