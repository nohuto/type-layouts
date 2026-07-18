struct _PCI_FIRMWARE_BUS_CAPS// Size=0x10 (Id=2858)
{
    unsigned short Type;// Offset=0x0 Size=0x2
    unsigned short Length;// Offset=0x2 Size=0x2
    struct // Size=0x1 (Id=0)
    {
        unsigned char SixtyFourBitDevice:1;// Offset=0x4 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char PciXMode1EccCapable:1;// Offset=0x4 Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char DeviceIdMessagingCapable:1;// Offset=0x4 Size=0x1 BitOffset=0x2 BitSize=0x1
        unsigned char ObffWakeSignalCapable:1;// Offset=0x4 Size=0x1 BitOffset=0x3 BitSize=0x1
        unsigned char Reserved1:4;// Offset=0x4 Size=0x1 BitOffset=0x4 BitSize=0x4
    };
    unsigned char CurrentSpeedAndMode;// Offset=0x5 Size=0x1
    unsigned char SupportedSpeedsAndModesLowByte;// Offset=0x6 Size=0x1
    unsigned char SupportedSpeedsAndModesHighByte;// Offset=0x7 Size=0x1
    unsigned char Voltage;// Offset=0x8 Size=0x1
    unsigned char Reserved2[7];// Offset=0x9 Size=0x7
};
