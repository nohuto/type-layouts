union _USB_DEVICE_CAPABILITY_POWER_DELIVERY_DESCRIPTOR::<unnamed-type-bmAttributes>// Size=0x4 (Id=4171)
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
