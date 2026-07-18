struct _UNICODE_STRING// Size=0x10 (Id=156)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    unsigned short MaximumLength;// Offset=0x2 Size=0x2
    wchar_t * Buffer;// Offset=0x8 Size=0x8
};

struct _NDIS_WRAPPER_HANDLE// Size=0x18 (Id=1540)
{
    struct _DRIVER_OBJECT * DriverObject;// Offset=0x0 Size=0x8
    struct _UNICODE_STRING ServiceRegPath;// Offset=0x8 Size=0x10
};
