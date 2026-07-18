union _PCI_EXPRESS_L1_PM_SS_CONTROL_2_REGISTER// Size=0x4 (Id=2011)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long TPowerOnScale:2;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x2
        unsigned long Rsvd:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long TPowerOnValue:5;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x5
        unsigned long Rsvd2:24;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x18
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};
