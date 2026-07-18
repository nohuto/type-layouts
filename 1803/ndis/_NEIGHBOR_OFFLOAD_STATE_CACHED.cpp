struct _OFFLOAD_STATE_HEADER// Size=0x8 (Id=1134)
{
    unsigned long Length;// Offset=0x0 Size=0x4
    unsigned long RecognizedOptions;// Offset=0x4 Size=0x4
};

struct _NEIGHBOR_OFFLOAD_STATE_CACHED// Size=0x2c (Id=684)
{
    struct _OFFLOAD_STATE_HEADER Header;// Offset=0x0 Size=0x8
    unsigned char DlDestinationAddress[32];// Offset=0x8 Size=0x20
    unsigned long HostReachabilityDelta;// Offset=0x28 Size=0x4
};
