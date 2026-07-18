enum _WDF_TRI_STATE
{
    WdfFalse=0,
    WdfTrue=1,
    WdfUseDefault=2
};

struct _WDF_DEVICE_STATE// Size=0x1c (Id=228)
{
    unsigned long Size;// Offset=0x0 Size=0x4
    enum _WDF_TRI_STATE Disabled;// Offset=0x4 Size=0x4
    enum _WDF_TRI_STATE DontDisplayInUI;// Offset=0x8 Size=0x4
    enum _WDF_TRI_STATE Failed;// Offset=0xc Size=0x4
    enum _WDF_TRI_STATE NotDisableable;// Offset=0x10 Size=0x4
    enum _WDF_TRI_STATE Removed;// Offset=0x14 Size=0x4
    enum _WDF_TRI_STATE ResourcesChanged;// Offset=0x18 Size=0x4
};
