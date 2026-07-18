struct _unnamed_78// Size=0x20 (Id=78)
{
    struct _IO_SECURITY_CONTEXT * SecurityContext;// Offset=0x0 Size=0x8
    unsigned long Options;// Offset=0x8 Size=0x4
    unsigned short FileAttributes;// Offset=0x10 Size=0x2
    unsigned short ShareAccess;// Offset=0x12 Size=0x2
    unsigned long EaLength;// Offset=0x18 Size=0x4
};

struct _unnamed_282// Size=0x18 (Id=282)
{
    unsigned long long Length;// Offset=0x0 Size=0x8
    unsigned long Key;// Offset=0x8 Size=0x4
    long long DeviceOffset;// Offset=0x10 Size=0x8
};

struct _unnamed_283// Size=0x20 (Id=283)
{
    unsigned long long OutputBufferLength;// Offset=0x0 Size=0x8
    unsigned long long InputBufferLength;// Offset=0x8 Size=0x8
    unsigned long IoControlCode;// Offset=0x10 Size=0x4
    void * Type3InputBuffer;// Offset=0x18 Size=0x8
};

struct _unnamed_284// Size=0x20 (Id=284)
{
    void * Arg1;// Offset=0x0 Size=0x8
    void * Arg2;// Offset=0x8 Size=0x8
    unsigned long IoControlCode;// Offset=0x10 Size=0x4
    void * Arg4;// Offset=0x18 Size=0x8
};

union _unnamed_285// Size=0x20 (Id=285)
{
    struct _unnamed_78 Create;// Offset=0x0 Size=0x20
    struct _unnamed_282 Read;// Offset=0x0 Size=0x18
    struct _unnamed_282 Write;// Offset=0x0 Size=0x18
    struct _unnamed_283 DeviceIoControl;// Offset=0x0 Size=0x20
    struct _unnamed_284 Others;// Offset=0x0 Size=0x20
};
