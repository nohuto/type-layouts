union _anonymous_496// Size=0x4 (Id=496)
{
    unsigned long AsUlong;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long SublinkSpeedAttrCount:5;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x5
        unsigned long SublinkSpeedIDCount:4;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x4
        unsigned long Reserved:23;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x17
    };
};

union _anonymous_497// Size=0x2 (Id=497)
{
    unsigned short AsUshort;// Offset=0x0 Size=0x2
    struct // Size=0x2 (Id=0)
    {
        unsigned short SublinkSpeedAttrID:4;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x4
        unsigned short Reserved:4;// Offset=0x0 Size=0x2 BitOffset=0x4 BitSize=0x4
        unsigned short MinRxLaneCount:4;// Offset=0x0 Size=0x2 BitOffset=0x8 BitSize=0x4
        unsigned short MinTxLaneCount:4;// Offset=0x0 Size=0x2 BitOffset=0xc BitSize=0x4
    };
};

union _USB_DEVICE_CAPABILITY_SUPERSPEEDPLUS_SPEED// Size=0x4 (Id=514)
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

struct _USB_DEVICE_CAPABILITY_SUPERSPEEDPLUS_USB_DESCRIPTOR// Size=0x10 (Id=498)
{
    unsigned char bLength;// Offset=0x0 Size=0x1
    unsigned char bDescriptorType;// Offset=0x1 Size=0x1
    unsigned char bDevCapabilityType;// Offset=0x2 Size=0x1
    unsigned char bReserved;// Offset=0x3 Size=0x1
    union _anonymous_496 bmAttributes;// Offset=0x4 Size=0x4
    union _anonymous_497 wFunctionalitySupport;// Offset=0x8 Size=0x2
    unsigned short wReserved;// Offset=0xa Size=0x2
    union _USB_DEVICE_CAPABILITY_SUPERSPEEDPLUS_SPEED bmSublinkSpeedAttr[1];// Offset=0xc Size=0x4
};
