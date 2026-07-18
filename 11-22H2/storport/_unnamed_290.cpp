union _unnamed_290// Size=0x8 (Id=290)
{
    union // Size=0x8 (Id=0)
    {
        struct // Size=0x8 (Id=0)
        {
            unsigned char DeviceClaimed:1;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x1
            unsigned char Enumerated:1;// Offset=0x0 Size=0x1 BitOffset=0x1 BitSize=0x1
            unsigned char Present:1;// Offset=0x0 Size=0x1 BitOffset=0x2 BitSize=0x1
            unsigned char Temporary:1;// Offset=0x0 Size=0x1 BitOffset=0x3 BitSize=0x1
            unsigned char WmiInitialized:1;// Offset=0x0 Size=0x1 BitOffset=0x4 BitSize=0x1
            unsigned char Zombie:1;// Offset=0x0 Size=0x1 BitOffset=0x5 BitSize=0x1
            unsigned char RescanNeeded:1;// Offset=0x0 Size=0x1 BitOffset=0x6 BitSize=0x1
            unsigned char PoweringUp:1;// Offset=0x0 Size=0x1 BitOffset=0x7 BitSize=0x1
            unsigned char PoweringDown:1;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x1
            unsigned char D3ColdSupported:1;// Offset=0x1 Size=0x1 BitOffset=0x1 BitSize=0x1
            unsigned char D3ColdEnabled:1;// Offset=0x1 Size=0x1 BitOffset=0x2 BitSize=0x1
            unsigned char UnusedBit:1;// Offset=0x1 Size=0x1 BitOffset=0x3 BitSize=0x1
            unsigned char DeviceInitialized:1;// Offset=0x1 Size=0x1 BitOffset=0x4 BitSize=0x1
            unsigned char DisabledPendingTimer:1;// Offset=0x1 Size=0x1 BitOffset=0x5 BitSize=0x1
            unsigned char DumpActiveNotCapable:1;// Offset=0x1 Size=0x1 BitOffset=0x6 BitSize=0x1
            unsigned char RegisteredForPoFx:1;// Offset=0x1 Size=0x1 BitOffset=0x7 BitSize=0x1
            unsigned char BootUnit:1;// Offset=0x2 Size=0x1 BitOffset=0x0 BitSize=0x1
            unsigned char Unresponsive:1;// Offset=0x2 Size=0x1 BitOffset=0x1 BitSize=0x1
            unsigned char DumpAlwaysPowerOn:1;// Offset=0x2 Size=0x1 BitOffset=0x2 BitSize=0x1
            unsigned char VmLunInterfaceState:1;// Offset=0x2 Size=0x1 BitOffset=0x3 BitSize=0x1
            unsigned char SupportsAtaInformation:1;// Offset=0x2 Size=0x1 BitOffset=0x4 BitSize=0x1
            unsigned char DeviceFailed:1;// Offset=0x2 Size=0x1 BitOffset=0x5 BitSize=0x1
            unsigned char Removable:1;// Offset=0x2 Size=0x1 BitOffset=0x6 BitSize=0x1
            unsigned char SurpriseRemovalOK:1;// Offset=0x2 Size=0x1 BitOffset=0x7 BitSize=0x1
            unsigned char SMRResourceFailed:1;// Offset=0x3 Size=0x1 BitOffset=0x0 BitSize=0x1
            unsigned char DFxPowerDownActive:1;// Offset=0x3 Size=0x1 BitOffset=0x1 BitSize=0x1
            unsigned char DFxPoNotifiedAdaptiveD3Engaged:1;// Offset=0x3 Size=0x1 BitOffset=0x2 BitSize=0x1
            unsigned char DeviceFailureReportedToWHEA:1;// Offset=0x3 Size=0x1 BitOffset=0x3 BitSize=0x1
            unsigned char IoSizeDistributionEnabled:1;// Offset=0x3 Size=0x1 BitOffset=0x4 BitSize=0x1
            unsigned char DisableRuntimePowerBypassPoFx:1;// Offset=0x3 Size=0x1 BitOffset=0x5 BitSize=0x1
            unsigned char TcgConfigurationInvalid:1;// Offset=0x3 Size=0x1 BitOffset=0x6 BitSize=0x1
            unsigned long Reserved:1;// Offset=0x4 Size=0x4 BitOffset=0x0 BitSize=0x1
        };
        unsigned long AsUlong;// Offset=0x0 Size=0x4
    };
};
