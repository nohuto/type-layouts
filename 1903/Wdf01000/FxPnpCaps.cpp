enum _WDF_TRI_STATE
{
    WdfFalse=0,
    WdfTrue=1,
    WdfUseDefault=2
};

union FxPnpCaps// Size=0x4 (Id=553)
{
    struct <unnamed-type-ByEnum>// Size=0x4 (Id=61858)
    {
        enum _WDF_TRI_STATE LockSupported:2;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x2
        enum _WDF_TRI_STATE EjectSupported:2;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x2
        enum _WDF_TRI_STATE Removable:2;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x2
        enum _WDF_TRI_STATE DockDevice:2;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x2
        enum _WDF_TRI_STATE UniqueID:2;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x2
        enum _WDF_TRI_STATE SilentInstall:2;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x2
        enum _WDF_TRI_STATE SurpriseRemovalOK:2;// Offset=0x0 Size=0x4 BitOffset=0xc BitSize=0x2
        enum _WDF_TRI_STATE HardwareDisabled:2;// Offset=0x0 Size=0x4 BitOffset=0xe BitSize=0x2
        enum _WDF_TRI_STATE NoDisplayInUI:2;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x2
    };
    struct FxPnpCaps::<unnamed-type-ByEnum> ByEnum;// Offset=0x0 Size=0x4
    long Value;// Offset=0x0 Size=0x4
};
