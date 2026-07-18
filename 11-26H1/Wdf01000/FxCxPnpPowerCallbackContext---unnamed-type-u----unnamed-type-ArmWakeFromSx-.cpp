struct FxCxPnpPowerCallbackContext::<unnamed-type-u>::<unnamed-type-ArmWakeFromSx>// Size=0x18 (Id=3239)
{
    long  ( * PreCallback)(struct WDFDEVICE__ * );// Offset=0x0 Size=0x8
    long  ( * PostCallback)(struct WDFDEVICE__ * );// Offset=0x8 Size=0x8
    void  ( * CleanupCallback)(struct WDFDEVICE__ * );// Offset=0x10 Size=0x8
};
