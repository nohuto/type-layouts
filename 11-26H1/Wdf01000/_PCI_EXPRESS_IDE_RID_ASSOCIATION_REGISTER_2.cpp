union _PCI_EXPRESS_IDE_RID_ASSOCIATION_REGISTER_2// Size=0x4 (Id=3994)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long Valid:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Rsvd:7;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x7
        unsigned long RidBase:16;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x10
        unsigned long SegmentBase:8;// Offset=0x0 Size=0x4 BitOffset=0x18 BitSize=0x8
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};
