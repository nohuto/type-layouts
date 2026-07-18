enum _WDF_TRI_STATE
{
    WdfFalse=0,
    WdfTrue=1,
    WdfUseDefault=2
};

struct _WDF_DEVICE_PNP_CAPABILITIES_V1_13// Size=0x30 (Id=3932)
{
    unsigned long Size;// Offset=0x0 Size=0x4
    enum _WDF_TRI_STATE LockSupported;// Offset=0x4 Size=0x4
    enum _WDF_TRI_STATE EjectSupported;// Offset=0x8 Size=0x4
    enum _WDF_TRI_STATE Removable;// Offset=0xc Size=0x4
    enum _WDF_TRI_STATE DockDevice;// Offset=0x10 Size=0x4
    enum _WDF_TRI_STATE UniqueID;// Offset=0x14 Size=0x4
    enum _WDF_TRI_STATE SilentInstall;// Offset=0x18 Size=0x4
    enum _WDF_TRI_STATE SurpriseRemovalOK;// Offset=0x1c Size=0x4
    enum _WDF_TRI_STATE HardwareDisabled;// Offset=0x20 Size=0x4
    enum _WDF_TRI_STATE NoDisplayInUI;// Offset=0x24 Size=0x4
    unsigned long Address;// Offset=0x28 Size=0x4
    unsigned long UINumber;// Offset=0x2c Size=0x4
};
