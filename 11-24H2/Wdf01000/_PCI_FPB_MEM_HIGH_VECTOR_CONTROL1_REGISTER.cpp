union _PCI_FPB_MEM_HIGH_VECTOR_CONTROL1_REGISTER// Size=0x4 (Id=2244)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long MemHighDecodeMechanismEnable:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Rsvd0:3;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x3
        unsigned long MemHighVectorGranularity:4;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x4
        unsigned long Rsvd1:20;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x14
        unsigned long MemHighVectorStartLower:4;// Offset=0x0 Size=0x4 BitOffset=0x1c BitSize=0x4
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};
