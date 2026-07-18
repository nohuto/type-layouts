union _PCI_EXPRESS_PTM_CONTROL_REGISTER// Size=0x4 (Id=2423)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long Enable:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long RootSelect:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long Rsvd:6;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x6
        unsigned long EffectiveGranularity:8;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x8
        unsigned long Rsvd2:16;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x10
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};
