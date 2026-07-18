enum _WDF_TRI_STATE
{
    WdfFalse=0,
    WdfTrue=1,
    WdfUseDefault=2
};

enum _WDF_FILEOBJECT_CLASS
{
    WdfFileObjectInvalid=0,
    WdfFileObjectNotRequired=1,
    WdfFileObjectWdfCanUseFsContext=2,
    WdfFileObjectWdfCanUseFsContext2=3,
    WdfFileObjectWdfCannotUseFsContexts=4,
    WdfFileObjectCanBeOptional=-2147483648
};

struct _WDF_FILEOBJECT_CONFIG_V1_17// Size=0x28 (Id=2687)
{
    unsigned long Size;// Offset=0x0 Size=0x4
    void  ( * EvtDeviceFileCreate)(struct WDFDEVICE__ * ,struct WDFREQUEST__ * ,struct WDFFILEOBJECT__ * );// Offset=0x8 Size=0x8
    void  ( * EvtFileClose)(struct WDFFILEOBJECT__ * );// Offset=0x10 Size=0x8
    void  ( * EvtFileCleanup)(struct WDFFILEOBJECT__ * );// Offset=0x18 Size=0x8
    enum _WDF_TRI_STATE AutoForwardCleanupClose;// Offset=0x20 Size=0x4
    enum _WDF_FILEOBJECT_CLASS FileObjectClass;// Offset=0x24 Size=0x4
};
