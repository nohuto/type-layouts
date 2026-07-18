struct _USB_DEVICE_CAPABILITY_SUPERSPEED_USB_DESCRIPTOR// Size=0xa (Id=279)
{
    unsigned char bLength;// Offset=0x0 Size=0x1
    unsigned char bDescriptorType;// Offset=0x1 Size=0x1
    unsigned char bDevCapabilityType;// Offset=0x2 Size=0x1
    unsigned char bmAttributes;// Offset=0x3 Size=0x1
    unsigned short wSpeedsSupported;// Offset=0x4 Size=0x2
    unsigned char bFunctionalitySupport;// Offset=0x6 Size=0x1
    unsigned char bU1DevExitLat;// Offset=0x7 Size=0x1
    unsigned short wU2DevExitLat;// Offset=0x8 Size=0x2
};
