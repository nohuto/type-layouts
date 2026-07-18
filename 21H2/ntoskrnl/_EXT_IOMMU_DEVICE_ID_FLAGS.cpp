union _EXT_IOMMU_DEVICE_ID_FLAGS// Size=0x2 (Id=348)
{
    unsigned short AsUSHORT;// Offset=0x0 Size=0x2
    struct // Size=0x2 (Id=0)
    {
        unsigned short IsAliased:1;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x1
        unsigned short HasMultipleIds:1;// Offset=0x0 Size=0x2 BitOffset=0x1 BitSize=0x1
        unsigned short Reserved:14;// Offset=0x0 Size=0x2 BitOffset=0x2 BitSize=0xe
    };
};
