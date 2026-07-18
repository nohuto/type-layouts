union NVME_CDW11_FEATURE_TEMPERATURE_THRESHOLD// Size=0x4 (Id=760)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long TMPTH:16;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x10
        unsigned long TMPSEL:4;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x4
        unsigned long THSEL:2;// Offset=0x0 Size=0x4 BitOffset=0x14 BitSize=0x2
        unsigned long Reserved0:10;// Offset=0x0 Size=0x4 BitOffset=0x16 BitSize=0xa
    };
    unsigned long AsUlong;// Offset=0x0 Size=0x4
};
