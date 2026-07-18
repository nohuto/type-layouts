struct FxCxPnpPowerCallbackContext::<unnamed-type-u>::<unnamed-type-D0Entry>// Size=0x18 (Id=3048)
{
    long  ( * PreCallback)(struct WDFDEVICE__ * ,enum _WDF_POWER_DEVICE_STATE );// Offset=0x0 Size=0x8
    long  ( * PostCallback)(struct WDFDEVICE__ * ,enum _WDF_POWER_DEVICE_STATE );// Offset=0x8 Size=0x8
    void  ( * CleanupCallback)(struct WDFDEVICE__ * ,enum _WDF_POWER_DEVICE_STATE );// Offset=0x10 Size=0x8
};
