struct _LIST_ENTRY// Size=0x10 (Id=3)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _IOMMU_FAULT_IGNORE_ENTRY// Size=0x28 (Id=374)
{
    struct _LIST_ENTRY ListEntry;// Offset=0x0 Size=0x10
    struct _EXT_IOMMU_DEVICE_ID * DeviceId;// Offset=0x10 Size=0x8
    union // Size=0x8 (Id=0)
    {
        unsigned long long LogicalId;// Offset=0x18 Size=0x8
        struct _EXT_IOMMU * Iommu;// Offset=0x18 Size=0x8
    };
    struct _EXT_IOMMU_OUTPUT_MAPPING * OutputMapping;// Offset=0x20 Size=0x8
};
