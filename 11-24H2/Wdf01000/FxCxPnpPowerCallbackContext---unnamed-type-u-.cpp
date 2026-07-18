union FxCxPnpPowerCallbackContext::<unnamed-type-u>// Size=0x18 (Id=3018)
{
    union // Size=0x18 (Id=0)
    {
        struct <unnamed-type-Generic>// Size=0x18 (Id=31816)
        {
            void * PreCallback;// Offset=0x0 Size=0x8
            void * PostCallback;// Offset=0x8 Size=0x8
            void * CleanupCallback;// Offset=0x10 Size=0x8
        };
        struct FxCxPnpPowerCallbackContext::<unnamed-type-u>::<unnamed-type-Generic> Generic;// Offset=0x0 Size=0x18
        struct <unnamed-type-PrepareHardware>// Size=0x18 (Id=31821)
        {
            long  ( * PreCallback)(struct WDFDEVICE__ * ,struct WDFCMRESLIST__ * ,struct WDFCMRESLIST__ * );// Offset=0x0 Size=0x8
            long  ( * PostCallback)(struct WDFDEVICE__ * ,struct WDFCMRESLIST__ * ,struct WDFCMRESLIST__ * );// Offset=0x8 Size=0x8
            void  ( * CleanupCallback)(struct WDFDEVICE__ * ,struct WDFCMRESLIST__ * ,struct WDFCMRESLIST__ * );// Offset=0x10 Size=0x8
        };
        struct FxCxPnpPowerCallbackContext::<unnamed-type-u>::<unnamed-type-PrepareHardware> PrepareHardware;// Offset=0x0 Size=0x18
        struct <unnamed-type-ReleaseHardware>// Size=0x10 (Id=31826)
        {
            long  ( * PreCallback)(struct WDFDEVICE__ * ,struct WDFCMRESLIST__ * );// Offset=0x0 Size=0x8
            long  ( * PostCallback)(struct WDFDEVICE__ * ,struct WDFCMRESLIST__ * );// Offset=0x8 Size=0x8
        };
        struct FxCxPnpPowerCallbackContext::<unnamed-type-u>::<unnamed-type-ReleaseHardware> ReleaseHardware;// Offset=0x0 Size=0x10
        struct <unnamed-type-D0Entry>// Size=0x18 (Id=31830)
        {
            long  ( * PreCallback)(struct WDFDEVICE__ * ,enum _WDF_POWER_DEVICE_STATE );// Offset=0x0 Size=0x8
            long  ( * PostCallback)(struct WDFDEVICE__ * ,enum _WDF_POWER_DEVICE_STATE );// Offset=0x8 Size=0x8
            void  ( * CleanupCallback)(struct WDFDEVICE__ * ,enum _WDF_POWER_DEVICE_STATE );// Offset=0x10 Size=0x8
        };
        struct FxCxPnpPowerCallbackContext::<unnamed-type-u>::<unnamed-type-D0Entry> D0Entry;// Offset=0x0 Size=0x18
        struct <unnamed-type-D0Exit>// Size=0x10 (Id=31835)
        {
            long  ( * PreCallback)(struct WDFDEVICE__ * ,enum _WDF_POWER_DEVICE_STATE );// Offset=0x0 Size=0x8
            long  ( * PostCallback)(struct WDFDEVICE__ * ,enum _WDF_POWER_DEVICE_STATE );// Offset=0x8 Size=0x8
        };
        struct FxCxPnpPowerCallbackContext::<unnamed-type-u>::<unnamed-type-D0Exit> D0Exit;// Offset=0x0 Size=0x10
        struct <unnamed-type-SmIoInit>// Size=0x18 (Id=31839)
        {
            long  ( * PreCallback)(struct WDFDEVICE__ * );// Offset=0x0 Size=0x8
            long  ( * PostCallback)(struct WDFDEVICE__ * );// Offset=0x8 Size=0x8
            void  ( * CleanupCallback)(struct WDFDEVICE__ * );// Offset=0x10 Size=0x8
        };
        struct FxCxPnpPowerCallbackContext::<unnamed-type-u>::<unnamed-type-SmIoInit> SmIoInit;// Offset=0x0 Size=0x18
        struct <unnamed-type-SmIoRestart>// Size=0x18 (Id=31844)
        {
            long  ( * PreCallback)(struct WDFDEVICE__ * );// Offset=0x0 Size=0x8
            long  ( * PostCallback)(struct WDFDEVICE__ * );// Offset=0x8 Size=0x8
            void  ( * CleanupCallback)(struct WDFDEVICE__ * );// Offset=0x10 Size=0x8
        };
        struct FxCxPnpPowerCallbackContext::<unnamed-type-u>::<unnamed-type-SmIoRestart> SmIoRestart;// Offset=0x0 Size=0x18
        struct <unnamed-type-SmIoRestartEx>// Size=0x18 (Id=31849)
        {
            long  ( * PreCallback)(struct WDFDEVICE__ * ,enum _WDF_POWER_DEVICE_STATE );// Offset=0x0 Size=0x8
            long  ( * PostCallback)(struct WDFDEVICE__ * ,enum _WDF_POWER_DEVICE_STATE );// Offset=0x8 Size=0x8
            void  ( * CleanupCallback)(struct WDFDEVICE__ * ,enum _WDF_POWER_DEVICE_STATE );// Offset=0x10 Size=0x8
        };
        struct FxCxPnpPowerCallbackContext::<unnamed-type-u>::<unnamed-type-SmIoRestartEx> SmIoRestartEx;// Offset=0x0 Size=0x18
        struct <unnamed-type-SmIoSuspend>// Size=0x10 (Id=31854)
        {
            long  ( * PreCallback)(struct WDFDEVICE__ * );// Offset=0x0 Size=0x8
            long  ( * PostCallback)(struct WDFDEVICE__ * );// Offset=0x8 Size=0x8
        };
        struct FxCxPnpPowerCallbackContext::<unnamed-type-u>::<unnamed-type-SmIoSuspend> SmIoSuspend;// Offset=0x0 Size=0x10
        struct <unnamed-type-SmIoSuspendEx>// Size=0x10 (Id=31858)
        {
            long  ( * PreCallback)(struct WDFDEVICE__ * ,enum _WDF_POWER_DEVICE_STATE );// Offset=0x0 Size=0x8
            long  ( * PostCallback)(struct WDFDEVICE__ * ,enum _WDF_POWER_DEVICE_STATE );// Offset=0x8 Size=0x8
        };
        struct FxCxPnpPowerCallbackContext::<unnamed-type-u>::<unnamed-type-SmIoSuspendEx> SmIoSuspendEx;// Offset=0x0 Size=0x10
        struct <unnamed-type-SmIoFlush>// Size=0x10 (Id=31862)
        {
            void  ( * PreCallback)(struct WDFDEVICE__ * );// Offset=0x0 Size=0x8
            void  ( * PostCallback)(struct WDFDEVICE__ * );// Offset=0x8 Size=0x8
        };
        struct FxCxPnpPowerCallbackContext::<unnamed-type-u>::<unnamed-type-SmIoFlush> SmIoFlush;// Offset=0x0 Size=0x10
        struct <unnamed-type-SmIoCleanup>// Size=0x10 (Id=31866)
        {
            void  ( * PreCallback)(struct WDFDEVICE__ * );// Offset=0x0 Size=0x8
            void  ( * PostCallback)(struct WDFDEVICE__ * );// Offset=0x8 Size=0x8
        };
        struct FxCxPnpPowerCallbackContext::<unnamed-type-u>::<unnamed-type-SmIoCleanup> SmIoCleanup;// Offset=0x0 Size=0x10
        struct <unnamed-type-SurpriseRemoval>// Size=0x10 (Id=31870)
        {
            void  ( * PreCallback)(struct WDFDEVICE__ * );// Offset=0x0 Size=0x8
            void  ( * PostCallback)(struct WDFDEVICE__ * );// Offset=0x8 Size=0x8
        };
        struct FxCxPnpPowerCallbackContext::<unnamed-type-u>::<unnamed-type-SurpriseRemoval> SurpriseRemoval;// Offset=0x0 Size=0x10
        struct <unnamed-type-ArmWakeFromS0>// Size=0x18 (Id=31874)
        {
            long  ( * PreCallback)(struct WDFDEVICE__ * );// Offset=0x0 Size=0x8
            long  ( * PostCallback)(struct WDFDEVICE__ * );// Offset=0x8 Size=0x8
            void  ( * CleanupCallback)(struct WDFDEVICE__ * );// Offset=0x10 Size=0x8
        };
        struct FxCxPnpPowerCallbackContext::<unnamed-type-u>::<unnamed-type-ArmWakeFromS0> ArmWakeFromS0;// Offset=0x0 Size=0x18
        struct <unnamed-type-DisarmWakeFromS0>// Size=0x10 (Id=31879)
        {
            void  ( * PreCallback)(struct WDFDEVICE__ * );// Offset=0x0 Size=0x8
            void  ( * PostCallback)(struct WDFDEVICE__ * );// Offset=0x8 Size=0x8
        };
        struct FxCxPnpPowerCallbackContext::<unnamed-type-u>::<unnamed-type-DisarmWakeFromS0> DisarmWakeFromS0;// Offset=0x0 Size=0x10
        struct <unnamed-type-WakeFromS0Triggered>// Size=0x10 (Id=31883)
        {
            void  ( * PreCallback)(struct WDFDEVICE__ * );// Offset=0x0 Size=0x8
            void  ( * PostCallback)(struct WDFDEVICE__ * );// Offset=0x8 Size=0x8
        };
        struct FxCxPnpPowerCallbackContext::<unnamed-type-u>::<unnamed-type-WakeFromS0Triggered> WakeFromS0Triggered;// Offset=0x0 Size=0x10
        struct <unnamed-type-ArmWakeFromSx>// Size=0x18 (Id=31887)
        {
            long  ( * PreCallback)(struct WDFDEVICE__ * );// Offset=0x0 Size=0x8
            long  ( * PostCallback)(struct WDFDEVICE__ * );// Offset=0x8 Size=0x8
            void  ( * CleanupCallback)(struct WDFDEVICE__ * );// Offset=0x10 Size=0x8
        };
        struct FxCxPnpPowerCallbackContext::<unnamed-type-u>::<unnamed-type-ArmWakeFromSx> ArmWakeFromSx;// Offset=0x0 Size=0x18
        struct <unnamed-type-ArmWakeFromSxWithReason>// Size=0x18 (Id=31892)
        {
            long  ( * PreCallback)(struct WDFDEVICE__ * ,unsigned char ,unsigned char );// Offset=0x0 Size=0x8
            long  ( * PostCallback)(struct WDFDEVICE__ * ,unsigned char ,unsigned char );// Offset=0x8 Size=0x8
            void  ( * CleanupCallback)(struct WDFDEVICE__ * ,unsigned char ,unsigned char );// Offset=0x10 Size=0x8
        };
        struct FxCxPnpPowerCallbackContext::<unnamed-type-u>::<unnamed-type-ArmWakeFromSxWithReason> ArmWakeFromSxWithReason;// Offset=0x0 Size=0x18
        struct <unnamed-type-DisarmWakeFromSx>// Size=0x10 (Id=31897)
        {
            void  ( * PreCallback)(struct WDFDEVICE__ * );// Offset=0x0 Size=0x8
            void  ( * PostCallback)(struct WDFDEVICE__ * );// Offset=0x8 Size=0x8
        };
        struct FxCxPnpPowerCallbackContext::<unnamed-type-u>::<unnamed-type-DisarmWakeFromSx> DisarmWakeFromSx;// Offset=0x0 Size=0x10
        struct <unnamed-type-WakeFromSxTriggered>// Size=0x10 (Id=31901)
        {
            void  ( * PreCallback)(struct WDFDEVICE__ * );// Offset=0x0 Size=0x8
            void  ( * PostCallback)(struct WDFDEVICE__ * );// Offset=0x8 Size=0x8
        };
        struct FxCxPnpPowerCallbackContext::<unnamed-type-u>::<unnamed-type-WakeFromSxTriggered> WakeFromSxTriggered;// Offset=0x0 Size=0x10
        struct <unnamed-type-D0EntryPostHardwareEnabled>// Size=0x18 (Id=31905)
        {
            long  ( * PreCallback)(struct WDFDEVICE__ * ,enum _WDF_POWER_DEVICE_STATE );// Offset=0x0 Size=0x8
            long  ( * PostCallback)(struct WDFDEVICE__ * ,enum _WDF_POWER_DEVICE_STATE );// Offset=0x8 Size=0x8
            void  ( * CleanupCallback)(struct WDFDEVICE__ * ,enum _WDF_POWER_DEVICE_STATE );// Offset=0x10 Size=0x8
        };
        struct FxCxPnpPowerCallbackContext::<unnamed-type-u>::<unnamed-type-D0EntryPostHardwareEnabled> D0EntryPostHardwareEnabled;// Offset=0x0 Size=0x18
        struct <unnamed-type-D0ExitPreHardwareDisabled>// Size=0x10 (Id=31910)
        {
            long  ( * PreCallback)(struct WDFDEVICE__ * ,enum _WDF_POWER_DEVICE_STATE );// Offset=0x0 Size=0x8
            long  ( * PostCallback)(struct WDFDEVICE__ * ,enum _WDF_POWER_DEVICE_STATE );// Offset=0x8 Size=0x8
        };
        struct FxCxPnpPowerCallbackContext::<unnamed-type-u>::<unnamed-type-D0ExitPreHardwareDisabled> D0ExitPreHardwareDisabled;// Offset=0x0 Size=0x10
    };
};
