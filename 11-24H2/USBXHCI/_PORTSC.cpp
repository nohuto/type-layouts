union _PORTSC// Size=0x4 (Id=572)
{
    unsigned long AsUlong32;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long CurrentConnectStatus:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long PortEnabled:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long TunneledMode:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long OverCurrentActive:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long PortReset:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long PortLinkState:4;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x4
        unsigned long PortPower:1;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x1
        unsigned long PortSpeed:4;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x4
        unsigned long PortIndicatorControl:2;// Offset=0x0 Size=0x4 BitOffset=0xe BitSize=0x2
        unsigned long PortLinkStateWriteStrobe:1;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x1
        unsigned long ConnectStatusChange:1;// Offset=0x0 Size=0x4 BitOffset=0x11 BitSize=0x1
        unsigned long PortEnabledOrDisabledChange:1;// Offset=0x0 Size=0x4 BitOffset=0x12 BitSize=0x1
        unsigned long WarmPortResetChange:1;// Offset=0x0 Size=0x4 BitOffset=0x13 BitSize=0x1
        unsigned long OverCurrentChange:1;// Offset=0x0 Size=0x4 BitOffset=0x14 BitSize=0x1
        unsigned long PortResetChange:1;// Offset=0x0 Size=0x4 BitOffset=0x15 BitSize=0x1
        unsigned long PortLinkStateChange:1;// Offset=0x0 Size=0x4 BitOffset=0x16 BitSize=0x1
        unsigned long PortConfigErrorChange:1;// Offset=0x0 Size=0x4 BitOffset=0x17 BitSize=0x1
        unsigned long ColdAttachStatus:1;// Offset=0x0 Size=0x4 BitOffset=0x18 BitSize=0x1
        unsigned long WakeOnConnectEnable:1;// Offset=0x0 Size=0x4 BitOffset=0x19 BitSize=0x1
        unsigned long WakeOnDisconnectEnable:1;// Offset=0x0 Size=0x4 BitOffset=0x1a BitSize=0x1
        unsigned long WakeOnOverCurrentEnable:1;// Offset=0x0 Size=0x4 BitOffset=0x1b BitSize=0x1
        unsigned long Reserved2:2;// Offset=0x0 Size=0x4 BitOffset=0x1c BitSize=0x2
        unsigned long DeviceRemovable:1;// Offset=0x0 Size=0x4 BitOffset=0x1e BitSize=0x1
        unsigned long WarmPortReset:1;// Offset=0x0 Size=0x4 BitOffset=0x1f BitSize=0x1
    };
};
