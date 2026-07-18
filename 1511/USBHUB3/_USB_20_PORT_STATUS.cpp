union _USB_20_PORT_STATUS// Size=0x2 (Id=660)
{
    unsigned short AsUshort16;// Offset=0x0 Size=0x2
    struct // Size=0x2 (Id=0)
    {
        unsigned short CurrentConnectStatus:1;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x1
        unsigned short PortEnabledDisabled:1;// Offset=0x0 Size=0x2 BitOffset=0x1 BitSize=0x1
        unsigned short Suspend:1;// Offset=0x0 Size=0x2 BitOffset=0x2 BitSize=0x1
        unsigned short OverCurrent:1;// Offset=0x0 Size=0x2 BitOffset=0x3 BitSize=0x1
        unsigned short Reset:1;// Offset=0x0 Size=0x2 BitOffset=0x4 BitSize=0x1
        unsigned short L1:1;// Offset=0x0 Size=0x2 BitOffset=0x5 BitSize=0x1
        unsigned short Reserved0:2;// Offset=0x0 Size=0x2 BitOffset=0x6 BitSize=0x2
        unsigned short PortPower:1;// Offset=0x0 Size=0x2 BitOffset=0x8 BitSize=0x1
        unsigned short LowSpeedDeviceAttached:1;// Offset=0x0 Size=0x2 BitOffset=0x9 BitSize=0x1
        unsigned short HighSpeedDeviceAttached:1;// Offset=0x0 Size=0x2 BitOffset=0xa BitSize=0x1
        unsigned short PortTestMode:1;// Offset=0x0 Size=0x2 BitOffset=0xb BitSize=0x1
        unsigned short PortIndicatorControl:1;// Offset=0x0 Size=0x2 BitOffset=0xc BitSize=0x1
        unsigned short Reserved1:3;// Offset=0x0 Size=0x2 BitOffset=0xd BitSize=0x3
    };
};
