union _USB_DEVICE_CAPABILITY_SUPERSPEEDPLUS_USB_DESCRIPTOR::<unnamed-type-wFunctionalitySupport>// Size=0x2 (Id=4077)
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
