union NVME_CDW12_MFND_NAMESPACE_READ// Size=0x4 (Id=440)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long NLB:16;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x10
        unsigned long Reserved:15;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0xf
        unsigned long LR:1;// Offset=0x0 Size=0x4 BitOffset=0x1f BitSize=0x1
    };
    unsigned long AsUlong;// Offset=0x0 Size=0x4
};
