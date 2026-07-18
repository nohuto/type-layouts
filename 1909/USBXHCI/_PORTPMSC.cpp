union _PORTPMSC_USB3// Size=0x4 (Id=665)
{
    unsigned long AsUlong32;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long U1Timeout:8;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x8
        unsigned long U2Timeout:8;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x8
        unsigned long ForceLinkPMAccept:1;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x1
        unsigned long Reserved:15;// Offset=0x0 Size=0x4 BitOffset=0x11 BitSize=0xf
    };
};

union _PORTPMSC_USB2// Size=0x4 (Id=876)
{
    unsigned long AsUlong32;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long L1Status:3;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x3
        unsigned long RemoteWakeEnable:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long BestEfforServiceLatency:4;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x4
        unsigned long L1DeviceSlot:8;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x8
        unsigned long HardwareLPMEnable:1;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x1
        unsigned long Reserved0:11;// Offset=0x0 Size=0x4 BitOffset=0x11 BitSize=0xb
        unsigned long TestMode:4;// Offset=0x0 Size=0x4 BitOffset=0x1c BitSize=0x4
    };
};

union _PORTPMSC// Size=0x4 (Id=642)
{
    unsigned long AsUlong32;// Offset=0x0 Size=0x4
    union _PORTPMSC_USB3 Usb3;// Offset=0x0 Size=0x4
    union _PORTPMSC_USB2 Usb2;// Offset=0x0 Size=0x4
};
