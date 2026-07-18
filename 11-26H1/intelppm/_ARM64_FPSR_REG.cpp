union _ARM64_FPSR_REG// Size=0x4 (Id=4)
{
    unsigned long Value;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long IOC:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long DZC:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long OFC:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long UFC:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long IXC:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long res0_1:2;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x2
        unsigned long IDC:1;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x1
        unsigned long res0_2:19;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x13
        unsigned long QC:1;// Offset=0x0 Size=0x4 BitOffset=0x1b BitSize=0x1
        unsigned long V:1;// Offset=0x0 Size=0x4 BitOffset=0x1c BitSize=0x1
        unsigned long C:1;// Offset=0x0 Size=0x4 BitOffset=0x1d BitSize=0x1
        unsigned long Z:1;// Offset=0x0 Size=0x4 BitOffset=0x1e BitSize=0x1
        unsigned long N:1;// Offset=0x0 Size=0x4 BitOffset=0x1f BitSize=0x1
    };
};
