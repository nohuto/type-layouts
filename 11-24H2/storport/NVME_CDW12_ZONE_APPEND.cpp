union NVME_CDW12_ZONE_APPEND// Size=0x4 (Id=1174)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long NLB:16;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x10
        unsigned long Reserved:9;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x9
        unsigned long PIREMAP:1;// Offset=0x0 Size=0x4 BitOffset=0x19 BitSize=0x1
        unsigned long PRINFO:4;// Offset=0x0 Size=0x4 BitOffset=0x1a BitSize=0x4
        unsigned long FUA:1;// Offset=0x0 Size=0x4 BitOffset=0x1e BitSize=0x1
        unsigned long LR:1;// Offset=0x0 Size=0x4 BitOffset=0x1f BitSize=0x1
    };
    unsigned long AsUlong;// Offset=0x0 Size=0x4
};
