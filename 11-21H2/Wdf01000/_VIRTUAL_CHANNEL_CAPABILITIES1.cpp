union _VIRTUAL_CHANNEL_CAPABILITIES1// Size=0x4 (Id=1743)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long ExtendedVCCount:3;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x3
        unsigned long RsvdP1:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long LowPriorityExtendedVCCount:3;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x3
        unsigned long RsvdP2:1;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x1
        unsigned long ReferenceClock:2;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x2
        unsigned long PortArbitrationTableEntrySize:2;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x2
        unsigned long RsvdP3:20;// Offset=0x0 Size=0x4 BitOffset=0xc BitSize=0x14
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};
