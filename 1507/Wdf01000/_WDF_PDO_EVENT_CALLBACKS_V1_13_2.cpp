struct _WDF_PDO_EVENT_CALLBACKS_V1_13// Size=0x40 (Id=2538)
{
    unsigned long Size;// Offset=0x0 Size=0x4
    long  ( * EvtDeviceResourcesQuery)(struct WDFDEVICE__ * ,struct WDFCMRESLIST__ * );// Offset=0x8 Size=0x8
    long  ( * EvtDeviceResourceRequirementsQuery)(struct WDFDEVICE__ * ,struct WDFIORESREQLIST__ * );// Offset=0x10 Size=0x8
    long  ( * EvtDeviceEject)(struct WDFDEVICE__ * );// Offset=0x18 Size=0x8
    long  ( * EvtDeviceSetLock)(struct WDFDEVICE__ * ,unsigned char );// Offset=0x20 Size=0x8
    long  ( * EvtDeviceEnableWakeAtBus)(struct WDFDEVICE__ * ,enum _SYSTEM_POWER_STATE );// Offset=0x28 Size=0x8
    void  ( * EvtDeviceDisableWakeAtBus)(struct WDFDEVICE__ * );// Offset=0x30 Size=0x8
    void  ( * EvtDeviceReportedMissing)(struct WDFDEVICE__ * );// Offset=0x38 Size=0x8
};
