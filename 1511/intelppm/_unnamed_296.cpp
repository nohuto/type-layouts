struct _unnamed_288// Size=0x18 (Id=288)
{
    struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
    unsigned long long Length;// Offset=0x8 Size=0x8
    unsigned long long Offset;// Offset=0x10 Size=0x8
};

struct _unnamed_289// Size=0x10 (Id=289)
{
    struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
    unsigned long long Offset;// Offset=0x8 Size=0x8
};

struct _unnamed_290// Size=0x18 (Id=290)
{
    struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
    unsigned long long Offset;// Offset=0x8 Size=0x8
    unsigned long long Length;// Offset=0x10 Size=0x8
};

struct _unnamed_291// Size=0x30 (Id=291)
{
    unsigned long IoControlCode;// Offset=0x0 Size=0x4
    struct _unnamed_289 Input;// Offset=0x8 Size=0x10
    struct _unnamed_290 Output;// Offset=0x18 Size=0x18
};

union _unnamed_292// Size=0x8 (Id=292)
{
    void * Ptr;// Offset=0x0 Size=0x8
    unsigned long long Value;// Offset=0x0 Size=0x8
};

struct _unnamed_293// Size=0x20 (Id=293)
{
    union _unnamed_292 Argument1;// Offset=0x0 Size=0x8
    union _unnamed_292 Argument2;// Offset=0x8 Size=0x8
    union _unnamed_292 Argument3;// Offset=0x10 Size=0x8
    union _unnamed_292 Argument4;// Offset=0x18 Size=0x8
};

struct _unnamed_295// Size=0x8 (Id=295)
{
    struct _WDF_USB_REQUEST_COMPLETION_PARAMS * Completion;// Offset=0x0 Size=0x8
};

union _unnamed_296// Size=0x30 (Id=296)
{
    union // Size=0x30 (Id=0)
    {
        struct _unnamed_288 Write;// Offset=0x0 Size=0x18
        struct _unnamed_288 Read;// Offset=0x0 Size=0x18
        struct _unnamed_291 Ioctl;// Offset=0x0 Size=0x30
        struct _unnamed_293 Others;// Offset=0x0 Size=0x20
        struct _unnamed_295 Usb;// Offset=0x0 Size=0x8
    };
};
