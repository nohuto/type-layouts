union FxPowerStateInfo// Size=0x4 (Id=765)
{
    struct <unnamed-type-Bits>// Size=0x4 (Id=57522)
    {
        unsigned long QueueOpen:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long KnownDroppedEvents:31;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1f
    };
    struct FxPowerStateInfo::<unnamed-type-Bits> Bits;// Offset=0x0 Size=0x4
    struct <unnamed-type-BitsByName>// Size=0x4 (Id=57526)
    {
        unsigned long Reserved:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long PowerD0Known:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long PowerDxKnown:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long PowerWakeArrivalKnown:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long PowerWakeSucceededKnown:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long PowerWakeFailedKnown:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long PowerWakeCanceledKnown:1;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1
        unsigned long PowerImplicitD0Known:1;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x1
        unsigned long PowerImplicitD3Known:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
        unsigned long PowerParentToD0Known:1;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x1
        unsigned long PowerMarkPageableKnown:1;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x1
        unsigned long PowerMarkNonpageableKnown:1;// Offset=0x0 Size=0x4 BitOffset=0xb BitSize=0x1
        unsigned long PowerCompleteD0Known:1;// Offset=0x0 Size=0x4 BitOffset=0xc BitSize=0x1
        unsigned long PowerCompleteDxKnown:1;// Offset=0x0 Size=0x4 BitOffset=0xd BitSize=0x1
    };
    struct FxPowerStateInfo::<unnamed-type-BitsByName> BitsByName;// Offset=0x0 Size=0x4
};
