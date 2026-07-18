struct _USB_CONFIGURATION_DESCRIPTOR// Size=0x9 (Id=372)
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

struct _USB_INTERFACE_DESCRIPTOR// Size=0x9 (Id=680)
{
    unsigned char bLength;// Offset=0x0 Size=0x1
    unsigned char bDescriptorType;// Offset=0x1 Size=0x1
    unsigned char bInterfaceNumber;// Offset=0x2 Size=0x1
    unsigned char bAlternateSetting;// Offset=0x3 Size=0x1
    unsigned char bNumEndpoints;// Offset=0x4 Size=0x1
    unsigned char bInterfaceClass;// Offset=0x5 Size=0x1
    unsigned char bInterfaceSubClass;// Offset=0x6 Size=0x1
    unsigned char bInterfaceProtocol;// Offset=0x7 Size=0x1
    unsigned char iInterface;// Offset=0x8 Size=0x1
};

struct _FWUPDATE_CONFIGURATION_DESCRIPTOR// Size=0x12 (Id=617)
{
    struct _USB_CONFIGURATION_DESCRIPTOR UsbConfigurationDescriptor;// Offset=0x0 Size=0x9
    struct _USB_INTERFACE_DESCRIPTOR UsbInterfaceDescriptor;// Offset=0x9 Size=0x9
};
