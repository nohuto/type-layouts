struct _unnamed_325// Size=0x18 (Id=325)
{
    struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
    unsigned long long Length;// Offset=0x8 Size=0x8
    unsigned long long Offset;// Offset=0x10 Size=0x8
};

struct _unnamed_326// Size=0x10 (Id=326)
{
    struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
    unsigned long long Offset;// Offset=0x8 Size=0x8
};

struct _unnamed_327// Size=0x18 (Id=327)
{
    struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
    unsigned long long Offset;// Offset=0x8 Size=0x8
    unsigned long long Length;// Offset=0x10 Size=0x8
};

struct _unnamed_328// Size=0x30 (Id=328)
{
    unsigned long IoControlCode;// Offset=0x0 Size=0x4
    struct _unnamed_326 Input;// Offset=0x8 Size=0x10
    struct _unnamed_327 Output;// Offset=0x18 Size=0x18
};

union _unnamed_329// Size=0x8 (Id=329)
{
    void * Ptr;// Offset=0x0 Size=0x8
    unsigned long long Value;// Offset=0x0 Size=0x8
};

struct _unnamed_330// Size=0x20 (Id=330)
{
    union _unnamed_329 Argument1;// Offset=0x0 Size=0x8
    union _unnamed_329 Argument2;// Offset=0x8 Size=0x8
    union _unnamed_329 Argument3;// Offset=0x10 Size=0x8
    union _unnamed_329 Argument4;// Offset=0x18 Size=0x8
};

struct _unnamed_332// Size=0x8 (Id=332)
{
    struct _WDF_USB_REQUEST_COMPLETION_PARAMS * Completion;// Offset=0x0 Size=0x8
};

union _unnamed_333// Size=0x30 (Id=333)
{
    union // Size=0x30 (Id=0)
    {
        struct _unnamed_325 Write;// Offset=0x0 Size=0x18
        struct _unnamed_325 Read;// Offset=0x0 Size=0x18
        struct _unnamed_328 Ioctl;// Offset=0x0 Size=0x30
        struct _unnamed_330 Others;// Offset=0x0 Size=0x20
        struct _unnamed_332 Usb;// Offset=0x0 Size=0x8
    };
};
