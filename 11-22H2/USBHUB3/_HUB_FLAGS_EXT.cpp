union _HUB_FLAGS_EXT// Size=0x4 (Id=739)
{
    unsigned long AsUlong32;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long DisableSelectiveSuspend:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long ReprogramDeviceContextOnD3ColdExit:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long NeedsSDM845HighSpeedEnumWorkaround:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long DisableU1:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long RootHubInD0UntilIdleResiliency:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long SupportsTunneling:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long HandleOverCurrentOnResume:1;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1
        unsigned long DisableU1U2OnTunneledDevices:1;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x1
        unsigned long IsInternal:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
    };
};
