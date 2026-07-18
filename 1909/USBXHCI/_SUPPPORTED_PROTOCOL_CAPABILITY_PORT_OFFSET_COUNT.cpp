union _SUPPPORTED_PROTOCOL_CAPABILITY_PORT_OFFSET_COUNT// Size=0x4 (Id=916)
{
    unsigned long AsUlong32;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long CompatiblePortOffset:8;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x8
        unsigned long CompatiblePortCount:8;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x8
        unsigned long Reserved0:1;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x1
        unsigned long HighSpeedOnly:1;// Offset=0x0 Size=0x4 BitOffset=0x11 BitSize=0x1
        unsigned long IntegratedHubImplemented:1;// Offset=0x0 Size=0x4 BitOffset=0x12 BitSize=0x1
        unsigned long HardwareLpmCapability:1;// Offset=0x0 Size=0x4 BitOffset=0x13 BitSize=0x1
        unsigned long BeslLpmCapability:1;// Offset=0x0 Size=0x4 BitOffset=0x14 BitSize=0x1
        unsigned long Reserved1:4;// Offset=0x0 Size=0x4 BitOffset=0x15 BitSize=0x4
        unsigned long HubDepth:3;// Offset=0x0 Size=0x4 BitOffset=0x19 BitSize=0x3
        unsigned long SpeedIDCount:4;// Offset=0x0 Size=0x4 BitOffset=0x1c BitSize=0x4
    };
};
