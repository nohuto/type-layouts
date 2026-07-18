union NVME_CDW11_FEATURE_ARBITRATION// Size=0x4 (Id=799)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long AB:3;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x3
        unsigned long Reserved0:5;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x5
        unsigned long LPW:8;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x8
        unsigned long MPW:8;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x8
        unsigned long HPW:8;// Offset=0x0 Size=0x4 BitOffset=0x18 BitSize=0x8
    };
    unsigned long AsUlong;// Offset=0x0 Size=0x4
};
