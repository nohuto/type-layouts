union _DC_PORTSC// Size=0x4 (Id=635)
{
    unsigned long AsUlong32;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long CurrentConnectStatus:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long PortEnabled:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long Reserved0:2;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x2
        unsigned long PortReset:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long PortLinkState:4;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x4
        unsigned long Reserved1:1;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x1
        unsigned long PortSpeed:4;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x4
        unsigned long Reserved2:3;// Offset=0x0 Size=0x4 BitOffset=0xe BitSize=0x3
        unsigned long ConnectStatusChange:1;// Offset=0x0 Size=0x4 BitOffset=0x11 BitSize=0x1
        unsigned long Reserved3:3;// Offset=0x0 Size=0x4 BitOffset=0x12 BitSize=0x3
        unsigned long PortResetChange:1;// Offset=0x0 Size=0x4 BitOffset=0x15 BitSize=0x1
        unsigned long PortLinkStateChange:1;// Offset=0x0 Size=0x4 BitOffset=0x16 BitSize=0x1
        unsigned long PortConfigErrorChange:1;// Offset=0x0 Size=0x4 BitOffset=0x17 BitSize=0x1
        unsigned long Reserved4:8;// Offset=0x0 Size=0x4 BitOffset=0x18 BitSize=0x8
    };
};
