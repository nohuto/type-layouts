struct _unnamed_777// Size=0x8 (Id=777)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long ReservedZ:52;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x34
    };
};

struct _unnamed_778// Size=0x8 (Id=778)
{
    unsigned short Port;// Offset=0x0 Size=0x2
    unsigned short ReservedZ1;// Offset=0x2 Size=0x2
    struct // Size=0x4 (Id=0)
    {
        unsigned int ReservedZ2:20;// Offset=0x4 Size=0x4 BitOffset=0x0 BitSize=0x14
    };
};

struct _unnamed_779// Size=0x8 (Id=779)
{
    unsigned int Hints;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned int BreakOnMaskedInterrupt:1;// Offset=0x4 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned int ReservedZ:19;// Offset=0x4 Size=0x4 BitOffset=0x1 BitSize=0x13
    };
};

struct _unnamed_780// Size=0x8 (Id=780)
{
    unsigned int PowerState;// Offset=0x0 Size=0x4
    unsigned int Reserved;// Offset=0x4 Size=0x4
};

union _HV_PPM_IDLE_STATE_CONFIG// Size=0x8 (Id=781)
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
    struct _unnamed_777 Hlt;// Offset=0x0 Size=0x8
    struct _unnamed_778 Io;// Offset=0x0 Size=0x8
    struct _unnamed_779 Mwait;// Offset=0x0 Size=0x8
    struct _unnamed_780 Psci;// Offset=0x0 Size=0x8
};
