struct _USB_30_HUB_DESCRIPTOR// Size=0xc (Id=625)
{
    unsigned char bLength;// Offset=0x0 Size=0x1
    unsigned char bDescriptorType;// Offset=0x1 Size=0x1
    unsigned char bNumberOfPorts;// Offset=0x2 Size=0x1
    unsigned short wHubCharacteristics;// Offset=0x3 Size=0x2
    unsigned char bPowerOnToPowerGood;// Offset=0x5 Size=0x1
    unsigned char bHubControlCurrent;// Offset=0x6 Size=0x1
    unsigned char bHubHdrDecLat;// Offset=0x7 Size=0x1
    unsigned short wHubDelay;// Offset=0x8 Size=0x2
    unsigned short DeviceRemovable;// Offset=0xa Size=0x2
};
