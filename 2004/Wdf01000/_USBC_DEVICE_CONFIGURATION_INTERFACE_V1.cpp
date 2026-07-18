struct _USBC_DEVICE_CONFIGURATION_INTERFACE_V1// Size=0x68 (Id=2372)
{
    unsigned short Size;// Offset=0x0 Size=0x2
    unsigned short Version;// Offset=0x2 Size=0x2
    void * Context;// Offset=0x8 Size=0x8
    void  ( * InterfaceReference)(void * );// Offset=0x10 Size=0x8
    void  ( * InterfaceDereference)(void * );// Offset=0x18 Size=0x8
    long  ( * StartDeviceCallback)(struct _USB_DEVICE_DESCRIPTOR * ,struct _USB_CONFIGURATION_DESCRIPTOR * ,struct _USBC_FUNCTION_DESCRIPTOR ** ,unsigned long * ,struct _DEVICE_OBJECT * ,struct _DEVICE_OBJECT * );// Offset=0x20 Size=0x8
    unsigned char  ( * PdoEnableCallback)(void * ,unsigned short ,unsigned short ,unsigned char ,unsigned char ,unsigned char );// Offset=0x28 Size=0x8
    void * Reserved[7];// Offset=0x30 Size=0x38
};
