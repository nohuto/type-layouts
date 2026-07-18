struct _unnamed_296// Size=0x18 (Id=296)
{
    struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
    unsigned long long Length;// Offset=0x8 Size=0x8
    unsigned long long Offset;// Offset=0x10 Size=0x8
};

struct _unnamed_297// Size=0x10 (Id=297)
{
    struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
    unsigned long long Offset;// Offset=0x8 Size=0x8
};

struct _unnamed_298// Size=0x18 (Id=298)
{
    struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
    unsigned long long Offset;// Offset=0x8 Size=0x8
    unsigned long long Length;// Offset=0x10 Size=0x8
};

struct _unnamed_299// Size=0x30 (Id=299)
{
    unsigned long IoControlCode;// Offset=0x0 Size=0x4
    struct _unnamed_297 Input;// Offset=0x8 Size=0x10
    struct _unnamed_298 Output;// Offset=0x18 Size=0x18
};

union _unnamed_300// Size=0x8 (Id=300)
{
    void * Ptr;// Offset=0x0 Size=0x8
    unsigned long long Value;// Offset=0x0 Size=0x8
};

struct _unnamed_301// Size=0x20 (Id=301)
{
    union _unnamed_300 Argument1;// Offset=0x0 Size=0x8
    union _unnamed_300 Argument2;// Offset=0x8 Size=0x8
    union _unnamed_300 Argument3;// Offset=0x10 Size=0x8
    union _unnamed_300 Argument4;// Offset=0x18 Size=0x8
};

struct _unnamed_303// Size=0x8 (Id=303)
{
    struct _WDF_USB_REQUEST_COMPLETION_PARAMS * Completion;// Offset=0x0 Size=0x8
};

union _unnamed_304// Size=0x30 (Id=304)
{
    union // Size=0x30 (Id=0)
    {
        struct _unnamed_296 Write;// Offset=0x0 Size=0x18
        struct _unnamed_296 Read;// Offset=0x0 Size=0x18
        struct _unnamed_299 Ioctl;// Offset=0x0 Size=0x30
        struct _unnamed_301 Others;// Offset=0x0 Size=0x20
        struct _unnamed_303 Usb;// Offset=0x0 Size=0x8
    };
};
