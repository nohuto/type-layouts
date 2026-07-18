union _HUB_GLOBAL_FLAGS// Size=0x4 (Id=569)
{
    unsigned long AsUlong32;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long HubGlobalKeyName:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long DisableSelectiveSuspendUI:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long MsOsDescriptorMode:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long EnableDiagnosticMode:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long DisableUxdSupport:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long EnableExtendedValidation:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long WakeOnConnectUI:1;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1
        unsigned long DisableOnSoftRemove:1;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x1
        unsigned long UxdGlobalDeleteShutdown:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
        unsigned long UxdGlobalDeleteOnReload:1;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x1
        unsigned long UxdGlobalDeleteDisconnect:1;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x1
        unsigned long UxdGlobalEnable:1;// Offset=0x0 Size=0x4 BitOffset=0xb BitSize=0x1
        unsigned long EtwEnabled:1;// Offset=0x0 Size=0x4 BitOffset=0xc BitSize=0x1
        unsigned long EnableReservedValidation:1;// Offset=0x0 Size=0x4 BitOffset=0xd BitSize=0x1
        unsigned long EnableStrictestValidation:1;// Offset=0x0 Size=0x4 BitOffset=0xe BitSize=0x1
        unsigned long EnableUsb20HardwareLpm:1;// Offset=0x0 Size=0x4 BitOffset=0xf BitSize=0x1
        unsigned long PreventDebounceTimeForSuperSpeedDevices:1;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x1
        unsigned long DisableFastEnumeration:1;// Offset=0x0 Size=0x4 BitOffset=0x11 BitSize=0x1
    };
};
