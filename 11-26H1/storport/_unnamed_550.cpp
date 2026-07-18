union _unnamed_550// Size=0x4 (Id=550)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long D3InModernStandbyEnabled:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long D3InLowestSystemPower:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long PStatesRegistered:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long D3ColdEnabled:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long D3ColdAllowed:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long PoFxPlaceHolderModeEnabled:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long DumpActiveNotCapable:1;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1
        unsigned long DumpAlwaysPowerOn:1;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x1
        unsigned long NoNamespacePoFxRegistration:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
        unsigned long DisableInterruptsOnD3:1;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x1
        unsigned long D3IdleTimeoutUserOverride:1;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x1
        unsigned long AutoPowerStateTransitionEnabled:1;// Offset=0x0 Size=0x4 BitOffset=0xb BitSize=0x1
        unsigned long PendingMaxPStateChange:1;// Offset=0x0 Size=0x4 BitOffset=0xc BitSize=0x1
        unsigned long SystemInLPE:1;// Offset=0x0 Size=0x4 BitOffset=0xd BitSize=0x1
        unsigned long SystemCoalescingOn:1;// Offset=0x0 Size=0x4 BitOffset=0xe BitSize=0x1
        unsigned long PdcIdleResiliencyEngaged:1;// Offset=0x0 Size=0x4 BitOffset=0xf BitSize=0x1
        unsigned long CoolingInterfaceExposed:1;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x1
        unsigned long SetNOPPMEPendingForPowerUp:1;// Offset=0x0 Size=0x4 BitOffset=0x11 BitSize=0x1
        unsigned long NOPPMEPendingToEnable:1;// Offset=0x0 Size=0x4 BitOffset=0x12 BitSize=0x1
        unsigned long Reserved:13;// Offset=0x0 Size=0x4 BitOffset=0x13 BitSize=0xd
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};
