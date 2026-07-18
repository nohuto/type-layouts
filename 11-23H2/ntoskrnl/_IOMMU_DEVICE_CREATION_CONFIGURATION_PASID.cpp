enum _IOMMU_PASID_CONFIGURATION_TYPE
{
    PasidConfigTypeDefaultPasidOnly=0,
    PasidConfigTypePasidTaggedDma=1,
    PasidConfigTypeMax=2
};

struct _IOMMU_DEVICE_CREATION_CONFIGURATION_PASID// Size=0x8 (Id=2180)
{
    enum _IOMMU_PASID_CONFIGURATION_TYPE ConfigType;// Offset=0x0 Size=0x4
    unsigned char SuppressPasidFaults;// Offset=0x4 Size=0x1
};
