union _PCI_FPB_RID_VECTOR_CONTROL1_REGISTER// Size=0x4 (Id=2874)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long RidDecodeMechanismEnable:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Rsvd0:3;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x3
        unsigned long RidVectorGranularity:4;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x4
        unsigned long Rsvd1:11;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0xb
        unsigned long RidVectorStart:13;// Offset=0x0 Size=0x4 BitOffset=0x13 BitSize=0xd
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};
