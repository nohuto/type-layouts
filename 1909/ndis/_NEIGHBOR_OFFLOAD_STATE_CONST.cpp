struct _OFFLOAD_STATE_HEADER// Size=0x8 (Id=1291)
{
    unsigned long Length;// Offset=0x0 Size=0x4
    unsigned long RecognizedOptions;// Offset=0x4 Size=0x4
};

struct _NEIGHBOR_OFFLOAD_STATE_CONST// Size=0x2c (Id=974)
{
    struct _OFFLOAD_STATE_HEADER Header;// Offset=0x0 Size=0x8
    unsigned char DlSourceAddress[32];// Offset=0x8 Size=0x20
    struct // Size=0x4 (Id=0)
    {
        unsigned long VlanId:12;// Offset=0x28 Size=0x4 BitOffset=0x0 BitSize=0xc
    };
};
