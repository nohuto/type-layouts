enum _PCI_HARDWARE_INTERFACE
{
    PciConventional=0,
    PciXMode1=1,
    PciXMode2=2,
    PciExpress=3
};

struct _PCI_ROOT_BUS_OSC_SUPPORT_FIELD// Size=0x4 (Id=2364)
{
    union // Size=0x4 (Id=0)
    {
        union <unnamed-type-u>// Size=0x4 (Id=14392)
        {
            unsigned long ExtendedConfigOpRegions:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long ActiveStatePowerManagement:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
            unsigned long ClockPowerManagement:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
            unsigned long SegmentGroups:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
            unsigned long MessageSignaledInterrupts:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
            unsigned long OptimizedBufferFlushAndFill:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
            unsigned long AspmOptionality:1;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1
            unsigned long Reserved:25;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x19
            unsigned long AsULONG;// Offset=0x0 Size=0x4
        };
        union _PCI_ROOT_BUS_OSC_SUPPORT_FIELD::<unnamed-type-u> u;// Offset=0x0 Size=0x4
    };
};

struct _PCI_ROOT_BUS_OSC_CONTROL_FIELD// Size=0x4 (Id=5140)
{
    union // Size=0x4 (Id=0)
    {
        union <unnamed-type-u>// Size=0x4 (Id=14382)
        {
            unsigned long ExpressNativeHotPlug:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long ShpcNativeHotPlug:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
            unsigned long ExpressNativePME:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
            unsigned long ExpressAdvancedErrorReporting:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
            unsigned long ExpressCapabilityStructure:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
            unsigned long LatencyToleranceReporting:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
            unsigned long Reserved:26;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1a
            unsigned long AsULONG;// Offset=0x0 Size=0x4
        };
        union _PCI_ROOT_BUS_OSC_CONTROL_FIELD::<unnamed-type-u> u;// Offset=0x0 Size=0x4
    };
};

struct _PCI_ROOT_BUS_HARDWARE_CAPABILITY// Size=0x24 (Id=1991)
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
};
