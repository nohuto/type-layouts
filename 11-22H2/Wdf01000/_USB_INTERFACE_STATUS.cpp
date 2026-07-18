union _USB_INTERFACE_STATUS// Size=0x2 (Id=1867)
{
    unsigned short AsUshort16;// Offset=0x0 Size=0x2
    struct // Size=0x2 (Id=0)
    {
        unsigned short RemoteWakeupCapable:1;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x1
        unsigned short RemoteWakeupEnabled:1;// Offset=0x0 Size=0x2 BitOffset=0x1 BitSize=0x1
        unsigned short Reserved:14;// Offset=0x0 Size=0x2 BitOffset=0x2 BitSize=0xe
    };
};
