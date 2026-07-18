union _IOMMU_ATS_SETTINGS// Size=0x1 (Id=1996)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char AtsSupported:1;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char AtsRequired:1;// Offset=0x0 Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char Rsvd:6;// Offset=0x0 Size=0x1 BitOffset=0x2 BitSize=0x6
    };
    unsigned char AsUCHAR;// Offset=0x0 Size=0x1
};
