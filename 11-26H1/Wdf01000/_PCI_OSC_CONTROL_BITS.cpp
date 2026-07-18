enum _PCI_OSC_CONTROL_BITS
{
    PciOscControlBitExpressNativeHotPlug=1,
    PciOscControlBitShpcNativeHotPlug=2,
    PciOscControlBitExpressNativePME=4,
    PciOscControlBitExpressAdvancedErrorReporting=8,
    PciOscControlBitExpressCapabilityStructure=16,
    PciOscControlBitLatencyToleranceReporting=32,
    PciOscControlBitAllOnesMmioInvalidToDrivers=64,
    PciOscControlBitDownstreamPortContainment=128,
    PciOscControlBitCompletionTimeout=256,
    PciOscControlBitFirmwareIntermediaryConfig=512
};
