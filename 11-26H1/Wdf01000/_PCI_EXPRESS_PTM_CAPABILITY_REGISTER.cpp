union _PCI_EXPRESS_PTM_CAPABILITY_REGISTER// Size=0x4 (Id=2061)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long RequesterCapable:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long ResponderCapable:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long RootCapable:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long Rsvd:5;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x5
        unsigned long LocalGranularity:8;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x8
        unsigned long Rsvd2:16;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x10
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};
