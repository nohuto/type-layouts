enum _USB_DEVICE_SPEED
{
    UsbLowSpeed=0,
    UsbFullSpeed=1,
    UsbHighSpeed=2,
    UsbSuperSpeed=3
};

struct _USB_TOPOLOGY_ADDRESS// Size=0x20 (Id=613)
{
    unsigned long PciBusNumber;// Offset=0x0 Size=0x4
    unsigned long PciDeviceNumber;// Offset=0x4 Size=0x4
    unsigned long PciFunctionNumber;// Offset=0x8 Size=0x4
    unsigned long Reserved;// Offset=0xc Size=0x4
    unsigned short RootHubPortNumber;// Offset=0x10 Size=0x2
    unsigned short HubPortNumber[5];// Offset=0x12 Size=0xa
    unsigned short Reserved2;// Offset=0x1c Size=0x2
};

struct _HUB_PARENT_INTERFACE// Size=0x88 (Id=559)
{
    unsigned short Size;// Offset=0x0 Size=0x2
    unsigned short Version;// Offset=0x2 Size=0x2
    void * Context;// Offset=0x8 Size=0x8
    void  ( * InterfaceReference)(void * );// Offset=0x10 Size=0x8
    void  ( * InterfaceDereference)(void * );// Offset=0x18 Size=0x8
    unsigned char HubDepth;// Offset=0x20 Size=0x1
    struct UCXUSBDEVICE__ * Hub;// Offset=0x28 Size=0x8
    enum _USB_DEVICE_SPEED HubSpeed;// Offset=0x30 Size=0x4
    unsigned char IsHubWakeCapable;// Offset=0x34 Size=0x1
    unsigned char IsEnhancedSuperSpeed;// Offset=0x35 Size=0x1
    unsigned char  ( * WasHubResetOnResume)(void * );// Offset=0x38 Size=0x8
    unsigned char  ( * WasDeviceProgrammingLostOnResume)(void * );// Offset=0x40 Size=0x8
    void * ConnectorId;// Offset=0x48 Size=0x8
    unsigned short First30PortToMap;// Offset=0x50 Size=0x2
    unsigned short Last30PortToMap;// Offset=0x52 Size=0x2
    void  ( * GetHubSymbolicLinkName)(void * ,struct _UNICODE_STRING * );// Offset=0x58 Size=0x8
    struct _USB_TOPOLOGY_ADDRESS HubTopologyAddress;// Offset=0x60 Size=0x20
    void * HubFdoContext;// Offset=0x80 Size=0x8
};
