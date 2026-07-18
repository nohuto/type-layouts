union _USB_HUB_PORT_EVENT// Size=0x8 (Id=260)
{
    union // Size=0x8 (Id=0)
    {
        unsigned long ul;// Offset=0x0 Size=0x4
        struct // Size=0x8 (Id=0)
        {
            unsigned long ConnectChange:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long EnableChange:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
            unsigned long SuspendChange:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
            unsigned long OvercurrentChange:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
            unsigned long ResetChange:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
            unsigned long Reserved_do_not_use:11;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0xb
            unsigned long TimeoutChange:1;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x1
            unsigned long DriverResetChange:1;// Offset=0x0 Size=0x4 BitOffset=0x11 BitSize=0x1
            unsigned long RequestPortSuspend:1;// Offset=0x0 Size=0x4 BitOffset=0x12 BitSize=0x1
            unsigned long PauseChange:1;// Offset=0x0 Size=0x4 BitOffset=0x13 BitSize=0x1
            unsigned long RequestPortResume:1;// Offset=0x0 Size=0x4 BitOffset=0x14 BitSize=0x1
            unsigned long Unused:13;// Offset=0x4 Size=0x4 BitOffset=0x0 BitSize=0xd
        };
        unsigned short HwChange;// Offset=0x0 Size=0x2
        unsigned short SwChange;// Offset=0x2 Size=0x2
    };
};
