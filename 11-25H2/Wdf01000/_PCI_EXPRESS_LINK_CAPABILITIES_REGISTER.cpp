union _PCI_EXPRESS_LINK_CAPABILITIES_REGISTER// Size=0x4 (Id=3642)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long MaximumLinkSpeed:4;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x4
        unsigned long MaximumLinkWidth:6;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x6
        unsigned long ActiveStatePMSupport:2;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x2
        unsigned long L0sExitLatency:3;// Offset=0x0 Size=0x4 BitOffset=0xc BitSize=0x3
        unsigned long L1ExitLatency:3;// Offset=0x0 Size=0x4 BitOffset=0xf BitSize=0x3
        unsigned long ClockPowerManagement:1;// Offset=0x0 Size=0x4 BitOffset=0x12 BitSize=0x1
        unsigned long SurpriseDownErrorReportingCapable:1;// Offset=0x0 Size=0x4 BitOffset=0x13 BitSize=0x1
        unsigned long DataLinkLayerActiveReportingCapable:1;// Offset=0x0 Size=0x4 BitOffset=0x14 BitSize=0x1
        unsigned long LinkBandwidthNotificationCapability:1;// Offset=0x0 Size=0x4 BitOffset=0x15 BitSize=0x1
        unsigned long AspmOptionalityCompliance:1;// Offset=0x0 Size=0x4 BitOffset=0x16 BitSize=0x1
        unsigned long Rsvd:1;// Offset=0x0 Size=0x4 BitOffset=0x17 BitSize=0x1
        unsigned long PortNumber:8;// Offset=0x0 Size=0x4 BitOffset=0x18 BitSize=0x8
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};
