struct _unnamed_35// Size=0x20 (Id=35)
{
    struct _IO_SECURITY_CONTEXT * SecurityContext;// Offset=0x0 Size=0x8
    unsigned long Options;// Offset=0x8 Size=0x4
    unsigned short FileAttributes;// Offset=0x10 Size=0x2
    unsigned short ShareAccess;// Offset=0x12 Size=0x2
    unsigned long EaLength;// Offset=0x18 Size=0x4
};

struct _unnamed_261// Size=0x18 (Id=261)
{
    unsigned long long Length;// Offset=0x0 Size=0x8
    unsigned long Key;// Offset=0x8 Size=0x4
    long long DeviceOffset;// Offset=0x10 Size=0x8
};

struct _unnamed_262// Size=0x20 (Id=262)
{
    unsigned long long OutputBufferLength;// Offset=0x0 Size=0x8
    unsigned long long InputBufferLength;// Offset=0x8 Size=0x8
    unsigned long IoControlCode;// Offset=0x10 Size=0x4
    void * Type3InputBuffer;// Offset=0x18 Size=0x8
};

struct _unnamed_263// Size=0x20 (Id=263)
{
    void * Arg1;// Offset=0x0 Size=0x8
    void * Arg2;// Offset=0x8 Size=0x8
    unsigned long IoControlCode;// Offset=0x10 Size=0x4
    void * Arg4;// Offset=0x18 Size=0x8
};

union _unnamed_264// Size=0x20 (Id=264)
{
    struct _unnamed_35 Create;// Offset=0x0 Size=0x20
    struct _unnamed_261 Read;// Offset=0x0 Size=0x18
    struct _unnamed_261 Write;// Offset=0x0 Size=0x18
    struct _unnamed_262 DeviceIoControl;// Offset=0x0 Size=0x20
    struct _unnamed_263 Others;// Offset=0x0 Size=0x20
};
