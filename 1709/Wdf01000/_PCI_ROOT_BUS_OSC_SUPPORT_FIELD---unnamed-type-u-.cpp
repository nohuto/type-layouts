union _PCI_ROOT_BUS_OSC_SUPPORT_FIELD::<unnamed-type-u>// Size=0x4 (Id=2773)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long ExtendedConfigOpRegions:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long ActiveStatePowerManagement:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long ClockPowerManagement:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long SegmentGroups:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long MessageSignaledInterrupts:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long OptimizedBufferFlushAndFill:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long AspmOptionality:1;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1
        unsigned long Reserved:25;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x19
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};
