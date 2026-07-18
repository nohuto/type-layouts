struct _PCI_ROOT_BUS_DSM_CAPABILITY_STRUCTURE// Size=0x10 (Id=515)
{
    unsigned short BusType;// Offset=0x0 Size=0x2
    unsigned short Length;// Offset=0x2 Size=0x2
    unsigned char Attributes;// Offset=0x4 Size=0x1
    unsigned char CurrentSpeedAndMode;// Offset=0x5 Size=0x1
    unsigned short SupportedSpeedsAndModes;// Offset=0x6 Size=0x2
    unsigned char Voltage;// Offset=0x8 Size=0x1
    unsigned char Reserved[7];// Offset=0x9 Size=0x7
};
