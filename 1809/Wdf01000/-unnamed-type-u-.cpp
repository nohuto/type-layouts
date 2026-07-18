    union <unnamed-type-u>// Size=0x18 (Id=33914)
    {
        struct <unnamed-type-PrepareHardware>// Size=0x18 (Id=33915)
        {
            long  ( * PreCallback)(struct WDFDEVICE__ * ,struct WDFCMRESLIST__ * ,struct WDFCMRESLIST__ * );// Offset=0x0 Size=0x8
            long  ( * PostCallback)(struct WDFDEVICE__ * ,struct WDFCMRESLIST__ * ,struct WDFCMRESLIST__ * );// Offset=0x8 Size=0x8
            void  ( * CleanupCallback)(struct WDFDEVICE__ * ,struct WDFCMRESLIST__ * ,struct WDFCMRESLIST__ * );// Offset=0x10 Size=0x8
        };
        struct FxCxPnpPowerCallbackContext::<unnamed-type-u>::<unnamed-type-PrepareHardware> PrepareHardware;// Offset=0x0 Size=0x18
        struct <unnamed-type-ReleaseHardware>// Size=0x10 (Id=33920)
        {
            long  ( * PreCallback)(struct WDFDEVICE__ * ,struct WDFCMRESLIST__ * );// Offset=0x0 Size=0x8
            long  ( * PostCallback)(struct WDFDEVICE__ * ,struct WDFCMRESLIST__ * );// Offset=0x8 Size=0x8
        };
        struct FxCxPnpPowerCallbackContext::<unnamed-type-u>::<unnamed-type-ReleaseHardware> ReleaseHardware;// Offset=0x0 Size=0x10
        struct <unnamed-type-D0Entry>// Size=0x18 (Id=33924)
        {
            long  ( * PreCallback)(struct WDFDEVICE__ * ,enum _WDF_POWER_DEVICE_STATE );// Offset=0x0 Size=0x8
            long  ( * PostCallback)(struct WDFDEVICE__ * ,enum _WDF_POWER_DEVICE_STATE );// Offset=0x8 Size=0x8
            void  ( * CleanupCallback)(struct WDFDEVICE__ * ,enum _WDF_POWER_DEVICE_STATE );// Offset=0x10 Size=0x8
        };
        struct FxCxPnpPowerCallbackContext::<unnamed-type-u>::<unnamed-type-D0Entry> D0Entry;// Offset=0x0 Size=0x18
        struct <unnamed-type-D0Exit>// Size=0x10 (Id=33929)
        {
            long  ( * PreCallback)(struct WDFDEVICE__ * ,enum _WDF_POWER_DEVICE_STATE );// Offset=0x0 Size=0x8
            long  ( * PostCallback)(struct WDFDEVICE__ * ,enum _WDF_POWER_DEVICE_STATE );// Offset=0x8 Size=0x8
        };
        struct FxCxPnpPowerCallbackContext::<unnamed-type-u>::<unnamed-type-D0Exit> D0Exit;// Offset=0x0 Size=0x10
        struct <unnamed-type-SmIoInit>// Size=0x18 (Id=33933)
        {
            long  ( * PreCallback)(struct WDFDEVICE__ * );// Offset=0x0 Size=0x8
            long  ( * PostCallback)(struct WDFDEVICE__ * );// Offset=0x8 Size=0x8
            void  ( * CleanupCallback)(struct WDFDEVICE__ * );// Offset=0x10 Size=0x8
        };
        struct FxCxPnpPowerCallbackContext::<unnamed-type-u>::<unnamed-type-SmIoInit> SmIoInit;// Offset=0x0 Size=0x18
        struct <unnamed-type-SmIoRestart>// Size=0x18 (Id=33938)
        {
            long  ( * PreCallback)(struct WDFDEVICE__ * );// Offset=0x0 Size=0x8
            long  ( * PostCallback)(struct WDFDEVICE__ * );// Offset=0x8 Size=0x8
            void  ( * CleanupCallback)(struct WDFDEVICE__ * );// Offset=0x10 Size=0x8
        };
        struct FxCxPnpPowerCallbackContext::<unnamed-type-u>::<unnamed-type-SmIoRestart> SmIoRestart;// Offset=0x0 Size=0x18
        struct <unnamed-type-SmIoSuspend>// Size=0x10 (Id=33943)
        {
            long  ( * PreCallback)(struct WDFDEVICE__ * );// Offset=0x0 Size=0x8
            long  ( * PostCallback)(struct WDFDEVICE__ * );// Offset=0x8 Size=0x8
        };
        struct FxCxPnpPowerCallbackContext::<unnamed-type-u>::<unnamed-type-SmIoSuspend> SmIoSuspend;// Offset=0x0 Size=0x10
        struct <unnamed-type-SmIoFlush>// Size=0x10 (Id=33947)
        {
            void  ( * PreCallback)(struct WDFDEVICE__ * );// Offset=0x0 Size=0x8
            void  ( * PostCallback)(struct WDFDEVICE__ * );// Offset=0x8 Size=0x8
        };
        struct FxCxPnpPowerCallbackContext::<unnamed-type-u>::<unnamed-type-SmIoFlush> SmIoFlush;// Offset=0x0 Size=0x10
        struct <unnamed-type-SmIoCleanup>// Size=0x10 (Id=33951)
        {
            void  ( * PreCallback)(struct WDFDEVICE__ * );// Offset=0x0 Size=0x8
            void  ( * PostCallback)(struct WDFDEVICE__ * );// Offset=0x8 Size=0x8
        };
        struct FxCxPnpPowerCallbackContext::<unnamed-type-u>::<unnamed-type-SmIoCleanup> SmIoCleanup;// Offset=0x0 Size=0x10
        struct <unnamed-type-SurpriseRemoval>// Size=0x10 (Id=33955)
        {
            void  ( * PreCallback)(struct WDFDEVICE__ * );// Offset=0x0 Size=0x8
            void  ( * PostCallback)(struct WDFDEVICE__ * );// Offset=0x8 Size=0x8
        };
        struct FxCxPnpPowerCallbackContext::<unnamed-type-u>::<unnamed-type-SurpriseRemoval> SurpriseRemoval;// Offset=0x0 Size=0x10
    };
