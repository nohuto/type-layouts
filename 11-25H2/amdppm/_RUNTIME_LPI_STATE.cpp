struct _unnamed_45// Size=0x8 (Id=45)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=46)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_45 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _GEN_ADDR// Size=0xc (Id=512)
{
    unsigned char AddressSpaceID;// Offset=0x0 Size=0x1
    unsigned char BitWidth;// Offset=0x1 Size=0x1
    unsigned char BitOffset;// Offset=0x2 Size=0x1
    unsigned char AccessSize;// Offset=0x3 Size=0x1
    union _LARGE_INTEGER Address;// Offset=0x4 Size=0x8
};

struct _unnamed_775// Size=0x8 (Id=775)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long ReservedZ:52;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x34
    };
};

struct _unnamed_776// Size=0x8 (Id=776)
{
    unsigned short Port;// Offset=0x0 Size=0x2
    unsigned short ReservedZ1;// Offset=0x2 Size=0x2
    struct // Size=0x4 (Id=0)
    {
        unsigned int ReservedZ2:20;// Offset=0x4 Size=0x4 BitOffset=0x0 BitSize=0x14
    };
};

struct _unnamed_777// Size=0x8 (Id=777)
{
    unsigned int Hints;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned int BreakOnMaskedInterrupt:1;// Offset=0x4 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned int ReservedZ:19;// Offset=0x4 Size=0x4 BitOffset=0x1 BitSize=0x13
    };
};

struct _unnamed_778// Size=0x8 (Id=778)
{
    unsigned int PowerState;// Offset=0x0 Size=0x4
    unsigned int Reserved;// Offset=0x4 Size=0x4
};

union _HV_PPM_IDLE_STATE_CONFIG// Size=0x8 (Id=779)
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
    struct _unnamed_775 Hlt;// Offset=0x0 Size=0x8
    struct _unnamed_776 Io;// Offset=0x0 Size=0x8
    struct _unnamed_777 Mwait;// Offset=0x0 Size=0x8
    struct _unnamed_778 Psci;// Offset=0x0 Size=0x8
};

union _HV_INPUT_REQUEST_PROCESSOR_HALT_FLAGS// Size=0x4 (Id=774)
{
    unsigned int AsUINT32;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned int UseDefaultSuspend:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned int RsvdZ:31;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1f
    };
};

struct _HV_PPM_IDLE_STATE_REQUEST// Size=0x10 (Id=772)
{
    union _HV_PPM_IDLE_STATE_CONFIG Config;// Offset=0x0 Size=0x8
    unsigned int CStateType;// Offset=0x8 Size=0x4
    union _HV_INPUT_REQUEST_PROCESSOR_HALT_FLAGS Flags;// Offset=0xc Size=0x4
};

union _HV_INPUT_REQUEST_PROCESSOR_HALT// Size=0x10 (Id=762)
{
    struct _HV_PPM_IDLE_STATE_REQUEST IdleRequest;// Offset=0x0 Size=0x10
    unsigned long long AsUINT64[2];// Offset=0x0 Size=0x10
};

struct _RUNTIME_IDLE_CONTEXT// Size=0x18 (Id=759)
{
    union // Size=0x18 (Id=0)
    {
        struct _GEN_ADDR Register;// Offset=0x0 Size=0xc
        struct MWAIT_CONTEXT MwaitContext;// Offset=0x0 Size=0x18
        union _HV_INPUT_REQUEST_PROCESSOR_HALT HvRequest;// Offset=0x0 Size=0x10
    };
};

struct _RUNTIME_LPI_STATE// Size=0x38 (Id=621)
{
    void  ( * Handler)(struct _RUNTIME_IDLE_CONTEXT * ,unsigned long );// Offset=0x0 Size=0x8
    struct _RUNTIME_IDLE_CONTEXT Context;// Offset=0x8 Size=0x18
    unsigned long long CompositionContext;// Offset=0x20 Size=0x8
    void  ( * ContextDecode)(struct _RUNTIME_IDLE_CONTEXT * ,unsigned long long ,struct _RUNTIME_IDLE_CONTEXT * );// Offset=0x28 Size=0x8
    unsigned char Platform;// Offset=0x30 Size=0x1
};
