struct _DEVICE_RESET_INTERFACE_STANDARD// Size=0x38 (Id=2799)
{
    unsigned short Size;// Offset=0x0 Size=0x2
    unsigned short Version;// Offset=0x2 Size=0x2
    void * Context;// Offset=0x8 Size=0x8
    void  ( * InterfaceReference)(void * );// Offset=0x10 Size=0x8
    void  ( * InterfaceDereference)(void * );// Offset=0x18 Size=0x8
    long  ( * DeviceReset)(void * ,enum _DEVICE_RESET_TYPE ,unsigned long ,void * );// Offset=0x20 Size=0x8
    unsigned long SupportedResetTypes;// Offset=0x28 Size=0x4
    void * Reserved;// Offset=0x30 Size=0x8
};
