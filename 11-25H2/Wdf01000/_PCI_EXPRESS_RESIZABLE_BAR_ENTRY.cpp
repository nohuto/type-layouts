union _PCI_EXPRESS_RESIZABLE_BAR_CAPABILITY_REGISTER// Size=0x4 (Id=3761)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long Rsvd:4;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x4
        unsigned long SizesSupported:20;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x14
        unsigned long Rsvd2:8;// Offset=0x0 Size=0x4 BitOffset=0x18 BitSize=0x8
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};

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

struct _PCI_EXPRESS_RESIZABLE_BAR_ENTRY// Size=0x8 (Id=3500)
{
    union _PCI_EXPRESS_RESIZABLE_BAR_CAPABILITY_REGISTER Capability;// Offset=0x0 Size=0x4
    union _PCI_EXPRESS_RESIZABLE_BAR_CONTROL_REGISTER Control;// Offset=0x4 Size=0x4
};
