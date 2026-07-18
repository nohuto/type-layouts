union _USB_DEVICE_STATUS// Size=0x2 (Id=438)
{
    unsigned short AsUshort16;// Offset=0x0 Size=0x2
    struct // Size=0x2 (Id=0)
    {
        unsigned short SelfPowered:1;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x1
        unsigned short RemoteWakeup:1;// Offset=0x0 Size=0x2 BitOffset=0x1 BitSize=0x1
        unsigned short U1Enable:1;// Offset=0x0 Size=0x2 BitOffset=0x2 BitSize=0x1
        unsigned short U2Enable:1;// Offset=0x0 Size=0x2 BitOffset=0x3 BitSize=0x1
        unsigned short LtmEnable:1;// Offset=0x0 Size=0x2 BitOffset=0x4 BitSize=0x1
        unsigned short Reserved:11;// Offset=0x0 Size=0x2 BitOffset=0x5 BitSize=0xb
    };
};
