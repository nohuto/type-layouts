union _PCI_EXPRESS_RESIZABLE_BAR_CAPABILITY_REGISTER// Size=0x4 (Id=3733)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long Rsvd:4;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x4
        unsigned long SizesSupported:20;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x14
        unsigned long Rsvd2:8;// Offset=0x0 Size=0x4 BitOffset=0x18 BitSize=0x8
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};
