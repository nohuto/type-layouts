struct _GUID// Size=0x10 (Id=175)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

struct _USB_DEVICE_CAPABILITY_PLATFORM_DESCRIPTOR// Size=0x15 (Id=2739)
{
    unsigned char bLength;// Offset=0x0 Size=0x1
    unsigned char bDescriptorType;// Offset=0x1 Size=0x1
    unsigned char bDevCapabilityType;// Offset=0x2 Size=0x1
    unsigned char bReserved;// Offset=0x3 Size=0x1
    struct _GUID PlatformCapabilityUuid;// Offset=0x4 Size=0x10
    unsigned char CapabililityData[1];// Offset=0x14 Size=0x1
};
