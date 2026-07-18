struct _USB_DEVICE_QUALIFIER_DESCRIPTOR// Size=0xa (Id=536)
{
    unsigned char bLength;// Offset=0x0 Size=0x1
    unsigned char bDescriptorType;// Offset=0x1 Size=0x1
    unsigned short bcdUSB;// Offset=0x2 Size=0x2
    unsigned char bDeviceClass;// Offset=0x4 Size=0x1
    unsigned char bDeviceSubClass;// Offset=0x5 Size=0x1
    unsigned char bDeviceProtocol;// Offset=0x6 Size=0x1
    unsigned char bMaxPacketSize0;// Offset=0x7 Size=0x1
    unsigned char bNumConfigurations;// Offset=0x8 Size=0x1
    unsigned char bReserved;// Offset=0x9 Size=0x1
};
