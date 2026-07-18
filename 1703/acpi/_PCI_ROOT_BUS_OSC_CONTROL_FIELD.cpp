union _unnamed_563// Size=0x4 (Id=563)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long ExpressNativeHotPlug:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long ShpcNativeHotPlug:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long ExpressNativePME:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long ExpressAdvancedErrorReporting:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long ExpressCapabilityStructure:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long LatencyToleranceReporting:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long Reserved:26;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1a
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};

struct _PCI_ROOT_BUS_OSC_CONTROL_FIELD// Size=0x4 (Id=564)
{
    union _unnamed_563 u;// Offset=0x0 Size=0x4
};
