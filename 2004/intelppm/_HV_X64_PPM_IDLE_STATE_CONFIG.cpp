struct _anonymous_620// Size=0x8 (Id=620)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long ReservedZ:52;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x34
    };
};

struct _anonymous_621// Size=0x8 (Id=621)
{
    unsigned short Port;// Offset=0x0 Size=0x2
    unsigned short ReservedZ1;// Offset=0x2 Size=0x2
    struct // Size=0x4 (Id=0)
    {
        unsigned int ReservedZ2:20;// Offset=0x4 Size=0x4 BitOffset=0x0 BitSize=0x14
    };
};

struct _anonymous_622// Size=0x8 (Id=622)
{
    unsigned int Hints;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned int BreakOnMaskedInterrupt:1;// Offset=0x4 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned int ReservedZ:19;// Offset=0x4 Size=0x4 BitOffset=0x1 BitSize=0x13
    };
};

union _HV_X64_PPM_IDLE_STATE_CONFIG// Size=0x8 (Id=623)
{
    unsigned long long AsUINT64;// Offset=0x0 Size=0x8
    struct // Size=0x8 (Id=0)
    {
        unsigned long long TypeSpecific:52;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x34
        unsigned long long ChangeType:4;// Offset=0x0 Size=0x8 BitOffset=0x34 BitSize=0x4
        unsigned long long CheckBM_STS:1;// Offset=0x0 Size=0x8 BitOffset=0x38 BitSize=0x1
        unsigned long long SetBM_RST:1;// Offset=0x0 Size=0x8 BitOffset=0x39 BitSize=0x1
        unsigned long long ClearBM_RST:1;// Offset=0x0 Size=0x8 BitOffset=0x3a BitSize=0x1
        unsigned long long SetARB_DIS:1;// Offset=0x0 Size=0x8 BitOffset=0x3b BitSize=0x1
        unsigned long long ReservedZ:4;// Offset=0x0 Size=0x8 BitOffset=0x3c BitSize=0x4
    };
    struct _anonymous_620 Hlt;// Offset=0x0 Size=0x8
    struct _anonymous_621 Io;// Offset=0x0 Size=0x8
    struct _anonymous_622 Mwait;// Offset=0x0 Size=0x8
};
