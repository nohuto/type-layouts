struct _PCI_EXPRESS_ENHANCED_CAPABILITY_HEADER// Size=0x4 (Id=3996)
{
    unsigned short CapabilityID;// Offset=0x0 Size=0x2
    struct // Size=0x2 (Id=0)
    {
        unsigned short Version:4;// Offset=0x2 Size=0x2 BitOffset=0x0 BitSize=0x4
        unsigned short Next:12;// Offset=0x2 Size=0x2 BitOffset=0x4 BitSize=0xc
    };
};

union _PCI_EXPRESS_IDE_CAPABILITY_REGISTER// Size=0x4 (Id=2782)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long LinkIdeStreamSupported:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long SelectiveIdeStreamSupported:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long FlowThroughIdeStreamSupported:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long PartialHeaderEncryptionSupported:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long AggregationSupported:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long PcrcSupported:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long IdeKmProtocolSupported:1;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1
        unsigned long SelectiveIdeForConfigRequestsSupported:1;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x1
        unsigned long SupportedAlgorithms:5;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x5
        unsigned long NumTrafficClassesSupportedForLinkIde:3;// Offset=0x0 Size=0x4 BitOffset=0xd BitSize=0x3
        unsigned long NumSelectiveIdeStreamsSupported:8;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x8
        unsigned long TeeLimitedStreamSupported:1;// Offset=0x0 Size=0x4 BitOffset=0x18 BitSize=0x1
        unsigned long XtSupported:1;// Offset=0x0 Size=0x4 BitOffset=0x19 BitSize=0x1
        unsigned long Rsvd:6;// Offset=0x0 Size=0x4 BitOffset=0x1a BitSize=0x6
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};

union _PCI_EXPRESS_IDE_CONTROL_REGISTER// Size=0x4 (Id=910)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long Rsvd0:2;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x2
        unsigned long FlowThroughIdeStreamEnabled:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long Rsvd1:29;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1d
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};

struct _PCI_EXPRESS_IDE_CAPABILITY// Size=0xc (Id=2024)
{
    struct _PCI_EXPRESS_ENHANCED_CAPABILITY_HEADER Header;// Offset=0x0 Size=0x4
    union _PCI_EXPRESS_IDE_CAPABILITY_REGISTER Capability;// Offset=0x4 Size=0x4
    union _PCI_EXPRESS_IDE_CONTROL_REGISTER Control;// Offset=0x8 Size=0x4
};
