struct _unnamed_266// Size=0x18 (Id=266)
{
    struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
    unsigned long long Length;// Offset=0x8 Size=0x8
    unsigned long long Offset;// Offset=0x10 Size=0x8
};

struct _unnamed_267// Size=0x10 (Id=267)
{
    struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
    unsigned long long Offset;// Offset=0x8 Size=0x8
};

struct _unnamed_268// Size=0x18 (Id=268)
{
    struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
    unsigned long long Offset;// Offset=0x8 Size=0x8
    unsigned long long Length;// Offset=0x10 Size=0x8
};

struct _unnamed_269// Size=0x30 (Id=269)
{
    unsigned long IoControlCode;// Offset=0x0 Size=0x4
    struct _unnamed_267 Input;// Offset=0x8 Size=0x10
    struct _unnamed_268 Output;// Offset=0x18 Size=0x18
};

union _unnamed_270// Size=0x8 (Id=270)
{
    void * Ptr;// Offset=0x0 Size=0x8
    unsigned long long Value;// Offset=0x0 Size=0x8
};

struct _unnamed_271// Size=0x20 (Id=271)
{
    union _unnamed_270 Argument1;// Offset=0x0 Size=0x8
    union _unnamed_270 Argument2;// Offset=0x8 Size=0x8
    union _unnamed_270 Argument3;// Offset=0x10 Size=0x8
    union _unnamed_270 Argument4;// Offset=0x18 Size=0x8
};

struct _unnamed_273// Size=0x8 (Id=273)
{
    struct _WDF_USB_REQUEST_COMPLETION_PARAMS * Completion;// Offset=0x0 Size=0x8
};

union _unnamed_274// Size=0x30 (Id=274)
{
    union // Size=0x30 (Id=0)
    {
        struct _unnamed_266 Write;// Offset=0x0 Size=0x18
        struct _unnamed_266 Read;// Offset=0x0 Size=0x18
        struct _unnamed_269 Ioctl;// Offset=0x0 Size=0x30
        struct _unnamed_271 Others;// Offset=0x0 Size=0x20
        struct _unnamed_273 Usb;// Offset=0x0 Size=0x8
    };
};
