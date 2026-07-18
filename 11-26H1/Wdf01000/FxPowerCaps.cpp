struct FxPowerCaps// Size=0x14 (Id=3033)
{
    unsigned short Caps;// Offset=0x0 Size=0x2
    unsigned char DeviceWake;// Offset=0x2 Size=0x1
    unsigned char SystemWake;// Offset=0x3 Size=0x1
    unsigned long States;// Offset=0x4 Size=0x4
    unsigned long D1Latency;// Offset=0x8 Size=0x4
    unsigned long D2Latency;// Offset=0xc Size=0x4
    unsigned long D3Latency;// Offset=0x10 Size=0x4
};
