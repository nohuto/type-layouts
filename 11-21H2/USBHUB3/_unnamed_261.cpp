struct _unnamed_40// Size=0x20 (Id=40)
{
    struct _IO_SECURITY_CONTEXT * SecurityContext;// Offset=0x0 Size=0x8
    unsigned long Options;// Offset=0x8 Size=0x4
    unsigned short FileAttributes;// Offset=0x10 Size=0x2
    unsigned short ShareAccess;// Offset=0x12 Size=0x2
    unsigned long EaLength;// Offset=0x18 Size=0x4
};

struct _unnamed_258// Size=0x18 (Id=258)
{
    unsigned long long Length;// Offset=0x0 Size=0x8
    unsigned long Key;// Offset=0x8 Size=0x4
    long long DeviceOffset;// Offset=0x10 Size=0x8
};

struct _unnamed_259// Size=0x20 (Id=259)
{
    unsigned long long OutputBufferLength;// Offset=0x0 Size=0x8
    unsigned long long InputBufferLength;// Offset=0x8 Size=0x8
    unsigned long IoControlCode;// Offset=0x10 Size=0x4
    void * Type3InputBuffer;// Offset=0x18 Size=0x8
};

struct _unnamed_260// Size=0x20 (Id=260)
{
    void * Arg1;// Offset=0x0 Size=0x8
    void * Arg2;// Offset=0x8 Size=0x8
    unsigned long IoControlCode;// Offset=0x10 Size=0x4
    void * Arg4;// Offset=0x18 Size=0x8
};

union _unnamed_261// Size=0x20 (Id=261)
{
    struct _unnamed_40 Create;// Offset=0x0 Size=0x20
    struct _unnamed_258 Read;// Offset=0x0 Size=0x18
    struct _unnamed_258 Write;// Offset=0x0 Size=0x18
    struct _unnamed_259 DeviceIoControl;// Offset=0x0 Size=0x20
    struct _unnamed_260 Others;// Offset=0x0 Size=0x20
};
