struct _unnamed_38// Size=0x20 (Id=38)
{
    struct _IO_SECURITY_CONTEXT * SecurityContext;// Offset=0x0 Size=0x8
    unsigned long Options;// Offset=0x8 Size=0x4
    unsigned short FileAttributes;// Offset=0x10 Size=0x2
    unsigned short ShareAccess;// Offset=0x12 Size=0x2
    unsigned long EaLength;// Offset=0x18 Size=0x4
};

struct _unnamed_248// Size=0x18 (Id=248)
{
    unsigned long long Length;// Offset=0x0 Size=0x8
    unsigned long Key;// Offset=0x8 Size=0x4
    long long DeviceOffset;// Offset=0x10 Size=0x8
};

struct _unnamed_249// Size=0x20 (Id=249)
{
    unsigned long long OutputBufferLength;// Offset=0x0 Size=0x8
    unsigned long long InputBufferLength;// Offset=0x8 Size=0x8
    unsigned long IoControlCode;// Offset=0x10 Size=0x4
    void * Type3InputBuffer;// Offset=0x18 Size=0x8
};

struct _unnamed_250// Size=0x20 (Id=250)
{
    void * Arg1;// Offset=0x0 Size=0x8
    void * Arg2;// Offset=0x8 Size=0x8
    unsigned long IoControlCode;// Offset=0x10 Size=0x4
    void * Arg4;// Offset=0x18 Size=0x8
};

union _unnamed_251// Size=0x20 (Id=251)
{
    struct _unnamed_38 Create;// Offset=0x0 Size=0x20
    struct _unnamed_248 Read;// Offset=0x0 Size=0x18
    struct _unnamed_248 Write;// Offset=0x0 Size=0x18
    struct _unnamed_249 DeviceIoControl;// Offset=0x0 Size=0x20
    struct _unnamed_250 Others;// Offset=0x0 Size=0x20
};
