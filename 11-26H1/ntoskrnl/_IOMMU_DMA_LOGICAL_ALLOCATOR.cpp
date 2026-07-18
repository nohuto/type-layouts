enum _IOMMU_DMA_LOGICAL_ALLOCATOR_TYPE
{
    IommuDmaLogicalAllocatorNone=0,
    IommuDmaLogicalAllocatorBuddy=1,
    IommuDmaLogicalAllocatorMax=2
};

struct _IOMMU_DMA_LOGICAL_ALLOCATOR// Size=0x18 (Id=452)
{
    struct _IOMMU_DMA_LOGICAL_ALLOCATOR_OPERATIONS_V1 * Operations;// Offset=0x0 Size=0x8
    unsigned long Version;// Offset=0x8 Size=0x4
    unsigned long Size;// Offset=0xc Size=0x4
    enum _IOMMU_DMA_LOGICAL_ALLOCATOR_TYPE AllocatorType;// Offset=0x10 Size=0x4
};
