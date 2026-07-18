struct IRP_DISPATCH_TABLE// Size=0x40 (Id=413)
{
    long  ( * CreateClose)(struct _DEVICE_OBJECT * ,struct _IRP * );// Offset=0x0 Size=0x8
    long  ( * DeviceControl)(struct _DEVICE_OBJECT * ,struct _IRP * );// Offset=0x8 Size=0x8
    long  ( * PnpStartDevice)(struct _DEVICE_OBJECT * ,struct _IRP * );// Offset=0x10 Size=0x8
    long  ( ** Pnp)(struct _DEVICE_OBJECT * ,struct _IRP * );// Offset=0x18 Size=0x8
    long  ( ** Power)(struct _DEVICE_OBJECT * ,struct _IRP * );// Offset=0x20 Size=0x8
    long  ( * SystemControl)(struct _DEVICE_OBJECT * ,struct _IRP * );// Offset=0x28 Size=0x8
    long  ( * Other)(struct _DEVICE_OBJECT * ,struct _IRP * );// Offset=0x30 Size=0x8
    void  ( * Worker)(struct _DEVICE_EXTENSION * ,unsigned long );// Offset=0x38 Size=0x8
};
