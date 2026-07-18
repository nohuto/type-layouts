struct _anonymous_262// Size=0x18 (Id=262)
{
    struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
    unsigned long long Length;// Offset=0x8 Size=0x8
    unsigned long long Offset;// Offset=0x10 Size=0x8
};

struct _anonymous_263// Size=0x10 (Id=263)
{
    struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
    unsigned long long Offset;// Offset=0x8 Size=0x8
};

struct _anonymous_264// Size=0x18 (Id=264)
{
    struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
    unsigned long long Offset;// Offset=0x8 Size=0x8
    unsigned long long Length;// Offset=0x10 Size=0x8
};

struct _anonymous_265// Size=0x30 (Id=265)
{
    unsigned long IoControlCode;// Offset=0x0 Size=0x4
    struct _anonymous_263 Input;// Offset=0x8 Size=0x10
    struct _anonymous_264 Output;// Offset=0x18 Size=0x18
};

union _anonymous_266// Size=0x8 (Id=266)
{
    void * Ptr;// Offset=0x0 Size=0x8
    unsigned long long Value;// Offset=0x0 Size=0x8
};

struct _anonymous_267// Size=0x20 (Id=267)
{
    union _anonymous_266 Argument1;// Offset=0x0 Size=0x8
    union _anonymous_266 Argument2;// Offset=0x8 Size=0x8
    union _anonymous_266 Argument3;// Offset=0x10 Size=0x8
    union _anonymous_266 Argument4;// Offset=0x18 Size=0x8
};

struct _anonymous_269// Size=0x8 (Id=269)
{
    struct _WDF_USB_REQUEST_COMPLETION_PARAMS * Completion;// Offset=0x0 Size=0x8
};

union _anonymous_270// Size=0x30 (Id=270)
{
    union // Size=0x30 (Id=0)
    {
        struct _anonymous_262 Write;// Offset=0x0 Size=0x18
        struct _anonymous_262 Read;// Offset=0x0 Size=0x18
        struct _anonymous_265 Ioctl;// Offset=0x0 Size=0x30
        struct _anonymous_267 Others;// Offset=0x0 Size=0x20
        struct _anonymous_269 Usb;// Offset=0x0 Size=0x8
    };
};
