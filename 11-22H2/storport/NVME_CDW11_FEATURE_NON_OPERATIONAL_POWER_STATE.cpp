union NVME_CDW11_FEATURE_NON_OPERATIONAL_POWER_STATE// Size=0x4 (Id=839)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long NOPPME:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Reserved0:31;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1f
    };
    unsigned long AsUlong;// Offset=0x0 Size=0x4
};
