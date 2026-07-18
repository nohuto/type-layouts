union _PCI_FPB_VECTOR_ACCESS_CONTROL_REGISTER// Size=0x4 (Id=4166)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long VectorAccessOffset:8;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x8
        unsigned long Rsvd0:6;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x6
        unsigned long VectorSelect:2;// Offset=0x0 Size=0x4 BitOffset=0xe BitSize=0x2
        unsigned long Rsvd1:16;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x10
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};
