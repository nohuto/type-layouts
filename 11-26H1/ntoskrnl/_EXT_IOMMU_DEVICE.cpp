struct _EXT_IOMMU_DEVICE// Size=0x38 (Id=426)
{
    void * Context;// Offset=0x0 Size=0x8
    struct _EXT_IOMMU * Iommu;// Offset=0x8 Size=0x8
    struct _EXT_IOMMU_DOMAIN * Domain;// Offset=0x10 Size=0x8
    unsigned long long AssociatedDomainId;// Offset=0x18 Size=0x8
    unsigned short FirmwareDomainId;// Offset=0x20 Size=0x2
    unsigned char FaultReportingEnabled;// Offset=0x22 Size=0x1
    unsigned char IsReservedDevice;// Offset=0x23 Size=0x1
    struct _EXT_IOMMU_DOMAIN * DefaultS1Domain;// Offset=0x28 Size=0x8
    unsigned char DefaultDmaAlwaysBlocked;// Offset=0x30 Size=0x1
};
