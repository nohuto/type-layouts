struct _USB_BUS_INTERFACE_USBDI_V1// Size=0x48 (Id=3028)
{
    unsigned short Size;// Offset=0x0 Size=0x2
    unsigned short Version;// Offset=0x2 Size=0x2
    void * BusContext;// Offset=0x8 Size=0x8
    void  ( * InterfaceReference)(void * );// Offset=0x10 Size=0x8
    void  ( * InterfaceDereference)(void * );// Offset=0x18 Size=0x8
    void  ( * GetUSBDIVersion)(void * ,struct _USBD_VERSION_INFORMATION * ,unsigned long * );// Offset=0x20 Size=0x8
    long  ( * QueryBusTime)(void * ,unsigned long * );// Offset=0x28 Size=0x8
    long  ( * SubmitIsoOutUrb)(void * ,struct _URB * );// Offset=0x30 Size=0x8
    long  ( * QueryBusInformation)(void * ,unsigned long ,void * ,unsigned long * ,unsigned long * );// Offset=0x38 Size=0x8
    unsigned char  ( * IsDeviceHighSpeed)(void * );// Offset=0x40 Size=0x8
};
