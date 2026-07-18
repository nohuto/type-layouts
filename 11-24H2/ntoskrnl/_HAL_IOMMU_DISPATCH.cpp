struct _HAL_IOMMU_DISPATCH// Size=0xc8 (Id=2181)
{
    unsigned char  ( * HalIommuSupportEnabled)();// Offset=0x0 Size=0x8
    long  ( * HalIommuGetConfiguration)(unsigned long ,unsigned long * ,unsigned long * ,void ** );// Offset=0x8 Size=0x8
    long  ( * HalIommuGetLibraryContext)(unsigned long ,unsigned long ,unsigned char ,void ** );// Offset=0x10 Size=0x8
    long  ( * HalIommuMapDevice)(void * ,struct _EXT_IOMMU_DEVICE_ID * ,struct _DEVICE_OBJECT * ,union _IOMMU_SVM_CAPABILITIES * ,void ** );// Offset=0x18 Size=0x8
    long  ( * HalIommuEnableDevicePasid)(void * ,void * );// Offset=0x20 Size=0x8
    long  ( * HalIommuSetAddressSpace)(void * ,unsigned long long );// Offset=0x28 Size=0x8
    long  ( * HalIommuDisableDevicePasid)(void * ,void * );// Offset=0x30 Size=0x8
    long  ( * HalIommuUnmapDevice)(void * ,void * );// Offset=0x38 Size=0x8
    long  ( * HalIommuFreeLibraryContext)(void * );// Offset=0x40 Size=0x8
    void  ( * HalIommuFlushTb)(void * ,unsigned long ,struct _KTB_FLUSH_VA * );// Offset=0x48 Size=0x8
    void  ( * HalIommuFlushAllPasid)(void * ,unsigned long ,struct _KTB_FLUSH_VA * );// Offset=0x50 Size=0x8
    unsigned char  ( * HalIommuProcessPageRequestQueue)(unsigned long );// Offset=0x58 Size=0x8
    void  ( * HalIommuFaultRoutine)(unsigned long );// Offset=0x60 Size=0x8
    void *  ( * HalIommuReferenceAsid)(unsigned long );// Offset=0x68 Size=0x8
    void  ( * HalIommuDereferenceAsid)(unsigned long );// Offset=0x70 Size=0x8
    long  ( * HalIommuServicePageFault)(unsigned long long ,void * ,unsigned long );// Offset=0x78 Size=0x8
    long  ( * HalIommuDevicePowerChange)(void * ,void * ,unsigned char );// Offset=0x80 Size=0x8
    long  ( * HalIommuBeginDeviceReset)(void * ,unsigned long * );// Offset=0x88 Size=0x8
    long  ( * HalIommuFinalizeDeviceReset)(void * );// Offset=0x90 Size=0x8
    long  ( * HalIommuGetAtsSettings)(struct _EXT_IOMMU_DEVICE_ID * ,union _IOMMU_ATS_SETTINGS * );// Offset=0x98 Size=0x8
    long  ( * HalIommuCreateAtsDevice)(struct _EXT_IOMMU_DEVICE_ID * ,struct _DEVICE_OBJECT * ,union _IOMMU_SVM_CAPABILITIES * ,void ** );// Offset=0xa0 Size=0x8
    void  ( * HalIommuDeleteAtsDevice)(void * );// Offset=0xa8 Size=0x8
    long  ( * HalIommuGetDomainTransitionSupport)(struct _EXT_IOMMU_DEVICE_ID * ,unsigned char * );// Offset=0xb0 Size=0x8
    long  ( * HalIommuSetDeviceMpam)(struct _IOMMU_DMA_DEVICE * ,unsigned short ,unsigned char );// Offset=0xb8 Size=0x8
    long  ( * HalIommuGetDeviceMpam)(struct _IOMMU_DMA_DEVICE * ,unsigned short * ,unsigned char * );// Offset=0xc0 Size=0x8
};
