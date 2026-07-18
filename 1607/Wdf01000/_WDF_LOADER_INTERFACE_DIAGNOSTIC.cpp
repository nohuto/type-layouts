struct _WDF_INTERFACE_HEADER// Size=0x10 (Id=752)
{
    struct _GUID * InterfaceType;// Offset=0x0 Size=0x8
    unsigned long InterfaceSize;// Offset=0x8 Size=0x4
};

struct _WDF_LOADER_INTERFACE_DIAGNOSTIC// Size=0x18 (Id=692)
{
    struct _WDF_INTERFACE_HEADER Header;// Offset=0x0 Size=0x10
    long  ( * DiagnosticsValueByNameAsULONG)(struct _UNICODE_STRING * ,unsigned long * );// Offset=0x10 Size=0x8
};
