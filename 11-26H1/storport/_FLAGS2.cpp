union _FLAGS2// Size=0x8 (Id=916)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned char IoPerformanceEventsEnabled:1;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char ForwardedIoEnabled:1;// Offset=0x0 Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char GatewayHealthInspectionEnabled:1;// Offset=0x0 Size=0x1 BitOffset=0x2 BitSize=0x1
        unsigned char IdentifyControllerFailed:1;// Offset=0x0 Size=0x1 BitOffset=0x3 BitSize=0x1
        unsigned char IsNvmeIceSupported:1;// Offset=0x0 Size=0x1 BitOffset=0x4 BitSize=0x1
        unsigned char IsNVMeOverTunneledDevice:1;// Offset=0x0 Size=0x1 BitOffset=0x5 BitSize=0x1
        unsigned char D3InModernStandbyEnabled:1;// Offset=0x0 Size=0x1 BitOffset=0x6 BitSize=0x1
        unsigned char ProtocolFeatureEffectsPendingUpdate:1;// Offset=0x0 Size=0x1 BitOffset=0x7 BitSize=0x1
        unsigned char DlrmDisable:1;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char DlrmDsmSupport:1;// Offset=0x1 Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned long IsIceEnabled:1;// Offset=0x4 Size=0x4 BitOffset=0x0 BitSize=0x1
    };
    unsigned long long AsUlonglong;// Offset=0x0 Size=0x8
};
