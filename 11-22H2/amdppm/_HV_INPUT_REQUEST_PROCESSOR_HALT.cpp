struct _unnamed_753// Size=0x8 (Id=753)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long ReservedZ:52;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x34
    };
};

struct _unnamed_754// Size=0x8 (Id=754)
{
    unsigned short Port;// Offset=0x0 Size=0x2
    unsigned short ReservedZ1;// Offset=0x2 Size=0x2
    struct // Size=0x4 (Id=0)
    {
        unsigned int ReservedZ2:20;// Offset=0x4 Size=0x4 BitOffset=0x0 BitSize=0x14
    };
};

struct _unnamed_755// Size=0x8 (Id=755)
{
    unsigned int Hints;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned int BreakOnMaskedInterrupt:1;// Offset=0x4 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned int ReservedZ:19;// Offset=0x4 Size=0x4 BitOffset=0x1 BitSize=0x13
    };
};

struct _unnamed_756// Size=0x8 (Id=756)
{
    unsigned int PowerState;// Offset=0x0 Size=0x4
    unsigned int Reserved;// Offset=0x4 Size=0x4
};

union _HV_PPM_IDLE_STATE_CONFIG// Size=0x8 (Id=757)
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
    struct _unnamed_753 Hlt;// Offset=0x0 Size=0x8
    struct _unnamed_754 Io;// Offset=0x0 Size=0x8
    struct _unnamed_755 Mwait;// Offset=0x0 Size=0x8
    struct _unnamed_756 Psci;// Offset=0x0 Size=0x8
};

union _HV_INPUT_REQUEST_PROCESSOR_HALT_FLAGS// Size=0x4 (Id=752)
{
    unsigned int AsUINT32;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned int UseDefaultSuspend:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned int RsvdZ:31;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1f
    };
};

struct _HV_PPM_IDLE_STATE_REQUEST// Size=0x10 (Id=751)
{
    union _HV_PPM_IDLE_STATE_CONFIG Config;// Offset=0x0 Size=0x8
    unsigned int CStateType;// Offset=0x8 Size=0x4
    union _HV_INPUT_REQUEST_PROCESSOR_HALT_FLAGS Flags;// Offset=0xc Size=0x4
};

union _HV_INPUT_REQUEST_PROCESSOR_HALT// Size=0x10 (Id=740)
{
    struct _HV_PPM_IDLE_STATE_REQUEST IdleRequest;// Offset=0x0 Size=0x10
    unsigned long long AsUINT64[2];// Offset=0x0 Size=0x10
};
