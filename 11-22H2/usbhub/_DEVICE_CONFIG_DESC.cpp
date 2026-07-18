struct _USB_DEVICE_DESCRIPTOR// Size=0x12 (Id=216)
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

struct _USB_CONFIGURATION_DESCRIPTOR// Size=0x9 (Id=215)
{
    unsigned char bLength;// Offset=0x0 Size=0x1
    unsigned char bDescriptorType;// Offset=0x1 Size=0x1
    unsigned short wTotalLength;// Offset=0x2 Size=0x2
    unsigned char bNumInterfaces;// Offset=0x4 Size=0x1
    unsigned char bConfigurationValue;// Offset=0x5 Size=0x1
    unsigned char iConfiguration;// Offset=0x6 Size=0x1
    unsigned char bmAttributes;// Offset=0x7 Size=0x1
    unsigned char MaxPower;// Offset=0x8 Size=0x1
};

struct _DEVICE_CONFIG_DESC// Size=0x1b (Id=214)
{
    struct _USB_DEVICE_DESCRIPTOR DeviceDescriptor;// Offset=0x0 Size=0x12
    struct _USB_CONFIGURATION_DESCRIPTOR ConfigurationDescriptor;// Offset=0x12 Size=0x9
};
