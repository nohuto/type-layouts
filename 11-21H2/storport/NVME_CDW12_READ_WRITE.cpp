union NVME_CDW12_READ_WRITE// Size=0x4 (Id=539)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long NLB:16;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x10
        unsigned long Reserved0:4;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x4
        unsigned long DTYPE:4;// Offset=0x0 Size=0x4 BitOffset=0x14 BitSize=0x4
        unsigned long Reserved1:2;// Offset=0x0 Size=0x4 BitOffset=0x18 BitSize=0x2
        unsigned long PRINFO:4;// Offset=0x0 Size=0x4 BitOffset=0x1a BitSize=0x4
        unsigned long FUA:1;// Offset=0x0 Size=0x4 BitOffset=0x1e BitSize=0x1
        unsigned long LR:1;// Offset=0x0 Size=0x4 BitOffset=0x1f BitSize=0x1
    };
    unsigned long AsUlong;// Offset=0x0 Size=0x4
};
