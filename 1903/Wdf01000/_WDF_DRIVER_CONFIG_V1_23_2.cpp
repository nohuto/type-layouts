struct _WDF_DRIVER_CONFIG_V1_23// Size=0x20 (Id=4940)
{
    unsigned long Size;// Offset=0x0 Size=0x4
    long  ( * EvtDriverDeviceAdd)(struct WDFDRIVER__ * ,struct WDFDEVICE_INIT * );// Offset=0x8 Size=0x8
    void  ( * EvtDriverUnload)(struct WDFDRIVER__ * );// Offset=0x10 Size=0x8
    unsigned long DriverInitFlags;// Offset=0x18 Size=0x4
    unsigned long DriverPoolTag;// Offset=0x1c Size=0x4
};
