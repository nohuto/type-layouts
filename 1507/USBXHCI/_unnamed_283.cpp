struct _unnamed_276// Size=0x18 (Id=276)
{
    struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
    unsigned long long Length;// Offset=0x8 Size=0x8
    unsigned long long Offset;// Offset=0x10 Size=0x8
};

struct _unnamed_277// Size=0x10 (Id=277)
{
    struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
    unsigned long long Offset;// Offset=0x8 Size=0x8
};

struct _unnamed_278// Size=0x18 (Id=278)
{
    struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
    unsigned long long Offset;// Offset=0x8 Size=0x8
    unsigned long long Length;// Offset=0x10 Size=0x8
};

struct _unnamed_279// Size=0x30 (Id=279)
{
    unsigned long IoControlCode;// Offset=0x0 Size=0x4
    struct _unnamed_277 Input;// Offset=0x8 Size=0x10
    struct _unnamed_278 Output;// Offset=0x18 Size=0x18
};

union _unnamed_280// Size=0x8 (Id=280)
{
    void * Ptr;// Offset=0x0 Size=0x8
    unsigned long long Value;// Offset=0x0 Size=0x8
};

struct _unnamed_281// Size=0x20 (Id=281)
{
    union _unnamed_280 Argument1;// Offset=0x0 Size=0x8
    union _unnamed_280 Argument2;// Offset=0x8 Size=0x8
    union _unnamed_280 Argument3;// Offset=0x10 Size=0x8
    union _unnamed_280 Argument4;// Offset=0x18 Size=0x8
};

struct _unnamed_282// Size=0x8 (Id=282)
{
    struct _WDF_USB_REQUEST_COMPLETION_PARAMS * Completion;// Offset=0x0 Size=0x8
};

union _unnamed_283// Size=0x30 (Id=283)
{
    union // Size=0x30 (Id=0)
    {
        struct _unnamed_276 Write;// Offset=0x0 Size=0x18
        struct _unnamed_276 Read;// Offset=0x0 Size=0x18
        struct _unnamed_279 Ioctl;// Offset=0x0 Size=0x30
        struct _unnamed_281 Others;// Offset=0x0 Size=0x20
        struct _unnamed_282 Usb;// Offset=0x0 Size=0x8
    };
};
