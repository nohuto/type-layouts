struct _unnamed_253// Size=0x18 (Id=253)
{
    struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
    unsigned long long Length;// Offset=0x8 Size=0x8
    unsigned long long Offset;// Offset=0x10 Size=0x8
};

struct _unnamed_254// Size=0x10 (Id=254)
{
    struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
    unsigned long long Offset;// Offset=0x8 Size=0x8
};

struct _unnamed_255// Size=0x18 (Id=255)
{
    struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
    unsigned long long Offset;// Offset=0x8 Size=0x8
    unsigned long long Length;// Offset=0x10 Size=0x8
};

struct _unnamed_256// Size=0x30 (Id=256)
{
    unsigned long IoControlCode;// Offset=0x0 Size=0x4
    struct _unnamed_254 Input;// Offset=0x8 Size=0x10
    struct _unnamed_255 Output;// Offset=0x18 Size=0x18
};

union _unnamed_257// Size=0x8 (Id=257)
{
    void * Ptr;// Offset=0x0 Size=0x8
    unsigned long long Value;// Offset=0x0 Size=0x8
};

struct _unnamed_258// Size=0x20 (Id=258)
{
    union _unnamed_257 Argument1;// Offset=0x0 Size=0x8
    union _unnamed_257 Argument2;// Offset=0x8 Size=0x8
    union _unnamed_257 Argument3;// Offset=0x10 Size=0x8
    union _unnamed_257 Argument4;// Offset=0x18 Size=0x8
};

struct _unnamed_260// Size=0x8 (Id=260)
{
    struct _WDF_USB_REQUEST_COMPLETION_PARAMS * Completion;// Offset=0x0 Size=0x8
};

union _unnamed_261// Size=0x30 (Id=261)
{
    union // Size=0x30 (Id=0)
    {
        struct _unnamed_253 Write;// Offset=0x0 Size=0x18
        struct _unnamed_253 Read;// Offset=0x0 Size=0x18
        struct _unnamed_256 Ioctl;// Offset=0x0 Size=0x30
        struct _unnamed_258 Others;// Offset=0x0 Size=0x20
        struct _unnamed_260 Usb;// Offset=0x0 Size=0x8
    };
};
