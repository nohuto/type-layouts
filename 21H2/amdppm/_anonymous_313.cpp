struct _anonymous_305// Size=0x18 (Id=305)
{
    struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
    unsigned long long Length;// Offset=0x8 Size=0x8
    unsigned long long Offset;// Offset=0x10 Size=0x8
};

struct _anonymous_306// Size=0x10 (Id=306)
{
    struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
    unsigned long long Offset;// Offset=0x8 Size=0x8
};

struct _anonymous_307// Size=0x18 (Id=307)
{
    struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
    unsigned long long Offset;// Offset=0x8 Size=0x8
    unsigned long long Length;// Offset=0x10 Size=0x8
};

struct _anonymous_308// Size=0x30 (Id=308)
{
    unsigned long IoControlCode;// Offset=0x0 Size=0x4
    struct _anonymous_306 Input;// Offset=0x8 Size=0x10
    struct _anonymous_307 Output;// Offset=0x18 Size=0x18
};

union _anonymous_309// Size=0x8 (Id=309)
{
    void * Ptr;// Offset=0x0 Size=0x8
    unsigned long long Value;// Offset=0x0 Size=0x8
};

struct _anonymous_310// Size=0x20 (Id=310)
{
    union _anonymous_309 Argument1;// Offset=0x0 Size=0x8
    union _anonymous_309 Argument2;// Offset=0x8 Size=0x8
    union _anonymous_309 Argument3;// Offset=0x10 Size=0x8
    union _anonymous_309 Argument4;// Offset=0x18 Size=0x8
};

struct _anonymous_312// Size=0x8 (Id=312)
{
    struct _WDF_USB_REQUEST_COMPLETION_PARAMS * Completion;// Offset=0x0 Size=0x8
};

union _anonymous_313// Size=0x30 (Id=313)
{
    union // Size=0x30 (Id=0)
    {
        struct _anonymous_305 Write;// Offset=0x0 Size=0x18
        struct _anonymous_305 Read;// Offset=0x0 Size=0x18
        struct _anonymous_308 Ioctl;// Offset=0x0 Size=0x30
        struct _anonymous_310 Others;// Offset=0x0 Size=0x20
        struct _anonymous_312 Usb;// Offset=0x0 Size=0x8
    };
};
