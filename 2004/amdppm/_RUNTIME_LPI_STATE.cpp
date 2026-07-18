struct _anonymous_31// Size=0x8 (Id=31)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=63)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _anonymous_31 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _GEN_ADDR// Size=0xc (Id=482)
{
    unsigned char AddressSpaceID;// Offset=0x0 Size=0x1
    unsigned char BitWidth;// Offset=0x1 Size=0x1
    unsigned char BitOffset;// Offset=0x2 Size=0x1
    unsigned char AccessSize;// Offset=0x3 Size=0x1
    union _LARGE_INTEGER Address;// Offset=0x4 Size=0x8
};

struct _RUNTIME_IDLE_CONTEXT// Size=0x18 (Id=720)
{
    union // Size=0xc (Id=0)
    {
        struct _GEN_ADDR Register;// Offset=0x0 Size=0xc
        struct MWAIT_CONTEXT MwaitContext;// Offset=0x0 Size=0x18
    };
};

struct _RUNTIME_LPI_STATE// Size=0x38 (Id=582)
{
    void  ( * Handler)(struct _RUNTIME_IDLE_CONTEXT * ,unsigned long );// Offset=0x0 Size=0x8
    struct _RUNTIME_IDLE_CONTEXT Context;// Offset=0x8 Size=0x18
    unsigned long long CompositionContext;// Offset=0x20 Size=0x8
    void  ( * ContextDecode)(struct _RUNTIME_IDLE_CONTEXT * ,unsigned long long ,struct _RUNTIME_IDLE_CONTEXT * );// Offset=0x28 Size=0x8
    unsigned char Platform;// Offset=0x30 Size=0x1
};
