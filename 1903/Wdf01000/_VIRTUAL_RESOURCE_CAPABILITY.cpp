union _VIRTUAL_RESOURCE_CAPABILITY// Size=0x4 (Id=1798)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long PortArbitrationCapability:8;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x8
        unsigned long RsvdP1:6;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x6
        unsigned long Undefined:1;// Offset=0x0 Size=0x4 BitOffset=0xe BitSize=0x1
        unsigned long RejectSnoopTransactions:1;// Offset=0x0 Size=0x4 BitOffset=0xf BitSize=0x1
        unsigned long MaximumTimeSlots:7;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x7
        unsigned long RsvdP2:1;// Offset=0x0 Size=0x4 BitOffset=0x17 BitSize=0x1
        unsigned long PortArbitrationTableOffset:8;// Offset=0x0 Size=0x4 BitOffset=0x18 BitSize=0x8
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};
