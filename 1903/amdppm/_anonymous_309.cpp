struct _anonymous_301// Size=0x18 (Id=301)
{
    struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
    unsigned long long Length;// Offset=0x8 Size=0x8
    unsigned long long Offset;// Offset=0x10 Size=0x8
};

struct _anonymous_302// Size=0x10 (Id=302)
{
    struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
    unsigned long long Offset;// Offset=0x8 Size=0x8
};

struct _anonymous_303// Size=0x18 (Id=303)
{
    struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
    unsigned long long Offset;// Offset=0x8 Size=0x8
    unsigned long long Length;// Offset=0x10 Size=0x8
};

struct _anonymous_304// Size=0x30 (Id=304)
{
    unsigned long IoControlCode;// Offset=0x0 Size=0x4
    struct _anonymous_302 Input;// Offset=0x8 Size=0x10
    struct _anonymous_303 Output;// Offset=0x18 Size=0x18
};

union _anonymous_305// Size=0x8 (Id=305)
{
    void * Ptr;// Offset=0x0 Size=0x8
    unsigned long long Value;// Offset=0x0 Size=0x8
};

struct _anonymous_306// Size=0x20 (Id=306)
{
    union _anonymous_305 Argument1;// Offset=0x0 Size=0x8
    union _anonymous_305 Argument2;// Offset=0x8 Size=0x8
    union _anonymous_305 Argument3;// Offset=0x10 Size=0x8
    union _anonymous_305 Argument4;// Offset=0x18 Size=0x8
};

struct _anonymous_308// Size=0x8 (Id=308)
{
    struct _WDF_USB_REQUEST_COMPLETION_PARAMS * Completion;// Offset=0x0 Size=0x8
};

union _anonymous_309// Size=0x30 (Id=309)
{
    union // Size=0x30 (Id=0)
    {
        struct _anonymous_301 Write;// Offset=0x0 Size=0x18
        struct _anonymous_301 Read;// Offset=0x0 Size=0x18
        struct _anonymous_304 Ioctl;// Offset=0x0 Size=0x30
        struct _anonymous_306 Others;// Offset=0x0 Size=0x20
        struct _anonymous_308 Usb;// Offset=0x0 Size=0x8
    };
};
