union NVME_CDW10_IDENTIFY// Size=0x4 (Id=863)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long CNS:8;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x8
        unsigned long Reserved:8;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x8
        unsigned long CNTID:16;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x10
    };
    unsigned long AsUlong;// Offset=0x0 Size=0x4
};
