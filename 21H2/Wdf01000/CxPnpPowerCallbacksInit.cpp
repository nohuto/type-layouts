struct _WDFCX_PNPPOWER_EVENT_CALLBACKS// Size=0x118 (Id=325)
{
    unsigned long Size;// Offset=0x0 Size=0x4
    long  ( * EvtCxDevicePrePrepareHardware)(struct WDFDEVICE__ * ,struct WDFCMRESLIST__ * ,struct WDFCMRESLIST__ * );// Offset=0x8 Size=0x8
    void  ( * EvtCxDevicePrePrepareHardwareFailedCleanup)(struct WDFDEVICE__ * ,struct WDFCMRESLIST__ * ,struct WDFCMRESLIST__ * );// Offset=0x10 Size=0x8
    long  ( * EvtCxDevicePostPrepareHardware)(struct WDFDEVICE__ * ,struct WDFCMRESLIST__ * ,struct WDFCMRESLIST__ * );// Offset=0x18 Size=0x8
    long  ( * EvtCxDevicePreReleaseHardware)(struct WDFDEVICE__ * ,struct WDFCMRESLIST__ * );// Offset=0x20 Size=0x8
    long  ( * EvtCxDevicePostReleaseHardware)(struct WDFDEVICE__ * ,struct WDFCMRESLIST__ * );// Offset=0x28 Size=0x8
    long  ( * EvtCxDevicePreD0Entry)(struct WDFDEVICE__ * ,enum _WDF_POWER_DEVICE_STATE );// Offset=0x30 Size=0x8
    void  ( * EvtCxDevicePreD0EntryFailedCleanup)(struct WDFDEVICE__ * ,enum _WDF_POWER_DEVICE_STATE );// Offset=0x38 Size=0x8
    long  ( * EvtCxDevicePostD0Entry)(struct WDFDEVICE__ * ,enum _WDF_POWER_DEVICE_STATE );// Offset=0x40 Size=0x8
    long  ( * EvtCxDevicePreD0Exit)(struct WDFDEVICE__ * ,enum _WDF_POWER_DEVICE_STATE );// Offset=0x48 Size=0x8
    long  ( * EvtCxDevicePostD0Exit)(struct WDFDEVICE__ * ,enum _WDF_POWER_DEVICE_STATE );// Offset=0x50 Size=0x8
    void  ( * EvtCxDevicePreSurpriseRemoval)(struct WDFDEVICE__ * );// Offset=0x58 Size=0x8
    void  ( * EvtCxDevicePostSurpriseRemoval)(struct WDFDEVICE__ * );// Offset=0x60 Size=0x8
    long  ( * EvtCxDevicePreSelfManagedIoInit)(struct WDFDEVICE__ * );// Offset=0x68 Size=0x8
    void  ( * EvtCxDevicePreSelfManagedIoInitFailedCleanup)(struct WDFDEVICE__ * );// Offset=0x70 Size=0x8
    long  ( * EvtCxDevicePostSelfManagedIoInit)(struct WDFDEVICE__ * );// Offset=0x78 Size=0x8
    long  ( * EvtCxDevicePreSelfManagedIoRestart)(struct WDFDEVICE__ * );// Offset=0x80 Size=0x8
    void  ( * EvtCxDevicePreSelfManagedIoRestartFailedCleanup)(struct WDFDEVICE__ * );// Offset=0x88 Size=0x8
    long  ( * EvtCxDevicePostSelfManagedIoRestart)(struct WDFDEVICE__ * );// Offset=0x90 Size=0x8
    long  ( * EvtCxDevicePreSelfManagedIoSuspend)(struct WDFDEVICE__ * );// Offset=0x98 Size=0x8
    long  ( * EvtCxDevicePostSelfManagedIoSuspend)(struct WDFDEVICE__ * );// Offset=0xa0 Size=0x8
    void  ( * EvtCxDevicePreSelfManagedIoFlush)(struct WDFDEVICE__ * );// Offset=0xa8 Size=0x8
    void  ( * EvtCxDevicePostSelfManagedIoFlush)(struct WDFDEVICE__ * );// Offset=0xb0 Size=0x8
    void  ( * EvtCxDevicePreSelfManagedIoCleanup)(struct WDFDEVICE__ * );// Offset=0xb8 Size=0x8
    void  ( * EvtCxDevicePostSelfManagedIoCleanup)(struct WDFDEVICE__ * );// Offset=0xc0 Size=0x8
    long  ( * EvtCxDevicePreSelfManagedIoRestartEx)(struct WDFDEVICE__ * ,enum _WDF_POWER_DEVICE_STATE );// Offset=0xc8 Size=0x8
    void  ( * EvtCxDevicePreSelfManagedIoRestartExFailedCleanup)(struct WDFDEVICE__ * ,enum _WDF_POWER_DEVICE_STATE );// Offset=0xd0 Size=0x8
    long  ( * EvtCxDevicePostSelfManagedIoRestartEx)(struct WDFDEVICE__ * ,enum _WDF_POWER_DEVICE_STATE );// Offset=0xd8 Size=0x8
    long  ( * EvtCxDevicePreSelfManagedIoSuspendEx)(struct WDFDEVICE__ * ,enum _WDF_POWER_DEVICE_STATE );// Offset=0xe0 Size=0x8
    long  ( * EvtCxDevicePostSelfManagedIoSuspendEx)(struct WDFDEVICE__ * ,enum _WDF_POWER_DEVICE_STATE );// Offset=0xe8 Size=0x8
    long  ( * EvtCxDevicePreD0EntryPostHardwareEnabled)(struct WDFDEVICE__ * ,enum _WDF_POWER_DEVICE_STATE );// Offset=0xf0 Size=0x8
    long  ( * EvtCxDevicePostD0EntryPostHardwareEnabled)(struct WDFDEVICE__ * ,enum _WDF_POWER_DEVICE_STATE );// Offset=0xf8 Size=0x8
    void  ( * EvtCxDevicePreD0EntryPostHardwareEnabledFailedCleanup)(struct WDFDEVICE__ * ,enum _WDF_POWER_DEVICE_STATE );// Offset=0x100 Size=0x8
    long  ( * EvtCxDevicePreD0ExitPreHardwareDisabled)(struct WDFDEVICE__ * ,enum _WDF_POWER_DEVICE_STATE );// Offset=0x108 Size=0x8
    long  ( * EvtCxDevicePostD0ExitPreHardwareDisabled)(struct WDFDEVICE__ * ,enum _WDF_POWER_DEVICE_STATE );// Offset=0x110 Size=0x8
};

struct _WDFCX_POWER_POLICY_EVENT_CALLBACKS// Size=0x90 (Id=350)
{
    unsigned long Size;// Offset=0x0 Size=0x4
    long  ( * EvtCxDevicePreArmWakeFromS0)(struct WDFDEVICE__ * );// Offset=0x8 Size=0x8
    void  ( * EvtCxDevicePreArmWakeFromS0FailedCleanup)(struct WDFDEVICE__ * );// Offset=0x10 Size=0x8
    long  ( * EvtCxDevicePostArmWakeFromS0)(struct WDFDEVICE__ * );// Offset=0x18 Size=0x8
    void  ( * EvtCxDevicePreDisarmWakeFromS0)(struct WDFDEVICE__ * );// Offset=0x20 Size=0x8
    void  ( * EvtCxDevicePostDisarmWakeFromS0)(struct WDFDEVICE__ * );// Offset=0x28 Size=0x8
    void  ( * EvtCxDevicePreWakeFromS0Triggered)(struct WDFDEVICE__ * );// Offset=0x30 Size=0x8
    void  ( * EvtCxDevicePostWakeFromS0Triggered)(struct WDFDEVICE__ * );// Offset=0x38 Size=0x8
    long  ( * EvtCxDevicePreArmWakeFromSx)(struct WDFDEVICE__ * );// Offset=0x40 Size=0x8
    void  ( * EvtCxDevicePreArmWakeFromSxFailedCleanup)(struct WDFDEVICE__ * );// Offset=0x48 Size=0x8
    long  ( * EvtCxDevicePostArmWakeFromSx)(struct WDFDEVICE__ * );// Offset=0x50 Size=0x8
    long  ( * EvtCxDevicePreArmWakeFromSxWithReason)(struct WDFDEVICE__ * ,unsigned char ,unsigned char );// Offset=0x58 Size=0x8
    void  ( * EvtCxDevicePreArmWakeFromSxWithReasonFailedCleanup)(struct WDFDEVICE__ * ,unsigned char ,unsigned char );// Offset=0x60 Size=0x8
    long  ( * EvtCxDevicePostArmWakeFromSxWithReason)(struct WDFDEVICE__ * ,unsigned char ,unsigned char );// Offset=0x68 Size=0x8
    void  ( * EvtCxDevicePreDisarmWakeFromSx)(struct WDFDEVICE__ * );// Offset=0x70 Size=0x8
    void  ( * EvtCxDevicePostDisarmWakeFromSx)(struct WDFDEVICE__ * );// Offset=0x78 Size=0x8
    void  ( * EvtCxDevicePreWakeFromSxTriggered)(struct WDFDEVICE__ * );// Offset=0x80 Size=0x8
    void  ( * EvtCxDevicePostWakeFromSxTriggered)(struct WDFDEVICE__ * );// Offset=0x88 Size=0x8
};

struct CxPnpPowerCallbacksInit// Size=0x1b0 (Id=845)
{
    struct _WDFCX_PNPPOWER_EVENT_CALLBACKS PnpPowerCallbacks;// Offset=0x0 Size=0x118
    struct _WDFCX_POWER_POLICY_EVENT_CALLBACKS PowerPolicyCallbacks;// Offset=0x118 Size=0x90
    unsigned char Set;// Offset=0x1a8 Size=0x1
};
