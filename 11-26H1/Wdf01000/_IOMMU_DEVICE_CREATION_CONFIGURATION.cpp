struct _LIST_ENTRY// Size=0x10 (Id=1247)
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
    IommuDeviceCreationConfigTypeAts=4,
    IommuDeviceCreationConfigTypeDefaultDma=5,
    IommuDeviceCreationConfigTypeFaultHandling=6,
    IommuDeviceCreationConfigTypeMax=7
};

struct _IOMMU_DEVICE_CREATION_CONFIGURATION_ACPI// Size=0x8 (Id=3610)
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

struct _IOMMU_DEVICE_CREATION_CONFIGURATION_PASID// Size=0x8 (Id=3646)
{
    enum _IOMMU_PASID_CONFIGURATION_TYPE ConfigType;// Offset=0x0 Size=0x4
    unsigned char SuppressPasidFaults;// Offset=0x4 Size=0x1
};

struct _IOMMU_DEVICE_CREATION_CONFIGURATION_ATS// Size=0x8 (Id=3935)
{
    unsigned long long Reserved;// Offset=0x0 Size=0x8
};

struct _IOMMU_DEVICE_CREATION_CONFIGURATION_DEFAULT_DMA// Size=0x8 (Id=2869)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long AlwaysBlockDefaultDma:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long Reserved:63;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x3f
    };
};

struct _IOMMU_DEVICE_CREATION_CONFIGURATION_FAULT_HANDLING// Size=0x8 (Id=2135)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long SuppressBugcheckOnFault:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long Reserved:63;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x3f
    };
};

struct _IOMMU_DEVICE_CREATION_CONFIGURATION// Size=0x20 (Id=2890)
{
    struct _LIST_ENTRY NextConfiguration;// Offset=0x0 Size=0x10
    enum _IOMMU_DEVICE_CREATION_CONFIGURATION_TYPE ConfigType;// Offset=0x10 Size=0x4
    union // Size=0x20 (Id=0)
    {
        struct _IOMMU_DEVICE_CREATION_CONFIGURATION_ACPI Acpi;// Offset=0x18 Size=0x8
        void * DeviceId;// Offset=0x18 Size=0x8
        struct _IOMMU_DEVICE_CREATION_CONFIGURATION_PASID Pasid;// Offset=0x18 Size=0x8
        struct _IOMMU_DEVICE_CREATION_CONFIGURATION_ATS Ats;// Offset=0x18 Size=0x8
        struct _IOMMU_DEVICE_CREATION_CONFIGURATION_DEFAULT_DMA DefaultDma;// Offset=0x18 Size=0x8
        struct _IOMMU_DEVICE_CREATION_CONFIGURATION_FAULT_HANDLING FaultHandling;// Offset=0x18 Size=0x8
    };
};
