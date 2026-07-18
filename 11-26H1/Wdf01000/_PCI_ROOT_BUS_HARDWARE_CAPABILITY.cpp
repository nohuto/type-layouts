enum _PCI_HARDWARE_INTERFACE
{
    PciConventional=0,
    PciXMode1=1,
    PciXMode2=2,
    PciExpress=3
};

struct _PCI_ROOT_BUS_OSC_SUPPORT_FIELD// Size=0x4 (Id=2016)
{
    union // Size=0x4 (Id=0)
    {
        union <unnamed-type-u>// Size=0x4 (Id=16459)
        {
            unsigned long ExtendedConfigOpRegions:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long ActiveStatePowerManagement:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
            unsigned long ClockPowerManagement:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
            unsigned long SegmentGroups:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
            unsigned long MessageSignaledInterrupts:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
            unsigned long OptimizedBufferFlushAndFill:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
            unsigned long AspmOptionality:1;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1
            unsigned long ErrorDisconnectRecovery:1;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x1
            unsigned long HpxDescriptorRecord:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
            unsigned long Reserved:23;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x17
            unsigned long AsULONG;// Offset=0x0 Size=0x4
        };
        union _PCI_ROOT_BUS_OSC_SUPPORT_FIELD::<unnamed-type-u> u;// Offset=0x0 Size=0x4
    };
};

struct _PCI_ROOT_BUS_OSC_CONTROL_FIELD// Size=0x4 (Id=4036)
{
    union // Size=0x4 (Id=0)
    {
        union <unnamed-type-u>// Size=0x4 (Id=16445)
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
            unsigned long AsULONG;// Offset=0x0 Size=0x4
        };
        union _PCI_ROOT_BUS_OSC_CONTROL_FIELD::<unnamed-type-u> u;// Offset=0x0 Size=0x4
    };
};

enum _CXL_PROTOCOL_VERSION
{
    NoCxlSupport=0,
    Cxl11Support=1,
    Cxl20Support=2,
    Cxl30Support=3
};

struct _CXL_BUS_OSC_SUPPORT_FIELD// Size=0x4 (Id=1597)
{
    union // Size=0x4 (Id=0)
    {
        union <unnamed-type-u>// Size=0x4 (Id=6337)
        {
            unsigned long RdcRchPortRegisterAccessSupported:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long VhRegisterAccessSupported:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
            unsigned long ProtocolErrorReportingSupported:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
            unsigned long NativeHotPlugSupported:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
            unsigned long Reserved:28;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1c
            unsigned long AsULONG;// Offset=0x0 Size=0x4
        };
        union _CXL_BUS_OSC_SUPPORT_FIELD::<unnamed-type-u> u;// Offset=0x0 Size=0x4
    };
};

struct _CXL_BUS_OSC_CONTROL_FIELD// Size=0x4 (Id=3875)
{
    union // Size=0x4 (Id=0)
    {
        union <unnamed-type-u>// Size=0x4 (Id=6332)
        {
            unsigned long MemoryErrorReportingControl:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long Reserved:31;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1f
            unsigned long AsULONG;// Offset=0x0 Size=0x4
        };
        union _CXL_BUS_OSC_CONTROL_FIELD::<unnamed-type-u> u;// Offset=0x0 Size=0x4
    };
};

struct _PCI_ROOT_BUS_HARDWARE_CAPABILITY// Size=0x38 (Id=1376)
{
    enum _PCI_HARDWARE_INTERFACE SecondaryInterface;// Offset=0x0 Size=0x4
    unsigned char BusCapabilitiesFound;// Offset=0x4 Size=0x1
    unsigned long CurrentSpeedAndMode;// Offset=0x8 Size=0x4
    unsigned long SupportedSpeedsAndModes;// Offset=0xc Size=0x4
    unsigned char DeviceIDMessagingCapable;// Offset=0x10 Size=0x1
    enum PCI_BUS_WIDTH SecondaryBusWidth;// Offset=0x14 Size=0x4
    struct _PCI_ROOT_BUS_OSC_SUPPORT_FIELD OscFeatureSupport;// Offset=0x18 Size=0x4
    struct _PCI_ROOT_BUS_OSC_CONTROL_FIELD OscControlRequest;// Offset=0x1c Size=0x4
    struct _PCI_ROOT_BUS_OSC_CONTROL_FIELD OscControlGranted;// Offset=0x20 Size=0x4
    unsigned char CxlCapable;// Offset=0x24 Size=0x1
    enum _CXL_PROTOCOL_VERSION CxlVersionSupport;// Offset=0x28 Size=0x4
    struct _CXL_BUS_OSC_SUPPORT_FIELD CxlOscFeatureSupport;// Offset=0x2c Size=0x4
    struct _CXL_BUS_OSC_CONTROL_FIELD CxlOscControlRequest;// Offset=0x30 Size=0x4
    struct _CXL_BUS_OSC_CONTROL_FIELD CxlOscControlGranted;// Offset=0x34 Size=0x4
};
