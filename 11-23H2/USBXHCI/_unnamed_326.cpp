struct _unnamed_319// Size=0x18 (Id=319)
{
    struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
    unsigned long long Length;// Offset=0x8 Size=0x8
    unsigned long long Offset;// Offset=0x10 Size=0x8
};

struct _unnamed_320// Size=0x10 (Id=320)
{
    struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
    unsigned long long Offset;// Offset=0x8 Size=0x8
};

struct _unnamed_321// Size=0x18 (Id=321)
{
    struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
    unsigned long long Offset;// Offset=0x8 Size=0x8
    unsigned long long Length;// Offset=0x10 Size=0x8
};

struct _unnamed_322// Size=0x30 (Id=322)
{
    unsigned long IoControlCode;// Offset=0x0 Size=0x4
    struct _unnamed_320 Input;// Offset=0x8 Size=0x10
    struct _unnamed_321 Output;// Offset=0x18 Size=0x18
};

union _unnamed_323// Size=0x8 (Id=323)
{
    void * Ptr;// Offset=0x0 Size=0x8
    unsigned long long Value;// Offset=0x0 Size=0x8
};

struct _unnamed_324// Size=0x20 (Id=324)
{
    union _unnamed_323 Argument1;// Offset=0x0 Size=0x8
    union _unnamed_323 Argument2;// Offset=0x8 Size=0x8
    union _unnamed_323 Argument3;// Offset=0x10 Size=0x8
    union _unnamed_323 Argument4;// Offset=0x18 Size=0x8
};

struct _unnamed_325// Size=0x8 (Id=325)
{
    struct _WDF_USB_REQUEST_COMPLETION_PARAMS * Completion;// Offset=0x0 Size=0x8
};

union _unnamed_326// Size=0x30 (Id=326)
{
    union // Size=0x30 (Id=0)
    {
        struct _unnamed_319 Write;// Offset=0x0 Size=0x18
        struct _unnamed_319 Read;// Offset=0x0 Size=0x18
        struct _unnamed_322 Ioctl;// Offset=0x0 Size=0x30
        struct _unnamed_324 Others;// Offset=0x0 Size=0x20
        struct _unnamed_325 Usb;// Offset=0x0 Size=0x8
    };
};
