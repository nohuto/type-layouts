struct _anonymous_259// Size=0x18 (Id=259)
{
    struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
    unsigned long long Length;// Offset=0x8 Size=0x8
    unsigned long long Offset;// Offset=0x10 Size=0x8
};

struct _anonymous_260// Size=0x10 (Id=260)
{
    struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
    unsigned long long Offset;// Offset=0x8 Size=0x8
};

struct _anonymous_261// Size=0x18 (Id=261)
{
    struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
    unsigned long long Offset;// Offset=0x8 Size=0x8
    unsigned long long Length;// Offset=0x10 Size=0x8
};

struct _anonymous_262// Size=0x30 (Id=262)
{
    unsigned long IoControlCode;// Offset=0x0 Size=0x4
    struct _anonymous_260 Input;// Offset=0x8 Size=0x10
    struct _anonymous_261 Output;// Offset=0x18 Size=0x18
};

union _anonymous_263// Size=0x8 (Id=263)
{
    void * Ptr;// Offset=0x0 Size=0x8
    unsigned long long Value;// Offset=0x0 Size=0x8
};

struct _anonymous_264// Size=0x20 (Id=264)
{
    union _anonymous_263 Argument1;// Offset=0x0 Size=0x8
    union _anonymous_263 Argument2;// Offset=0x8 Size=0x8
    union _anonymous_263 Argument3;// Offset=0x10 Size=0x8
    union _anonymous_263 Argument4;// Offset=0x18 Size=0x8
};

struct _anonymous_266// Size=0x8 (Id=266)
{
    struct _WDF_USB_REQUEST_COMPLETION_PARAMS * Completion;// Offset=0x0 Size=0x8
};

union _anonymous_267// Size=0x30 (Id=267)
{
    union // Size=0x30 (Id=0)
    {
        struct _anonymous_259 Write;// Offset=0x0 Size=0x18
        struct _anonymous_259 Read;// Offset=0x0 Size=0x18
        struct _anonymous_262 Ioctl;// Offset=0x0 Size=0x30
        struct _anonymous_264 Others;// Offset=0x0 Size=0x20
        struct _anonymous_266 Usb;// Offset=0x0 Size=0x8
    };
};
