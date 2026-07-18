struct _anonymous_304// Size=0x18 (Id=304)
{
    struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
    unsigned long long Length;// Offset=0x8 Size=0x8
    unsigned long long Offset;// Offset=0x10 Size=0x8
};

struct _anonymous_305// Size=0x10 (Id=305)
{
    struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
    unsigned long long Offset;// Offset=0x8 Size=0x8
};

struct _anonymous_306// Size=0x18 (Id=306)
{
    struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
    unsigned long long Offset;// Offset=0x8 Size=0x8
    unsigned long long Length;// Offset=0x10 Size=0x8
};

struct _anonymous_307// Size=0x30 (Id=307)
{
    unsigned long IoControlCode;// Offset=0x0 Size=0x4
    struct _anonymous_305 Input;// Offset=0x8 Size=0x10
    struct _anonymous_306 Output;// Offset=0x18 Size=0x18
};

union _anonymous_308// Size=0x8 (Id=308)
{
    void * Ptr;// Offset=0x0 Size=0x8
    unsigned long long Value;// Offset=0x0 Size=0x8
};

struct _anonymous_309// Size=0x20 (Id=309)
{
    union _anonymous_308 Argument1;// Offset=0x0 Size=0x8
    union _anonymous_308 Argument2;// Offset=0x8 Size=0x8
    union _anonymous_308 Argument3;// Offset=0x10 Size=0x8
    union _anonymous_308 Argument4;// Offset=0x18 Size=0x8
};

struct _anonymous_310// Size=0x8 (Id=310)
{
    struct _WDF_USB_REQUEST_COMPLETION_PARAMS * Completion;// Offset=0x0 Size=0x8
};

union _anonymous_311// Size=0x30 (Id=311)
{
    union // Size=0x30 (Id=0)
    {
        struct _anonymous_304 Write;// Offset=0x0 Size=0x18
        struct _anonymous_304 Read;// Offset=0x0 Size=0x18
        struct _anonymous_307 Ioctl;// Offset=0x0 Size=0x30
        struct _anonymous_309 Others;// Offset=0x0 Size=0x20
        struct _anonymous_310 Usb;// Offset=0x0 Size=0x8
    };
};
