struct _PCI_EXPRESS_ENHANCED_CAPABILITY_HEADER// Size=0x4 (Id=3370)
{
    unsigned short CapabilityID;// Offset=0x0 Size=0x2
    struct // Size=0x2 (Id=0)
    {
        unsigned short Version:4;// Offset=0x2 Size=0x2 BitOffset=0x0 BitSize=0x4
        unsigned short Next:12;// Offset=0x2 Size=0x2 BitOffset=0x4 BitSize=0xc
    };
};

union _PCI_EXPRESS_LTR_MAX_LATENCY_REGISTER// Size=0x4 (Id=2481)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long MaxSnoopLatencyValue:10;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0xa
        unsigned long MaxSnoopLatencyScale:3;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x3
        unsigned long Rsvd:2;// Offset=0x0 Size=0x4 BitOffset=0xd BitSize=0x2
        unsigned long MaxSnoopRequirement:1;// Offset=0x0 Size=0x4 BitOffset=0xf BitSize=0x1
        unsigned long MaxNoSnoopLatencyValue:10;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0xa
        unsigned long MaxNoSnoopLatencyScale:3;// Offset=0x0 Size=0x4 BitOffset=0x1a BitSize=0x3
        unsigned long Rsvd2:2;// Offset=0x0 Size=0x4 BitOffset=0x1d BitSize=0x2
        unsigned long MaxNoSnoopRequirement:1;// Offset=0x0 Size=0x4 BitOffset=0x1f BitSize=0x1
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};

struct _PCI_EXPRESS_LTR_CAPABILITY// Size=0x8 (Id=2704)
{
    struct _PCI_EXPRESS_ENHANCED_CAPABILITY_HEADER Header;// Offset=0x0 Size=0x4
    union _PCI_EXPRESS_LTR_MAX_LATENCY_REGISTER Latency;// Offset=0x4 Size=0x4
};
