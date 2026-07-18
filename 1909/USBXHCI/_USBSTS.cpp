union _USBSTS// Size=0x4 (Id=574)
{
    unsigned long AsUlong32;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long HcHalted:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Reserved0:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long HostSystemError:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long EventInterrupt:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long PortChangeDetect:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long Reserved1:3;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x3
        unsigned long SaveStateStatus:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
        unsigned long RestoreStateStatus:1;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x1
        unsigned long SaveRestoreError:1;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x1
        unsigned long ControllerNotReady:1;// Offset=0x0 Size=0x4 BitOffset=0xb BitSize=0x1
        unsigned long HostControllerError:1;// Offset=0x0 Size=0x4 BitOffset=0xc BitSize=0x1
        unsigned long Reserved2:19;// Offset=0x0 Size=0x4 BitOffset=0xd BitSize=0x13
    };
};
