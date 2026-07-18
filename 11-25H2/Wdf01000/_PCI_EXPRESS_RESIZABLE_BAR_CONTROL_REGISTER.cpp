union _PCI_EXPRESS_RESIZABLE_BAR_CONTROL_REGISTER// Size=0x4 (Id=3809)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long BarIndex:3;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x3
        unsigned long Rsvd:2;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x2
        unsigned long NumberOfResizableBars:3;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x3
        unsigned long BarSize:6;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x6
        unsigned long Rsvd2:18;// Offset=0x0 Size=0x4 BitOffset=0xe BitSize=0x12
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};
