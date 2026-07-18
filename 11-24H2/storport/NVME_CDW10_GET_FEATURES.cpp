union NVME_CDW10_GET_FEATURES// Size=0x4 (Id=1099)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long FID:8;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x8
        unsigned long SEL:3;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x3
        unsigned long Reserved0:21;// Offset=0x0 Size=0x4 BitOffset=0xb BitSize=0x15
    };
    unsigned long AsUlong;// Offset=0x0 Size=0x4
};
