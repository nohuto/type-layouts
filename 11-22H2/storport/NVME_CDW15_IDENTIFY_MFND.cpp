union NVME_CDW15_IDENTIFY_MFND// Size=0x4 (Id=411)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long MCID:8;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x8
        unsigned long MFNDS:8;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x8
        unsigned long Reserved:16;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x10
    };
    unsigned long AsUlong;// Offset=0x0 Size=0x4
};
