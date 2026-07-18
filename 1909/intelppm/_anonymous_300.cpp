struct _anonymous_80// Size=0x20 (Id=80)
{
    struct _IO_SECURITY_CONTEXT * SecurityContext;// Offset=0x0 Size=0x8
    unsigned long Options;// Offset=0x8 Size=0x4
    unsigned short FileAttributes;// Offset=0x10 Size=0x2
    unsigned short ShareAccess;// Offset=0x12 Size=0x2
    unsigned long EaLength;// Offset=0x18 Size=0x4
};

struct _anonymous_297// Size=0x18 (Id=297)
{
    unsigned long long Length;// Offset=0x0 Size=0x8
    unsigned long Key;// Offset=0x8 Size=0x4
    long long DeviceOffset;// Offset=0x10 Size=0x8
};

struct _anonymous_298// Size=0x20 (Id=298)
{
    unsigned long long OutputBufferLength;// Offset=0x0 Size=0x8
    unsigned long long InputBufferLength;// Offset=0x8 Size=0x8
    unsigned long IoControlCode;// Offset=0x10 Size=0x4
    void * Type3InputBuffer;// Offset=0x18 Size=0x8
};

struct _anonymous_299// Size=0x20 (Id=299)
{
    void * Arg1;// Offset=0x0 Size=0x8
    void * Arg2;// Offset=0x8 Size=0x8
    unsigned long IoControlCode;// Offset=0x10 Size=0x4
    void * Arg4;// Offset=0x18 Size=0x8
};

union _anonymous_300// Size=0x20 (Id=300)
{
    struct _anonymous_80 Create;// Offset=0x0 Size=0x20
    struct _anonymous_297 Read;// Offset=0x0 Size=0x18
    struct _anonymous_297 Write;// Offset=0x0 Size=0x18
    struct _anonymous_298 DeviceIoControl;// Offset=0x0 Size=0x20
    struct _anonymous_299 Others;// Offset=0x0 Size=0x20
};
