struct _EXT_IOMMU_OUTPUT_ID_RANGE// Size=0x10 (Id=375)
{
    unsigned long long Base;// Offset=0x0 Size=0x8
    unsigned long long Count;// Offset=0x8 Size=0x8
};

struct _EXT_IOMMU_OUTPUT_MAPPING// Size=0x18 (Id=282)
{
    unsigned long RangeCount;// Offset=0x0 Size=0x4
    struct _EXT_IOMMU_OUTPUT_ID_RANGE Ranges[1];// Offset=0x8 Size=0x10
};
