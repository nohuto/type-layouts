union _anonymous_704// Size=0x4 (Id=704)
{
    unsigned long AsUlong;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long Reserved1:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long BatteryCharging:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long USBPowerDelivery:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long Provider:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long Consumer:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long ChargingPolicy:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long TypeCCurrent:1;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1
        unsigned long Reserved2:1;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x1
        unsigned long ACSupply:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
        unsigned long Battery:1;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x1
        unsigned long Other:1;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x1
        unsigned long NumBatteries:3;// Offset=0x0 Size=0x4 BitOffset=0xb BitSize=0x3
        unsigned long UsesVbus:1;// Offset=0x0 Size=0x4 BitOffset=0xe BitSize=0x1
        unsigned long Reserved3:17;// Offset=0x0 Size=0x4 BitOffset=0xf BitSize=0x11
    };
};

struct _USB_DEVICE_CAPABILITY_POWER_DELIVERY_DESCRIPTOR// Size=0x12 (Id=705)
{
    unsigned char bLength;// Offset=0x0 Size=0x1
    unsigned char bDescriptorType;// Offset=0x1 Size=0x1
    unsigned char bDevCapabilityType;// Offset=0x2 Size=0x1
    unsigned char bReserved;// Offset=0x3 Size=0x1
    union _anonymous_704 bmAttributes;// Offset=0x4 Size=0x4
    unsigned short bmProviderPorts;// Offset=0x8 Size=0x2
    unsigned short bmConsumerPorts;// Offset=0xa Size=0x2
    unsigned short bcdBCVersion;// Offset=0xc Size=0x2
    unsigned short bcdPDVersion;// Offset=0xe Size=0x2
    unsigned short bcdUSBTypeCVersion;// Offset=0x10 Size=0x2
};
