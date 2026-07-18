union FxCxPnpPowerCallbackContext::<unnamed-type-u>// Size=0x18 (Id=3230)
{
    union // Size=0x18 (Id=0)
    {
        struct <unnamed-type-Generic>// Size=0x18 (Id=33108)
        {
            void * PreCallback;// Offset=0x0 Size=0x8
            void * PostCallback;// Offset=0x8 Size=0x8
            void * CleanupCallback;// Offset=0x10 Size=0x8
        };
        struct FxCxPnpPowerCallbackContext::<unnamed-type-u>::<unnamed-type-Generic> Generic;// Offset=0x0 Size=0x18
        struct <unnamed-type-PrepareHardware>// Size=0x18 (Id=33113)
        {
            long  ( * PreCallback)(struct WDFDEVICE__ * ,struct WDFCMRESLIST__ * ,struct WDFCMRESLIST__ * );// Offset=0x0 Size=0x8
            long  ( * PostCallback)(struct WDFDEVICE__ * ,struct WDFCMRESLIST__ * ,struct WDFCMRESLIST__ * );// Offset=0x8 Size=0x8
            void  ( * CleanupCallback)(struct WDFDEVICE__ * ,struct WDFCMRESLIST__ * ,struct WDFCMRESLIST__ * );// Offset=0x10 Size=0x8
        };
        struct FxCxPnpPowerCallbackContext::<unnamed-type-u>::<unnamed-type-PrepareHardware> PrepareHardware;// Offset=0x0 Size=0x18
        struct <unnamed-type-ReleaseHardware>// Size=0x10 (Id=33118)
        {
            long  ( * PreCallback)(struct WDFDEVICE__ * ,struct WDFCMRESLIST__ * );// Offset=0x0 Size=0x8
            long  ( * PostCallback)(struct WDFDEVICE__ * ,struct WDFCMRESLIST__ * );// Offset=0x8 Size=0x8
        };
        struct FxCxPnpPowerCallbackContext::<unnamed-type-u>::<unnamed-type-ReleaseHardware> ReleaseHardware;// Offset=0x0 Size=0x10
        struct <unnamed-type-D0Entry>// Size=0x18 (Id=33122)
        {
            long  ( * PreCallback)(struct WDFDEVICE__ * ,enum _WDF_POWER_DEVICE_STATE );// Offset=0x0 Size=0x8
            long  ( * PostCallback)(struct WDFDEVICE__ * ,enum _WDF_POWER_DEVICE_STATE );// Offset=0x8 Size=0x8
            void  ( * CleanupCallback)(struct WDFDEVICE__ * ,enum _WDF_POWER_DEVICE_STATE );// Offset=0x10 Size=0x8
        };
        struct FxCxPnpPowerCallbackContext::<unnamed-type-u>::<unnamed-type-D0Entry> D0Entry;// Offset=0x0 Size=0x18
        struct <unnamed-type-D0Exit>// Size=0x10 (Id=33127)
        {
            long  ( * PreCallback)(struct WDFDEVICE__ * ,enum _WDF_POWER_DEVICE_STATE );// Offset=0x0 Size=0x8
            long  ( * PostCallback)(struct WDFDEVICE__ * ,enum _WDF_POWER_DEVICE_STATE );// Offset=0x8 Size=0x8
        };
        struct FxCxPnpPowerCallbackContext::<unnamed-type-u>::<unnamed-type-D0Exit> D0Exit;// Offset=0x0 Size=0x10
        struct <unnamed-type-SmIoInit>// Size=0x18 (Id=33131)
        {
            long  ( * PreCallback)(struct WDFDEVICE__ * );// Offset=0x0 Size=0x8
            long  ( * PostCallback)(struct WDFDEVICE__ * );// Offset=0x8 Size=0x8
            void  ( * CleanupCallback)(struct WDFDEVICE__ * );// Offset=0x10 Size=0x8
        };
        struct FxCxPnpPowerCallbackContext::<unnamed-type-u>::<unnamed-type-SmIoInit> SmIoInit;// Offset=0x0 Size=0x18
        struct <unnamed-type-SmIoRestart>// Size=0x18 (Id=33136)
        {
            long  ( * PreCallback)(struct WDFDEVICE__ * );// Offset=0x0 Size=0x8
            long  ( * PostCallback)(struct WDFDEVICE__ * );// Offset=0x8 Size=0x8
            void  ( * CleanupCallback)(struct WDFDEVICE__ * );// Offset=0x10 Size=0x8
        };
        struct FxCxPnpPowerCallbackContext::<unnamed-type-u>::<unnamed-type-SmIoRestart> SmIoRestart;// Offset=0x0 Size=0x18
        struct <unnamed-type-SmIoRestartEx>// Size=0x18 (Id=33141)
        {
            long  ( * PreCallback)(struct WDFDEVICE__ * ,enum _WDF_POWER_DEVICE_STATE );// Offset=0x0 Size=0x8
            long  ( * PostCallback)(struct WDFDEVICE__ * ,enum _WDF_POWER_DEVICE_STATE );// Offset=0x8 Size=0x8
            void  ( * CleanupCallback)(struct WDFDEVICE__ * ,enum _WDF_POWER_DEVICE_STATE );// Offset=0x10 Size=0x8
        };
        struct FxCxPnpPowerCallbackContext::<unnamed-type-u>::<unnamed-type-SmIoRestartEx> SmIoRestartEx;// Offset=0x0 Size=0x18
        struct <unnamed-type-SmIoSuspend>// Size=0x10 (Id=33146)
        {
            long  ( * PreCallback)(struct WDFDEVICE__ * );// Offset=0x0 Size=0x8
            long  ( * PostCallback)(struct WDFDEVICE__ * );// Offset=0x8 Size=0x8
        };
        struct FxCxPnpPowerCallbackContext::<unnamed-type-u>::<unnamed-type-SmIoSuspend> SmIoSuspend;// Offset=0x0 Size=0x10
        struct <unnamed-type-SmIoSuspendEx>// Size=0x10 (Id=33150)
        {
            long  ( * PreCallback)(struct WDFDEVICE__ * ,enum _WDF_POWER_DEVICE_STATE );// Offset=0x0 Size=0x8
            long  ( * PostCallback)(struct WDFDEVICE__ * ,enum _WDF_POWER_DEVICE_STATE );// Offset=0x8 Size=0x8
        };
        struct FxCxPnpPowerCallbackContext::<unnamed-type-u>::<unnamed-type-SmIoSuspendEx> SmIoSuspendEx;// Offset=0x0 Size=0x10
        struct <unnamed-type-SmIoFlush>// Size=0x10 (Id=33154)
        {
            void  ( * PreCallback)(struct WDFDEVICE__ * );// Offset=0x0 Size=0x8
            void  ( * PostCallback)(struct WDFDEVICE__ * );// Offset=0x8 Size=0x8
        };
        struct FxCxPnpPowerCallbackContext::<unnamed-type-u>::<unnamed-type-SmIoFlush> SmIoFlush;// Offset=0x0 Size=0x10
        struct <unnamed-type-SmIoCleanup>// Size=0x10 (Id=33158)
        {
            void  ( * PreCallback)(struct WDFDEVICE__ * );// Offset=0x0 Size=0x8
            void  ( * PostCallback)(struct WDFDEVICE__ * );// Offset=0x8 Size=0x8
        };
        struct FxCxPnpPowerCallbackContext::<unnamed-type-u>::<unnamed-type-SmIoCleanup> SmIoCleanup;// Offset=0x0 Size=0x10
        struct <unnamed-type-SurpriseRemoval>// Size=0x10 (Id=33162)
        {
            void  ( * PreCallback)(struct WDFDEVICE__ * );// Offset=0x0 Size=0x8
            void  ( * PostCallback)(struct WDFDEVICE__ * );// Offset=0x8 Size=0x8
        };
        struct FxCxPnpPowerCallbackContext::<unnamed-type-u>::<unnamed-type-SurpriseRemoval> SurpriseRemoval;// Offset=0x0 Size=0x10
        struct <unnamed-type-ArmWakeFromS0>// Size=0x18 (Id=33166)
        {
            long  ( * PreCallback)(struct WDFDEVICE__ * );// Offset=0x0 Size=0x8
            long  ( * PostCallback)(struct WDFDEVICE__ * );// Offset=0x8 Size=0x8
            void  ( * CleanupCallback)(struct WDFDEVICE__ * );// Offset=0x10 Size=0x8
        };
        struct FxCxPnpPowerCallbackContext::<unnamed-type-u>::<unnamed-type-ArmWakeFromS0> ArmWakeFromS0;// Offset=0x0 Size=0x18
        struct <unnamed-type-DisarmWakeFromS0>// Size=0x10 (Id=33171)
        {
            void  ( * PreCallback)(struct WDFDEVICE__ * );// Offset=0x0 Size=0x8
            void  ( * PostCallback)(struct WDFDEVICE__ * );// Offset=0x8 Size=0x8
        };
        struct FxCxPnpPowerCallbackContext::<unnamed-type-u>::<unnamed-type-DisarmWakeFromS0> DisarmWakeFromS0;// Offset=0x0 Size=0x10
        struct <unnamed-type-WakeFromS0Triggered>// Size=0x10 (Id=33175)
        {
            void  ( * PreCallback)(struct WDFDEVICE__ * );// Offset=0x0 Size=0x8
            void  ( * PostCallback)(struct WDFDEVICE__ * );// Offset=0x8 Size=0x8
        };
        struct FxCxPnpPowerCallbackContext::<unnamed-type-u>::<unnamed-type-WakeFromS0Triggered> WakeFromS0Triggered;// Offset=0x0 Size=0x10
        struct <unnamed-type-ArmWakeFromSx>// Size=0x18 (Id=33179)
        {
            long  ( * PreCallback)(struct WDFDEVICE__ * );// Offset=0x0 Size=0x8
            long  ( * PostCallback)(struct WDFDEVICE__ * );// Offset=0x8 Size=0x8
            void  ( * CleanupCallback)(struct WDFDEVICE__ * );// Offset=0x10 Size=0x8
        };
        struct FxCxPnpPowerCallbackContext::<unnamed-type-u>::<unnamed-type-ArmWakeFromSx> ArmWakeFromSx;// Offset=0x0 Size=0x18
        struct <unnamed-type-ArmWakeFromSxWithReason>// Size=0x18 (Id=33184)
        {
            long  ( * PreCallback)(struct WDFDEVICE__ * ,unsigned char ,unsigned char );// Offset=0x0 Size=0x8
            long  ( * PostCallback)(struct WDFDEVICE__ * ,unsigned char ,unsigned char );// Offset=0x8 Size=0x8
            void  ( * CleanupCallback)(struct WDFDEVICE__ * ,unsigned char ,unsigned char );// Offset=0x10 Size=0x8
        };
        struct FxCxPnpPowerCallbackContext::<unnamed-type-u>::<unnamed-type-ArmWakeFromSxWithReason> ArmWakeFromSxWithReason;// Offset=0x0 Size=0x18
        struct <unnamed-type-DisarmWakeFromSx>// Size=0x10 (Id=33189)
        {
            void  ( * PreCallback)(struct WDFDEVICE__ * );// Offset=0x0 Size=0x8
            void  ( * PostCallback)(struct WDFDEVICE__ * );// Offset=0x8 Size=0x8
        };
        struct FxCxPnpPowerCallbackContext::<unnamed-type-u>::<unnamed-type-DisarmWakeFromSx> DisarmWakeFromSx;// Offset=0x0 Size=0x10
        struct <unnamed-type-WakeFromSxTriggered>// Size=0x10 (Id=33193)
        {
            void  ( * PreCallback)(struct WDFDEVICE__ * );// Offset=0x0 Size=0x8
            void  ( * PostCallback)(struct WDFDEVICE__ * );// Offset=0x8 Size=0x8
        };
        struct FxCxPnpPowerCallbackContext::<unnamed-type-u>::<unnamed-type-WakeFromSxTriggered> WakeFromSxTriggered;// Offset=0x0 Size=0x10
        struct <unnamed-type-D0EntryPostHardwareEnabled>// Size=0x18 (Id=33197)
        {
            long  ( * PreCallback)(struct WDFDEVICE__ * ,enum _WDF_POWER_DEVICE_STATE );// Offset=0x0 Size=0x8
            long  ( * PostCallback)(struct WDFDEVICE__ * ,enum _WDF_POWER_DEVICE_STATE );// Offset=0x8 Size=0x8
            void  ( * CleanupCallback)(struct WDFDEVICE__ * ,enum _WDF_POWER_DEVICE_STATE );// Offset=0x10 Size=0x8
        };
        struct FxCxPnpPowerCallbackContext::<unnamed-type-u>::<unnamed-type-D0EntryPostHardwareEnabled> D0EntryPostHardwareEnabled;// Offset=0x0 Size=0x18
        struct <unnamed-type-D0ExitPreHardwareDisabled>// Size=0x10 (Id=33202)
        {
            long  ( * PreCallback)(struct WDFDEVICE__ * ,enum _WDF_POWER_DEVICE_STATE );// Offset=0x0 Size=0x8
            long  ( * PostCallback)(struct WDFDEVICE__ * ,enum _WDF_POWER_DEVICE_STATE );// Offset=0x8 Size=0x8
        };
        struct FxCxPnpPowerCallbackContext::<unnamed-type-u>::<unnamed-type-D0ExitPreHardwareDisabled> D0ExitPreHardwareDisabled;// Offset=0x0 Size=0x10
    };
};
