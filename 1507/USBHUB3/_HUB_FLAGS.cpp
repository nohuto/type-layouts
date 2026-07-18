union _HUB_FLAGS// Size=0x4 (Id=620)
{
    unsigned long AsUlong32;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long IsTtHub:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long IsMultiTtHub:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long PerPortPower:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long PortPortOverCurrent:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long NoOverCurrentProtection:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long Initialized:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long Configured:1;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1
        unsigned long SelectiveSuspendNotSupportedByParentStack:1;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x1
        unsigned long WakeOnConnect:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
        unsigned long ArmedForWake:1;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x1
        unsigned long WaitWakeQueued:1;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x1
        unsigned long ResetTTOnCancel:1;// Offset=0x0 Size=0x4 BitOffset=0xb BitSize=0x1
        unsigned long NoClearTTBufferOnCancel:1;// Offset=0x0 Size=0x4 BitOffset=0xc BitSize=0x1
        unsigned long PowerOnPortsOnStart:1;// Offset=0x0 Size=0x4 BitOffset=0xd BitSize=0x1
        unsigned long WdfPowerReferencePending:1;// Offset=0x0 Size=0x4 BitOffset=0xe BitSize=0x1
        unsigned long DisableLpm:1;// Offset=0x0 Size=0x4 BitOffset=0xf BitSize=0x1
        unsigned long DisableUsb20HardwareLpm:1;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x1
        unsigned long CanAcquirePowerReference:1;// Offset=0x0 Size=0x4 BitOffset=0x11 BitSize=0x1
        unsigned long InAcpiNamespace:1;// Offset=0x0 Size=0x4 BitOffset=0x12 BitSize=0x1
        unsigned long AddDelayAfterResetComplete:1;// Offset=0x0 Size=0x4 BitOffset=0x13 BitSize=0x1
        unsigned long IgnoreU0InDisconnected:1;// Offset=0x0 Size=0x4 BitOffset=0x14 BitSize=0x1
        unsigned long IgnoreEnabledInSSInactive:1;// Offset=0x0 Size=0x4 BitOffset=0x15 BitSize=0x1
        unsigned long IsInBootOrPagingPath:1;// Offset=0x0 Size=0x4 BitOffset=0x16 BitSize=0x1
        unsigned long DisableSuperSpeed:1;// Offset=0x0 Size=0x4 BitOffset=0x17 BitSize=0x1
        unsigned long IgnoreEnabledInReset:1;// Offset=0x0 Size=0x4 BitOffset=0x18 BitSize=0x1
        unsigned long DisableSelectiveSuspendForIntegratedHub:1;// Offset=0x0 Size=0x4 BitOffset=0x19 BitSize=0x1
        unsigned long S0IdleConfigured:1;// Offset=0x0 Size=0x4 BitOffset=0x1a BitSize=0x1
        unsigned long PowerReferenceAcquiredDueToGlobalSetting:1;// Offset=0x0 Size=0x4 BitOffset=0x1b BitSize=0x1
        unsigned long DisallowU2AcceptOnlyWithU1AcceptAndInitiate:1;// Offset=0x0 Size=0x4 BitOffset=0x1c BitSize=0x1
        unsigned long OvercurrentDetected:1;// Offset=0x0 Size=0x4 BitOffset=0x1d BitSize=0x1
        unsigned long DisableOnSoftRemove:1;// Offset=0x0 Size=0x4 BitOffset=0x1e BitSize=0x1
        unsigned long ConvertPollingToComplianceOnStart:1;// Offset=0x0 Size=0x4 BitOffset=0x1f BitSize=0x1
    };
};
