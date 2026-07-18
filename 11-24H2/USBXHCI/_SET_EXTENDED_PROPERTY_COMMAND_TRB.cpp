union _EXTENDED_CAPABILITY_IDENTIFIER// Size=0x2 (Id=1009)
{
    unsigned short AsUshort16;// Offset=0x0 Size=0x2
    struct // Size=0x2 (Id=0)
    {
        unsigned short SidebandAudioExtendedCapability:1;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x1
        unsigned short Reserved1:11;// Offset=0x0 Size=0x2 BitOffset=0x1 BitSize=0xb
        unsigned short VendorDefinedExtendedCapability:4;// Offset=0x0 Size=0x2 BitOffset=0xc BitSize=0x4
    };
};

struct _SET_EXTENDED_PROPERTY_COMMAND_TRB// Size=0x10 (Id=1045)
{
    unsigned long Reserved0;// Offset=0x0 Size=0x4
    unsigned long Reserved1;// Offset=0x4 Size=0x4
    union _EXTENDED_CAPABILITY_IDENTIFIER ExtendedCapabilityIdentifier;// Offset=0x8 Size=0x2
    struct // Size=0x6 (Id=0)
    {
        union // Size=0x1 (Id=0)
        {
            unsigned char CapabilityParameter:8;// Offset=0xa Size=0x1 BitOffset=0x0 BitSize=0x8
            unsigned char ResourceNumber:8;// Offset=0xa Size=0x1 BitOffset=0x0 BitSize=0x8
        };
        unsigned char Reserved3:8;// Offset=0xb Size=0x1 BitOffset=0x0 BitSize=0x8
        unsigned long CycleBit:1;// Offset=0xc Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Reserved4:9;// Offset=0xc Size=0x4 BitOffset=0x1 BitSize=0x9
        unsigned long Type:6;// Offset=0xc Size=0x4 BitOffset=0xa BitSize=0x6
        unsigned long SubType:3;// Offset=0xc Size=0x4 BitOffset=0x10 BitSize=0x3
        unsigned long EndpointId:5;// Offset=0xc Size=0x4 BitOffset=0x13 BitSize=0x5
        unsigned long SlotId:8;// Offset=0xc Size=0x4 BitOffset=0x18 BitSize=0x8
    };
};
