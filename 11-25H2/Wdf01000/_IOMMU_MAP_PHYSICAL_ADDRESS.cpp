enum _IOMMU_MAP_PHYSICAL_ADDRESS_TYPE
{
    MapPhysicalAddressTypeMdl=0,
    MapPhysicalAddressTypeContiguousRange=1,
    MapPhysicalAddressTypePfn=2,
    MapPhysicalAddressTypeMax=3
};

struct _IOMMU_MAP_PHYSICAL_ADDRESS// Size=0x18 (Id=296)
{
    enum _IOMMU_MAP_PHYSICAL_ADDRESS_TYPE MapType;// Offset=0x0 Size=0x4
    union // Size=0x18 (Id=0)
    {
        struct _IOMMU_MAP_PHYSICAL_ADDRESS::_unnamed_305::<unnamed-type-Mdl> Mdl;// Offset=0x8 Size=0x8
        struct _IOMMU_MAP_PHYSICAL_ADDRESS::_unnamed_301::<unnamed-type-ContiguousRange> ContiguousRange;// Offset=0x8 Size=0x10
        struct _IOMMU_MAP_PHYSICAL_ADDRESS::_unnamed_298::<unnamed-type-PfnArray> PfnArray;// Offset=0x8 Size=0x10
    };
};
