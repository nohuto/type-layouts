struct _EXT_IOMMU_DEVICE// Size=0x28 (Id=420)
{
    void * Context;// Offset=0x0 Size=0x8
    struct _EXT_IOMMU * Iommu;// Offset=0x8 Size=0x8
    struct _EXT_IOMMU_DOMAIN * Domain;// Offset=0x10 Size=0x8
    unsigned long long AssociatedDomainId;// Offset=0x18 Size=0x8
    unsigned short FirmwareDomainId;// Offset=0x20 Size=0x2
    unsigned char FaultReportingEnabled;// Offset=0x22 Size=0x1
    unsigned char IsReservedDevice;// Offset=0x23 Size=0x1
};
