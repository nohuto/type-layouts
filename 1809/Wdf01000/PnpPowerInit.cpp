struct _WDF_PNPPOWER_EVENT_CALLBACKS// Size=0x90 (Id=735)
{
    unsigned long Size;// Offset=0x0 Size=0x4
    long  ( * EvtDeviceD0Entry)(struct WDFDEVICE__ * ,enum _WDF_POWER_DEVICE_STATE );// Offset=0x8 Size=0x8
    long  ( * EvtDeviceD0EntryPostInterruptsEnabled)(struct WDFDEVICE__ * ,enum _WDF_POWER_DEVICE_STATE );// Offset=0x10 Size=0x8
    long  ( * EvtDeviceD0Exit)(struct WDFDEVICE__ * ,enum _WDF_POWER_DEVICE_STATE );// Offset=0x18 Size=0x8
    long  ( * EvtDeviceD0ExitPreInterruptsDisabled)(struct WDFDEVICE__ * ,enum _WDF_POWER_DEVICE_STATE );// Offset=0x20 Size=0x8
    long  ( * EvtDevicePrepareHardware)(struct WDFDEVICE__ * ,struct WDFCMRESLIST__ * ,struct WDFCMRESLIST__ * );// Offset=0x28 Size=0x8
    long  ( * EvtDeviceReleaseHardware)(struct WDFDEVICE__ * ,struct WDFCMRESLIST__ * );// Offset=0x30 Size=0x8
    void  ( * EvtDeviceSelfManagedIoCleanup)(struct WDFDEVICE__ * );// Offset=0x38 Size=0x8
    void  ( * EvtDeviceSelfManagedIoFlush)(struct WDFDEVICE__ * );// Offset=0x40 Size=0x8
    long  ( * EvtDeviceSelfManagedIoInit)(struct WDFDEVICE__ * );// Offset=0x48 Size=0x8
    long  ( * EvtDeviceSelfManagedIoSuspend)(struct WDFDEVICE__ * );// Offset=0x50 Size=0x8
    long  ( * EvtDeviceSelfManagedIoRestart)(struct WDFDEVICE__ * );// Offset=0x58 Size=0x8
    void  ( * EvtDeviceSurpriseRemoval)(struct WDFDEVICE__ * );// Offset=0x60 Size=0x8
    long  ( * EvtDeviceQueryRemove)(struct WDFDEVICE__ * );// Offset=0x68 Size=0x8
    long  ( * EvtDeviceQueryStop)(struct WDFDEVICE__ * );// Offset=0x70 Size=0x8
    void  ( * EvtDeviceUsageNotification)(struct WDFDEVICE__ * ,enum _WDF_SPECIAL_FILE_TYPE ,unsigned char );// Offset=0x78 Size=0x8
    void  ( * EvtDeviceRelationsQuery)(struct WDFDEVICE__ * ,enum _DEVICE_RELATION_TYPE );// Offset=0x80 Size=0x8
    long  ( * EvtDeviceUsageNotificationEx)(struct WDFDEVICE__ * ,enum _WDF_SPECIAL_FILE_TYPE ,unsigned char );// Offset=0x88 Size=0x8
};

struct _WDF_POWER_POLICY_EVENT_CALLBACKS// Size=0x40 (Id=1185)
{
    unsigned long Size;// Offset=0x0 Size=0x4
    long  ( * EvtDeviceArmWakeFromS0)(struct WDFDEVICE__ * );// Offset=0x8 Size=0x8
    void  ( * EvtDeviceDisarmWakeFromS0)(struct WDFDEVICE__ * );// Offset=0x10 Size=0x8
    void  ( * EvtDeviceWakeFromS0Triggered)(struct WDFDEVICE__ * );// Offset=0x18 Size=0x8
    long  ( * EvtDeviceArmWakeFromSx)(struct WDFDEVICE__ * );// Offset=0x20 Size=0x8
    void  ( * EvtDeviceDisarmWakeFromSx)(struct WDFDEVICE__ * );// Offset=0x28 Size=0x8
    void  ( * EvtDeviceWakeFromSxTriggered)(struct WDFDEVICE__ * );// Offset=0x30 Size=0x8
    long  ( * EvtDeviceArmWakeFromSxWithReason)(struct WDFDEVICE__ * ,unsigned char ,unsigned char );// Offset=0x38 Size=0x8
};

enum _WDF_TRI_STATE
{
    WdfFalse=0,
    WdfTrue=1,
    WdfUseDefault=2
};

struct PnpPowerInit// Size=0xf0 (Id=701)
{
    struct _WDF_PNPPOWER_EVENT_CALLBACKS PnpPowerEventCallbacks;// Offset=0x0 Size=0x90
    struct _WDF_POWER_POLICY_EVENT_CALLBACKS PolicyEventCallbacks;// Offset=0x90 Size=0x40
    struct FxPnpStateCallback * PnpStateCallbacks;// Offset=0xd0 Size=0x8
    struct FxPowerStateCallback * PowerStateCallbacks;// Offset=0xd8 Size=0x8
    struct FxPowerPolicyStateCallback * PowerPolicyStateCallbacks;// Offset=0xe0 Size=0x8
    enum _WDF_TRI_STATE PowerPolicyOwner;// Offset=0xe8 Size=0x4
};
