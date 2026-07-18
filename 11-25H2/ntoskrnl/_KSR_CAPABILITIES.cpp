union _KSR_CAPABILITIES// Size=0x4 (Id=1649)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long PerennialDatabase:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long SkipSubAllocator:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long ExtendedNotifications:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long Kseg0Vtl1Mappings64KBAligned:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long Vtl1IsolatedDatabase:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long Reserved:27;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1b
    };
    unsigned long AsULong;// Offset=0x0 Size=0x4
};
