struct _WDF_INTERFACE_HEADER// Size=0x10 (Id=745)
{
    struct _GUID * InterfaceType;// Offset=0x0 Size=0x8
    unsigned long InterfaceSize;// Offset=0x8 Size=0x4
};

struct _WDF_LOADER_INTERFACE_CLASS_BIND// Size=0x20 (Id=1087)
{
    struct _WDF_INTERFACE_HEADER Header;// Offset=0x0 Size=0x10
    long  ( * VersionBindClass)(struct _WDF_BIND_INFO * ,void ** ,struct _WDF_CLASS_BIND_INFO * );// Offset=0x10 Size=0x8
    void  ( * VersionUnbindClass)(struct _WDF_BIND_INFO * ,void ** ,struct _WDF_CLASS_BIND_INFO * );// Offset=0x18 Size=0x8
};
