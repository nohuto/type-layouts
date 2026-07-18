struct _KSDEVICE_DISPATCH// Size=0x70 (Id=1184)
{
    long  ( * Add)(struct _KSDEVICE * );// Offset=0x0 Size=0x8
    long  ( * Start)(struct _KSDEVICE * ,struct _IRP * ,struct _CM_RESOURCE_LIST * ,struct _CM_RESOURCE_LIST * );// Offset=0x8 Size=0x8
    long  ( * PostStart)(struct _KSDEVICE * );// Offset=0x10 Size=0x8
    long  ( * QueryStop)(struct _KSDEVICE * ,struct _IRP * );// Offset=0x18 Size=0x8
    void  ( * CancelStop)(struct _KSDEVICE * ,struct _IRP * );// Offset=0x20 Size=0x8
    void  ( * Stop)(struct _KSDEVICE * ,struct _IRP * );// Offset=0x28 Size=0x8
    long  ( * QueryRemove)(struct _KSDEVICE * ,struct _IRP * );// Offset=0x30 Size=0x8
    void  ( * CancelRemove)(struct _KSDEVICE * ,struct _IRP * );// Offset=0x38 Size=0x8
    void  ( * Remove)(struct _KSDEVICE * ,struct _IRP * );// Offset=0x40 Size=0x8
    long  ( * QueryCapabilities)(struct _KSDEVICE * ,struct _IRP * ,struct _DEVICE_CAPABILITIES * );// Offset=0x48 Size=0x8
    void  ( * SurpriseRemoval)(struct _KSDEVICE * ,struct _IRP * );// Offset=0x50 Size=0x8
    long  ( * QueryPower)(struct _KSDEVICE * ,struct _IRP * ,enum _DEVICE_POWER_STATE ,enum _DEVICE_POWER_STATE ,enum _SYSTEM_POWER_STATE ,enum _SYSTEM_POWER_STATE ,enum POWER_ACTION );// Offset=0x58 Size=0x8
    void  ( * SetPower)(struct _KSDEVICE * ,struct _IRP * ,enum _DEVICE_POWER_STATE ,enum _DEVICE_POWER_STATE );// Offset=0x60 Size=0x8
    long  ( * QueryInterface)(struct _KSDEVICE * ,struct _IRP * );// Offset=0x68 Size=0x8
};
