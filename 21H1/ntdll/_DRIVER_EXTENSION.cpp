struct _UNICODE_STRING// Size=0x8 (Id=306)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    unsigned short MaximumLength;// Offset=0x2 Size=0x2
    wchar_t * Buffer;// Offset=0x4 Size=0x4
};

struct _DRIVER_EXTENSION// Size=0x28 (Id=633)
{
    struct _DRIVER_OBJECT * DriverObject;// Offset=0x0 Size=0x4
    long  ( * AddDevice)(struct _DRIVER_OBJECT * ,struct _DEVICE_OBJECT * );// Offset=0x4 Size=0x4
    unsigned long Count;// Offset=0x8 Size=0x4
    struct _UNICODE_STRING ServiceKeyName;// Offset=0xc Size=0x8
    struct _IO_CLIENT_EXTENSION * ClientDriverExtension;// Offset=0x14 Size=0x4
    struct _FS_FILTER_CALLBACKS * FsFilterCallbacks;// Offset=0x18 Size=0x4
    void * KseCallbacks;// Offset=0x1c Size=0x4
    void * DvCallbacks;// Offset=0x20 Size=0x4
    void * VerifierContext;// Offset=0x24 Size=0x4
};
