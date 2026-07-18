union _USBCMD// Size=0x4 (Id=507)
{
    unsigned long AsUlong32;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long RunStopBit:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long HostControllerReset:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long InterrupterEnable:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long HostSystemErrorEnable:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long Reserved0:3;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x3
        unsigned long LightHostControllerReset:1;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x1
        unsigned long ControllerSaveState:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
        unsigned long ControllerRestoreState:1;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x1
        unsigned long EnableWrapEvent:1;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x1
        unsigned long EnableU3MfIndexStop:1;// Offset=0x0 Size=0x4 BitOffset=0xb BitSize=0x1
        unsigned long Reserved1:1;// Offset=0x0 Size=0x4 BitOffset=0xc BitSize=0x1
        unsigned long CEMEnable:1;// Offset=0x0 Size=0x4 BitOffset=0xd BitSize=0x1
        unsigned long ExtendedTBCEnable:1;// Offset=0x0 Size=0x4 BitOffset=0xe BitSize=0x1
        unsigned long ExtendedTBCTRBStatusEnable:1;// Offset=0x0 Size=0x4 BitOffset=0xf BitSize=0x1
        unsigned long Reserved2:16;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x10
    };
};
