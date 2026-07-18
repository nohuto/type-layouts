struct _PCI_EXPRESS_ENHANCED_CAPABILITY_HEADER// Size=0x4 (Id=1754)
{
    unsigned short CapabilityID;// Offset=0x0 Size=0x2
    struct // Size=0x2 (Id=0)
    {
        unsigned short Version:4;// Offset=0x2 Size=0x2 BitOffset=0x0 BitSize=0x4
        unsigned short Next:12;// Offset=0x2 Size=0x2 BitOffset=0x4 BitSize=0xc
    };
};

union _PCI_EXPRESS_RESIZABLE_BAR_CAPABILITY_REGISTER// Size=0x4 (Id=3212)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long Rsvd:4;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x4
        unsigned long SizesSupported:20;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x14
        unsigned long Rsvd2:8;// Offset=0x0 Size=0x4 BitOffset=0x18 BitSize=0x8
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};

union _PCI_EXPRESS_RESIZABLE_BAR_CONTROL_REGISTER// Size=0x4 (Id=1508)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long BarIndex:3;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x3
        unsigned long Rsvd:2;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x2
        unsigned long NumberOfResizableBars:3;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x3
        unsigned long BarSize:5;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x5
        unsigned long Rsvd2:19;// Offset=0x0 Size=0x4 BitOffset=0xd BitSize=0x13
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};

struct _PCI_EXPRESS_RESIZABLE_BAR_ENTRY// Size=0x8 (Id=3650)
{
    union _PCI_EXPRESS_RESIZABLE_BAR_CAPABILITY_REGISTER Capability;// Offset=0x0 Size=0x4
    union _PCI_EXPRESS_RESIZABLE_BAR_CONTROL_REGISTER Control;// Offset=0x4 Size=0x4
};

struct _PCI_EXPRESS_RESIZABLE_BAR_CAPABILITY// Size=0x34 (Id=2434)
{
    struct _PCI_EXPRESS_ENHANCED_CAPABILITY_HEADER Header;// Offset=0x0 Size=0x4
    struct _PCI_EXPRESS_RESIZABLE_BAR_ENTRY Entry[6];// Offset=0x4 Size=0x30
};
