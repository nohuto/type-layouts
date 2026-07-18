enum _IOMMU_DMA_LOGICAL_ALLOCATOR_TYPE
{
    IommuDmaLogicalAllocatorNone=0,
    IommuDmaLogicalAllocatorBuddy=1,
    IommuDmaLogicalAllocatorMax=2
};

struct _IOMMU_DMA_LOGICAL_ALLOCATOR_CONFIG// Size=0x8 (Id=2075)
{
    enum _IOMMU_DMA_LOGICAL_ALLOCATOR_TYPE LogicalAllocatorType;// Offset=0x0 Size=0x4
    struct _IOMMU_DMA_LOGICAL_ALLOCATOR_CONFIG::_unnamed_3997::<unnamed-type-BuddyAllocatorConfig> BuddyAllocatorConfig;// Offset=0x4 Size=0x4
};
