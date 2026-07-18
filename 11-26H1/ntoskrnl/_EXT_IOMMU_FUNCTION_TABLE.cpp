struct _EXT_IOMMU_FUNCTION_TABLE// Size=0x98 (Id=311)
{
    long  ( * ConfigureSettings)(struct _EXT_IOMMU * ,struct _EXT_IOMMU_SETTINGS * );// Offset=0x0 Size=0x8
    long  ( * Initialize)(struct _EXT_IOMMU * ,unsigned long ,unsigned char ,unsigned char );// Offset=0x8 Size=0x8
    long  ( * AllocateDomain)(struct _EXT_IOMMU * ,struct _EXT_IOMMU_DOMAIN * ,struct _EXT_IOMMU_DOMAIN * ,void * );// Offset=0x10 Size=0x8
    void  ( * FreeDomain)(struct _EXT_IOMMU * ,struct _EXT_IOMMU_DOMAIN * ,void * );// Offset=0x18 Size=0x8
    long  ( * CreateDevice)(struct _EXT_IOMMU * ,struct _EXT_IOMMU_DEVICE_ID * ,union _EXT_IOMMU_CREATE_DEVICE_FLAGS ,void * ,struct _EXT_IOMMU_DEVICE ** ,void * );// Offset=0x20 Size=0x8
    void  ( * DeleteDevice)(struct _EXT_IOMMU * ,struct _EXT_IOMMU_DEVICE * ,void * );// Offset=0x28 Size=0x8
    unsigned char  ( * OwnDevice)(struct _EXT_IOMMU * ,struct _EXT_IOMMU_DEVICE_ID * );// Offset=0x30 Size=0x8
    void  ( * ConfigureDeviceFaultReporting)(struct _EXT_IOMMU * ,struct _EXT_IOMMU_DEVICE * ,unsigned char );// Offset=0x38 Size=0x8
    long  ( * AttachDeviceDomain)(struct _EXT_IOMMU * ,struct _EXT_IOMMU_DEVICE * ,struct _EXT_IOMMU_DOMAIN * ,void * );// Offset=0x40 Size=0x8
    void  ( * DetachDeviceDomain)(struct _EXT_IOMMU * ,struct _EXT_IOMMU_DEVICE * ,void * );// Offset=0x48 Size=0x8
    void  ( * FlushDomainTb)(struct _EXT_IOMMU * ,struct _EXT_IOMMU_DOMAIN * ,struct _EXT_IOMMU_FLUSH_CONTEXT * ,unsigned int ,struct _KTB_FLUSH_VA * );// Offset=0x50 Size=0x8
    void  ( * SyncFlush)(struct _EXT_IOMMU * ,struct _EXT_IOMMU_FLUSH_CONTEXT * );// Offset=0x58 Size=0x8
    void  ( * CompleteFlush)(struct _EXT_IOMMU * ,struct _EXT_IOMMU_FLUSH_CONTEXT * );// Offset=0x60 Size=0x8
    long  ( * AllocateRemappingTableEntry)(void * ,unsigned long ,unsigned long ,unsigned long ,unsigned short ,unsigned char ,unsigned char ,unsigned long ,struct _EXT_IOMMU_DEVICE_ID * );// Offset=0x68 Size=0x8
    long  ( * FreeRemappingTableEntry)(void * ,unsigned long ,unsigned long );// Offset=0x70 Size=0x8
    unsigned char  ( * UpdateRemappingTableEntry)(void * ,unsigned char ,unsigned long ,struct _INTERRUPT_LINE_STATE * );// Offset=0x78 Size=0x8
    void  ( * InvalidateRemappingTableEntry)(void * ,unsigned long );// Offset=0x80 Size=0x8
    void  ( * UpdateRemappingDestination)(void * ,unsigned char ,unsigned long * ,unsigned long * ,unsigned long );// Offset=0x88 Size=0x8
    void  ( * CaptureGlobalCrashdumpState)(void * );// Offset=0x90 Size=0x8
};
