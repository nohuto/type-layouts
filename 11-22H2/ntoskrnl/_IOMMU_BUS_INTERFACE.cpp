struct _IOMMU_BUS_INTERFACE// Size=0x50 (Id=326)
{
    unsigned short Size;// Offset=0x0 Size=0x2
    unsigned short Version;// Offset=0x2 Size=0x2
    void * Context;// Offset=0x8 Size=0x8
    void  ( * InterfaceReference)(void * );// Offset=0x10 Size=0x8
    void  ( * InterfaceDereference)(void * );// Offset=0x18 Size=0x8
    long  ( * GetSvmCapabilities)(void * ,union _IOMMU_SVM_CAPABILITIES * );// Offset=0x20 Size=0x8
    long  ( * EnableSvmCapabilities)(void * ,union _IOMMU_SVM_CAPABILITIES * ,long  ( * )(struct _DEVICE_OBJECT * ,enum _DEVICE_POWER_STATE ,void * ),void * );// Offset=0x28 Size=0x8
    long  ( * DisableSvmCapabilities)(void * ,union _IOMMU_SVM_CAPABILITIES * );// Offset=0x30 Size=0x8
    long  ( * GetDeviceProperties)(void * ,union _IOMMU_DEVICE_PROPERTIES * );// Offset=0x38 Size=0x8
    long  ( * GetDeviceId)(void * ,unsigned long long ,struct _EXT_IOMMU_DEVICE_ID * ,unsigned long long * );// Offset=0x40 Size=0x8
    struct _DEVICE_OBJECT *  ( * GetRootDevice)(void * );// Offset=0x48 Size=0x8
};
