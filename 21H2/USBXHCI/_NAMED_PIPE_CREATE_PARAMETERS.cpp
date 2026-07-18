struct _anonymous_31// Size=0x8 (Id=31)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=32)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _anonymous_31 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _NAMED_PIPE_CREATE_PARAMETERS// Size=0x28 (Id=731)
{
    unsigned long NamedPipeType;// Offset=0x0 Size=0x4
    unsigned long ReadMode;// Offset=0x4 Size=0x4
    unsigned long CompletionMode;// Offset=0x8 Size=0x4
    unsigned long MaximumInstances;// Offset=0xc Size=0x4
    unsigned long InboundQuota;// Offset=0x10 Size=0x4
    unsigned long OutboundQuota;// Offset=0x14 Size=0x4
    union _LARGE_INTEGER DefaultTimeout;// Offset=0x18 Size=0x8
    unsigned char TimeoutSpecified;// Offset=0x20 Size=0x1
};
