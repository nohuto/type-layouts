struct _DMA_IOMMU_INTERFACE_V1// Size=0x68 (Id=2270)
{
    long  ( * CreateDomain)(unsigned char ,struct _IOMMU_DMA_DOMAIN ** );// Offset=0x0 Size=0x8
    long  ( * DeleteDomain)(struct _IOMMU_DMA_DOMAIN * );// Offset=0x8 Size=0x8
    long  ( * AttachDevice)(struct _IOMMU_DMA_DOMAIN * ,struct _DEVICE_OBJECT * ,unsigned long ,unsigned long );// Offset=0x10 Size=0x8
    long  ( * DetachDevice)(struct _IOMMU_DMA_DOMAIN * ,struct _DEVICE_OBJECT * ,unsigned long );// Offset=0x18 Size=0x8
    long  ( * FlushDomain)(struct _IOMMU_DMA_DOMAIN * );// Offset=0x20 Size=0x8
    long  ( * FlushDomainByVaList)(struct _IOMMU_DMA_DOMAIN * ,unsigned char ,unsigned long ,void * );// Offset=0x28 Size=0x8
    long  ( * QueryInputMappings)(struct _DEVICE_OBJECT * ,struct _INPUT_MAPPING_ELEMENT * ,unsigned long ,unsigned long * );// Offset=0x30 Size=0x8
    long  ( * MapLogicalRange)(struct _IOMMU_DMA_DOMAIN * ,unsigned long ,struct _MDL * ,unsigned long long );// Offset=0x38 Size=0x8
    long  ( * UnmapLogicalRange)(struct _IOMMU_DMA_DOMAIN * ,unsigned long long ,unsigned long long );// Offset=0x40 Size=0x8
    long  ( * MapIdentityRange)(struct _IOMMU_DMA_DOMAIN * ,unsigned long ,struct _MDL * );// Offset=0x48 Size=0x8
    long  ( * UnmapIdentityRange)(struct _IOMMU_DMA_DOMAIN * ,struct _MDL * );// Offset=0x50 Size=0x8
    long  ( * SetDeviceFaultReporting)(struct _DEVICE_OBJECT * ,unsigned long ,unsigned char ,struct _DEVICE_FAULT_CONFIGURATION * );// Offset=0x58 Size=0x8
    long  ( * ConfigureDomain)(struct _IOMMU_DMA_DOMAIN * ,struct _DOMAIN_CONFIGURATION * );// Offset=0x60 Size=0x8
};

struct _DMA_IOMMU_INTERFACE_V2// Size=0xb0 (Id=1719)
{
    long  ( * CreateDomainEx)(enum _IOMMU_DMA_DOMAIN_TYPE ,union _IOMMU_DMA_DOMAIN_CREATION_FLAGS ,struct _IOMMU_DMA_LOGICAL_ALLOCATOR_CONFIG * ,struct _IOMMU_DMA_RESERVED_REGION * ,struct _IOMMU_DMA_DOMAIN ** );// Offset=0x0 Size=0x8
    long  ( * DeleteDomain)(struct _IOMMU_DMA_DOMAIN * );// Offset=0x8 Size=0x8
    long  ( * AttachDeviceEx)(struct _IOMMU_DMA_DOMAIN * ,struct _IOMMU_DMA_DEVICE * );// Offset=0x10 Size=0x8
    long  ( * DetachDeviceEx)(struct _IOMMU_DMA_DEVICE * );// Offset=0x18 Size=0x8
    long  ( * FlushDomain)(struct _IOMMU_DMA_DOMAIN * );// Offset=0x20 Size=0x8
    long  ( * FlushDomainByVaList)(struct _IOMMU_DMA_DOMAIN * ,unsigned char ,unsigned long ,void * );// Offset=0x28 Size=0x8
    long  ( * QueryInputMappings)(struct _DEVICE_OBJECT * ,struct _INPUT_MAPPING_ELEMENT * ,unsigned long ,unsigned long * );// Offset=0x30 Size=0x8
    long  ( * MapLogicalRangeEx)(struct _IOMMU_DMA_DOMAIN * ,unsigned long ,struct _IOMMU_MAP_PHYSICAL_ADDRESS * ,unsigned long long * ,unsigned long long * ,unsigned long long * ,unsigned long long * );// Offset=0x38 Size=0x8
    long  ( * UnmapLogicalRange)(struct _IOMMU_DMA_DOMAIN * ,unsigned long long ,unsigned long long );// Offset=0x40 Size=0x8
    long  ( * MapIdentityRangeEx)(struct _IOMMU_DMA_DOMAIN * ,unsigned long ,struct _IOMMU_MAP_PHYSICAL_ADDRESS * );// Offset=0x48 Size=0x8
    long  ( * UnmapIdentityRangeEx)(struct _IOMMU_DMA_DOMAIN * ,struct _IOMMU_MAP_PHYSICAL_ADDRESS * );// Offset=0x50 Size=0x8
    long  ( * SetDeviceFaultReportingEx)(struct _IOMMU_DMA_DEVICE * ,unsigned long ,unsigned char ,struct _DEVICE_FAULT_CONFIGURATION * );// Offset=0x58 Size=0x8
    long  ( * ConfigureDomain)(struct _IOMMU_DMA_DOMAIN * ,struct _DOMAIN_CONFIGURATION * );// Offset=0x60 Size=0x8
    void  ( * QueryAvailableDomainTypes)(struct _IOMMU_DMA_DEVICE * ,unsigned long * );// Offset=0x68 Size=0x8
    long  ( * RegisterInterfaceStateChangeCallback)(void  ( * )(struct _IOMMU_INTERFACE_STATE_CHANGE * ,void * ),void * ,struct _IOMMU_DMA_DEVICE * ,union _IOMMU_INTERFACE_STATE_CHANGE_FIELDS * );// Offset=0x70 Size=0x8
    long  ( * UnregisterInterfaceStateChangeCallback)(void  ( * )(struct _IOMMU_INTERFACE_STATE_CHANGE * ,void * ),struct _IOMMU_DMA_DEVICE * );// Offset=0x78 Size=0x8
    long  ( * ReserveLogicalAddressRange)(struct _IOMMU_DMA_DOMAIN * ,unsigned long long ,unsigned long long * ,unsigned long long * ,unsigned long long * ,struct _IOMMU_DMA_LOGICAL_ADDRESS_TOKEN ** );// Offset=0x80 Size=0x8
    long  ( * FreeReservedLogicalAddressRange)(struct _IOMMU_DMA_LOGICAL_ADDRESS_TOKEN * );// Offset=0x88 Size=0x8
    long  ( * MapReservedLogicalRange)(struct _IOMMU_DMA_LOGICAL_ADDRESS_TOKEN * ,unsigned long long ,unsigned long ,struct _IOMMU_MAP_PHYSICAL_ADDRESS * ,struct _IOMMU_DMA_LOGICAL_ADDRESS_TOKEN_MAPPED_SEGMENT * );// Offset=0x90 Size=0x8
    long  ( * UnmapReservedLogicalRange)(struct _IOMMU_DMA_LOGICAL_ADDRESS_TOKEN_MAPPED_SEGMENT * );// Offset=0x98 Size=0x8
    long  ( * CreateDevice)(struct _DEVICE_OBJECT * ,struct _IOMMU_DEVICE_CREATION_CONFIGURATION * ,struct _IOMMU_DMA_DEVICE ** );// Offset=0xa0 Size=0x8
    long  ( * DeleteDevice)(struct _IOMMU_DMA_DEVICE * );// Offset=0xa8 Size=0x8
};

struct _DMA_IOMMU_INTERFACE_V3// Size=0xd8 (Id=2010)
{
    long  ( * CreateDomainEx)(enum _IOMMU_DMA_DOMAIN_TYPE ,union _IOMMU_DMA_DOMAIN_CREATION_FLAGS ,struct _IOMMU_DMA_LOGICAL_ALLOCATOR_CONFIG * ,struct _IOMMU_DMA_RESERVED_REGION * ,struct _IOMMU_DMA_DOMAIN ** );// Offset=0x0 Size=0x8
    long  ( * DeleteDomain)(struct _IOMMU_DMA_DOMAIN * );// Offset=0x8 Size=0x8
    long  ( * AttachDeviceEx)(struct _IOMMU_DMA_DOMAIN * ,struct _IOMMU_DMA_DEVICE * );// Offset=0x10 Size=0x8
    long  ( * DetachDeviceEx)(struct _IOMMU_DMA_DEVICE * );// Offset=0x18 Size=0x8
    long  ( * FlushDomain)(struct _IOMMU_DMA_DOMAIN * );// Offset=0x20 Size=0x8
    long  ( * FlushDomainByVaList)(struct _IOMMU_DMA_DOMAIN * ,unsigned char ,unsigned long ,void * );// Offset=0x28 Size=0x8
    long  ( * QueryInputMappings)(struct _DEVICE_OBJECT * ,struct _INPUT_MAPPING_ELEMENT * ,unsigned long ,unsigned long * );// Offset=0x30 Size=0x8
    long  ( * MapLogicalRangeEx)(struct _IOMMU_DMA_DOMAIN * ,unsigned long ,struct _IOMMU_MAP_PHYSICAL_ADDRESS * ,unsigned long long * ,unsigned long long * ,unsigned long long * ,unsigned long long * );// Offset=0x38 Size=0x8
    long  ( * UnmapLogicalRange)(struct _IOMMU_DMA_DOMAIN * ,unsigned long long ,unsigned long long );// Offset=0x40 Size=0x8
    long  ( * MapIdentityRangeEx)(struct _IOMMU_DMA_DOMAIN * ,unsigned long ,struct _IOMMU_MAP_PHYSICAL_ADDRESS * );// Offset=0x48 Size=0x8
    long  ( * UnmapIdentityRangeEx)(struct _IOMMU_DMA_DOMAIN * ,struct _IOMMU_MAP_PHYSICAL_ADDRESS * );// Offset=0x50 Size=0x8
    long  ( * SetDeviceFaultReportingEx)(struct _IOMMU_DMA_DEVICE * ,unsigned long ,unsigned char ,struct _DEVICE_FAULT_CONFIGURATION * );// Offset=0x58 Size=0x8
    long  ( * ConfigureDomain)(struct _IOMMU_DMA_DOMAIN * ,struct _DOMAIN_CONFIGURATION * );// Offset=0x60 Size=0x8
    void  ( * QueryAvailableDomainTypes)(struct _IOMMU_DMA_DEVICE * ,unsigned long * );// Offset=0x68 Size=0x8
    long  ( * RegisterInterfaceStateChangeCallback)(void  ( * )(struct _IOMMU_INTERFACE_STATE_CHANGE * ,void * ),void * ,struct _IOMMU_DMA_DEVICE * ,union _IOMMU_INTERFACE_STATE_CHANGE_FIELDS * );// Offset=0x70 Size=0x8
    long  ( * UnregisterInterfaceStateChangeCallback)(void  ( * )(struct _IOMMU_INTERFACE_STATE_CHANGE * ,void * ),struct _IOMMU_DMA_DEVICE * );// Offset=0x78 Size=0x8
    long  ( * ReserveLogicalAddressRange)(struct _IOMMU_DMA_DOMAIN * ,unsigned long long ,unsigned long long * ,unsigned long long * ,unsigned long long * ,struct _IOMMU_DMA_LOGICAL_ADDRESS_TOKEN ** );// Offset=0x80 Size=0x8
    long  ( * FreeReservedLogicalAddressRange)(struct _IOMMU_DMA_LOGICAL_ADDRESS_TOKEN * );// Offset=0x88 Size=0x8
    long  ( * MapReservedLogicalRange)(struct _IOMMU_DMA_LOGICAL_ADDRESS_TOKEN * ,unsigned long long ,unsigned long ,struct _IOMMU_MAP_PHYSICAL_ADDRESS * ,struct _IOMMU_DMA_LOGICAL_ADDRESS_TOKEN_MAPPED_SEGMENT * );// Offset=0x90 Size=0x8
    long  ( * UnmapReservedLogicalRange)(struct _IOMMU_DMA_LOGICAL_ADDRESS_TOKEN_MAPPED_SEGMENT * );// Offset=0x98 Size=0x8
    long  ( * CreateDevice)(struct _DEVICE_OBJECT * ,struct _IOMMU_DEVICE_CREATION_CONFIGURATION * ,struct _IOMMU_DMA_DEVICE ** );// Offset=0xa0 Size=0x8
    long  ( * DeleteDevice)(struct _IOMMU_DMA_DEVICE * );// Offset=0xa8 Size=0x8
    long  ( * CreatePasidDevice)(struct _IOMMU_DMA_DEVICE * ,struct _IOMMU_DMA_PASID_DEVICE ** ,unsigned long * );// Offset=0xb0 Size=0x8
    long  ( * DeletePasidDevice)(struct _IOMMU_DMA_PASID_DEVICE * );// Offset=0xb8 Size=0x8
    long  ( * AttachPasidDevice)(struct _IOMMU_DMA_DOMAIN * ,struct _IOMMU_DMA_PASID_DEVICE * );// Offset=0xc0 Size=0x8
    long  ( * DetachPasidDevice)(struct _IOMMU_DMA_PASID_DEVICE * );// Offset=0xc8 Size=0x8
    long  ( * QueryDeviceInfo)(struct _IOMMU_DMA_DEVICE * ,unsigned long ,unsigned long * ,struct _IOMMU_DMA_DEVICE_INFORMATION * );// Offset=0xd0 Size=0x8
};

struct _DMA_IOMMU_INTERFACE_EX// Size=0xe8 (Id=1704)
{
    unsigned long long Size;// Offset=0x0 Size=0x8
    unsigned long Version;// Offset=0x8 Size=0x4
    union // Size=0xc0 (Id=0)
    {
        struct _DMA_IOMMU_INTERFACE_V1 V1;// Offset=0x10 Size=0x68
        struct _DMA_IOMMU_INTERFACE_V2 V2;// Offset=0x10 Size=0xb0
        struct _DMA_IOMMU_INTERFACE_V3 V3;// Offset=0x10 Size=0xd8
    };
};
