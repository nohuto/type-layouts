union _PCI_EXPRESS_CXL_DVSEC_RANGE_SIZE_LOW_REGISTER_V11// Size=0x4 (Id=3606)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long MemInfoValid:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long MemActive:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long MediaType:3;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x3
        unsigned long MemClass:3;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x3
        unsigned long DesiredInterleave:3;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x3
        unsigned long Reserved:17;// Offset=0x0 Size=0x4 BitOffset=0xb BitSize=0x11
        unsigned long MemSizeLow:4;// Offset=0x0 Size=0x4 BitOffset=0x1c BitSize=0x4
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};
