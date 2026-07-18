union FxTelemetryDriverInfo// Size=0x4 (Id=4978)
{
    struct <unnamed-type-bitmap>// Size=0x4 (Id=66993)
    {
        unsigned long IsNonPnpDriver:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long IsNoDispatchOverride:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long IsVerifierOn:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long IsEnhancedVerifierOn:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long IsFilter:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long IsUsingRemoveLockOption:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long IsUsingNonDefaultHardwareReleaseOrder:1;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1
        unsigned long IsPowerPolicyOwner:1;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x1
        unsigned long IsS0IdleEnabled:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
        unsigned long IsS0IdleWakeFromS0Enabled:1;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x1
        unsigned long IsS0IdleUsbSSEnabled:1;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x1
        unsigned long IsS0IdleSystemManaged:1;// Offset=0x0 Size=0x4 BitOffset=0xb BitSize=0x1
        unsigned long IsSxWakeEnabled:1;// Offset=0x0 Size=0x4 BitOffset=0xc BitSize=0x1
        unsigned long IsUsingLevelTriggeredLineInterrupt:1;// Offset=0x0 Size=0x4 BitOffset=0xd BitSize=0x1
        unsigned long IsUsingEdgeTriggeredLineInterrupt:1;// Offset=0x0 Size=0x4 BitOffset=0xe BitSize=0x1
        unsigned long IsUsingMsiXOrSingleMsi22Interrupt:1;// Offset=0x0 Size=0x4 BitOffset=0xf BitSize=0x1
        unsigned long IsUsingMsi22MultiMessageInterrupt:1;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x1
        unsigned long IsUsingMultipleInterrupt:1;// Offset=0x0 Size=0x4 BitOffset=0x11 BitSize=0x1
        unsigned long IsUsingPassiveLevelInterrupt:1;// Offset=0x0 Size=0x4 BitOffset=0x12 BitSize=0x1
        unsigned long IsUsingBusMasterDma:1;// Offset=0x0 Size=0x4 BitOffset=0x13 BitSize=0x1
        unsigned long IsUsingSystemDma:1;// Offset=0x0 Size=0x4 BitOffset=0x14 BitSize=0x1
        unsigned long IsUsingSystemDmaDuplex:1;// Offset=0x0 Size=0x4 BitOffset=0x15 BitSize=0x1
        unsigned long IsUsingStaticBusEnumration:1;// Offset=0x0 Size=0x4 BitOffset=0x16 BitSize=0x1
        unsigned long IsUsingDynamicBusEnumeration:1;// Offset=0x0 Size=0x4 BitOffset=0x17 BitSize=0x1
    };
    struct FxTelemetryDriverInfo::<unnamed-type-bitmap> bitmap;// Offset=0x0 Size=0x4
    unsigned long Dword;// Offset=0x0 Size=0x4
};
