struct _LIST_ENTRY// Size=0x10 (Id=1060)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

enum _IOMMU_DEVICE_CREATION_CONFIGURATION_TYPE
{
    IommuDeviceCreationConfigTypeNone=0,
    IommuDeviceCreationConfigTypeAcpi=1,
    IommuDeviceCreationConfigTypeDeviceId=2,
    IommuDeviceCreationConfigTypePasid=3,
    IommuDeviceCreationConfigTypeMax=4
};

struct _IOMMU_DEVICE_CREATION_CONFIGURATION_ACPI// Size=0x8 (Id=3535)
{
    unsigned int InputMappingBase;// Offset=0x0 Size=0x4
    unsigned int MappingsCount;// Offset=0x4 Size=0x4
};

enum _IOMMU_PASID_CONFIGURATION_TYPE
{
    PasidConfigTypeDefaultPasidOnly=0,
    PasidConfigTypePasidTaggedDma=1,
    PasidConfigTypeMax=2
};

struct _IOMMU_DEVICE_CREATION_CONFIGURATION_PASID// Size=0x8 (Id=3568)
{
    enum _IOMMU_PASID_CONFIGURATION_TYPE ConfigType;// Offset=0x0 Size=0x4
    unsigned char SuppressPasidFaults;// Offset=0x4 Size=0x1
};

struct _IOMMU_DEVICE_CREATION_CONFIGURATION// Size=0x20 (Id=2992)
{
    struct _LIST_ENTRY NextConfiguration;// Offset=0x0 Size=0x10
    enum _IOMMU_DEVICE_CREATION_CONFIGURATION_TYPE ConfigType;// Offset=0x10 Size=0x4
    union // Size=0x20 (Id=0)
    {
        struct _IOMMU_DEVICE_CREATION_CONFIGURATION_ACPI Acpi;// Offset=0x18 Size=0x8
        void * DeviceId;// Offset=0x18 Size=0x8
        struct _IOMMU_DEVICE_CREATION_CONFIGURATION_PASID Pasid;// Offset=0x18 Size=0x8
    };
};
