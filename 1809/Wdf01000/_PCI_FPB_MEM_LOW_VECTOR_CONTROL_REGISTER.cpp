union _PCI_FPB_MEM_LOW_VECTOR_CONTROL_REGISTER// Size=0x4 (Id=4337)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long MemLowDecodeMechanismEnable:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Rsvd0:3;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x3
        unsigned long MemLowVectorGranularity:4;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x4
        unsigned long Rsvd1:12;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0xc
        unsigned long MemLowVectorStart:12;// Offset=0x0 Size=0x4 BitOffset=0x14 BitSize=0xc
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};
