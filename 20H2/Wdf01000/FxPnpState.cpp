enum _WDF_TRI_STATE
{
    WdfFalse=0,
    WdfTrue=1,
    WdfUseDefault=2
};

union FxPnpState// Size=0x4 (Id=1311)
{
    struct <unnamed-type-ByEnum>// Size=0x4 (Id=53359)
    {
        enum _WDF_TRI_STATE Disabled:2;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x2
        enum _WDF_TRI_STATE DontDisplayInUI:2;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x2
        enum _WDF_TRI_STATE Failed:2;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x2
        enum _WDF_TRI_STATE NotDisableable:2;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x2
        enum _WDF_TRI_STATE Removed:2;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x2
        enum _WDF_TRI_STATE ResourcesChanged:2;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x2
        enum _WDF_TRI_STATE AssignedToGuest:2;// Offset=0x0 Size=0x4 BitOffset=0xc BitSize=0x2
    };
    struct FxPnpState::<unnamed-type-ByEnum> ByEnum;// Offset=0x0 Size=0x4
    long Value;// Offset=0x0 Size=0x4
};
