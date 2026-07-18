struct FxPowerPolicyStateCallbackInfo// Size=0x10 (Id=626)
{
    unsigned long Types;// Offset=0x0 Size=0x4
    void  ( * Callback)(struct WDFDEVICE__ * ,struct _WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA * );// Offset=0x8 Size=0x8
};
