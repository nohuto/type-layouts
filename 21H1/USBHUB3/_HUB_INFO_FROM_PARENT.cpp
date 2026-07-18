struct _USB_DEVICE_DESCRIPTOR// Size=0x12 (Id=480)
{
    unsigned char bLength;// Offset=0x0 Size=0x1
    unsigned char bDescriptorType;// Offset=0x1 Size=0x1
    unsigned short bcdUSB;// Offset=0x2 Size=0x2
    unsigned char bDeviceClass;// Offset=0x4 Size=0x1
    unsigned char bDeviceSubClass;// Offset=0x5 Size=0x1
    unsigned char bDeviceProtocol;// Offset=0x6 Size=0x1
    unsigned char bMaxPacketSize0;// Offset=0x7 Size=0x1
    unsigned short idVendor;// Offset=0x8 Size=0x2
    unsigned short idProduct;// Offset=0xa Size=0x2
    unsigned short bcdDevice;// Offset=0xc Size=0x2
    unsigned char iManufacturer;// Offset=0xe Size=0x1
    unsigned char iProduct;// Offset=0xf Size=0x1
    unsigned char iSerialNumber;// Offset=0x10 Size=0x1
    unsigned char bNumConfigurations;// Offset=0x11 Size=0x1
};

union _PARENT_HUB_FLAGS// Size=0x4 (Id=693)
{
    unsigned long AsUlong32;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long DisableLpmForAllDownstreamDevices:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long HubIsHighSpeedCapable:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long DisableUpdateMaxExitLatency:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long DisableU1:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
    };
};

struct _HUB_INFO_FROM_PARENT// Size=0x48 (Id=426)
{
    struct _DEVICE_OBJECT * IoTarget;// Offset=0x0 Size=0x8
    struct _USB_DEVICE_DESCRIPTOR DeviceDescriptor;// Offset=0x8 Size=0x12
    unsigned short U1ExitLatency;// Offset=0x1a Size=0x2
    unsigned short U2ExitLatency;// Offset=0x1c Size=0x2
    unsigned short ExitLatencyOfSlowestLinkForU1;// Offset=0x1e Size=0x2
    unsigned char DepthOfSlowestLinkForU1;// Offset=0x20 Size=0x1
    unsigned short ExitLatencyOfSlowestLinkForU2;// Offset=0x22 Size=0x2
    unsigned char DepthOfSlowestLinkForU2;// Offset=0x24 Size=0x1
    unsigned short HostInitiatedU1ExitLatency;// Offset=0x26 Size=0x2
    unsigned short HostInitiatedU2ExitLatency;// Offset=0x28 Size=0x2
    unsigned char TotalHubDepth;// Offset=0x2a Size=0x1
    unsigned short TotalTPPropogationDelay;// Offset=0x2c Size=0x2
    union _PARENT_HUB_FLAGS HubFlags;// Offset=0x30 Size=0x4
    union _USB_DEVICE_CAPABILITY_SUPERSPEEDPLUS_SPEED * SublinkSpeedAttr;// Offset=0x38 Size=0x8
    unsigned long SublinkSpeedAttrCount;// Offset=0x40 Size=0x4
};
