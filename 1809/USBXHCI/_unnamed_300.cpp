struct _unnamed_293// Size=0x18 (Id=293)
{
    struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
    unsigned long long Length;// Offset=0x8 Size=0x8
    unsigned long long Offset;// Offset=0x10 Size=0x8
};

struct _unnamed_294// Size=0x10 (Id=294)
{
    struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
    unsigned long long Offset;// Offset=0x8 Size=0x8
};

struct _unnamed_295// Size=0x18 (Id=295)
{
    struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
    unsigned long long Offset;// Offset=0x8 Size=0x8
    unsigned long long Length;// Offset=0x10 Size=0x8
};

struct _unnamed_296// Size=0x30 (Id=296)
{
    unsigned long IoControlCode;// Offset=0x0 Size=0x4
    struct _unnamed_294 Input;// Offset=0x8 Size=0x10
    struct _unnamed_295 Output;// Offset=0x18 Size=0x18
};

union _unnamed_297// Size=0x8 (Id=297)
{
    void * Ptr;// Offset=0x0 Size=0x8
    unsigned long long Value;// Offset=0x0 Size=0x8
};

struct _unnamed_298// Size=0x20 (Id=298)
{
    union _unnamed_297 Argument1;// Offset=0x0 Size=0x8
    union _unnamed_297 Argument2;// Offset=0x8 Size=0x8
    union _unnamed_297 Argument3;// Offset=0x10 Size=0x8
    union _unnamed_297 Argument4;// Offset=0x18 Size=0x8
};

struct _unnamed_299// Size=0x8 (Id=299)
{
    struct _WDF_USB_REQUEST_COMPLETION_PARAMS * Completion;// Offset=0x0 Size=0x8
};

union _unnamed_300// Size=0x30 (Id=300)
{
    union // Size=0x30 (Id=0)
    {
        struct _unnamed_293 Write;// Offset=0x0 Size=0x18
        struct _unnamed_293 Read;// Offset=0x0 Size=0x18
        struct _unnamed_296 Ioctl;// Offset=0x0 Size=0x30
        struct _unnamed_298 Others;// Offset=0x0 Size=0x20
        struct _unnamed_299 Usb;// Offset=0x0 Size=0x8
    };
};
