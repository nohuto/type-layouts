struct _EXT_IOMMU_FUNCTION_TABLE_EXTENDED// Size=0xb0 (Id=406)
{
    long  ( * FindDevice)(struct _EXT_IOMMU * ,struct _EXT_IOMMU_DEVICE_ID * ,unsigned char ,struct _EXT_IOMMU_OUTPUT_MAPPING * );// Offset=0x0 Size=0x8
    long  ( * SetDeviceSvmCapabilities)(void * ,struct _EXT_IOMMU_DEVICE * ,unsigned long ,unsigned char );// Offset=0x8 Size=0x8
    void  ( * SetDevicePasidTable)(void * ,struct _EXT_IOMMU_DEVICE * ,struct _EXT_IOMMU_DOMAIN * ,unsigned char ,unsigned char );// Offset=0x10 Size=0x8
    long  ( * GrowPasidTable)(void * ,struct _EXT_IOMMU_DEVICE * ,struct _EXT_IOMMU_DOMAIN * ,unsigned long ,enum _IOMMU_PASID_SETTING ,enum _IOMMU_ATS_SETTING );// Offset=0x18 Size=0x8
    long  ( * SetPasidAddressSpace)(void * ,struct _EXT_IOMMU_DEVICE * ,struct _EXT_IOMMU_DOMAIN * ,unsigned long ,unsigned char * );// Offset=0x20 Size=0x8
    void  ( * FlushTb)(void * ,unsigned long ,struct _EXT_IOMMU_DOMAIN * ,void * ,struct _LIST_ENTRY * ,unsigned long ,struct _KTB_FLUSH_VA * );// Offset=0x28 Size=0x8
    void  ( * FlushDeviceTbOnly)(void * ,unsigned long long ,unsigned long );// Offset=0x30 Size=0x8
    void  ( * DismissPageFault)(void * ,unsigned long ,unsigned long long ,unsigned short ,long );// Offset=0x38 Size=0x8
    unsigned long  ( * GetPageFault)(void * ,unsigned long * ,unsigned long long * ,unsigned short * ,void ** ,unsigned long long * );// Offset=0x40 Size=0x8
    long  ( * SetMessageInterruptRouting)(void * ,unsigned char ,union _LARGE_INTEGER ,unsigned long );// Offset=0x48 Size=0x8
    void  ( * EnableInterrupt)(void * );// Offset=0x50 Size=0x8
    void  ( * DisableInterrupt)(void * );// Offset=0x58 Size=0x8
    unsigned char  ( * HandleInterrupt)(void * );// Offset=0x60 Size=0x8
    unsigned char  ( * CheckForReservedRegion)(struct _EXT_IOMMU_DEVICE_ID * );// Offset=0x68 Size=0x8
    void  ( * MarkHiberRegions)(void * ,void * );// Offset=0x70 Size=0x8
    void  ( * DrainSvmPageRequests)(void * ,unsigned long long ,unsigned long );// Offset=0x78 Size=0x8
    void  ( * CancelPageRequests)(void * ,unsigned long long ,unsigned long );// Offset=0x80 Size=0x8
    long  ( * EnumerateReservedDevices)(void * ,unsigned long * ,struct _IOMMU_RESERVED_DEVICE ** );// Offset=0x88 Size=0x8
    long  ( * ProcessReservedDomains)(void * ,unsigned long ,struct _IOMMU_RESERVED_DEVICE ** );// Offset=0x90 Size=0x8
    long  ( * QueryAcpiDeviceMapping)(void * ,struct _EXT_IOMMU_DEVICE_ID * ,struct _EXT_IOMMU_DEVICE_ID * );// Offset=0x98 Size=0x8
    unsigned int  ( * GetRidAcpiMapCount)(void * ,struct _EXT_IOMMU_DEVICE_ID * );// Offset=0xa0 Size=0x8
    long  ( * ConfigureAts)(void * ,struct _EXT_IOMMU_DEVICE * ,unsigned char );// Offset=0xa8 Size=0x8
};
