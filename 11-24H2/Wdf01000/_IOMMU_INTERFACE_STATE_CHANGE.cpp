union _IOMMU_INTERFACE_STATE_CHANGE_FIELDS// Size=0x4 (Id=3358)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long AvailableDomainTypes:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Reserved:31;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1f
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};

struct _IOMMU_INTERFACE_STATE_CHANGE// Size=0x8 (Id=3412)
{
    union _IOMMU_INTERFACE_STATE_CHANGE_FIELDS PresentFields;// Offset=0x0 Size=0x4
    unsigned long AvailableDomainTypes;// Offset=0x4 Size=0x4
};
