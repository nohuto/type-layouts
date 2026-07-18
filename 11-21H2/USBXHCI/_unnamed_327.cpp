struct _unnamed_320// Size=0x18 (Id=320)
{
    struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
    unsigned long long Length;// Offset=0x8 Size=0x8
    unsigned long long Offset;// Offset=0x10 Size=0x8
};

struct _unnamed_321// Size=0x10 (Id=321)
{
    struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
    unsigned long long Offset;// Offset=0x8 Size=0x8
};

struct _unnamed_322// Size=0x18 (Id=322)
{
    struct WDFMEMORY__ * Buffer;// Offset=0x0 Size=0x8
    unsigned long long Offset;// Offset=0x8 Size=0x8
    unsigned long long Length;// Offset=0x10 Size=0x8
};

struct _unnamed_323// Size=0x30 (Id=323)
{
    unsigned long IoControlCode;// Offset=0x0 Size=0x4
    struct _unnamed_321 Input;// Offset=0x8 Size=0x10
    struct _unnamed_322 Output;// Offset=0x18 Size=0x18
};

union _unnamed_324// Size=0x8 (Id=324)
{
    void * Ptr;// Offset=0x0 Size=0x8
    unsigned long long Value;// Offset=0x0 Size=0x8
};

struct _unnamed_325// Size=0x20 (Id=325)
{
    union _unnamed_324 Argument1;// Offset=0x0 Size=0x8
    union _unnamed_324 Argument2;// Offset=0x8 Size=0x8
    union _unnamed_324 Argument3;// Offset=0x10 Size=0x8
    union _unnamed_324 Argument4;// Offset=0x18 Size=0x8
};

struct _unnamed_326// Size=0x8 (Id=326)
{
    struct _WDF_USB_REQUEST_COMPLETION_PARAMS * Completion;// Offset=0x0 Size=0x8
};

union _unnamed_327// Size=0x30 (Id=327)
{
    union // Size=0x30 (Id=0)
    {
        struct _unnamed_320 Write;// Offset=0x0 Size=0x18
        struct _unnamed_320 Read;// Offset=0x0 Size=0x18
        struct _unnamed_323 Ioctl;// Offset=0x0 Size=0x30
        struct _unnamed_325 Others;// Offset=0x0 Size=0x20
        struct _unnamed_326 Usb;// Offset=0x0 Size=0x8
    };
};
