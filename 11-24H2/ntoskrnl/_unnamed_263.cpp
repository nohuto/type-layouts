struct _EX_RUNDOWN_REF// Size=0x8 (Id=269)
{
    union // Size=0x8 (Id=0)
    {
        unsigned long long Count;// Offset=0x0 Size=0x8
        void * Ptr;// Offset=0x0 Size=0x8
    };
};

struct _unnamed_263// Size=0x30 (Id=263)
{
    struct _REGISTERED_IOMMU * Iommu;// Offset=0x0 Size=0x8
    struct _EXT_IOMMU_DEVICE * ExtDevice;// Offset=0x8 Size=0x8
    unsigned long long SourceId;// Offset=0x10 Size=0x8
    unsigned long AtsReferenceCount;// Offset=0x18 Size=0x4
    unsigned long InvalidationQueueDepth;// Offset=0x1c Size=0x4
    struct _EX_RUNDOWN_REF DeviceActive;// Offset=0x20 Size=0x8
    unsigned long PasidDomainId;// Offset=0x28 Size=0x4
};
