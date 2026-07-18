struct _UNICODE_STRING// Size=0x10 (Id=89)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    unsigned short MaximumLength;// Offset=0x2 Size=0x2
    wchar_t * Buffer;// Offset=0x8 Size=0x8
};

struct _DRIVER_EXTENSION// Size=0x28 (Id=551)
{
    struct _DRIVER_OBJECT * DriverObject;// Offset=0x0 Size=0x8
    long  ( * AddDevice)(struct _DRIVER_OBJECT * ,struct _DEVICE_OBJECT * );// Offset=0x8 Size=0x8
    unsigned long Count;// Offset=0x10 Size=0x4
    struct _UNICODE_STRING ServiceKeyName;// Offset=0x18 Size=0x10
};
