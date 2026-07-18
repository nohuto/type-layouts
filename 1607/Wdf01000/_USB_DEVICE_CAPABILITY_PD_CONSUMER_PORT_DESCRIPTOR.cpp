struct _USB_DEVICE_CAPABILITY_PD_CONSUMER_PORT_DESCRIPTOR// Size=0x18 (Id=2632)
{
    union // Size=0x4 (Id=0)
    {
        unsigned char bLength;// Offset=0x0 Size=0x1
        unsigned char bDescriptorType;// Offset=0x1 Size=0x1
        unsigned char bDevCapabilityType;// Offset=0x2 Size=0x1
        unsigned char bReserved;// Offset=0x3 Size=0x1
        union <unnamed-type-bmCapabilities>// Size=0x2 (Id=15220)
        {
            unsigned short AsUshort;// Offset=0x0 Size=0x2
            unsigned short BatteryCharging:1;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x1
            unsigned short USBPowerDelivery:1;// Offset=0x0 Size=0x2 BitOffset=0x1 BitSize=0x1
            unsigned short USBTypeCCurrent:1;// Offset=0x0 Size=0x2 BitOffset=0x2 BitSize=0x1
            unsigned short Reserved:13;// Offset=0x0 Size=0x2 BitOffset=0x3 BitSize=0xd
        };
        union _USB_DEVICE_CAPABILITY_PD_CONSUMER_PORT_DESCRIPTOR::<unnamed-type-bmCapabilities> bmCapabilities;// Offset=0x4 Size=0x2
    };
    unsigned short wMinVoltage;// Offset=0x6 Size=0x2
    unsigned short wMaxVoltage;// Offset=0x8 Size=0x2
    unsigned short wReserved;// Offset=0xa Size=0x2
    unsigned long dwMaxOperatingPower;// Offset=0xc Size=0x4
    unsigned long dwMaxPeakPower;// Offset=0x10 Size=0x4
    unsigned long dwMaxPeakPowerTime;// Offset=0x14 Size=0x4
};
