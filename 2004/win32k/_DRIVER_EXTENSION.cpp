struct _UNICODE_STRING// Size=0x8 (Id=221)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    unsigned short MaximumLength;// Offset=0x2 Size=0x2
    wchar_t * Buffer;// Offset=0x4 Size=0x4
};

struct _DRIVER_EXTENSION// Size=0x14 (Id=490)
{
    struct _DRIVER_OBJECT * DriverObject;// Offset=0x0 Size=0x4
    long  ( * AddDevice)(struct _DRIVER_OBJECT * ,struct _DEVICE_OBJECT * );// Offset=0x4 Size=0x4
    unsigned long Count;// Offset=0x8 Size=0x4
    struct _UNICODE_STRING ServiceKeyName;// Offset=0xc Size=0x8
};
