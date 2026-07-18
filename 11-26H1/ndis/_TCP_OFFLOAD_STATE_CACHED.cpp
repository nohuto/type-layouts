struct _OFFLOAD_STATE_HEADER// Size=0x8 (Id=1426)
{
    unsigned long Length;// Offset=0x0 Size=0x4
    unsigned long RecognizedOptions;// Offset=0x4 Size=0x4
};

struct _TCP_OFFLOAD_STATE_CACHED// Size=0x2c (Id=1179)
{
    struct _OFFLOAD_STATE_HEADER Header;// Offset=0x0 Size=0x8
    unsigned short Flags;// Offset=0x8 Size=0x2
    unsigned long InitialRcvWnd;// Offset=0xc Size=0x4
    unsigned long RcvIndicationSize;// Offset=0x10 Size=0x4
    unsigned char KaProbeCount;// Offset=0x14 Size=0x1
    unsigned long KaTimeout;// Offset=0x18 Size=0x4
    unsigned long KaInterval;// Offset=0x1c Size=0x4
    unsigned long MaxRT;// Offset=0x20 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long FlowLabel:20;// Offset=0x24 Size=0x4 BitOffset=0x0 BitSize=0x14
    };
    unsigned char TtlOrHopLimit;// Offset=0x28 Size=0x1
    unsigned char TosOrTrafficClass;// Offset=0x29 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char UserPriority:3;// Offset=0x2a Size=0x1 BitOffset=0x0 BitSize=0x3
    };
};
