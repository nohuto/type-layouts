struct _IOMMU_DMA_RESERVED_REGION// Size=0x20 (Id=2134)
{
    struct _IOMMU_DMA_RESERVED_REGION * RegionNext;// Offset=0x0 Size=0x8
    unsigned long long Base;// Offset=0x8 Size=0x8
    unsigned long long NumberOfPages;// Offset=0x10 Size=0x8
    unsigned char ShouldMap;// Offset=0x18 Size=0x1
};
