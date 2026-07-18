struct _OFFLOAD_STATE_HEADER// Size=0x8 (Id=1249)
{
    unsigned long Length;// Offset=0x0 Size=0x4
    unsigned long RecognizedOptions;// Offset=0x4 Size=0x4
};

struct _TCP_OFFLOAD_STATE_CONST// Size=0x18 (Id=846)
{
    struct _OFFLOAD_STATE_HEADER Header;// Offset=0x0 Size=0x8
    unsigned short Flags;// Offset=0x8 Size=0x2
    unsigned short RemotePort;// Offset=0xa Size=0x2
    unsigned short LocalPort;// Offset=0xc Size=0x2
    struct // Size=0x1 (Id=0)
    {
        unsigned char SndWindScale:4;// Offset=0xe Size=0x1 BitOffset=0x0 BitSize=0x4
        unsigned char RcvWindScale:4;// Offset=0xe Size=0x1 BitOffset=0x4 BitSize=0x4
    };
    unsigned short RemoteMss;// Offset=0x10 Size=0x2
    unsigned long HashValue;// Offset=0x14 Size=0x4
};
