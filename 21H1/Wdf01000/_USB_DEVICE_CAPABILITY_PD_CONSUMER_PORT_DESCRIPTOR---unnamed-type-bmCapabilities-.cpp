union _USB_DEVICE_CAPABILITY_PD_CONSUMER_PORT_DESCRIPTOR::<unnamed-type-bmCapabilities>// Size=0x2 (Id=2325)
{
    unsigned short AsUshort;// Offset=0x0 Size=0x2
    struct // Size=0x2 (Id=0)
    {
        unsigned short BatteryCharging:1;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x1
        unsigned short USBPowerDelivery:1;// Offset=0x0 Size=0x2 BitOffset=0x1 BitSize=0x1
        unsigned short USBTypeCCurrent:1;// Offset=0x0 Size=0x2 BitOffset=0x2 BitSize=0x1
        unsigned short Reserved:13;// Offset=0x0 Size=0x2 BitOffset=0x3 BitSize=0xd
    };
};
