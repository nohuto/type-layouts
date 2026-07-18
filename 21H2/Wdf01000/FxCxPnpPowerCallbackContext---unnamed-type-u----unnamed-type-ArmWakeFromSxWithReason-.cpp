struct FxCxPnpPowerCallbackContext::<unnamed-type-u>::<unnamed-type-ArmWakeFromSxWithReason>// Size=0x18 (Id=1433)
{
    long  ( * PreCallback)(struct WDFDEVICE__ * ,unsigned char ,unsigned char );// Offset=0x0 Size=0x8
    long  ( * PostCallback)(struct WDFDEVICE__ * ,unsigned char ,unsigned char );// Offset=0x8 Size=0x8
    void  ( * CleanupCallback)(struct WDFDEVICE__ * ,unsigned char ,unsigned char );// Offset=0x10 Size=0x8
};
