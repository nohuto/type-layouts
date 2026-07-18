enum _IOMMU_DMA_LOGICAL_ALLOCATOR_CAPABILITY_EXPLICIT_ADDRESS
{
    LogicalAllocatorCapabilityExplicitNotSupported=0,
    LogicalAllocatorCapabilityExplicitReservedOnly=1,
    LogicalAllocatorCapabilityExplicitAnyAddress=2
};

struct _IOMMU_DMA_LOGICAL_ALLOCATOR_CAPABILITIES// Size=0x4 (Id=475)
{
    enum _IOMMU_DMA_LOGICAL_ALLOCATOR_CAPABILITY_EXPLICIT_ADDRESS ExplicitAddressCapable;// Offset=0x0 Size=0x4
};
