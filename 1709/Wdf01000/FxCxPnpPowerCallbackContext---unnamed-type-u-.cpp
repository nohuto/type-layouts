union FxCxPnpPowerCallbackContext::<unnamed-type-u>// Size=0x18 (Id=1329)
{
    union // Size=0x18 (Id=0)
    {
        struct <unnamed-type-PrepareHardware>// Size=0x18 (Id=31170)
        {
            long  ( * PreCallback)(struct WDFDEVICE__ * ,struct WDFCMRESLIST__ * ,struct WDFCMRESLIST__ * );// Offset=0x0 Size=0x8
            long  ( * PostCallback)(struct WDFDEVICE__ * ,struct WDFCMRESLIST__ * ,struct WDFCMRESLIST__ * );// Offset=0x8 Size=0x8
            void  ( * CleanupCallback)(struct WDFDEVICE__ * ,struct WDFCMRESLIST__ * ,struct WDFCMRESLIST__ * );// Offset=0x10 Size=0x8
        };
        struct FxCxPnpPowerCallbackContext::<unnamed-type-u>::<unnamed-type-PrepareHardware> PrepareHardware;// Offset=0x0 Size=0x18
        struct <unnamed-type-ReleaseHardware>// Size=0x10 (Id=31175)
        {
            long  ( * PreCallback)(struct WDFDEVICE__ * ,struct WDFCMRESLIST__ * );// Offset=0x0 Size=0x8
            long  ( * PostCallback)(struct WDFDEVICE__ * ,struct WDFCMRESLIST__ * );// Offset=0x8 Size=0x8
        };
        struct FxCxPnpPowerCallbackContext::<unnamed-type-u>::<unnamed-type-ReleaseHardware> ReleaseHardware;// Offset=0x0 Size=0x10
        struct <unnamed-type-D0Entry>// Size=0x18 (Id=31179)
        {
            long  ( * PreCallback)(struct WDFDEVICE__ * ,enum _WDF_POWER_DEVICE_STATE );// Offset=0x0 Size=0x8
            long  ( * PostCallback)(struct WDFDEVICE__ * ,enum _WDF_POWER_DEVICE_STATE );// Offset=0x8 Size=0x8
            void  ( * CleanupCallback)(struct WDFDEVICE__ * ,enum _WDF_POWER_DEVICE_STATE );// Offset=0x10 Size=0x8
        };
        struct FxCxPnpPowerCallbackContext::<unnamed-type-u>::<unnamed-type-D0Entry> D0Entry;// Offset=0x0 Size=0x18
        struct <unnamed-type-D0Exit>// Size=0x10 (Id=31184)
        {
            long  ( * PreCallback)(struct WDFDEVICE__ * ,enum _WDF_POWER_DEVICE_STATE );// Offset=0x0 Size=0x8
            long  ( * PostCallback)(struct WDFDEVICE__ * ,enum _WDF_POWER_DEVICE_STATE );// Offset=0x8 Size=0x8
        };
        struct FxCxPnpPowerCallbackContext::<unnamed-type-u>::<unnamed-type-D0Exit> D0Exit;// Offset=0x0 Size=0x10
        struct <unnamed-type-SmIoInit>// Size=0x18 (Id=31188)
        {
            long  ( * PreCallback)(struct WDFDEVICE__ * );// Offset=0x0 Size=0x8
            long  ( * PostCallback)(struct WDFDEVICE__ * );// Offset=0x8 Size=0x8
            void  ( * CleanupCallback)(struct WDFDEVICE__ * );// Offset=0x10 Size=0x8
        };
        struct FxCxPnpPowerCallbackContext::<unnamed-type-u>::<unnamed-type-SmIoInit> SmIoInit;// Offset=0x0 Size=0x18
        struct <unnamed-type-SmIoRestart>// Size=0x18 (Id=31193)
        {
            long  ( * PreCallback)(struct WDFDEVICE__ * );// Offset=0x0 Size=0x8
            long  ( * PostCallback)(struct WDFDEVICE__ * );// Offset=0x8 Size=0x8
            void  ( * CleanupCallback)(struct WDFDEVICE__ * );// Offset=0x10 Size=0x8
        };
        struct FxCxPnpPowerCallbackContext::<unnamed-type-u>::<unnamed-type-SmIoRestart> SmIoRestart;// Offset=0x0 Size=0x18
        struct <unnamed-type-SmIoSuspend>// Size=0x10 (Id=31198)
        {
            long  ( * PreCallback)(struct WDFDEVICE__ * );// Offset=0x0 Size=0x8
            long  ( * PostCallback)(struct WDFDEVICE__ * );// Offset=0x8 Size=0x8
        };
        struct FxCxPnpPowerCallbackContext::<unnamed-type-u>::<unnamed-type-SmIoSuspend> SmIoSuspend;// Offset=0x0 Size=0x10
        struct <unnamed-type-SmIoFlush>// Size=0x10 (Id=31202)
        {
            void  ( * PreCallback)(struct WDFDEVICE__ * );// Offset=0x0 Size=0x8
            void  ( * PostCallback)(struct WDFDEVICE__ * );// Offset=0x8 Size=0x8
        };
        struct FxCxPnpPowerCallbackContext::<unnamed-type-u>::<unnamed-type-SmIoFlush> SmIoFlush;// Offset=0x0 Size=0x10
        struct <unnamed-type-SmIoCleanup>// Size=0x10 (Id=31206)
        {
            void  ( * PreCallback)(struct WDFDEVICE__ * );// Offset=0x0 Size=0x8
            void  ( * PostCallback)(struct WDFDEVICE__ * );// Offset=0x8 Size=0x8
        };
        struct FxCxPnpPowerCallbackContext::<unnamed-type-u>::<unnamed-type-SmIoCleanup> SmIoCleanup;// Offset=0x0 Size=0x10
        struct <unnamed-type-SurpriseRemoval>// Size=0x10 (Id=31210)
        {
            void  ( * PreCallback)(struct WDFDEVICE__ * );// Offset=0x0 Size=0x8
            void  ( * PostCallback)(struct WDFDEVICE__ * );// Offset=0x8 Size=0x8
        };
        struct FxCxPnpPowerCallbackContext::<unnamed-type-u>::<unnamed-type-SurpriseRemoval> SurpriseRemoval;// Offset=0x0 Size=0x10
    };
};
