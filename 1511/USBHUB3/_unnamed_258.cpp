struct _unnamed_250// Size=0x18 (Id=250)
{
    struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
    unsigned long long Length;// Offset=0x8 Size=0x8
    unsigned long long Offset;// Offset=0x10 Size=0x8
};

struct _unnamed_251// Size=0x10 (Id=251)
{
    struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
    unsigned long long Offset;// Offset=0x8 Size=0x8
};

struct _unnamed_252// Size=0x18 (Id=252)
{
    struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
    unsigned long long Offset;// Offset=0x8 Size=0x8
    unsigned long long Length;// Offset=0x10 Size=0x8
};

struct _unnamed_253// Size=0x30 (Id=253)
{
    unsigned long IoControlCode;// Offset=0x0 Size=0x4
    struct _unnamed_251 Input;// Offset=0x8 Size=0x10
    struct _unnamed_252 Output;// Offset=0x18 Size=0x18
};

union _unnamed_254// Size=0x8 (Id=254)
{
    void * Ptr;// Offset=0x0 Size=0x8
    unsigned long long Value;// Offset=0x0 Size=0x8
};

struct _unnamed_255// Size=0x20 (Id=255)
{
    union _unnamed_254 Argument1;// Offset=0x0 Size=0x8
    union _unnamed_254 Argument2;// Offset=0x8 Size=0x8
    union _unnamed_254 Argument3;// Offset=0x10 Size=0x8
    union _unnamed_254 Argument4;// Offset=0x18 Size=0x8
};

struct _unnamed_257// Size=0x8 (Id=257)
{
    struct _WDF_USB_REQUEST_COMPLETION_PARAMS * Completion;// Offset=0x0 Size=0x8
};

union _unnamed_258// Size=0x30 (Id=258)
{
    union // Size=0x30 (Id=0)
    {
        struct _unnamed_250 Write;// Offset=0x0 Size=0x18
        struct _unnamed_250 Read;// Offset=0x0 Size=0x18
        struct _unnamed_253 Ioctl;// Offset=0x0 Size=0x30
        struct _unnamed_255 Others;// Offset=0x0 Size=0x20
        struct _unnamed_257 Usb;// Offset=0x0 Size=0x8
    };
};
