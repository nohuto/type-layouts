struct _OFFLOAD_STATE_HEADER// Size=0x8 (Id=1138)
{
    unsigned long Length;// Offset=0x0 Size=0x4
    unsigned long RecognizedOptions;// Offset=0x4 Size=0x4
};

struct _PATH_OFFLOAD_STATE_CONST// Size=0x18 (Id=833)
{
    struct _OFFLOAD_STATE_HEADER Header;// Offset=0x0 Size=0x8
    unsigned char * SourceAddress;// Offset=0x8 Size=0x8
    unsigned char * DestinationAddress;// Offset=0x10 Size=0x8
};
