union _PCI_EXPRESS_L1_PM_SS_CONTROL_1_REGISTER// Size=0x4 (Id=2732)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long PciPmL12Enabled:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long PciPmL11Enabled:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long AspmL12Enabled:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long AspmL11Enabled:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long Rsvd:4;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x4
        unsigned long CommonModeRestoreTime:8;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x8
        unsigned long LtrL12ThresholdValue:10;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0xa
        unsigned long Rsvd2:3;// Offset=0x0 Size=0x4 BitOffset=0x1a BitSize=0x3
        unsigned long LtrL12ThresholdScale:3;// Offset=0x0 Size=0x4 BitOffset=0x1d BitSize=0x3
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};
