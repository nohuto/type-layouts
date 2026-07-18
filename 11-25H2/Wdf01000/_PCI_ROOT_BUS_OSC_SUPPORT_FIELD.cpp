struct _PCI_ROOT_BUS_OSC_SUPPORT_FIELD// Size=0x4 (Id=2008)
{
    union // Size=0x4 (Id=0)
    {
        union <unnamed-type-u>// Size=0x4 (Id=15350)
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
