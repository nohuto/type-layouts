union _IOMMU_DEVICE_PROPERTIES// Size=0x4 (Id=397)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long IsThunderbolt:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long DmaCapableAtBoot:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long ForceDisableDmaRemapping:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long IsUntrustedPort:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long Rsvd:28;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1c
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};
