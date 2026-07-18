struct _unnamed_249// Size=0x18 (Id=249)
{
    struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
    unsigned long long Length;// Offset=0x8 Size=0x8
    unsigned long long Offset;// Offset=0x10 Size=0x8
};

struct _unnamed_250// Size=0x10 (Id=250)
{
    struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
    unsigned long long Offset;// Offset=0x8 Size=0x8
};

struct _unnamed_251// Size=0x18 (Id=251)
{
    struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
    unsigned long long Offset;// Offset=0x8 Size=0x8
    unsigned long long Length;// Offset=0x10 Size=0x8
};

struct _unnamed_252// Size=0x30 (Id=252)
{
    unsigned long IoControlCode;// Offset=0x0 Size=0x4
    struct _unnamed_250 Input;// Offset=0x8 Size=0x10
    struct _unnamed_251 Output;// Offset=0x18 Size=0x18
};

union _unnamed_253// Size=0x8 (Id=253)
{
    void * Ptr;// Offset=0x0 Size=0x8
    unsigned long long Value;// Offset=0x0 Size=0x8
};

struct _unnamed_254// Size=0x20 (Id=254)
{
    union _unnamed_253 Argument1;// Offset=0x0 Size=0x8
    union _unnamed_253 Argument2;// Offset=0x8 Size=0x8
    union _unnamed_253 Argument3;// Offset=0x10 Size=0x8
    union _unnamed_253 Argument4;// Offset=0x18 Size=0x8
};

struct _unnamed_256// Size=0x8 (Id=256)
{
    struct _WDF_USB_REQUEST_COMPLETION_PARAMS * Completion;// Offset=0x0 Size=0x8
};

union _unnamed_257// Size=0x30 (Id=257)
{
    union // Size=0x30 (Id=0)
    {
        struct _unnamed_249 Write;// Offset=0x0 Size=0x18
        struct _unnamed_249 Read;// Offset=0x0 Size=0x18
        struct _unnamed_252 Ioctl;// Offset=0x0 Size=0x30
        struct _unnamed_254 Others;// Offset=0x0 Size=0x20
        struct _unnamed_256 Usb;// Offset=0x0 Size=0x8
    };
};
