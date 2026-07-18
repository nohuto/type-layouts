struct _NVME_DISK_CQ_INTERRUPT_ROUTINE_INFO// Size=0x18 (Id=877)
{
    struct _DEVICE_OBJECT * DeviceObject;// Offset=0x0 Size=0x8
    long  ( * DereferenceRoutine)(struct _DEVICE_OBJECT * );// Offset=0x8 Size=0x8
    unsigned char  ( * InterruptRoutine)(struct _DEVICE_OBJECT * ,void * );// Offset=0x10 Size=0x8
};
