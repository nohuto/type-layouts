struct _anonymous_299// Size=0x18 (Id=299)
{
    struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
    unsigned long long Length;// Offset=0x8 Size=0x8
    unsigned long long Offset;// Offset=0x10 Size=0x8
};

struct _anonymous_300// Size=0x10 (Id=300)
{
    struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
    unsigned long long Offset;// Offset=0x8 Size=0x8
};

struct _anonymous_301// Size=0x18 (Id=301)
{
    struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
    unsigned long long Offset;// Offset=0x8 Size=0x8
    unsigned long long Length;// Offset=0x10 Size=0x8
};

struct _anonymous_302// Size=0x30 (Id=302)
{
    unsigned long IoControlCode;// Offset=0x0 Size=0x4
    struct _anonymous_300 Input;// Offset=0x8 Size=0x10
    struct _anonymous_301 Output;// Offset=0x18 Size=0x18
};

union _anonymous_303// Size=0x8 (Id=303)
{
    void * Ptr;// Offset=0x0 Size=0x8
    unsigned long long Value;// Offset=0x0 Size=0x8
};

struct _anonymous_304// Size=0x20 (Id=304)
{
    union _anonymous_303 Argument1;// Offset=0x0 Size=0x8
    union _anonymous_303 Argument2;// Offset=0x8 Size=0x8
    union _anonymous_303 Argument3;// Offset=0x10 Size=0x8
    union _anonymous_303 Argument4;// Offset=0x18 Size=0x8
};

struct _anonymous_305// Size=0x8 (Id=305)
{
    struct _WDF_USB_REQUEST_COMPLETION_PARAMS * Completion;// Offset=0x0 Size=0x8
};

union _anonymous_306// Size=0x30 (Id=306)
{
    union // Size=0x30 (Id=0)
    {
        struct _anonymous_299 Write;// Offset=0x0 Size=0x18
        struct _anonymous_299 Read;// Offset=0x0 Size=0x18
        struct _anonymous_302 Ioctl;// Offset=0x0 Size=0x30
        struct _anonymous_304 Others;// Offset=0x0 Size=0x20
        struct _anonymous_305 Usb;// Offset=0x0 Size=0x8
    };
};
