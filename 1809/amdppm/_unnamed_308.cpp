struct _unnamed_300// Size=0x18 (Id=300)
{
    struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
    unsigned long long Length;// Offset=0x8 Size=0x8
    unsigned long long Offset;// Offset=0x10 Size=0x8
};

struct _unnamed_301// Size=0x10 (Id=301)
{
    struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
    unsigned long long Offset;// Offset=0x8 Size=0x8
};

struct _unnamed_302// Size=0x18 (Id=302)
{
    struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
    unsigned long long Offset;// Offset=0x8 Size=0x8
    unsigned long long Length;// Offset=0x10 Size=0x8
};

struct _unnamed_303// Size=0x30 (Id=303)
{
    unsigned long IoControlCode;// Offset=0x0 Size=0x4
    struct _unnamed_301 Input;// Offset=0x8 Size=0x10
    struct _unnamed_302 Output;// Offset=0x18 Size=0x18
};

union _unnamed_304// Size=0x8 (Id=304)
{
    void * Ptr;// Offset=0x0 Size=0x8
    unsigned long long Value;// Offset=0x0 Size=0x8
};

struct _unnamed_305// Size=0x20 (Id=305)
{
    union _unnamed_304 Argument1;// Offset=0x0 Size=0x8
    union _unnamed_304 Argument2;// Offset=0x8 Size=0x8
    union _unnamed_304 Argument3;// Offset=0x10 Size=0x8
    union _unnamed_304 Argument4;// Offset=0x18 Size=0x8
};

struct _unnamed_307// Size=0x8 (Id=307)
{
    struct _WDF_USB_REQUEST_COMPLETION_PARAMS * Completion;// Offset=0x0 Size=0x8
};

union _unnamed_308// Size=0x30 (Id=308)
{
    union // Size=0x30 (Id=0)
    {
        struct _unnamed_300 Write;// Offset=0x0 Size=0x18
        struct _unnamed_300 Read;// Offset=0x0 Size=0x18
        struct _unnamed_303 Ioctl;// Offset=0x0 Size=0x30
        struct _unnamed_305 Others;// Offset=0x0 Size=0x20
        struct _unnamed_307 Usb;// Offset=0x0 Size=0x8
    };
};
