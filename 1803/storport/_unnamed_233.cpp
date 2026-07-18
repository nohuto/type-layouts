struct _unnamed_233// Size=0x7 (Id=233)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char InitializedMiniport:1;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char WmiMiniPortInitialized:1;// Offset=0x0 Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char WmiInitialized:1;// Offset=0x0 Size=0x1 BitOffset=0x2 BitSize=0x1
        unsigned char BusInterfaceInternal:1;// Offset=0x0 Size=0x1 BitOffset=0x3 BitSize=0x1
        unsigned char InHwInitialize:1;// Offset=0x0 Size=0x1 BitOffset=0x4 BitSize=0x1
        unsigned char IdlePowerManagementEnabled:1;// Offset=0x0 Size=0x1 BitOffset=0x5 BitSize=0x1
        unsigned char TargetedRescan:1;// Offset=0x0 Size=0x1 BitOffset=0x6 BitSize=0x1
        unsigned char BootAdapter:1;// Offset=0x0 Size=0x1 BitOffset=0x7 BitSize=0x1
    };
    unsigned char InvalidateBusRelations;// Offset=0x1 Size=0x1
    unsigned char RescanBus;// Offset=0x2 Size=0x1
    unsigned char InterruptsEnabled;// Offset=0x3 Size=0x1
    struct // Size=0x3 (Id=0)
    {
        unsigned char PoweringUp:1;// Offset=0x4 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char PoweringDown:1;// Offset=0x4 Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char D3ColdAllowed:1;// Offset=0x4 Size=0x1 BitOffset=0x2 BitSize=0x1
        unsigned char D3ColdEnabled:1;// Offset=0x4 Size=0x1 BitOffset=0x3 BitSize=0x1
        unsigned char DisableRuntimePowerManagement:1;// Offset=0x4 Size=0x1 BitOffset=0x4 BitSize=0x1
        unsigned char DumpActiveNotCapable:1;// Offset=0x4 Size=0x1 BitOffset=0x5 BitSize=0x1
        unsigned char D3IdleTimeoutUserOverride:1;// Offset=0x4 Size=0x1 BitOffset=0x6 BitSize=0x1
        unsigned char SystemInLPE:1;// Offset=0x4 Size=0x1 BitOffset=0x7 BitSize=0x1
        unsigned char SystemCoalescingOn:1;// Offset=0x5 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char UseDMAv3:1;// Offset=0x5 Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char NoUnitPoFxRegistration:1;// Offset=0x5 Size=0x1 BitOffset=0x2 BitSize=0x1
        unsigned char CoolingInterfaceExposed:1;// Offset=0x5 Size=0x1 BitOffset=0x3 BitSize=0x1
        unsigned char ProtocolCommandEffectsPendingUpdate:1;// Offset=0x5 Size=0x1 BitOffset=0x4 BitSize=0x1
        unsigned char FindAdapterCalled:1;// Offset=0x5 Size=0x1 BitOffset=0x5 BitSize=0x1
        unsigned char DumpAlwaysPowerOn:1;// Offset=0x5 Size=0x1 BitOffset=0x6 BitSize=0x1
        unsigned char DisableInterruptsOnD3:1;// Offset=0x5 Size=0x1 BitOffset=0x7 BitSize=0x1
        unsigned char EtwEnabled:1;// Offset=0x6 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char AdapterInterfaceTypeInitialized:1;// Offset=0x6 Size=0x1 BitOffset=0x1 BitSize=0x1
    };
};
