union _PCI_EXPRESS_L1_PM_SS_CAPABILITIES_REGISTER// Size=0x4 (Id=1782)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long PciPmL12Supported:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long PciPmL11Supported:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long AspmL12Supported:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long AspmL11Supported:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long L1PmSsSupported:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long Rsvd:3;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x3
        unsigned long PortCommonModeRestoreTime:8;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x8
        unsigned long PortTPowerOnScale:2;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x2
        unsigned long Rsvd2:1;// Offset=0x0 Size=0x4 BitOffset=0x12 BitSize=0x1
        unsigned long PortTPowerOnValue:5;// Offset=0x0 Size=0x4 BitOffset=0x13 BitSize=0x5
        unsigned long Rsvd3:8;// Offset=0x0 Size=0x4 BitOffset=0x18 BitSize=0x8
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};
