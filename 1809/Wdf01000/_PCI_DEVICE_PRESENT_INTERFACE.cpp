struct _PCI_DEVICE_PRESENT_INTERFACE// Size=0x30 (Id=2582)
{
    unsigned short Size;// Offset=0x0 Size=0x2
    unsigned short Version;// Offset=0x2 Size=0x2
    void * Context;// Offset=0x8 Size=0x8
    void  ( * InterfaceReference)(void * );// Offset=0x10 Size=0x8
    void  ( * InterfaceDereference)(void * );// Offset=0x18 Size=0x8
    unsigned char  ( * IsDevicePresent)(unsigned short ,unsigned short ,unsigned char ,unsigned short ,unsigned short ,unsigned long );// Offset=0x20 Size=0x8
    unsigned char  ( * IsDevicePresentEx)(void * ,struct _PCI_DEVICE_PRESENCE_PARAMETERS * );// Offset=0x28 Size=0x8
};
