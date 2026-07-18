enum _VF_DISPATCH_TABLE_TYPE
{
    DispatchTableTypeWdm=0,
    DispatchTableTypeWdf=1,
    DispatchTableTypeNdis=2,
    DispatchTableTypeXdv=3,
    DispatchTableTypeHvci=4,
    DispatchTableTypeIov=5,
    DispatchTableTypeBios=6,
    DispatchTableTypeDomain=7,
    DispatchTableTypePlugin=8,
    MaximumDispatchTableType=9
};

struct _VF_DISPATCH_TABLE_HEADER// Size=0x8 (Id=2211)
{
    enum _VF_DISPATCH_TABLE_TYPE Type;// Offset=0x0 Size=0x4
    unsigned long Size;// Offset=0x4 Size=0x4
};

struct _VF_WDM_DISPATCH_TABLE// Size=0x50 (Id=2751)
{
    struct _VF_DISPATCH_TABLE_HEADER Header;// Offset=0x0 Size=0x8
    void  ( * KeAcquireSpinLock)(unsigned long long * ,unsigned char * ,void * );// Offset=0x8 Size=0x8
    void  ( * KeReleaseSpinLock)(unsigned long long * ,unsigned char ,void * );// Offset=0x10 Size=0x8
    void  ( * KeAcquireSpinLockNoXdv)(unsigned long long * ,unsigned char * ,void * );// Offset=0x18 Size=0x8
    void  ( * KeReleaseSpinLockNoXdv)(unsigned long long * ,unsigned char ,void * );// Offset=0x20 Size=0x8
    void *  ( * ExAllocatePoolWithQuotaTag)(enum _POOL_TYPE ,unsigned long long ,unsigned long ,void * );// Offset=0x28 Size=0x8
    void *  ( * ExAllocatePoolWithTagPriority)(enum _POOL_TYPE ,unsigned long long ,unsigned long ,unsigned long ,void * );// Offset=0x30 Size=0x8
    struct _MDL *  ( * IoAllocateMdl)(void * ,unsigned long ,unsigned char ,unsigned char ,struct _IRP * ,void * );// Offset=0x38 Size=0x8
    struct _IRP *  ( * IoAllocateIrp)(char ,unsigned char ,void * );// Offset=0x40 Size=0x8
    struct _IO_WORKITEM *  ( * IoAllocateWorkItem)(struct _DEVICE_OBJECT * ,void * );// Offset=0x48 Size=0x8
};
