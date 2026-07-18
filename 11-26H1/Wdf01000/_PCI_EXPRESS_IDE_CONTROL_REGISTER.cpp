union _PCI_EXPRESS_IDE_CONTROL_REGISTER// Size=0x4 (Id=910)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long Rsvd0:2;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x2
        unsigned long FlowThroughIdeStreamEnabled:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long Rsvd1:29;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1d
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};
