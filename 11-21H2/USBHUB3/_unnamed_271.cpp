struct _unnamed_263// Size=0x18 (Id=263)
{
    struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
    unsigned long long Length;// Offset=0x8 Size=0x8
    unsigned long long Offset;// Offset=0x10 Size=0x8
};

struct _unnamed_264// Size=0x10 (Id=264)
{
    struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
    unsigned long long Offset;// Offset=0x8 Size=0x8
};

struct _unnamed_265// Size=0x18 (Id=265)
{
    struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
    unsigned long long Offset;// Offset=0x8 Size=0x8
    unsigned long long Length;// Offset=0x10 Size=0x8
};

struct _unnamed_266// Size=0x30 (Id=266)
{
    unsigned long IoControlCode;// Offset=0x0 Size=0x4
    struct _unnamed_264 Input;// Offset=0x8 Size=0x10
    struct _unnamed_265 Output;// Offset=0x18 Size=0x18
};

union _unnamed_267// Size=0x8 (Id=267)
{
    void * Ptr;// Offset=0x0 Size=0x8
    unsigned long long Value;// Offset=0x0 Size=0x8
};

struct _unnamed_268// Size=0x20 (Id=268)
{
    union _unnamed_267 Argument1;// Offset=0x0 Size=0x8
    union _unnamed_267 Argument2;// Offset=0x8 Size=0x8
    union _unnamed_267 Argument3;// Offset=0x10 Size=0x8
    union _unnamed_267 Argument4;// Offset=0x18 Size=0x8
};

struct _unnamed_270// Size=0x8 (Id=270)
{
    struct _WDF_USB_REQUEST_COMPLETION_PARAMS * Completion;// Offset=0x0 Size=0x8
};

union _unnamed_271// Size=0x30 (Id=271)
{
    union // Size=0x30 (Id=0)
    {
        struct _unnamed_263 Write;// Offset=0x0 Size=0x18
        struct _unnamed_263 Read;// Offset=0x0 Size=0x18
        struct _unnamed_266 Ioctl;// Offset=0x0 Size=0x30
        struct _unnamed_268 Others;// Offset=0x0 Size=0x20
        struct _unnamed_270 Usb;// Offset=0x0 Size=0x8
    };
};
