union _USB_DEVICE_CAPABILITY_SUPERSPEEDPLUS_SPEED// Size=0x4 (Id=613)
{
    unsigned long AsUlong32;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long SublinkSpeedAttrID:4;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x4
        unsigned long LaneSpeedExponent:2;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x2
        unsigned long SublinkTypeMode:1;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1
        unsigned long SublinkTypeDir:1;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x1
        unsigned long Reserved:6;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x6
        unsigned long LinkProtocol:2;// Offset=0x0 Size=0x4 BitOffset=0xe BitSize=0x2
        unsigned long LaneSpeedMantissa:16;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x10
    };
};
