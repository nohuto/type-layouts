union _PCI_ROOT_BUS_OSC_CONTROL_FIELD::<unnamed-type-u>// Size=0x4 (Id=3938)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long ExpressNativeHotPlug:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long ShpcNativeHotPlug:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long ExpressNativePME:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long ExpressAdvancedErrorReporting:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long ExpressCapabilityStructure:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long LatencyToleranceReporting:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long AllOnesMmioInvalidToDrivers:1;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1
        unsigned long DownstreamPortContainment:1;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x1
        unsigned long CompletionTimeout:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
        unsigned long FirmwareIntermediaryConfig:1;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x1
        unsigned long Reserved:22;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x16
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};
