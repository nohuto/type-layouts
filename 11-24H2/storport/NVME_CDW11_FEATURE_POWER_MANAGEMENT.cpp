union NVME_CDW11_FEATURE_POWER_MANAGEMENT// Size=0x4 (Id=1234)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long PS:5;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x5
        unsigned long Reserved0:27;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1b
    };
    unsigned long AsUlong;// Offset=0x0 Size=0x4
};
