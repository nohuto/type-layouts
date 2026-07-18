union _SUPPPORTED_PROTOCOL_CAPABILITY_REVISION// Size=0x4 (Id=820)
{
    unsigned long AsUlong32;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long CapabilityID:8;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x8
        unsigned long NextCapabilityPointer:8;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x8
        unsigned long MinorRevision:8;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x8
        unsigned long MajorRevision:8;// Offset=0x0 Size=0x4 BitOffset=0x18 BitSize=0x8
    };
};

union _SUPPPORTED_PROTOCOL_CAPABILITY_NAME_STRING// Size=0x4 (Id=823)
{
    unsigned long AsUlong32;// Offset=0x0 Size=0x4
    unsigned char NameString[4];// Offset=0x0 Size=0x4
};

union _SUPPPORTED_PROTOCOL_CAPABILITY_PORT_OFFSET_COUNT// Size=0x4 (Id=808)
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

union _SUPPPORTED_PROTOCOL_CAPABILITY_SLOT// Size=0x4 (Id=816)
{
    unsigned long AsUlong32;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long SlotType:5;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x5
        unsigned long Reserved:27;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1b
    };
};

union _SUPPPORTED_PROTOCOL_CAPABILITY// Size=0x10 (Id=792)
{
    unsigned long AsUlong32[4];// Offset=0x0 Size=0x10
    union _SUPPPORTED_PROTOCOL_CAPABILITY_REVISION Revision;// Offset=0x0 Size=0x4
    union _SUPPPORTED_PROTOCOL_CAPABILITY_NAME_STRING NameString;// Offset=0x4 Size=0x4
    union _SUPPPORTED_PROTOCOL_CAPABILITY_PORT_OFFSET_COUNT PortOffsetCount;// Offset=0x8 Size=0x4
    union _SUPPPORTED_PROTOCOL_CAPABILITY_SLOT Slot;// Offset=0xc Size=0x4
};
