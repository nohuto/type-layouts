struct _LIST_ENTRY// Size=0x10 (Id=128)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

enum _IOMMU_DEVICE_CREATION_CONFIGURATION_TYPE
{
    IommuDeviceCreationConfigTypeNone=0,
    IommuDeviceCreationConfigTypeAcpi=1,
    IommuDeviceCreationConfigTypeMax=2
};

struct _IOMMU_DEVICE_CREATION_CONFIGURATION_ACPI// Size=0x8 (Id=2864)
{
    unsigned int InputMappingBase;// Offset=0x0 Size=0x4
    unsigned int MappingsCount;// Offset=0x4 Size=0x4
};

struct _IOMMU_DEVICE_CREATION_CONFIGURATION// Size=0x20 (Id=2164)
{
    struct _LIST_ENTRY NextConfiguration;// Offset=0x0 Size=0x10
    enum _IOMMU_DEVICE_CREATION_CONFIGURATION_TYPE ConfigType;// Offset=0x10 Size=0x4
    struct _IOMMU_DEVICE_CREATION_CONFIGURATION_ACPI Acpi;// Offset=0x14 Size=0x8
};
