struct _SLOT_CONTEXT32// Size=0x20 (Id=414)
{
    struct // Size=0x10 (Id=0)
    {
        unsigned long RouteString:20;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x14
        unsigned long Speed:4;// Offset=0x0 Size=0x4 BitOffset=0x14 BitSize=0x4
        unsigned long Reserved0:1;// Offset=0x0 Size=0x4 BitOffset=0x18 BitSize=0x1
        unsigned long MultiTT:1;// Offset=0x0 Size=0x4 BitOffset=0x19 BitSize=0x1
        unsigned long Hub:1;// Offset=0x0 Size=0x4 BitOffset=0x1a BitSize=0x1
        unsigned long ContextEntries:5;// Offset=0x0 Size=0x4 BitOffset=0x1b BitSize=0x5
        unsigned long MaxExitLatency:16;// Offset=0x4 Size=0x4 BitOffset=0x0 BitSize=0x10
        unsigned long RootHubPortNumber:8;// Offset=0x4 Size=0x4 BitOffset=0x10 BitSize=0x8
        unsigned long NumberOfPorts:8;// Offset=0x4 Size=0x4 BitOffset=0x18 BitSize=0x8
        unsigned long TTHubSlotId:8;// Offset=0x8 Size=0x4 BitOffset=0x0 BitSize=0x8
        unsigned long TTPortNumber:8;// Offset=0x8 Size=0x4 BitOffset=0x8 BitSize=0x8
        unsigned long TTThinkTime:2;// Offset=0x8 Size=0x4 BitOffset=0x10 BitSize=0x2
        unsigned long Reserved1:4;// Offset=0x8 Size=0x4 BitOffset=0x12 BitSize=0x4
        unsigned long InterrupterTarget:10;// Offset=0x8 Size=0x4 BitOffset=0x16 BitSize=0xa
        unsigned long UsbDeviceAddress:8;// Offset=0xc Size=0x4 BitOffset=0x0 BitSize=0x8
        unsigned long Reserved2:19;// Offset=0xc Size=0x4 BitOffset=0x8 BitSize=0x13
        unsigned long SlotState:5;// Offset=0xc Size=0x4 BitOffset=0x1b BitSize=0x5
    };
    unsigned long Reserved3[4];// Offset=0x10 Size=0x10
};
