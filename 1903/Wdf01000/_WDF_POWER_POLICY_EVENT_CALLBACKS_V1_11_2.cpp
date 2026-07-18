struct _WDF_POWER_POLICY_EVENT_CALLBACKS_V1_11// Size=0x40 (Id=3642)
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
