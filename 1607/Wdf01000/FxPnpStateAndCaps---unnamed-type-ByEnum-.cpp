enum _WDF_TRI_STATE
{
    WdfFalse=0,
    WdfTrue=1,
    WdfUseDefault=2
};

struct FxPnpStateAndCaps::<unnamed-type-ByEnum>// Size=0x4 (Id=559)
{
    struct // Size=0x4 (Id=0)
    {
        enum _WDF_TRI_STATE Disabled:2;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x2
        enum _WDF_TRI_STATE DontDisplayInUI:2;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x2
        enum _WDF_TRI_STATE Failed:2;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x2
        enum _WDF_TRI_STATE NotDisableable:2;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x2
        enum _WDF_TRI_STATE Removed:2;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x2
        enum _WDF_TRI_STATE ResourcesChanged:2;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x2
        enum _WDF_TRI_STATE LockSupported:2;// Offset=0x0 Size=0x4 BitOffset=0xc BitSize=0x2
        enum _WDF_TRI_STATE EjectSupported:2;// Offset=0x0 Size=0x4 BitOffset=0xe BitSize=0x2
        enum _WDF_TRI_STATE Removable:2;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x2
        enum _WDF_TRI_STATE DockDevice:2;// Offset=0x0 Size=0x4 BitOffset=0x12 BitSize=0x2
        enum _WDF_TRI_STATE UniqueID:2;// Offset=0x0 Size=0x4 BitOffset=0x14 BitSize=0x2
        enum _WDF_TRI_STATE SilentInstall:2;// Offset=0x0 Size=0x4 BitOffset=0x16 BitSize=0x2
        enum _WDF_TRI_STATE SurpriseRemovalOK:2;// Offset=0x0 Size=0x4 BitOffset=0x18 BitSize=0x2
        enum _WDF_TRI_STATE HardwareDisabled:2;// Offset=0x0 Size=0x4 BitOffset=0x1a BitSize=0x2
        enum _WDF_TRI_STATE NoDisplayInUI:2;// Offset=0x0 Size=0x4 BitOffset=0x1c BitSize=0x2
    };
};
