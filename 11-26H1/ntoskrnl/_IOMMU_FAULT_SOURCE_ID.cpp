enum _IOMMU_FAULT_SOURCE_ID_TYPE
{
    IommuFaultSourceIdTypeHvLogicalId=0,
    IommuFaultTypeHalPciRid=1,
    IommuFaultTypeHalIommuStreamId=2,
    IommuFaultSourceIdTypeMax=3
};

struct _unnamed_1545// Size=0x8 (Id=1545)
{
    unsigned long Segment;// Offset=0x0 Size=0x4
    unsigned long Bdf;// Offset=0x4 Size=0x4
};

struct _unnamed_1546// Size=0x10 (Id=1546)
{
    struct _EXT_IOMMU * Iommu;// Offset=0x0 Size=0x8
    unsigned long StreamId;// Offset=0x8 Size=0x4
};

struct _IOMMU_FAULT_SOURCE_ID// Size=0x18 (Id=1547)
{
    enum _IOMMU_FAULT_SOURCE_ID_TYPE Type;// Offset=0x0 Size=0x4
    union // Size=0x10 (Id=0)
    {
        unsigned long long LogicalId;// Offset=0x8 Size=0x8
        struct _unnamed_1545 PciRid;// Offset=0x8 Size=0x8
        struct _unnamed_1546 IommuStreamId;// Offset=0x8 Size=0x10
    };
};
