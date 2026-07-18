struct _WDF_INTERFACE_HEADER// Size=0x10 (Id=2001)
{
    struct _GUID * InterfaceType;// Offset=0x0 Size=0x8
    unsigned long InterfaceSize;// Offset=0x8 Size=0x4
};

struct _WDF_LOADER_INTERFACE// Size=0x30 (Id=1680)
{
    struct _WDF_INTERFACE_HEADER Header;// Offset=0x0 Size=0x10
    long  ( * RegisterLibrary)(struct _WDF_LIBRARY_INFO * ,struct _UNICODE_STRING * ,struct _UNICODE_STRING * );// Offset=0x10 Size=0x8
    long  ( * VersionBind)(struct _DRIVER_OBJECT * ,struct _UNICODE_STRING * ,struct _WDF_BIND_INFO * ,void *** );// Offset=0x18 Size=0x8
    long  ( * VersionUnbind)(struct _UNICODE_STRING * ,struct _WDF_BIND_INFO * ,void ** );// Offset=0x20 Size=0x8
    long  ( * DiagnosticsValueByNameAsULONG)(struct _UNICODE_STRING * ,unsigned long * );// Offset=0x28 Size=0x8
};
