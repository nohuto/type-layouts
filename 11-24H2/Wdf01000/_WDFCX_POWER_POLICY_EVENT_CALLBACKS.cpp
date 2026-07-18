struct _WDFCX_POWER_POLICY_EVENT_CALLBACKS// Size=0x90 (Id=615)
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
