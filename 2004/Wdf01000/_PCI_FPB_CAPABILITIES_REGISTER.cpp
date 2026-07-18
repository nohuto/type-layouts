union _PCI_FPB_CAPABILITIES_REGISTER// Size=0x4 (Id=2098)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long RidDecodeMechanismSupported:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long MemLowDecodeMechanismSupported:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long MemHighDecodeMechanismSupported:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long NumSecDev:5;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x5
        unsigned long RidVectorSizeSupported:3;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x3
        unsigned long Rsvd0:5;// Offset=0x0 Size=0x4 BitOffset=0xb BitSize=0x5
        unsigned long MemLowVectorSizeSupported:3;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x3
        unsigned long Rsvd1:5;// Offset=0x0 Size=0x4 BitOffset=0x13 BitSize=0x5
        unsigned long MemHighVectorSizeSupported:3;// Offset=0x0 Size=0x4 BitOffset=0x18 BitSize=0x3
        unsigned long Rsvd2:5;// Offset=0x0 Size=0x4 BitOffset=0x1b BitSize=0x5
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};
