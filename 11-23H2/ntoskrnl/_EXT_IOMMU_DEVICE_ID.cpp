enum _EXT_IOMMU_DEVICE_TYPE
{
    EXT_IOMMU_DEVICE_TYPE_INVALID=0,
    EXT_IOMMU_DEVICE_TYPE_PCI=1,
    EXT_IOMMU_DEVICE_TYPE_ACPI=2,
    EXT_IOMMU_DEVICE_TYPE_IOAPIC=3,
    EXT_IOMMU_DEVICE_TYPE_LOGICAL=4,
    EXT_IOMMU_DEVICE_TYPE_TEST=5,
    EXT_IOMMU_DEVICE_TYPE_MAX=6
};

union _EXT_IOMMU_DEVICE_ID_FLAGS// Size=0x2 (Id=427)
{
    unsigned short AsUSHORT;// Offset=0x0 Size=0x2
    struct // Size=0x2 (Id=0)
    {
        unsigned short IsAliased:1;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x1
        unsigned short Reserved:15;// Offset=0x0 Size=0x2 BitOffset=0x1 BitSize=0xf
    };
};

struct _EXT_IOMMU_DEVICE_ID_PCI// Size=0x10 (Id=428)
{
    union // Size=0x8 (Id=0)
    {
        unsigned long long AsUINT64;// Offset=0x0 Size=0x8
        unsigned short PciSegmentNumber;// Offset=0x0 Size=0x2
        struct // Size=0x2 (Id=0)
        {
            unsigned short PhantomFunctionBits:2;// Offset=0x2 Size=0x2 BitOffset=0x0 BitSize=0x2
            unsigned short Reserved:6;// Offset=0x2 Size=0x2 BitOffset=0x2 BitSize=0x6
            unsigned short StartBusNumber:8;// Offset=0x2 Size=0x2 BitOffset=0x8 BitSize=0x8
        };
        unsigned short Bdf;// Offset=0x4 Size=0x2
        unsigned short DevicePathLength;// Offset=0x6 Size=0x2
    };
    unsigned short * DevicePath;// Offset=0x8 Size=0x8
};

struct _EXT_IOMMU_DEVICE_ID_ACPI// Size=0x8 (Id=414)
{
    char * ObjectName;// Offset=0x0 Size=0x8
};

struct _EXT_IOMMU_DEVICE_ID_TEST// Size=0x8 (Id=416)
{
    unsigned long long UniqueId;// Offset=0x0 Size=0x8
};

struct _EXT_IOMMU_DEVICE_ID// Size=0x18 (Id=399)
{
    enum _EXT_IOMMU_DEVICE_TYPE DeviceType;// Offset=0x0 Size=0x4
    union _EXT_IOMMU_DEVICE_ID_FLAGS Flags;// Offset=0x4 Size=0x2
    union // Size=0x10 (Id=0)
    {
        struct _EXT_IOMMU_DEVICE_ID_PCI Pci;// Offset=0x8 Size=0x10
        struct _EXT_IOMMU_DEVICE_ID_ACPI Acpi;// Offset=0x8 Size=0x8
        unsigned char IoApicId;// Offset=0x8 Size=0x1
        unsigned long long LogicalId;// Offset=0x8 Size=0x8
        struct _EXT_IOMMU_DEVICE_ID_TEST Test;// Offset=0x8 Size=0x8
    };
};
