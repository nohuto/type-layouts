union _PCI_FPB_RID_VECTOR_CONTROL2_REGISTER// Size=0x4 (Id=1712)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long Rsvd0:3;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x3
        unsigned long RidSecondaryStart:13;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0xd
        unsigned long Rsvd1:16;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x10
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};
