struct _WDFCX_PNPPOWER_EVENT_CALLBACKS// Size=0x118 (Id=838)
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
