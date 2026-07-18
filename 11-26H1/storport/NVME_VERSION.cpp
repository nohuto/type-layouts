union NVME_VERSION// Size=0x4 (Id=547)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long TER:8;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x8
        unsigned long MNR:8;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x8
        unsigned long MJR:16;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x10
    };
    unsigned long AsUlong;// Offset=0x0 Size=0x4
};
