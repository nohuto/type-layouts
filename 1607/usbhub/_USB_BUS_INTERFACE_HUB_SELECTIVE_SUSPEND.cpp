struct _USB_BUS_INTERFACE_HUB_SELECTIVE_SUSPEND// Size=0x30 (Id=201)
{
    unsigned short Size;// Offset=0x0 Size=0x2
    unsigned short Version;// Offset=0x2 Size=0x2
    void * BusContext;// Offset=0x8 Size=0x8
    void  ( * InterfaceReference)(void * );// Offset=0x10 Size=0x8
    void  ( * InterfaceDereference)(void * );// Offset=0x18 Size=0x8
    long  ( * SuspendHub)(struct _DEVICE_OBJECT * );// Offset=0x20 Size=0x8
    long  ( * ResumeHub)(struct _DEVICE_OBJECT * );// Offset=0x28 Size=0x8
};
