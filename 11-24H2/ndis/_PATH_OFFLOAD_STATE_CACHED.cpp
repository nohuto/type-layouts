struct _OFFLOAD_STATE_HEADER// Size=0x8 (Id=1426)
{
    unsigned long Length;// Offset=0x0 Size=0x4
    unsigned long RecognizedOptions;// Offset=0x4 Size=0x4
};

struct _PATH_OFFLOAD_STATE_CACHED// Size=0xc (Id=813)
{
    struct _OFFLOAD_STATE_HEADER Header;// Offset=0x0 Size=0x8
    unsigned long PathMtu;// Offset=0x8 Size=0x4
};
