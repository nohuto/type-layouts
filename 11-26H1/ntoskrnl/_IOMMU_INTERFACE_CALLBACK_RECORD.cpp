struct _LIST_ENTRY// Size=0x10 (Id=3)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

union _IOMMU_INTERFACE_STATE_CHANGE_FIELDS// Size=0x4 (Id=450)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long AvailableDomainTypes:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Reserved:31;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1f
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};

struct _IOMMU_INTERFACE_STATE_CHANGE// Size=0x8 (Id=447)
{
    union _IOMMU_INTERFACE_STATE_CHANGE_FIELDS PresentFields;// Offset=0x0 Size=0x4
    unsigned long AvailableDomainTypes;// Offset=0x4 Size=0x4
};

struct _IOMMU_INTERFACE_CALLBACK_RECORD// Size=0x30 (Id=435)
{
    struct _LIST_ENTRY ListEntry;// Offset=0x0 Size=0x10
    void  ( * CallbackRoutine)(struct _IOMMU_INTERFACE_STATE_CHANGE * ,void * );// Offset=0x10 Size=0x8
    void * CallbackContext;// Offset=0x18 Size=0x8
    struct _IOMMU_DMA_DEVICE * DmaDevice;// Offset=0x20 Size=0x8
    struct _IOMMU_INTERFACE_STATE_CHANGE LastReportedState;// Offset=0x28 Size=0x8
};
