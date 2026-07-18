struct _IOMMU_DMA_LOGICAL_ALLOCATOR_OPERATIONS_V1// Size=0x28 (Id=453)
{
    long  ( * AllocateLogicalAddress)(struct _IOMMU_DMA_LOGICAL_ALLOCATOR * ,unsigned long long * ,unsigned long long ,unsigned long long * ,unsigned long long * ,unsigned long long * );// Offset=0x0 Size=0x8
    long  ( * FreeLogicalAddress)(struct _IOMMU_DMA_LOGICAL_ALLOCATOR * ,unsigned long long );// Offset=0x8 Size=0x8
    long  ( * ReserveLogicalAddress)(struct _IOMMU_DMA_LOGICAL_ALLOCATOR * ,unsigned long long ,unsigned long long );// Offset=0x10 Size=0x8
    struct _IOMMU_DMA_LOGICAL_ALLOCATOR_CAPABILITIES  ( * QueryCapabilities)(struct _IOMMU_DMA_LOGICAL_ALLOCATOR * );// Offset=0x18 Size=0x8
    void  ( * CleanUp)(struct _IOMMU_DMA_LOGICAL_ALLOCATOR * );// Offset=0x20 Size=0x8
};
